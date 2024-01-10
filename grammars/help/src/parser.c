#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_new = 1,
  anon_sym_set = 2,
  anon_sym_load = 3,
  anon_sym_script = 4,
  anon_sym_export = 5,
  anon_sym_module = 6,
  anon_sym_svg = 7,
  anon_sym_light = 8,
  anon_sym_dark = 9,
  anon_sym_origin = 10,
  anon_sym_COMMA = 11,
  anon_sym_background = 12,
  anon_sym_AT = 13,
  aux_sym_absolute_token1 = 14,
  aux_sym_x_token1 = 15,
  aux_sym_y_token1 = 16,
  anon_sym_guide = 17,
  anon_sym_label = 18,
  sym_offset = 19,
  sym_name = 20,
  sym_rgb = 21,
  sym_rgba = 22,
  sym_command = 23,
  sym_new = 24,
  sym_set = 25,
  sym_load = 26,
  sym_export = 27,
  sym__entity = 28,
  sym__exportable = 29,
  sym_svg = 30,
  sym_module = 31,
  sym_origin = 32,
  sym_background = 33,
  sym_absolute = 34,
  sym_x = 35,
  sym_y = 36,
  sym_guide = 37,
  sym_label = 38,
  aux_sym_command_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_load] = "load",
  [anon_sym_script] = "script",
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
  [sym_load] = "load",
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
  [anon_sym_load] = anon_sym_load,
  [anon_sym_script] = anon_sym_script,
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
  [sym_load] = sym_load,
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
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = true,
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
  [sym_load] = {
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
  [40] = 40,
  [41] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(97);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '@') ADVANCE(114);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'g') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(52);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 78:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 94:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 95:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_y_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 137:
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
  [7] = {.lex_state = 96},
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
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
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
    [sym_command] = STATE(39),
    [sym_new] = STATE(5),
    [sym_set] = STATE(5),
    [sym_load] = STATE(5),
    [sym_export] = STATE(5),
    [aux_sym_command_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_load] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(15), 1,
      anon_sym_module,
    ACTIONS(17), 1,
      anon_sym_guide,
    ACTIONS(19), 1,
      anon_sym_label,
    STATE(32), 4,
      sym__entity,
      sym_module,
      sym_guide,
      sym_label,
    ACTIONS(13), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [23] = 7,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      aux_sym_x_token1,
    ACTIONS(27), 1,
      aux_sym_y_token1,
    STATE(23), 1,
      sym_x,
    STATE(24), 1,
      sym_y,
    STATE(26), 1,
      sym_absolute,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [49] = 6,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_new,
    ACTIONS(34), 1,
      anon_sym_set,
    ACTIONS(37), 1,
      anon_sym_load,
    ACTIONS(40), 1,
      anon_sym_export,
    STATE(4), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [72] = 6,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_load,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(4), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [95] = 4,
    ACTIONS(47), 1,
      anon_sym_origin,
    ACTIONS(49), 1,
      anon_sym_background,
    STATE(28), 2,
      sym_origin,
      sym_background,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [113] = 5,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(57), 1,
      sym_rgb,
    ACTIONS(59), 1,
      sym_rgba,
    ACTIONS(53), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [132] = 3,
    ACTIONS(25), 1,
      aux_sym_x_token1,
    STATE(36), 1,
      sym_x,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [146] = 3,
    ACTIONS(65), 1,
      anon_sym_module,
    STATE(35), 1,
      sym__exportable,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [160] = 3,
    ACTIONS(27), 1,
      aux_sym_y_token1,
    STATE(36), 1,
      sym_y,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [174] = 2,
    ACTIONS(69), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [186] = 2,
    ACTIONS(73), 1,
      sym_offset,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [198] = 2,
    ACTIONS(77), 1,
      sym_offset,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [210] = 3,
    ACTIONS(81), 1,
      anon_sym_svg,
    STATE(29), 1,
      sym_svg,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [224] = 2,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [235] = 2,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [246] = 2,
    ACTIONS(93), 1,
      aux_sym_absolute_token1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [257] = 1,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [266] = 2,
    ACTIONS(99), 1,
      aux_sym_absolute_token1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [277] = 2,
    ACTIONS(103), 1,
      anon_sym_script,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [288] = 1,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [297] = 2,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [308] = 2,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [319] = 2,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [330] = 1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [338] = 1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [346] = 1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [354] = 1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [362] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [370] = 1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [378] = 1,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [386] = 1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [394] = 1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [402] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [410] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [418] = 1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [426] = 1,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [434] = 1,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [442] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [446] = 1,
    ACTIONS(141), 1,
      sym_rgb,
  [450] = 1,
    ACTIONS(141), 1,
      sym_rgba,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 49,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 198,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 246,
  [SMALL_STATE(18)] = 257,
  [SMALL_STATE(19)] = 266,
  [SMALL_STATE(20)] = 277,
  [SMALL_STATE(21)] = 288,
  [SMALL_STATE(22)] = 297,
  [SMALL_STATE(23)] = 308,
  [SMALL_STATE(24)] = 319,
  [SMALL_STATE(25)] = 330,
  [SMALL_STATE(26)] = 338,
  [SMALL_STATE(27)] = 346,
  [SMALL_STATE(28)] = 354,
  [SMALL_STATE(29)] = 362,
  [SMALL_STATE(30)] = 370,
  [SMALL_STATE(31)] = 378,
  [SMALL_STATE(32)] = 386,
  [SMALL_STATE(33)] = 394,
  [SMALL_STATE(34)] = 402,
  [SMALL_STATE(35)] = 410,
  [SMALL_STATE(36)] = 418,
  [SMALL_STATE(37)] = 426,
  [SMALL_STATE(38)] = 434,
  [SMALL_STATE(39)] = 442,
  [SMALL_STATE(40)] = 446,
  [SMALL_STATE(41)] = 450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(20),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
