#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

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
  anon_sym_label = 10,
  anon_sym_COMMA = 11,
  anon_sym_origin = 12,
  anon_sym_background = 13,
  anon_sym_guide = 14,
  anon_sym_DQUOTE = 15,
  aux_sym__string_token1 = 16,
  sym_offset = 17,
  aux_sym_name_token1 = 18,
  sym_rgb = 19,
  sym_rgba = 20,
  anon_sym_AT = 21,
  aux_sym_absolute_token1 = 22,
  aux_sym_relative_token1 = 23,
  aux_sym_x_token1 = 24,
  aux_sym_y_token1 = 25,
  sym_command = 26,
  sym_new = 27,
  sym_set = 28,
  sym_load = 29,
  sym_export = 30,
  sym__entity = 31,
  sym__exportable = 32,
  sym_svg = 33,
  sym_module = 34,
  sym_label = 35,
  sym_origin = 36,
  sym_background = 37,
  sym_guide = 38,
  sym__string = 39,
  sym_name = 40,
  sym_font = 41,
  sym_absolute = 42,
  sym_relative = 43,
  sym_x = 44,
  sym_y = 45,
  aux_sym_command_repeat1 = 46,
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
  [anon_sym_label] = "label",
  [anon_sym_COMMA] = ",",
  [anon_sym_origin] = "origin",
  [anon_sym_background] = "background",
  [anon_sym_guide] = "guide",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "string",
  [sym_offset] = "offset",
  [aux_sym_name_token1] = "name_token1",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [anon_sym_AT] = "@",
  [aux_sym_absolute_token1] = "x",
  [aux_sym_relative_token1] = "x",
  [aux_sym_x_token1] = "reference",
  [aux_sym_y_token1] = "reference",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_load] = "load",
  [sym_export] = "export",
  [sym__entity] = "_entity",
  [sym__exportable] = "module",
  [sym_svg] = "svg",
  [sym_module] = "module",
  [sym_label] = "label",
  [sym_origin] = "origin",
  [sym_background] = "background",
  [sym_guide] = "guide",
  [sym__string] = "_string",
  [sym_name] = "name",
  [sym_font] = "font",
  [sym_absolute] = "absolute",
  [sym_relative] = "relative",
  [sym_x] = "x",
  [sym_y] = "y",
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
  [anon_sym_label] = anon_sym_label,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_background] = anon_sym_background,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [sym_offset] = sym_offset,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_absolute_token1] = sym_x,
  [aux_sym_relative_token1] = sym_x,
  [aux_sym_x_token1] = aux_sym_x_token1,
  [aux_sym_y_token1] = aux_sym_x_token1,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_load] = sym_load,
  [sym_export] = sym_export,
  [sym__entity] = sym__entity,
  [sym__exportable] = sym_module,
  [sym_svg] = sym_svg,
  [sym_module] = sym_module,
  [sym_label] = sym_label,
  [sym_origin] = sym_origin,
  [sym_background] = sym_background,
  [sym_guide] = sym_guide,
  [sym__string] = sym__string,
  [sym_name] = sym_name,
  [sym_font] = sym_font,
  [sym_absolute] = sym_absolute,
  [sym_relative] = sym_relative,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
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
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_rgba] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_absolute_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_relative_token1] = {
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
  [sym_label] = {
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
  [sym_guide] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_font] = {
    .visible = true,
    .named = true,
  },
  [sym_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym_relative] = {
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
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = sym_y,
  },
  [2] = {
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
  [23] = 12,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 25,
  [36] = 14,
  [37] = 11,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 29,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'g') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(57);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 44:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'w') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 'x') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 100:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 101:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 102:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 's') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 103:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 104:
      if (eof) ADVANCE(106);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 105:
      if (eof) ADVANCE(106);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'p') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'x') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_y_token1);
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
  [4] = {.lex_state = 104},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 102},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 102},
  [12] = {.lex_state = 102},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 102},
  [15] = {.lex_state = 102},
  [16] = {.lex_state = 103},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 102},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 102},
  [25] = {.lex_state = 102},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 102},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 102},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 102},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 105},
  [36] = {.lex_state = 105},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 104},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 85},
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
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
    [sym_rgb] = ACTIONS(1),
    [sym_rgba] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_relative_token1] = ACTIONS(1),
    [aux_sym_x_token1] = ACTIONS(1),
    [aux_sym_y_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(61),
    [sym_new] = STATE(6),
    [sym_set] = STATE(6),
    [sym_load] = STATE(6),
    [sym_export] = STATE(6),
    [aux_sym_command_repeat1] = STATE(6),
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
      anon_sym_label,
    ACTIONS(19), 1,
      anon_sym_guide,
    STATE(50), 4,
      sym__entity,
      sym_module,
      sym_label,
      sym_guide,
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
    STATE(28), 1,
      sym_y,
    STATE(32), 1,
      sym_x,
    STATE(53), 1,
      sym_absolute,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [49] = 6,
    ACTIONS(25), 1,
      aux_sym_x_token1,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      aux_sym_relative_token1,
    STATE(58), 1,
      sym_x,
    STATE(21), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [73] = 6,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_new,
    ACTIONS(40), 1,
      anon_sym_set,
    ACTIONS(43), 1,
      anon_sym_load,
    ACTIONS(46), 1,
      anon_sym_export,
    STATE(5), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [96] = 6,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_load,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(5), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [119] = 6,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      aux_sym_name_token1,
    ACTIONS(57), 1,
      sym_rgb,
    ACTIONS(59), 1,
      sym_rgba,
    STATE(41), 1,
      sym_name,
    ACTIONS(53), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [141] = 4,
    ACTIONS(63), 1,
      anon_sym_origin,
    ACTIONS(65), 1,
      anon_sym_background,
    STATE(39), 2,
      sym_origin,
      sym_background,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [159] = 1,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_AT,
      aux_sym_relative_token1,
      aux_sym_x_token1,
  [170] = 3,
    ACTIONS(71), 1,
      anon_sym_module,
    STATE(45), 1,
      sym__exportable,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [184] = 3,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(75), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [198] = 3,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_offset,
    ACTIONS(81), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [212] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym__string,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [226] = 3,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      aux_sym_absolute_token1,
    ACTIONS(91), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [240] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      aux_sym_name_token1,
    STATE(54), 1,
      sym_font,
    ACTIONS(97), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [256] = 3,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_relative_token1,
    ACTIONS(103), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [270] = 3,
    ACTIONS(109), 1,
      anon_sym_svg,
    STATE(42), 1,
      sym_svg,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [284] = 3,
    ACTIONS(25), 1,
      aux_sym_x_token1,
    STATE(51), 1,
      sym_x,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [298] = 2,
    ACTIONS(115), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [310] = 3,
    ACTIONS(27), 1,
      aux_sym_y_token1,
    STATE(51), 1,
      sym_y,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [324] = 4,
    ACTIONS(99), 1,
      aux_sym_name_token1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_font,
    ACTIONS(119), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [340] = 2,
    ACTIONS(123), 1,
      sym_offset,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [352] = 2,
    ACTIONS(125), 1,
      sym_offset,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [364] = 3,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(129), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [378] = 3,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      aux_sym_absolute_token1,
    ACTIONS(135), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [392] = 2,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [403] = 1,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [412] = 2,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [423] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [434] = 2,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [445] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [456] = 2,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [467] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [478] = 2,
    ACTIONS(165), 1,
      anon_sym_script,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [489] = 2,
    ACTIONS(167), 1,
      aux_sym_absolute_token1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [500] = 2,
    ACTIONS(169), 1,
      aux_sym_absolute_token1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [511] = 2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [522] = 1,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [531] = 1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [539] = 1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [547] = 1,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [555] = 1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [563] = 1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [571] = 1,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [579] = 1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [587] = 1,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [595] = 1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [603] = 1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [611] = 1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [619] = 1,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [627] = 1,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [635] = 1,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [643] = 1,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [651] = 1,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [659] = 1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [667] = 2,
    ACTIONS(203), 1,
      aux_sym_y_token1,
    STATE(15), 1,
      sym_y,
  [674] = 1,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
  [678] = 1,
    ACTIONS(207), 1,
      anon_sym_COMMA,
  [682] = 1,
    ACTIONS(209), 1,
      sym_rgba,
  [686] = 1,
    ACTIONS(209), 1,
      sym_rgb,
  [690] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [694] = 1,
    ACTIONS(213), 1,
      aux_sym__string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 49,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 240,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 270,
  [SMALL_STATE(18)] = 284,
  [SMALL_STATE(19)] = 298,
  [SMALL_STATE(20)] = 310,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 340,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 378,
  [SMALL_STATE(26)] = 392,
  [SMALL_STATE(27)] = 403,
  [SMALL_STATE(28)] = 412,
  [SMALL_STATE(29)] = 423,
  [SMALL_STATE(30)] = 434,
  [SMALL_STATE(31)] = 445,
  [SMALL_STATE(32)] = 456,
  [SMALL_STATE(33)] = 467,
  [SMALL_STATE(34)] = 478,
  [SMALL_STATE(35)] = 489,
  [SMALL_STATE(36)] = 500,
  [SMALL_STATE(37)] = 511,
  [SMALL_STATE(38)] = 522,
  [SMALL_STATE(39)] = 531,
  [SMALL_STATE(40)] = 539,
  [SMALL_STATE(41)] = 547,
  [SMALL_STATE(42)] = 555,
  [SMALL_STATE(43)] = 563,
  [SMALL_STATE(44)] = 571,
  [SMALL_STATE(45)] = 579,
  [SMALL_STATE(46)] = 587,
  [SMALL_STATE(47)] = 595,
  [SMALL_STATE(48)] = 603,
  [SMALL_STATE(49)] = 611,
  [SMALL_STATE(50)] = 619,
  [SMALL_STATE(51)] = 627,
  [SMALL_STATE(52)] = 635,
  [SMALL_STATE(53)] = 643,
  [SMALL_STATE(54)] = 651,
  [SMALL_STATE(55)] = 659,
  [SMALL_STATE(56)] = 667,
  [SMALL_STATE(57)] = 674,
  [SMALL_STATE(58)] = 678,
  [SMALL_STATE(59)] = 682,
  [SMALL_STATE(60)] = 686,
  [SMALL_STATE(61)] = 690,
  [SMALL_STATE(62)] = 694,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(34),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
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
