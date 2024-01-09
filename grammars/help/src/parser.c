#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  anon_sym_background = 10,
  anon_sym_AT = 11,
  aux_sym_absolute_token1 = 12,
  aux_sym_x_token1 = 13,
  aux_sym_y_token1 = 14,
  anon_sym_guide = 15,
  anon_sym_label = 16,
  sym_offset = 17,
  sym_name = 18,
  sym_rgb = 19,
  sym_rgba = 20,
  sym_command = 21,
  sym_new = 22,
  sym_set = 23,
  sym_export = 24,
  sym__entity = 25,
  sym__exportable = 26,
  sym_svg = 27,
  sym_module = 28,
  sym_origin = 29,
  sym_background = 30,
  sym_absolute = 31,
  sym_x = 32,
  sym_y = 33,
  sym_guide = 34,
  sym_label = 35,
  aux_sym_command_repeat1 = 36,
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
  [anon_sym_background] = "background",
  [anon_sym_AT] = "@",
  [aux_sym_absolute_token1] = "x",
  [aux_sym_x_token1] = "reference",
  [aux_sym_y_token1] = "reference",
  [anon_sym_guide] = "guide",
  [anon_sym_label] = "label",
  [sym_offset] = "offset",
  [sym_name] = "name",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_export] = "export",
  [sym__entity] = "_entity",
  [sym__exportable] = "module",
  [sym_svg] = "svg",
  [sym_module] = "module",
  [sym_origin] = "origin",
  [sym_background] = "background",
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
  [anon_sym_background] = anon_sym_background,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_absolute_token1] = sym_x,
  [aux_sym_x_token1] = aux_sym_x_token1,
  [aux_sym_y_token1] = aux_sym_x_token1,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_label] = anon_sym_label,
  [sym_offset] = sym_offset,
  [sym_name] = sym_name,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_export] = sym_export,
  [sym__entity] = sym__entity,
  [sym__exportable] = sym_module,
  [sym_svg] = sym_svg,
  [sym_module] = sym_module,
  [sym_origin] = sym_origin,
  [sym_background] = sym_background,
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
  [anon_sym_background] = {
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_rgba] = {
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
  [sym_background] = {
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
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(91);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'g') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == 't') ADVANCE(49);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(101);
      END_STATE();
    case 39:
      if (lookahead == 'k') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 72:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 88:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 89:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 90:
      if (eof) ADVANCE(91);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_y_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_rgba);
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
  [7] = {.lex_state = 90},
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
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
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
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_x_token1] = ACTIONS(1),
    [aux_sym_y_token1] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
    [sym_rgb] = ACTIONS(1),
    [sym_rgba] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(37),
    [sym_new] = STATE(6),
    [sym_set] = STATE(6),
    [sym_export] = STATE(6),
    [aux_sym_command_repeat1] = STATE(6),
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
    STATE(21), 1,
      sym_x,
    STATE(22), 1,
      sym_y,
    STATE(27), 1,
      sym_absolute,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [47] = 4,
    ACTIONS(29), 1,
      anon_sym_origin,
    ACTIONS(31), 1,
      anon_sym_background,
    STATE(29), 2,
      sym_origin,
      sym_background,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [64] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_new,
    ACTIONS(38), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_export,
    STATE(5), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [83] = 5,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(5), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [102] = 5,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      sym_name,
    ACTIONS(52), 1,
      sym_rgb,
    ACTIONS(54), 1,
      sym_rgba,
    ACTIONS(48), 3,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [120] = 3,
    ACTIONS(25), 1,
      aux_sym_y_token1,
    STATE(34), 1,
      sym_y,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [133] = 3,
    ACTIONS(60), 1,
      anon_sym_module,
    STATE(28), 1,
      sym__exportable,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [146] = 3,
    ACTIONS(23), 1,
      aux_sym_x_token1,
    STATE(34), 1,
      sym_x,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [159] = 3,
    ACTIONS(64), 1,
      anon_sym_svg,
    STATE(26), 1,
      sym_svg,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [172] = 2,
    ACTIONS(68), 1,
      sym_offset,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [183] = 2,
    ACTIONS(72), 1,
      sym_offset,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [194] = 2,
    ACTIONS(76), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [205] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [213] = 2,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [223] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [231] = 2,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [241] = 2,
    ACTIONS(92), 1,
      aux_sym_absolute_token1,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [251] = 2,
    ACTIONS(96), 1,
      aux_sym_absolute_token1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [261] = 2,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [271] = 2,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [281] = 2,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [291] = 1,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [298] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [305] = 1,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [312] = 1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [319] = 1,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [326] = 1,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [333] = 1,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [340] = 1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [347] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [354] = 1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [361] = 1,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [368] = 1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [375] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [382] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [386] = 1,
    ACTIONS(130), 1,
      sym_rgb,
  [390] = 1,
    ACTIONS(130), 1,
      sym_rgba,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 159,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 183,
  [SMALL_STATE(14)] = 194,
  [SMALL_STATE(15)] = 205,
  [SMALL_STATE(16)] = 213,
  [SMALL_STATE(17)] = 223,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 241,
  [SMALL_STATE(20)] = 251,
  [SMALL_STATE(21)] = 261,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 281,
  [SMALL_STATE(24)] = 291,
  [SMALL_STATE(25)] = 298,
  [SMALL_STATE(26)] = 305,
  [SMALL_STATE(27)] = 312,
  [SMALL_STATE(28)] = 319,
  [SMALL_STATE(29)] = 326,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 340,
  [SMALL_STATE(32)] = 347,
  [SMALL_STATE(33)] = 354,
  [SMALL_STATE(34)] = 361,
  [SMALL_STATE(35)] = 368,
  [SMALL_STATE(36)] = 375,
  [SMALL_STATE(37)] = 382,
  [SMALL_STATE(38)] = 386,
  [SMALL_STATE(39)] = 390,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
