#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_DOT_DOT_DOT = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_module = 4,
  anon_sym_origin = 5,
  anon_sym_COMMA = 6,
  anon_sym_AT = 7,
  aux_sym_absolute_token1 = 8,
  aux_sym_x_token1 = 9,
  aux_sym_y_token1 = 10,
  anon_sym_guide = 11,
  anon_sym_label = 12,
  sym_offset = 13,
  sym_command = 14,
  sym_new = 15,
  sym_set = 16,
  sym__entity = 17,
  sym__attribute = 18,
  sym_module = 19,
  sym_origin = 20,
  sym_absolute = 21,
  sym_x = 22,
  sym_y = 23,
  sym_guide = 24,
  sym_label = 25,
  aux_sym_command_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT_DOT_DOT] = "...",
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
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
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
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
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
      if (eof) ADVANCE(54);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(38);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'w') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_y_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 67:
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
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
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
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(15), 1,
      anon_sym_guide,
    ACTIONS(17), 1,
      anon_sym_label,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
    STATE(19), 4,
      sym__entity,
      sym_module,
      sym_guide,
      sym_label,
  [22] = 7,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      aux_sym_x_token1,
    ACTIONS(25), 1,
      aux_sym_y_token1,
    STATE(11), 1,
      sym_y,
    STATE(13), 1,
      sym_x,
    STATE(20), 1,
      sym_absolute,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [47] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(32), 1,
      anon_sym_new,
    ACTIONS(35), 1,
      anon_sym_set,
    STATE(4), 3,
      sym_new,
      sym_set,
      aux_sym_command_repeat1,
  [65] = 3,
    ACTIONS(40), 1,
      anon_sym_origin,
    STATE(18), 2,
      sym__attribute,
      sym_origin,
    ACTIONS(38), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [79] = 5,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(4), 3,
      sym_new,
      sym_set,
      aux_sym_command_repeat1,
  [97] = 3,
    ACTIONS(23), 1,
      aux_sym_x_token1,
    STATE(24), 1,
      sym_x,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [110] = 3,
    ACTIONS(25), 1,
      aux_sym_y_token1,
    STATE(24), 1,
      sym_y,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [123] = 2,
    ACTIONS(50), 1,
      sym_offset,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [134] = 2,
    ACTIONS(54), 1,
      sym_offset,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [145] = 2,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [155] = 2,
    ACTIONS(62), 1,
      aux_sym_absolute_token1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [165] = 2,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [175] = 2,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [185] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [193] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [201] = 2,
    ACTIONS(76), 1,
      aux_sym_absolute_token1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [211] = 1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [218] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [225] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [232] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [239] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [246] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [253] = 1,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [260] = 1,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_new,
      anon_sym_set,
  [267] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 165,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 185,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 201,
  [SMALL_STATE(18)] = 211,
  [SMALL_STATE(19)] = 218,
  [SMALL_STATE(20)] = 225,
  [SMALL_STATE(21)] = 232,
  [SMALL_STATE(22)] = 239,
  [SMALL_STATE(23)] = 246,
  [SMALL_STATE(24)] = 253,
  [SMALL_STATE(25)] = 260,
  [SMALL_STATE(26)] = 267,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
