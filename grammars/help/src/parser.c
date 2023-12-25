#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_new = 1,
  anon_sym_set = 2,
  anon_sym_module = 3,
  anon_sym_origin = 4,
  aux_sym_origin_token1 = 5,
  anon_sym_AT = 6,
  aux_sym_absolute_token1 = 7,
  aux_sym_x_token1 = 8,
  aux_sym_y_token1 = 9,
  anon_sym_guide = 10,
  anon_sym_label = 11,
  sym_offset = 12,
  sym_source_file = 13,
  sym__command = 14,
  sym_new = 15,
  sym_set = 16,
  sym_entity = 17,
  sym_module = 18,
  sym_origin = 19,
  sym_absolute = 20,
  sym_x = 21,
  sym_y = 22,
  sym_guide = 23,
  sym_label = 24,
  aux_sym_source_file_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_module] = "module",
  [anon_sym_origin] = "origin",
  [aux_sym_origin_token1] = "origin_token1",
  [anon_sym_AT] = "@",
  [aux_sym_absolute_token1] = "x",
  [aux_sym_x_token1] = "reference",
  [aux_sym_y_token1] = "reference",
  [anon_sym_guide] = "guide",
  [anon_sym_label] = "label",
  [sym_offset] = "offset",
  [sym_source_file] = "source_file",
  [sym__command] = "_command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_entity] = "entity",
  [sym_module] = "module",
  [sym_origin] = "origin",
  [sym_absolute] = "absolute",
  [sym_x] = "x",
  [sym_y] = "y",
  [sym_guide] = "guide",
  [sym_label] = "label",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_origin] = anon_sym_origin,
  [aux_sym_origin_token1] = aux_sym_origin_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_absolute_token1] = sym_x,
  [aux_sym_x_token1] = aux_sym_x_token1,
  [aux_sym_y_token1] = aux_sym_x_token1,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_label] = anon_sym_label,
  [sym_offset] = sym_offset,
  [sym_source_file] = sym_source_file,
  [sym__command] = sym__command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_entity] = sym_entity,
  [sym_module] = sym_module,
  [sym_origin] = sym_origin,
  [sym_absolute] = sym_absolute,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [sym_guide] = sym_guide,
  [sym_label] = sym_label,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_origin_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_absolute_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_x_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_y_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_new] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_origin] = {
    .visible = true,
    .named = true,
  },
  [sym_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym_x] = {
    .visible = true,
    .named = true,
  },
  [sym_y] = {
    .visible = true,
    .named = true,
  },
  [sym_guide] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [3] = sym_y,
  },
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
  [18] = 7,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 16,
  [30] = 17,
  [31] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 48:
      if (lookahead == 'w') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 's') ADVANCE(17);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == ',') ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_y_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_x_token1] = ACTIONS(1),
    [aux_sym_y_token1] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym__command] = STATE(5),
    [sym_new] = STATE(5),
    [sym_set] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_module,
    ACTIONS(13), 1,
      anon_sym_guide,
    ACTIONS(15), 1,
      anon_sym_label,
    STATE(20), 1,
      sym_entity,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
    STATE(21), 3,
      sym_module,
      sym_guide,
      sym_label,
  [23] = 7,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      aux_sym_x_token1,
    ACTIONS(23), 1,
      aux_sym_y_token1,
    STATE(13), 1,
      sym_x,
    STATE(14), 1,
      sym_y,
    STATE(24), 1,
      sym_absolute,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [47] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_new,
    ACTIONS(30), 1,
      anon_sym_set,
    STATE(4), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [63] = 4,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [79] = 3,
    ACTIONS(37), 1,
      aux_sym_x_token1,
    STATE(27), 1,
      sym_x,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [91] = 3,
    ACTIONS(43), 1,
      sym_offset,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      aux_sym_origin_token1,
    ACTIONS(41), 2,
      anon_sym_new,
      anon_sym_set,
  [103] = 3,
    ACTIONS(47), 1,
      anon_sym_origin,
    STATE(22), 1,
      sym_origin,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [115] = 3,
    ACTIONS(49), 1,
      aux_sym_y_token1,
    STATE(27), 1,
      sym_y,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [127] = 3,
    ACTIONS(55), 1,
      sym_offset,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      aux_sym_origin_token1,
    ACTIONS(53), 2,
      anon_sym_new,
      anon_sym_set,
  [139] = 2,
    ACTIONS(59), 1,
      aux_sym_absolute_token1,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [148] = 2,
    ACTIONS(63), 1,
      aux_sym_absolute_token1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [157] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      aux_sym_origin_token1,
    ACTIONS(67), 2,
      anon_sym_new,
      anon_sym_set,
  [168] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      aux_sym_origin_token1,
    ACTIONS(67), 2,
      anon_sym_new,
      anon_sym_set,
  [179] = 3,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_origin_token1,
    ACTIONS(75), 2,
      anon_sym_new,
      anon_sym_set,
  [190] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym_origin_token1,
    ACTIONS(81), 2,
      anon_sym_new,
      anon_sym_set,
  [199] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym_origin_token1,
    ACTIONS(85), 2,
      anon_sym_new,
      anon_sym_set,
  [208] = 2,
    ACTIONS(87), 1,
      sym_offset,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [217] = 2,
    ACTIONS(89), 1,
      sym_offset,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [226] = 1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [232] = 1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [238] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [244] = 1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [250] = 1,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [256] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [262] = 1,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [268] = 1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [274] = 1,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [280] = 1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [286] = 1,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [292] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 127,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 179,
  [SMALL_STATE(16)] = 190,
  [SMALL_STATE(17)] = 199,
  [SMALL_STATE(18)] = 208,
  [SMALL_STATE(19)] = 217,
  [SMALL_STATE(20)] = 226,
  [SMALL_STATE(21)] = 232,
  [SMALL_STATE(22)] = 238,
  [SMALL_STATE(23)] = 244,
  [SMALL_STATE(24)] = 250,
  [SMALL_STATE(25)] = 256,
  [SMALL_STATE(26)] = 262,
  [SMALL_STATE(27)] = 268,
  [SMALL_STATE(28)] = 274,
  [SMALL_STATE(29)] = 280,
  [SMALL_STATE(30)] = 286,
  [SMALL_STATE(31)] = 292,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_x, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_origin, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_x, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_help(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
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
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
