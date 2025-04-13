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

module.exports = grammar({
  name: "shuttle",

  rules: {
    // choice should apparently favour the first match if applicable
    root: ($) => $.section,
    section: ($) =>
      choice(
        seq(
          $.section_open,
          choice($.alternation_section, $.note_sequence),
          $.section_close,
          optional(seq(":", $.arg_sequence)),
        ),
        choice($.alternation_section, $.note_sequence),
      ),
    alternation_section: ($) =>
      prec.right(
        seq($.section, repeat1(seq($.alternation_marker, $.note_sequence))),
      ),
    // NOTE: token-prec can be good for "yes this string contains other things but it's ONLY this"
    alternation_marker: ($) => token(prec(2, " / ")),
    section_close: ($) => ")",
    section_open: ($) => "(",
    note_sequence: ($) =>
      prec.right(
        1,
        seq(
          // Prec.right should presumably make it choose as long a sequence as possible
          $.full_note,
          repeat(seq($.note_separator, $.full_note)),
        ),
      ),
    full_note: ($) => seq($.raw_note, optional(seq(":", $.arg_sequence))),
    note_separator: ($) => " ",
    raw_note: ($) =>
      seq(optional($.note_prefix), $.note_index, optional($.note_suffix)),
    // TODO: Alias instead of repeat
    note_prefix: ($) => /[a-zA-Z_]+/,
    note_suffix: ($) => /[a-zA-Z_]+/,
    note_index: ($) => /[0-9]+/,
    // Example "join(,)" syntax, where the deliminator is only used in between
    arg_sequence: ($) =>
      seq(choice($.arg, $.arg_value), repeat(seq($.arg_separator, $.arg))),
    arg: ($) => seq($.arg_name, $.arg_value),
    arg_name: ($) => /[a-zA-Z]+/,
    // Note that this allows "arg.5" or "arg5." which might be a good thing
    arg_value: ($) => /[0-9\.]+/,
    arg_separator: ($) => ",",
  },
});
