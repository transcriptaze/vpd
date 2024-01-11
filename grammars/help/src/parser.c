#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

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
  anon_sym_guide = 13,
  anon_sym_label = 14,
  anon_sym_AT = 15,
  aux_sym__label_absolute_token1 = 16,
  aux_sym__label_relative_token1 = 17,
  aux_sym_name_token1 = 18,
  sym_rgb = 19,
  sym_rgba = 20,
  aux_sym__x_token1 = 21,
  aux_sym__y_token1 = 22,
  aux_sym__offset_token1 = 23,
  anon_sym_DQUOTE = 24,
  aux_sym__string_token1 = 25,
  sym_command = 26,
  sym_new = 27,
  sym_set = 28,
  sym_load = 29,
  sym_export = 30,
  sym__entity = 31,
  sym__exportable = 32,
  sym_svg = 33,
  sym_module = 34,
  sym_origin = 35,
  sym_background = 36,
  sym_guide = 37,
  sym_label = 38,
  sym__label_string = 39,
  sym__label_absolute = 40,
  sym__label_relative = 41,
  sym__label_geometry = 42,
  sym_name = 43,
  sym_font = 44,
  sym_absolute = 45,
  sym__x = 46,
  sym__y = 47,
  sym_x = 48,
  sym_y = 49,
  sym__offset = 50,
  sym_offset = 51,
  sym__string = 52,
  aux_sym_command_repeat1 = 53,
  alias_sym_reference = 54,
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
  [anon_sym_guide] = "guide",
  [anon_sym_label] = "label",
  [anon_sym_AT] = "@",
  [aux_sym__label_absolute_token1] = "_label_absolute_token1",
  [aux_sym__label_relative_token1] = "_label_relative_token1",
  [aux_sym_name_token1] = "name_token1",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [aux_sym__x_token1] = "_x_token1",
  [aux_sym__y_token1] = "_y_token1",
  [aux_sym__offset_token1] = "_offset_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "_string_token1",
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
  [sym_guide] = "guide",
  [sym_label] = "label",
  [sym__label_string] = "string",
  [sym__label_absolute] = "absolute",
  [sym__label_relative] = "relative",
  [sym__label_geometry] = "geometry",
  [sym_name] = "name",
  [sym_font] = "font",
  [sym_absolute] = "absolute",
  [sym__x] = "_x",
  [sym__y] = "_y",
  [sym_x] = "x",
  [sym_y] = "y",
  [sym__offset] = "_offset",
  [sym_offset] = "offset",
  [sym__string] = "_string",
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_reference] = "reference",
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
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__label_absolute_token1] = aux_sym__label_absolute_token1,
  [aux_sym__label_relative_token1] = aux_sym__label_relative_token1,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [aux_sym__x_token1] = aux_sym__x_token1,
  [aux_sym__y_token1] = aux_sym__y_token1,
  [aux_sym__offset_token1] = aux_sym__offset_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
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
  [sym_guide] = sym_guide,
  [sym_label] = sym_label,
  [sym__label_string] = sym__label_string,
  [sym__label_absolute] = sym_absolute,
  [sym__label_relative] = sym__label_relative,
  [sym__label_geometry] = sym__label_geometry,
  [sym_name] = sym_name,
  [sym_font] = sym_font,
  [sym_absolute] = sym_absolute,
  [sym__x] = sym__x,
  [sym__y] = sym__y,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [sym__offset] = sym__offset,
  [sym_offset] = sym_offset,
  [sym__string] = sym__string,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [alias_sym_reference] = alias_sym_reference,
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
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_absolute_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__label_relative_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym__x_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__y_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__offset_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
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
  [sym_guide] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__label_string] = {
    .visible = true,
    .named = true,
  },
  [sym__label_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym__label_relative] = {
    .visible = true,
    .named = true,
  },
  [sym__label_geometry] = {
    .visible = true,
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
  [sym__x] = {
    .visible = false,
    .named = true,
  },
  [sym__y] = {
    .visible = false,
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
  [sym__offset] = {
    .visible = false,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_reference] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_reference,
  },
  [2] = {
    [1] = sym_x,
  },
  [3] = {
    [1] = sym_x,
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
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(105);
      if (lookahead == '"') ADVANCE(147);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == '@') ADVANCE(124);
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
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(127);
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
          lookahead == 'h') ADVANCE(125);
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
          lookahead == 'h') ADVANCE(146);
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
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(121);
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
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(115);
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
      if (lookahead == 'g') ADVANCE(116);
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
      if (lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 44:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(119);
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
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(144);
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
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(112);
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
      if (lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'x') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
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
      if (eof) ADVANCE(105);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 103:
      if (eof) ADVANCE(105);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '@') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 104:
      if (eof) ADVANCE(105);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'x') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 103},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 102},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 102},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 102},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 102},
  [21] = {.lex_state = 102},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 102},
  [24] = {.lex_state = 104},
  [25] = {.lex_state = 104},
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
  [57] = {.lex_state = 102},
  [58] = {.lex_state = 103},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 103},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 102},
  [67] = {.lex_state = 85},
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
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__label_absolute_token1] = ACTIONS(1),
    [aux_sym__label_relative_token1] = ACTIONS(1),
    [sym_rgb] = ACTIONS(1),
    [sym_rgba] = ACTIONS(1),
    [aux_sym__x_token1] = ACTIONS(1),
    [aux_sym__y_token1] = ACTIONS(1),
    [aux_sym__offset_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(64),
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
    STATE(51), 4,
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
  [23] = 6,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      aux_sym__label_relative_token1,
    ACTIONS(27), 1,
      aux_sym__x_token1,
    STATE(61), 1,
      sym__x,
    STATE(38), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [48] = 7,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      aux_sym__x_token1,
    ACTIONS(35), 1,
      aux_sym__y_token1,
    STATE(26), 1,
      sym_x,
    STATE(27), 1,
      sym_y,
    STATE(39), 1,
      sym_absolute,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [74] = 6,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_load,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(6), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [97] = 6,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_new,
    ACTIONS(44), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_load,
    ACTIONS(50), 1,
      anon_sym_export,
    STATE(6), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [120] = 4,
    ACTIONS(55), 1,
      anon_sym_origin,
    ACTIONS(57), 1,
      anon_sym_background,
    STATE(46), 2,
      sym_origin,
      sym_background,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [138] = 6,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym_name_token1,
    ACTIONS(65), 1,
      sym_rgb,
    ACTIONS(67), 1,
      sym_rgba,
    STATE(34), 1,
      sym_name,
    ACTIONS(61), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [160] = 3,
    ACTIONS(71), 1,
      aux_sym__offset_token1,
    STATE(28), 1,
      sym_offset,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [175] = 3,
    ACTIONS(71), 1,
      aux_sym__offset_token1,
    STATE(22), 1,
      sym_offset,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [190] = 4,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym__offset_token1,
    STATE(23), 1,
      sym__offset,
    ACTIONS(77), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [207] = 4,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym__string,
    STATE(42), 1,
      sym__label_string,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [224] = 1,
    ACTIONS(85), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_AT,
      aux_sym__label_relative_token1,
      aux_sym__x_token1,
  [235] = 3,
    ACTIONS(89), 1,
      anon_sym_module,
    STATE(43), 1,
      sym__exportable,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [249] = 3,
    ACTIONS(35), 1,
      aux_sym__y_token1,
    STATE(49), 1,
      sym_y,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [263] = 3,
    ACTIONS(95), 1,
      anon_sym_svg,
    STATE(40), 1,
      sym_svg,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [277] = 3,
    ACTIONS(33), 1,
      aux_sym__x_token1,
    STATE(49), 1,
      sym_x,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [291] = 4,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      aux_sym_name_token1,
    STATE(37), 1,
      sym_font,
    ACTIONS(99), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [307] = 2,
    ACTIONS(105), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [319] = 4,
    ACTIONS(101), 1,
      aux_sym_name_token1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_font,
    ACTIONS(109), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [335] = 4,
    ACTIONS(101), 1,
      aux_sym_name_token1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_font,
    ACTIONS(113), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [351] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [360] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [371] = 2,
    ACTIONS(123), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [382] = 2,
    ACTIONS(127), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [393] = 2,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [404] = 2,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [415] = 1,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [424] = 2,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [435] = 2,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [446] = 1,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [455] = 2,
    ACTIONS(147), 1,
      anon_sym_script,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [466] = 2,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [477] = 1,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [485] = 1,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [493] = 1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [501] = 1,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [509] = 1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [517] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [525] = 1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [533] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [541] = 1,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [549] = 1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [557] = 1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [565] = 1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [573] = 1,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [581] = 1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [589] = 1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [597] = 1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [605] = 1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [613] = 1,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [621] = 1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [629] = 1,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [637] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      aux_sym__offset_token1,
    STATE(59), 1,
      sym__offset,
  [647] = 2,
    ACTIONS(193), 1,
      aux_sym__y_token1,
    STATE(21), 1,
      sym__y,
  [654] = 1,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
  [658] = 1,
    ACTIONS(197), 1,
      aux_sym__label_absolute_token1,
  [662] = 1,
    ACTIONS(199), 1,
      aux_sym__label_relative_token1,
  [666] = 1,
    ACTIONS(201), 1,
      anon_sym_COMMA,
  [670] = 1,
    ACTIONS(203), 1,
      sym_rgba,
  [674] = 1,
    ACTIONS(205), 1,
      anon_sym_COMMA,
  [678] = 1,
    ACTIONS(203), 1,
      sym_rgb,
  [682] = 1,
    ACTIONS(207), 1,
      anon_sym_COMMA,
  [686] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [690] = 1,
    ACTIONS(211), 1,
      anon_sym_COMMA,
  [694] = 1,
    ACTIONS(213), 1,
      aux_sym__label_absolute_token1,
  [698] = 1,
    ACTIONS(215), 1,
      aux_sym__string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 190,
  [SMALL_STATE(12)] = 207,
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 235,
  [SMALL_STATE(15)] = 249,
  [SMALL_STATE(16)] = 263,
  [SMALL_STATE(17)] = 277,
  [SMALL_STATE(18)] = 291,
  [SMALL_STATE(19)] = 307,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 351,
  [SMALL_STATE(23)] = 360,
  [SMALL_STATE(24)] = 371,
  [SMALL_STATE(25)] = 382,
  [SMALL_STATE(26)] = 393,
  [SMALL_STATE(27)] = 404,
  [SMALL_STATE(28)] = 415,
  [SMALL_STATE(29)] = 424,
  [SMALL_STATE(30)] = 435,
  [SMALL_STATE(31)] = 446,
  [SMALL_STATE(32)] = 455,
  [SMALL_STATE(33)] = 466,
  [SMALL_STATE(34)] = 477,
  [SMALL_STATE(35)] = 485,
  [SMALL_STATE(36)] = 493,
  [SMALL_STATE(37)] = 501,
  [SMALL_STATE(38)] = 509,
  [SMALL_STATE(39)] = 517,
  [SMALL_STATE(40)] = 525,
  [SMALL_STATE(41)] = 533,
  [SMALL_STATE(42)] = 541,
  [SMALL_STATE(43)] = 549,
  [SMALL_STATE(44)] = 557,
  [SMALL_STATE(45)] = 565,
  [SMALL_STATE(46)] = 573,
  [SMALL_STATE(47)] = 581,
  [SMALL_STATE(48)] = 589,
  [SMALL_STATE(49)] = 597,
  [SMALL_STATE(50)] = 605,
  [SMALL_STATE(51)] = 613,
  [SMALL_STATE(52)] = 621,
  [SMALL_STATE(53)] = 629,
  [SMALL_STATE(54)] = 637,
  [SMALL_STATE(55)] = 647,
  [SMALL_STATE(56)] = 654,
  [SMALL_STATE(57)] = 658,
  [SMALL_STATE(58)] = 662,
  [SMALL_STATE(59)] = 666,
  [SMALL_STATE(60)] = 670,
  [SMALL_STATE(61)] = 674,
  [SMALL_STATE(62)] = 678,
  [SMALL_STATE(63)] = 682,
  [SMALL_STATE(64)] = 686,
  [SMALL_STATE(65)] = 690,
  [SMALL_STATE(66)] = 694,
  [SMALL_STATE(67)] = 698,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
