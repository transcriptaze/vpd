#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
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
  sym_source_file = 12,
  sym__command = 13,
  sym_new = 14,
  sym_set = 15,
  sym_entity = 16,
  sym_module = 17,
  sym_origin = 18,
  sym_absolute = 19,
  sym_x = 20,
  sym_y = 21,
  sym_guide = 22,
  sym_label = 23,
  aux_sym_source_file_repeat1 = 24,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_absolute_token1] = sym_x,
  [aux_sym_x_token1] = aux_sym_x_token1,
  [aux_sym_y_token1] = aux_sym_x_token1,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_label] = anon_sym_label,
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'b') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_y_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_label);
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
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__command] = STATE(4),
    [sym_new] = STATE(4),
    [sym_set] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    STATE(19), 3,
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
    STATE(12), 1,
      sym_y,
    STATE(13), 1,
      sym_x,
    STATE(17), 1,
      sym_absolute,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [47] = 4,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(5), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [63] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(32), 1,
      anon_sym_set,
    STATE(5), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [79] = 3,
    ACTIONS(37), 1,
      anon_sym_origin,
    STATE(18), 1,
      sym_origin,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [91] = 3,
    ACTIONS(21), 1,
      aux_sym_x_token1,
    STATE(23), 1,
      sym_x,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [103] = 3,
    ACTIONS(23), 1,
      aux_sym_y_token1,
    STATE(23), 1,
      sym_y,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [115] = 1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [122] = 2,
    ACTIONS(45), 1,
      aux_sym_absolute_token1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [131] = 2,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [140] = 2,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [149] = 2,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [158] = 2,
    ACTIONS(59), 1,
      aux_sym_absolute_token1,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [167] = 1,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [174] = 1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [180] = 1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [186] = 1,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [192] = 1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [198] = 1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [204] = 1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [210] = 1,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [216] = 1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [222] = 1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [228] = 1,
    ACTIONS(79), 1,
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
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 140,
  [SMALL_STATE(13)] = 149,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 192,
  [SMALL_STATE(20)] = 198,
  [SMALL_STATE(21)] = 204,
  [SMALL_STATE(22)] = 210,
  [SMALL_STATE(23)] = 216,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 228,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
