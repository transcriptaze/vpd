#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
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
  anon_sym_COMMA = 5,
  anon_sym_AT = 6,
  aux_sym_absolute_token1 = 7,
  aux_sym_x_token1 = 8,
  aux_sym_y_token1 = 9,
  anon_sym_guide = 10,
  anon_sym_label = 11,
  sym_offset = 12,
  sym_command = 13,
  sym_new = 14,
  sym_set = 15,
  sym__entity = 16,
  sym__attribute = 17,
  sym_module = 18,
  sym_origin = 19,
  sym_absolute = 20,
  sym_x = 21,
  sym_y = 22,
  sym_guide = 23,
  sym_label = 24,
  aux_sym_command_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_module] = "module",
  [anon_sym_origin] = "origin",
  [anon_sym_COMMA] = ",",
  [anon_sym_AT] = "@",
  [aux_sym_absolute_token1] = "x",
  [aux_sym_x_token1] = "reference",
  [aux_sym_y_token1] = "reference",
  [anon_sym_guide] = "guide",
  [anon_sym_label] = "label",
  [sym_offset] = "offset",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym__entity] = "_entity",
  [sym__attribute] = "_attribute",
  [sym_module] = "module",
  [sym_origin] = "origin",
  [sym_absolute] = "absolute",
  [sym_x] = "x",
  [sym_y] = "y",
  [sym_guide] = "guide",
  [sym_label] = "label",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_absolute_token1] = sym_x,
  [aux_sym_x_token1] = aux_sym_x_token1,
  [aux_sym_y_token1] = aux_sym_x_token1,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_label] = anon_sym_label,
  [sym_offset] = sym_offset,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym__entity] = sym__entity,
  [sym__attribute] = sym__attribute,
  [sym_module] = sym_module,
  [sym_origin] = sym_origin,
  [sym_absolute] = sym_absolute,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [sym_guide] = sym_guide,
  [sym_label] = sym_label,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
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
  [sym_command] = {
    .visible = true,
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
  [sym__entity] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
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
  [aux_sym_command_repeat1] = {
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '@') ADVANCE(58);
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
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(64);
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
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(55);
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
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(56);
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
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(60);
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
      if (lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_y_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 64:
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_x_token1] = ACTIONS(1),
    [aux_sym_y_token1] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(26),
    [sym_new] = STATE(6),
    [sym_set] = STATE(6),
    [aux_sym_command_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      anon_sym_module,
    ACTIONS(13), 1,
      anon_sym_guide,
    ACTIONS(15), 1,
      anon_sym_label,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
    STATE(19), 4,
      sym__entity,
      sym_module,
      sym_guide,
      sym_label,
  [21] = 7,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      aux_sym_x_token1,
    ACTIONS(23), 1,
      aux_sym_y_token1,
    STATE(11), 1,
      sym_y,
    STATE(13), 1,
      sym_x,
    STATE(20), 1,
      sym_absolute,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [45] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_new,
    ACTIONS(30), 1,
      anon_sym_set,
    STATE(4), 3,
      sym_new,
      sym_set,
      aux_sym_command_repeat1,
  [60] = 3,
    ACTIONS(35), 1,
      anon_sym_origin,
    STATE(18), 2,
      sym__attribute,
      sym_origin,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [73] = 4,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym_new,
      sym_set,
      aux_sym_command_repeat1,
  [88] = 3,
    ACTIONS(21), 1,
      aux_sym_x_token1,
    STATE(24), 1,
      sym_x,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [100] = 3,
    ACTIONS(23), 1,
      aux_sym_y_token1,
    STATE(24), 1,
      sym_y,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [112] = 2,
    ACTIONS(43), 1,
      sym_offset,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [122] = 2,
    ACTIONS(47), 1,
      sym_offset,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [132] = 2,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [141] = 2,
    ACTIONS(55), 1,
      aux_sym_absolute_token1,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [150] = 2,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [159] = 2,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [168] = 1,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [175] = 1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [182] = 2,
    ACTIONS(69), 1,
      aux_sym_absolute_token1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [191] = 1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [197] = 1,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [203] = 1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [209] = 1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [215] = 1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [221] = 1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [227] = 1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [233] = 1,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [239] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 141,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 168,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 182,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 215,
  [SMALL_STATE(23)] = 221,
  [SMALL_STATE(24)] = 227,
  [SMALL_STATE(25)] = 233,
  [SMALL_STATE(26)] = 239,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
