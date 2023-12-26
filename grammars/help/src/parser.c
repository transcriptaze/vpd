#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_new = 1,
  anon_sym_set = 2,
  anon_sym_export = 3,
  anon_sym_module = 4,
  anon_sym_svg = 5,
  anon_sym_light = 6,
  anon_sym_dark = 7,
  anon_sym_origin = 8,
  anon_sym_COMMA = 9,
  anon_sym_AT = 10,
  aux_sym_absolute_token1 = 11,
  aux_sym_x_token1 = 12,
  aux_sym_y_token1 = 13,
  anon_sym_guide = 14,
  anon_sym_label = 15,
  sym_offset = 16,
  sym_command = 17,
  sym_new = 18,
  sym_set = 19,
  sym_export = 20,
  sym__entity = 21,
  sym__attribute = 22,
  sym__exportable = 23,
  sym_svg = 24,
  sym_module = 25,
  sym_origin = 26,
  sym_absolute = 27,
  sym_x = 28,
  sym_y = 29,
  sym_guide = 30,
  sym_label = 31,
  aux_sym_command_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_export] = "export",
  [anon_sym_module] = "module",
  [anon_sym_svg] = "svg",
  [anon_sym_light] = "light",
  [anon_sym_dark] = "dark",
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
  [sym_export] = "export",
  [sym__entity] = "_entity",
  [sym__attribute] = "_attribute",
  [sym__exportable] = "module",
  [sym_svg] = "svg",
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
  [anon_sym_export] = anon_sym_export,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_dark] = anon_sym_dark,
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
  [sym_export] = sym_export,
  [sym__entity] = sym__entity,
  [sym__attribute] = sym__attribute,
  [sym__exportable] = sym_module,
  [sym_svg] = sym_svg,
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
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_svg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_light] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dark] = {
    .visible = true,
    .named = true,
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
  [sym_export] = {
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
  [sym__exportable] = {
    .visible = true,
    .named = true,
  },
  [sym_svg] = {
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(64);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 't') ADVANCE(41);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 61:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_y_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 80:
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
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
    [sym_command] = STATE(32),
    [sym_new] = STATE(5),
    [sym_set] = STATE(5),
    [sym_export] = STATE(5),
    [aux_sym_command_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
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
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
    STATE(24), 4,
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
    STATE(16), 1,
      sym_x,
    STATE(17), 1,
      sym_y,
    STATE(23), 1,
      sym_absolute,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [47] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(32), 1,
      anon_sym_set,
    ACTIONS(35), 1,
      anon_sym_export,
    STATE(4), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [66] = 5,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [85] = 3,
    ACTIONS(42), 1,
      anon_sym_origin,
    STATE(22), 2,
      sym__attribute,
      sym_origin,
    ACTIONS(40), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [99] = 3,
    ACTIONS(46), 1,
      anon_sym_module,
    STATE(21), 1,
      sym__exportable,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [112] = 3,
    ACTIONS(23), 1,
      aux_sym_x_token1,
    STATE(30), 1,
      sym_x,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [125] = 3,
    ACTIONS(25), 1,
      aux_sym_y_token1,
    STATE(30), 1,
      sym_y,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [138] = 2,
    ACTIONS(52), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [149] = 2,
    ACTIONS(56), 1,
      sym_offset,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [160] = 2,
    ACTIONS(60), 1,
      sym_offset,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [171] = 3,
    ACTIONS(64), 1,
      anon_sym_svg,
    STATE(25), 1,
      sym_svg,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [184] = 2,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [194] = 2,
    ACTIONS(72), 1,
      aux_sym_absolute_token1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [204] = 2,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [214] = 2,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [224] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [232] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [240] = 2,
    ACTIONS(86), 1,
      aux_sym_absolute_token1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [250] = 1,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [257] = 1,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [264] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [271] = 1,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [278] = 1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [285] = 1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [292] = 1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [299] = 1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [306] = 1,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [313] = 1,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [320] = 1,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [327] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 160,
  [SMALL_STATE(13)] = 171,
  [SMALL_STATE(14)] = 184,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 204,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 224,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 240,
  [SMALL_STATE(21)] = 250,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 264,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 278,
  [SMALL_STATE(26)] = 285,
  [SMALL_STATE(27)] = 292,
  [SMALL_STATE(28)] = 299,
  [SMALL_STATE(29)] = 306,
  [SMALL_STATE(30)] = 313,
  [SMALL_STATE(31)] = 320,
  [SMALL_STATE(32)] = 327,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
