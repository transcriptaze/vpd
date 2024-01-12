#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 1
#define TOKEN_COUNT 31
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
  aux_sym_fontsize_token1 = 21,
  anon_sym_left = 22,
  anon_sym_centre = 23,
  anon_sym_center = 24,
  anon_sym_right = 25,
  aux_sym__x_token1 = 26,
  aux_sym__y_token1 = 27,
  aux_sym__offset_token1 = 28,
  anon_sym_DQUOTE = 29,
  aux_sym__string_token1 = 30,
  sym_command = 31,
  sym_new = 32,
  sym_set = 33,
  sym_load = 34,
  sym_export = 35,
  sym__entity = 36,
  sym__exportable = 37,
  sym_svg = 38,
  sym_module = 39,
  sym_origin = 40,
  sym_background = 41,
  sym_guide = 42,
  sym_label = 43,
  sym__label_string = 44,
  sym__label_absolute = 45,
  sym__label_relative = 46,
  sym__label_geometry = 47,
  sym_name = 48,
  sym_font = 49,
  sym_fontsize = 50,
  sym_halign = 51,
  sym_absolute = 52,
  sym__x = 53,
  sym__y = 54,
  sym_x = 55,
  sym_y = 56,
  sym__offset = 57,
  sym_offset = 58,
  sym__string = 59,
  aux_sym_command_repeat1 = 60,
  alias_sym_reference = 61,
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
  [aux_sym_fontsize_token1] = "fontsize_token1",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
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
  [sym_fontsize] = "fontsize",
  [sym_halign] = "halign",
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
  [aux_sym_fontsize_token1] = aux_sym_fontsize_token1,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
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
  [sym_fontsize] = sym_fontsize,
  [sym_halign] = sym_halign,
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
  [aux_sym_fontsize_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_centre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
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
  [sym_fontsize] = {
    .visible = true,
    .named = true,
  },
  [sym_halign] = {
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
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '0') ADVANCE(3);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(68);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 97:
      if (lookahead == 'w') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 117:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 118:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 119:
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 120:
      if (eof) ADVANCE(122);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(170);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 120},
  [4] = {.lex_state = 120},
  [5] = {.lex_state = 121},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 119},
  [10] = {.lex_state = 119},
  [11] = {.lex_state = 120},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 119},
  [18] = {.lex_state = 119},
  [19] = {.lex_state = 119},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 120},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 121},
  [26] = {.lex_state = 121},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 119},
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
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 102},
  [61] = {.lex_state = 121},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 120},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 120},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 121},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
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
    [aux_sym_fontsize_token1] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [aux_sym__x_token1] = ACTIONS(1),
    [aux_sym__y_token1] = ACTIONS(1),
    [aux_sym__offset_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(70),
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
    STATE(71), 1,
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
    STATE(29), 1,
      sym_x,
    STATE(30), 1,
      sym_y,
    STATE(54), 1,
      sym_absolute,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [74] = 3,
    STATE(39), 1,
      sym_halign,
    ACTIONS(39), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [91] = 6,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_load,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(7), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [114] = 6,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_new,
    ACTIONS(48), 1,
      anon_sym_set,
    ACTIONS(51), 1,
      anon_sym_load,
    ACTIONS(54), 1,
      anon_sym_export,
    STATE(7), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [137] = 4,
    ACTIONS(59), 1,
      anon_sym_origin,
    ACTIONS(61), 1,
      anon_sym_background,
    STATE(52), 2,
      sym_origin,
      sym_background,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [155] = 6,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym_name_token1,
    ACTIONS(69), 1,
      sym_rgb,
    ACTIONS(71), 1,
      sym_rgba,
    STATE(45), 1,
      sym_name,
    ACTIONS(65), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [177] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym__offset_token1,
    STATE(28), 1,
      sym__offset,
    ACTIONS(75), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [194] = 1,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_AT,
      aux_sym__label_relative_token1,
      aux_sym__x_token1,
  [205] = 3,
    ACTIONS(83), 1,
      aux_sym__offset_token1,
    STATE(33), 1,
      sym_offset,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [220] = 3,
    ACTIONS(83), 1,
      aux_sym__offset_token1,
    STATE(34), 1,
      sym_offset,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [235] = 4,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym__string,
    STATE(55), 1,
      sym__label_string,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [252] = 3,
    ACTIONS(93), 1,
      aux_sym_fontsize_token1,
    STATE(41), 1,
      sym_fontsize,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [266] = 3,
    ACTIONS(97), 1,
      anon_sym_svg,
    STATE(44), 1,
      sym_svg,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [280] = 4,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      aux_sym_name_token1,
    STATE(50), 1,
      sym_font,
    ACTIONS(101), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [296] = 4,
    ACTIONS(103), 1,
      aux_sym_name_token1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_font,
    ACTIONS(107), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [312] = 4,
    ACTIONS(103), 1,
      aux_sym_name_token1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_font,
    ACTIONS(111), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [328] = 3,
    ACTIONS(115), 1,
      anon_sym_module,
    STATE(57), 1,
      sym__exportable,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [342] = 3,
    ACTIONS(33), 1,
      aux_sym__x_token1,
    STATE(36), 1,
      sym_x,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [356] = 3,
    ACTIONS(35), 1,
      aux_sym__y_token1,
    STATE(36), 1,
      sym_y,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [370] = 2,
    ACTIONS(121), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [382] = 2,
    ACTIONS(125), 1,
      anon_sym_script,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [393] = 2,
    ACTIONS(129), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [404] = 2,
    ACTIONS(133), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [415] = 2,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [426] = 2,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [437] = 2,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [448] = 2,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [459] = 2,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [470] = 2,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [481] = 1,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [490] = 1,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [499] = 1,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [508] = 1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [516] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [524] = 1,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [532] = 1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [540] = 1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [548] = 1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [556] = 1,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [564] = 1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [572] = 1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [580] = 1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [588] = 1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [596] = 1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [604] = 1,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [612] = 1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [620] = 1,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [628] = 1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [636] = 1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [644] = 1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [652] = 1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [660] = 1,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [668] = 1,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [676] = 1,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [684] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      aux_sym__offset_token1,
    STATE(62), 1,
      sym__offset,
  [694] = 2,
    ACTIONS(205), 1,
      aux_sym__y_token1,
    STATE(18), 1,
      sym__y,
  [701] = 1,
    ACTIONS(207), 1,
      aux_sym__string_token1,
  [705] = 1,
    ACTIONS(209), 1,
      aux_sym__label_absolute_token1,
  [709] = 1,
    ACTIONS(211), 1,
      anon_sym_COMMA,
  [713] = 1,
    ACTIONS(213), 1,
      aux_sym__label_relative_token1,
  [717] = 1,
    ACTIONS(215), 1,
      anon_sym_COMMA,
  [721] = 1,
    ACTIONS(217), 1,
      sym_rgba,
  [725] = 1,
    ACTIONS(217), 1,
      sym_rgb,
  [729] = 1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
  [733] = 1,
    ACTIONS(221), 1,
      aux_sym__label_absolute_token1,
  [737] = 1,
    ACTIONS(223), 1,
      anon_sym_COMMA,
  [741] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [745] = 1,
    ACTIONS(227), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 194,
  [SMALL_STATE(12)] = 205,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 235,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 266,
  [SMALL_STATE(17)] = 280,
  [SMALL_STATE(18)] = 296,
  [SMALL_STATE(19)] = 312,
  [SMALL_STATE(20)] = 328,
  [SMALL_STATE(21)] = 342,
  [SMALL_STATE(22)] = 356,
  [SMALL_STATE(23)] = 370,
  [SMALL_STATE(24)] = 382,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 404,
  [SMALL_STATE(27)] = 415,
  [SMALL_STATE(28)] = 426,
  [SMALL_STATE(29)] = 437,
  [SMALL_STATE(30)] = 448,
  [SMALL_STATE(31)] = 459,
  [SMALL_STATE(32)] = 470,
  [SMALL_STATE(33)] = 481,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 499,
  [SMALL_STATE(36)] = 508,
  [SMALL_STATE(37)] = 516,
  [SMALL_STATE(38)] = 524,
  [SMALL_STATE(39)] = 532,
  [SMALL_STATE(40)] = 540,
  [SMALL_STATE(41)] = 548,
  [SMALL_STATE(42)] = 556,
  [SMALL_STATE(43)] = 564,
  [SMALL_STATE(44)] = 572,
  [SMALL_STATE(45)] = 580,
  [SMALL_STATE(46)] = 588,
  [SMALL_STATE(47)] = 596,
  [SMALL_STATE(48)] = 604,
  [SMALL_STATE(49)] = 612,
  [SMALL_STATE(50)] = 620,
  [SMALL_STATE(51)] = 628,
  [SMALL_STATE(52)] = 636,
  [SMALL_STATE(53)] = 644,
  [SMALL_STATE(54)] = 652,
  [SMALL_STATE(55)] = 660,
  [SMALL_STATE(56)] = 668,
  [SMALL_STATE(57)] = 676,
  [SMALL_STATE(58)] = 684,
  [SMALL_STATE(59)] = 694,
  [SMALL_STATE(60)] = 701,
  [SMALL_STATE(61)] = 705,
  [SMALL_STATE(62)] = 709,
  [SMALL_STATE(63)] = 713,
  [SMALL_STATE(64)] = 717,
  [SMALL_STATE(65)] = 721,
  [SMALL_STATE(66)] = 725,
  [SMALL_STATE(67)] = 729,
  [SMALL_STATE(68)] = 733,
  [SMALL_STATE(69)] = 737,
  [SMALL_STATE(70)] = 741,
  [SMALL_STATE(71)] = 745,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(20),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [225] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
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
