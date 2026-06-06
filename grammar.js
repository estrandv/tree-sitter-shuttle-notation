/**
 * @file Shuttle Notation grammar for tree-sitter
 * @author estrandv <emil.strandvik@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/*
  Shuttle Notation — see LANGUAGE_SPEC.md

  This grammar exists for editor highlighting: it parses STRUCTURE and labels
  nodes. Semantic resolution (argument inheritance, alternation expansion,
  scale/transpose) is the job of the reference Python parser, not tree-sitter.

  Whitespace model: whitespace is a MEANINGFUL separator, so `extras` is empty.
  An atomic note (prefix/index/suffix) is internally contiguous — keeping
  whitespace out of `extras` is what stops `c 4` (two elements) from collapsing
  into a single note `c4`.
*/

module.exports = grammar({
  name: "shuttle",

  extras: () => [],

  conflicts: ($) => [
    // A `_ws` after an element needs >1 token lookahead: it may continue the
    // sequence (`_ws _element`) or end it (before `/`, `)`, or EOF).
    [$._sequence],
    // Inside a section, a trailing `_ws` may close the body (`(c d e)`) or
    // begin the next alternation arm (`(c d / e)`).
    [$._section_body, $.alternation],
    // After an arm + separator, a `_ws` may start yet another separator or end
    // the alternation — needs lookahead past the `_ws` (3+ arm alternations).
    [$.alternation],
  ],

  rules: {
    // Top level is a space-separated sequence; alternation only appears inside
    // sections (per spec). Leading/trailing whitespace is tolerated.
    root: ($) => seq(optional($._ws), optional($._sequence), optional($._ws)),

    _ws: () => /[ \t\r\n]+/,

    _sequence: ($) => seq($._element, repeat(seq($._ws, $._element))),

    _element: ($) => choice($.note, $.section, $.symbol),

    // atomic_element = [prefix] [index] [suffix] [repeat] [info]
    note: ($) => seq($._note_core, optional($.repeat), optional($.info)),
    // Explicit orderings guarantee at least one part (avoids empty match) and
    // allow bare prefix (`x`), bare index (`14`), and `c4`, `c4sus`, etc.
    _note_core: ($) =>
      choice(
        seq($.prefix, optional($.index), optional($.suffix)),
        seq($.index, optional($.suffix)),
      ),

    // section = "(" content ")" [suffix] [repeat] [info]
    section: ($) =>
      seq(
        "(",
        optional($._ws),
        optional($._section_body),
        optional($._ws),
        ")",
        optional($.suffix),
        optional($.repeat),
        optional($.info),
      ),
    _section_body: ($) => choice($.alternation, $._sequence),
    // alternation = sequence { "/" sequence }
    alternation: ($) =>
      seq($._sequence, repeat1(seq($._ws, "/", $._ws, $._sequence))),

    // repeat = "*" number
    repeat: ($) => seq("*", $.index),

    // info = ":" args
    info: ($) => seq(":", $.args),
    args: ($) => seq($.arg, repeat(seq(",", $.arg))),
    // arg = [name] [operator] number [ref]
    arg: ($) =>
      seq(
        optional($.arg_name),
        optional($.operator),
        $.number,
        optional($.ref),
      ),
    operator: () => choice("+", "-", "*", "="),

    // Symbol: rest/skip marker (bare dot).
    symbol: () => ".",
    // Prefix: any non-breaking character except shuttle syntax and digits.
    // Excludes: whitespace, digits (so `c4` = prefix `c` + index `4`),
    // section/alternation/info/repeat delimiters, arg operators, and `.`
    // (which is its own symbol rule). Everything else is fair game:
    // `$dr_husky`, `§`, `€`, `f#5`, `_`, `¶`, etc.
    prefix: () => /[^\s\d:()/*,+\-=.][^\s\d:()/*+\-=.]*/,
    // Suffix can use full identifier (digits allowed — no adjacent index to
    // compete with: suffix follows index or stands alone).
    suffix: () => /[a-zA-Z_][a-zA-Z0-9_]*/,
    // Arg_name is alpha+underscore only to avoid ambiguity with adjacent
    // numbers: in `amp0.5`, alpha-only match gives arg_name="amp" number="0.5".
    arg_name: () => /[a-zA-Z_]+/,
    // Ref follows a number, so no ambiguity — can use full identifier.
    ref: () => /[a-zA-Z_][a-zA-Z0-9_]*/,
    index: () => /[0-9]+(\.[0-9]+)?/,
    number: () => /[0-9]+(\.[0-9]+)?/,
  },
});
