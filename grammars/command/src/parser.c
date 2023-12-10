#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_set = 1,
  anon_sym_move = 2,
  anon_sym_delete = 3,
  anon_sym_new = 4,
  anon_sym_param = 5,
  anon_sym_input = 6,
  anon_sym_output = 7,
  anon_sym_module = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_name_token1 = 10,
  sym_height = 11,
  sym_width = 12,
  anon_sym_label = 13,
  anon_sym_guide = 14,
  anon_sym_vertical = 15,
  anon_sym_horizontal = 16,
  sym_identifier = 17,
  sym_text = 18,
  sym_offset = 19,
  sym_source_file = 20,
  sym__command = 21,
  sym_new = 22,
  sym_entity = 23,
  sym_module = 24,
  sym_name = 25,
  sym_label = 26,
  sym_guide = 27,
  aux_sym_source_file_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_set] = "set",
  [anon_sym_move] = "move",
  [anon_sym_delete] = "delete",
  [anon_sym_new] = "new",
  [anon_sym_param] = "param",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_module] = "module",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_name_token1] = "value",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_label] = "label",
  [anon_sym_guide] = "guide",
  [anon_sym_vertical] = "orientation",
  [anon_sym_horizontal] = "orientation",
  [sym_identifier] = "identifier",
  [sym_text] = "text",
  [sym_offset] = "offset",
  [sym_source_file] = "source_file",
  [sym__command] = "_command",
  [sym_new] = "new",
  [sym_entity] = "entity",
  [sym_module] = "module",
  [sym_name] = "name",
  [sym_label] = "label",
  [sym_guide] = "guide",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_vertical,
  [sym_identifier] = sym_identifier,
  [sym_text] = sym_text,
  [sym_offset] = sym_offset,
  [sym_source_file] = sym_source_file,
  [sym__command] = sym__command,
  [sym_new] = sym_new,
  [sym_entity] = sym_entity,
  [sym_module] = sym_module,
  [sym_name] = sym_name,
  [sym_label] = sym_label,
  [sym_guide] = sym_guide,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_name_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_height] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
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
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_guide] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(64);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'g') ADVANCE(53);
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'w') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'z') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 83:
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
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__command] = STATE(4),
    [sym_new] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_move] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_module,
    ACTIONS(13), 1,
      anon_sym_label,
    ACTIONS(15), 1,
      anon_sym_guide,
    STATE(6), 1,
      sym_entity,
    ACTIONS(9), 3,
      anon_sym_param,
      anon_sym_input,
      anon_sym_output,
    STATE(5), 3,
      sym_module,
      sym_label,
      sym_guide,
  [23] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      anon_sym_new,
    ACTIONS(19), 3,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
    STATE(3), 3,
      sym__command,
      sym_new,
      aux_sym_source_file_repeat1,
  [40] = 4,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 3,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
    STATE(3), 3,
      sym__command,
      sym_new,
      aux_sym_source_file_repeat1,
  [57] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
  [65] = 1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
  [73] = 1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
  [81] = 1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
  [89] = 1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
  [97] = 2,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_name,
  [104] = 1,
    ACTIONS(41), 2,
      anon_sym_vertical,
      anon_sym_horizontal,
  [109] = 1,
    ACTIONS(43), 1,
      sym_text,
  [113] = 1,
    ACTIONS(45), 1,
      sym_identifier,
  [117] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [121] = 1,
    ACTIONS(49), 1,
      aux_sym_name_token1,
  [125] = 1,
    ACTIONS(51), 1,
      sym_height,
  [129] = 1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
  [133] = 1,
    ACTIONS(55), 1,
      sym_width,
  [137] = 1,
    ACTIONS(57), 1,
      sym_offset,
  [141] = 1,
    ACTIONS(59), 1,
      sym_height,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 81,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 97,
  [SMALL_STATE(11)] = 104,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 113,
  [SMALL_STATE(14)] = 117,
  [SMALL_STATE(15)] = 121,
  [SMALL_STATE(16)] = 125,
  [SMALL_STATE(17)] = 129,
  [SMALL_STATE(18)] = 133,
  [SMALL_STATE(19)] = 137,
  [SMALL_STATE(20)] = 141,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vpd(void) {
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
