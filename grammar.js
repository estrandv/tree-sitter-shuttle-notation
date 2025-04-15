/**
 * @file PARSER_DESCRIPTION
 * @author PARSER_AUTHOR_NAME PARSER_AUTHOR_EMAIL
 * @license PARSER_LICENSE
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
/*
  NOTE: More or less feature complete from simple testing.
  - next step is making a syntax config for zed
  - official docs are a bit vague: https://zed.dev/docs/extensions/languages
  - https://github.com/zarifpour/zed-env you can try to match this with the official docs as
    an example

  TODO:
  - Forgot about '*' as included in suffixes
    - ... and that sections can have suffixes
    - And that args have operators
    - And that maybe, just maybe, we might want to introduce referencial arg1=arg2 notation


  HANDLING BILLBOARD
  - root
    - command_section (multiline)
    - filter_section (multiline, I'll stop mentioning that..)
    - billboard
      - synth_section
        - synth_header
          - name, alias, args, extra args
        - tracks (alias, shuttle)
    ... including comments
  - Something something injections for imports: https://github.com/helix-editor/helix/discussions/2951

*/

/*
  TODO:
  - Is "*" native shuttle? Should it be supported?
  - '.' should be a valid prefix
  - Nested sections appears to sometimes break arg highlight

*/
module.exports = grammar({
  name: "shuttle",

  rules: {
    root: ($) => $.expression,
    expression: ($) => choice($.alternation_section, $.segment),
    // A segment or alternation section surrounded by brackets (with possible args after)
    bracket_section: ($) =>
      prec(
        5,
        seq(
          $.section_open,
          choice($.alternation_section, $.segment),
          $.section_close,
          optional(seq(":", $.arg_sequence)),
        ),
      ),
    // Two segments separated by an alternation marker
    alternation_section: ($) =>
      prec(11, seq($.segment, repeat1(seq($.alternation_marker, $.segment)))),
    // Common enough to warrant its own rule, e.g. : note note (...) note
    segment: ($) =>
      prec(
        10,
        seq(
          choice($.bracket_section, $.note_sequence),
          repeat(
            seq($.note_separator, choice($.bracket_section, $.note_sequence)),
          ),
        ),
      ),
    // NOTE: token-prec can be good for "yes this string contains other things but it's ONLY this"
    alternation_marker: ($) => token(prec(2, " / ")),
    section_close: ($) => ")",
    section_open: ($) => "(",
    note_sequence: ($) =>
      prec.right(
        12,
        seq($.full_note, repeat(seq($.note_separator, $.full_note))),
      ),
    full_note: ($) => seq($.raw_note, optional(seq(":", $.arg_sequence))),
    note_separator: ($) => " ",
    // TODO: More liberal rule needed for 'x' and '.' without index
    raw_note: ($) =>
      seq(optional($.note_prefix), $.note_index, optional($.note_suffix)),
    note_prefix: ($) => /[a-zA-Z_]+/,
    note_suffix: ($) => /[a-zA-Z_]+/,
    note_index: ($) => /[0-9]+/,
    // Example "join(,)" syntax, where the deliminator is only used in between
    arg_sequence: ($) =>
      seq(choice($.arg, $.arg_value), repeat(seq($.arg_separator, $.arg))),
    arg: ($) => seq($.arg_name, $.arg_value, optional($.arg_suffix)),
    arg_suffix: ($) => /[a-zA-Z]+/,
    arg_name: ($) => /[a-zA-Z]+/,
    // Note that this allows "arg.5" or "arg5." which might be a good thing
    arg_value: ($) => /[0-9\.]+/,
    arg_separator: ($) => ",",
  },
});
