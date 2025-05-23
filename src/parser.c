/* Automatically generated by tree-sitter v0.25.3 */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 15
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 1
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  sym_alternation_marker = 2,
  sym_section_close = 3,
  sym_section_open = 4,
  sym_note_separator = 5,
  aux_sym_note_prefix_token1 = 6,
  sym_note_index = 7,
  aux_sym_arg_suffix_token1 = 8,
  sym_arg_value = 9,
  sym_arg_separator = 10,
  sym_root = 11,
  sym_expression = 12,
  sym_bracket_section = 13,
  sym_alternation_section = 14,
  sym_segment = 15,
  sym_full_note = 16,
  sym_raw_note = 17,
  sym_note_prefix = 18,
  sym_note_suffix = 19,
  sym_arg_sequence = 20,
  sym_arg = 21,
  sym_arg_suffix = 22,
  sym_arg_name = 23,
  aux_sym_alternation_section_repeat1 = 24,
  aux_sym_segment_repeat1 = 25,
  aux_sym_arg_sequence_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [sym_alternation_marker] = "alternation_marker",
  [sym_section_close] = "section_close",
  [sym_section_open] = "section_open",
  [sym_note_separator] = "note_separator",
  [aux_sym_note_prefix_token1] = "note_prefix_token1",
  [sym_note_index] = "note_index",
  [aux_sym_arg_suffix_token1] = "arg_suffix_token1",
  [sym_arg_value] = "arg_value",
  [sym_arg_separator] = "arg_separator",
  [sym_root] = "root",
  [sym_expression] = "expression",
  [sym_bracket_section] = "bracket_section",
  [sym_alternation_section] = "alternation_section",
  [sym_segment] = "segment",
  [sym_full_note] = "full_note",
  [sym_raw_note] = "raw_note",
  [sym_note_prefix] = "note_prefix",
  [sym_note_suffix] = "note_suffix",
  [sym_arg_sequence] = "arg_sequence",
  [sym_arg] = "arg",
  [sym_arg_suffix] = "arg_suffix",
  [sym_arg_name] = "arg_name",
  [aux_sym_alternation_section_repeat1] = "alternation_section_repeat1",
  [aux_sym_segment_repeat1] = "segment_repeat1",
  [aux_sym_arg_sequence_repeat1] = "arg_sequence_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_alternation_marker] = sym_alternation_marker,
  [sym_section_close] = sym_section_close,
  [sym_section_open] = sym_section_open,
  [sym_note_separator] = sym_note_separator,
  [aux_sym_note_prefix_token1] = aux_sym_note_prefix_token1,
  [sym_note_index] = sym_note_index,
  [aux_sym_arg_suffix_token1] = aux_sym_arg_suffix_token1,
  [sym_arg_value] = sym_arg_value,
  [sym_arg_separator] = sym_arg_separator,
  [sym_root] = sym_root,
  [sym_expression] = sym_expression,
  [sym_bracket_section] = sym_bracket_section,
  [sym_alternation_section] = sym_alternation_section,
  [sym_segment] = sym_segment,
  [sym_full_note] = sym_full_note,
  [sym_raw_note] = sym_raw_note,
  [sym_note_prefix] = sym_note_prefix,
  [sym_note_suffix] = sym_note_suffix,
  [sym_arg_sequence] = sym_arg_sequence,
  [sym_arg] = sym_arg,
  [sym_arg_suffix] = sym_arg_suffix,
  [sym_arg_name] = sym_arg_name,
  [aux_sym_alternation_section_repeat1] = aux_sym_alternation_section_repeat1,
  [aux_sym_segment_repeat1] = aux_sym_segment_repeat1,
  [aux_sym_arg_sequence_repeat1] = aux_sym_arg_sequence_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_alternation_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_section_close] = {
    .visible = true,
    .named = true,
  },
  [sym_section_open] = {
    .visible = true,
    .named = true,
  },
  [sym_note_separator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_prefix_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_note_index] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_arg_suffix_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_arg_value] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_section] = {
    .visible = true,
    .named = true,
  },
  [sym_alternation_section] = {
    .visible = true,
    .named = true,
  },
  [sym_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_full_note] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_note] = {
    .visible = true,
    .named = true,
  },
  [sym_note_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_note_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_alternation_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_segment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '_') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        ' ', 1,
        '(', 12,
        ')', 11,
        ',', 20,
        '.', 19,
        '/', 3,
        ':', 9,
        '_', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '_') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 5:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == ':') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ':') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_alternation_marker);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_section_close);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_section_open);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_note_separator);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_note_prefix_token1);
      if (lookahead == '_') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_note_prefix_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_note_index);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_note_index);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_arg_suffix_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_arg_value);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_arg_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexerMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_alternation_marker] = ACTIONS(1),
    [sym_section_close] = ACTIONS(1),
    [sym_section_open] = ACTIONS(1),
    [aux_sym_note_prefix_token1] = ACTIONS(1),
    [sym_note_index] = ACTIONS(1),
    [aux_sym_arg_suffix_token1] = ACTIONS(1),
    [sym_arg_value] = ACTIONS(1),
    [sym_arg_separator] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_root] = STATE(35),
    [sym_expression] = STATE(33),
    [sym_bracket_section] = STATE(11),
    [sym_alternation_section] = STATE(39),
    [sym_segment] = STATE(31),
    [sym_full_note] = STATE(11),
    [sym_raw_note] = STATE(15),
    [sym_note_prefix] = STATE(34),
    [sym_section_open] = ACTIONS(3),
    [aux_sym_note_prefix_token1] = ACTIONS(5),
    [sym_note_index] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_section_open,
    ACTIONS(5), 1,
      aux_sym_note_prefix_token1,
    ACTIONS(7), 1,
      sym_note_index,
    STATE(15), 1,
      sym_raw_note,
    STATE(32), 1,
      sym_segment,
    STATE(34), 1,
      sym_note_prefix,
    STATE(36), 1,
      sym_alternation_section,
    STATE(11), 2,
      sym_bracket_section,
      sym_full_note,
  [26] = 7,
    ACTIONS(3), 1,
      sym_section_open,
    ACTIONS(5), 1,
      aux_sym_note_prefix_token1,
    ACTIONS(7), 1,
      sym_note_index,
    STATE(15), 1,
      sym_raw_note,
    STATE(30), 1,
      sym_segment,
    STATE(34), 1,
      sym_note_prefix,
    STATE(11), 2,
      sym_bracket_section,
      sym_full_note,
  [49] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_arg_suffix_token1,
    STATE(12), 1,
      sym_arg_suffix,
    ACTIONS(11), 4,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
      sym_arg_separator,
  [65] = 6,
    ACTIONS(3), 1,
      sym_section_open,
    ACTIONS(5), 1,
      aux_sym_note_prefix_token1,
    ACTIONS(7), 1,
      sym_note_index,
    STATE(15), 1,
      sym_raw_note,
    STATE(34), 1,
      sym_note_prefix,
    STATE(25), 2,
      sym_bracket_section,
      sym_full_note,
  [85] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_note_prefix_token1,
    STATE(21), 1,
      sym_note_suffix,
    ACTIONS(17), 4,
      anon_sym_COLON,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [101] = 4,
    ACTIONS(19), 1,
      aux_sym_note_prefix_token1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_note_suffix,
    ACTIONS(23), 4,
      anon_sym_COLON,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [117] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_arg_separator,
    STATE(9), 1,
      aux_sym_arg_sequence_repeat1,
    ACTIONS(27), 3,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [132] = 4,
    ACTIONS(29), 1,
      sym_arg_separator,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_arg_sequence_repeat1,
    ACTIONS(33), 3,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [147] = 4,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_arg_separator,
    STATE(10), 1,
      aux_sym_arg_sequence_repeat1,
    ACTIONS(37), 3,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [162] = 4,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_note_separator,
    STATE(16), 1,
      aux_sym_segment_repeat1,
    ACTIONS(44), 2,
      sym_alternation_marker,
      sym_section_close,
  [176] = 2,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 4,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
      sym_arg_separator,
  [186] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 4,
      anon_sym_COLON,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [196] = 2,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 4,
      anon_sym_COLON,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [206] = 3,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_COLON,
    ACTIONS(60), 3,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [218] = 4,
    ACTIONS(46), 1,
      sym_note_separator,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_segment_repeat1,
    ACTIONS(64), 2,
      sym_alternation_marker,
      sym_section_close,
  [232] = 5,
    ACTIONS(66), 1,
      aux_sym_arg_suffix_token1,
    ACTIONS(68), 1,
      sym_arg_value,
    STATE(8), 1,
      sym_arg,
    STATE(26), 1,
      sym_arg_sequence,
    STATE(40), 1,
      sym_arg_name,
  [248] = 3,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_COLON,
    ACTIONS(74), 3,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [260] = 5,
    ACTIONS(66), 1,
      aux_sym_arg_suffix_token1,
    ACTIONS(68), 1,
      sym_arg_value,
    STATE(8), 1,
      sym_arg,
    STATE(28), 1,
      sym_arg_sequence,
    STATE(40), 1,
      sym_arg_name,
  [276] = 4,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      sym_note_separator,
    STATE(20), 1,
      aux_sym_segment_repeat1,
    ACTIONS(78), 2,
      sym_alternation_marker,
      sym_section_close,
  [290] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 4,
      anon_sym_COLON,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [300] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 4,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
      sym_arg_separator,
  [310] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 4,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
      sym_arg_separator,
  [320] = 3,
    ACTIONS(93), 1,
      sym_alternation_marker,
    STATE(27), 1,
      aux_sym_alternation_section_repeat1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_section_close,
  [331] = 2,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 3,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [340] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 3,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [349] = 3,
    ACTIONS(101), 1,
      sym_alternation_marker,
    STATE(27), 1,
      aux_sym_alternation_section_repeat1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_section_close,
  [360] = 2,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 3,
      sym_alternation_marker,
      sym_section_close,
      sym_note_separator,
  [369] = 3,
    ACTIONS(66), 1,
      aux_sym_arg_suffix_token1,
    STATE(22), 1,
      sym_arg,
    STATE(40), 1,
      sym_arg_name,
  [379] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      sym_alternation_marker,
      sym_section_close,
  [385] = 3,
    ACTIONS(93), 1,
      sym_alternation_marker,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_alternation_section_repeat1,
  [395] = 3,
    ACTIONS(93), 1,
      sym_alternation_marker,
    ACTIONS(110), 1,
      sym_section_close,
    STATE(24), 1,
      aux_sym_alternation_section_repeat1,
  [405] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [409] = 1,
    ACTIONS(114), 1,
      sym_note_index,
  [413] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [417] = 1,
    ACTIONS(110), 1,
      sym_section_close,
  [421] = 1,
    ACTIONS(118), 1,
      sym_arg_value,
  [425] = 1,
    ACTIONS(120), 1,
      sym_note_index,
  [429] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [433] = 1,
    ACTIONS(122), 1,
      sym_arg_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 49,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 101,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 186,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 206,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 232,
  [SMALL_STATE(18)] = 248,
  [SMALL_STATE(19)] = 260,
  [SMALL_STATE(20)] = 276,
  [SMALL_STATE(21)] = 290,
  [SMALL_STATE(22)] = 300,
  [SMALL_STATE(23)] = 310,
  [SMALL_STATE(24)] = 320,
  [SMALL_STATE(25)] = 331,
  [SMALL_STATE(26)] = 340,
  [SMALL_STATE(27)] = 349,
  [SMALL_STATE(28)] = 360,
  [SMALL_STATE(29)] = 369,
  [SMALL_STATE(30)] = 379,
  [SMALL_STATE(31)] = 385,
  [SMALL_STATE(32)] = 395,
  [SMALL_STATE(33)] = 405,
  [SMALL_STATE(34)] = 409,
  [SMALL_STATE(35)] = 413,
  [SMALL_STATE(36)] = 417,
  [SMALL_STATE(37)] = 421,
  [SMALL_STATE(38)] = 425,
  [SMALL_STATE(39)] = 429,
  [SMALL_STATE(40)] = 433,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_note, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_note, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_note, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_note, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_sequence, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_sequence, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_sequence, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_sequence, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_sequence_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_sequence_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_suffix, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_suffix, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_note, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_note, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_section, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_section, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_note, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_note, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_suffix, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_suffix, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation_section, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_note, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_note, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_section_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_section_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_section, 5, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_section, 5, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_name, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_prefix, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_shuttle(void) {
  static const TSLanguage language = {
    .abi_version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .supertype_count = SUPERTYPE_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = (const void*)ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
    .name = "shuttle",
    .max_reserved_word_set_size = 0,
    .metadata = {
      .major_version = 0,
      .minor_version = 1,
      .patch_version = 4,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
