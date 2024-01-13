#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 1
#define TOKEN_COUNT 36
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
  anon_sym_panel = 6,
  anon_sym_svg = 7,
  anon_sym_light = 8,
  anon_sym_dark = 9,
  anon_sym_module = 10,
  anon_sym_origin = 11,
  anon_sym_COMMA = 12,
  anon_sym_background = 13,
  anon_sym_guide = 14,
  anon_sym_label = 15,
  anon_sym_AT = 16,
  aux_sym__label_absolute_token1 = 17,
  aux_sym__label_relative_token1 = 18,
  aux_sym_font_token1 = 19,
  aux_sym_fontsize_token1 = 20,
  anon_sym_left = 21,
  anon_sym_centre = 22,
  anon_sym_center = 23,
  anon_sym_right = 24,
  anon_sym_top = 25,
  anon_sym_middle = 26,
  anon_sym_baseline = 27,
  anon_sym_bottom = 28,
  sym_rgb = 29,
  sym_rgba = 30,
  aux_sym__x_token1 = 31,
  aux_sym__y_token1 = 32,
  aux_sym__offset_token1 = 33,
  anon_sym_DQUOTE = 34,
  aux_sym__string_token1 = 35,
  sym_command = 36,
  sym_new = 37,
  sym_set = 38,
  sym_load = 39,
  sym_export = 40,
  sym__entity = 41,
  sym_panel = 42,
  sym_svg = 43,
  sym_module = 44,
  sym_origin = 45,
  sym_background = 46,
  sym_guide = 47,
  sym_label = 48,
  sym__label_string = 49,
  sym__label_absolute = 50,
  sym__label_relative = 51,
  sym__label_geometry = 52,
  sym_font = 53,
  sym_fontsize = 54,
  sym_halign = 55,
  sym_valign = 56,
  sym_name = 57,
  sym_absolute = 58,
  sym__x = 59,
  sym__y = 60,
  sym_x = 61,
  sym_y = 62,
  sym__offset = 63,
  sym_offset = 64,
  sym__string = 65,
  aux_sym_command_repeat1 = 66,
  alias_sym_reference = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_load] = "load",
  [anon_sym_script] = "script",
  [anon_sym_export] = "export",
  [anon_sym_panel] = "panel",
  [anon_sym_svg] = "svg",
  [anon_sym_light] = "light",
  [anon_sym_dark] = "dark",
  [anon_sym_module] = "module",
  [anon_sym_origin] = "origin",
  [anon_sym_COMMA] = ",",
  [anon_sym_background] = "background",
  [anon_sym_guide] = "guide",
  [anon_sym_label] = "label",
  [anon_sym_AT] = "@",
  [aux_sym__label_absolute_token1] = "_label_absolute_token1",
  [aux_sym__label_relative_token1] = "_label_relative_token1",
  [aux_sym_font_token1] = "font_token1",
  [aux_sym_fontsize_token1] = "fontsize_token1",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_baseline] = "baseline",
  [anon_sym_bottom] = "bottom",
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
  [sym_panel] = "panel",
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
  [sym_font] = "font",
  [sym_fontsize] = "fontsize",
  [sym_halign] = "halign",
  [sym_valign] = "valign",
  [sym_name] = "name",
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
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_dark] = anon_sym_dark,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_background] = anon_sym_background,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__label_absolute_token1] = aux_sym__label_absolute_token1,
  [aux_sym__label_relative_token1] = aux_sym__label_relative_token1,
  [aux_sym_font_token1] = aux_sym_font_token1,
  [aux_sym_fontsize_token1] = aux_sym_fontsize_token1,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_baseline] = anon_sym_baseline,
  [anon_sym_bottom] = anon_sym_bottom,
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
  [sym_panel] = sym_panel,
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
  [sym_font] = sym_font,
  [sym_fontsize] = sym_fontsize,
  [sym_halign] = sym_halign,
  [sym_valign] = sym_valign,
  [sym_name] = sym_name,
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
  [anon_sym_panel] = {
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
  [aux_sym_font_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_middle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_baseline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottom] = {
    .visible = true,
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
  [sym_panel] = {
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
  [sym_valign] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(144);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == ',') ADVANCE(160);
      if (lookahead == '0') ADVANCE(3);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'g') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 't') ADVANCE(83);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(167);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'v') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(157);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 119:
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 121:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 139:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 140:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 141:
      if (eof) ADVANCE(144);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 142:
      if (eof) ADVANCE(144);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 143:
      if (eof) ADVANCE(144);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(197);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 142},
  [4] = {.lex_state = 142},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 143},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 141},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 141},
  [12] = {.lex_state = 142},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 142},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 141},
  [19] = {.lex_state = 141},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 141},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 142},
  [24] = {.lex_state = 141},
  [25] = {.lex_state = 143},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 143},
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
  [41] = {.lex_state = 143},
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
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 142},
  [63] = {.lex_state = 124},
  [64] = {.lex_state = 143},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 142},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 142},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 143},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__label_absolute_token1] = ACTIONS(1),
    [aux_sym__label_relative_token1] = ACTIONS(1),
    [aux_sym_fontsize_token1] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_baseline] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [sym_rgb] = ACTIONS(1),
    [sym_rgba] = ACTIONS(1),
    [aux_sym__x_token1] = ACTIONS(1),
    [aux_sym__y_token1] = ACTIONS(1),
    [aux_sym__offset_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(73),
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
    STATE(38), 4,
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
    STATE(74), 1,
      sym__x,
    STATE(51), 3,
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
    STATE(55), 1,
      sym_absolute,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [74] = 6,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_new,
    ACTIONS(42), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_load,
    ACTIONS(48), 1,
      anon_sym_export,
    STATE(5), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [97] = 6,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_load,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(5), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [120] = 3,
    STATE(42), 1,
      sym_halign,
    ACTIONS(55), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [137] = 4,
    ACTIONS(59), 1,
      anon_sym_origin,
    ACTIONS(61), 1,
      anon_sym_background,
    STATE(53), 2,
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
      aux_sym_font_token1,
    ACTIONS(69), 1,
      sym_rgb,
    ACTIONS(71), 1,
      sym_rgba,
    STATE(49), 1,
      sym_name,
    ACTIONS(65), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [177] = 4,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym__string,
    STATE(58), 1,
      sym__label_string,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [194] = 4,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym__offset_token1,
    STATE(24), 1,
      sym__offset,
    ACTIONS(79), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_font_token1,
  [211] = 1,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_AT,
      aux_sym__label_relative_token1,
      aux_sym__x_token1,
  [222] = 3,
    ACTIONS(87), 1,
      aux_sym__offset_token1,
    STATE(35), 1,
      sym_offset,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [237] = 3,
    ACTIONS(87), 1,
      aux_sym__offset_token1,
    STATE(34), 1,
      sym_offset,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [252] = 2,
    ACTIONS(93), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [264] = 3,
    ACTIONS(33), 1,
      aux_sym__x_token1,
    STATE(37), 1,
      sym_x,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [278] = 3,
    ACTIONS(99), 1,
      aux_sym_fontsize_token1,
    STATE(44), 1,
      sym_fontsize,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [292] = 4,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_font_token1,
    STATE(47), 1,
      sym_font,
    ACTIONS(103), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [308] = 4,
    ACTIONS(105), 1,
      aux_sym_font_token1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_font,
    ACTIONS(109), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [324] = 3,
    ACTIONS(113), 1,
      anon_sym_svg,
    STATE(45), 1,
      sym_svg,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [338] = 4,
    ACTIONS(105), 1,
      aux_sym_font_token1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_font,
    ACTIONS(117), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [354] = 3,
    ACTIONS(121), 1,
      anon_sym_panel,
    STATE(60), 1,
      sym_panel,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [368] = 3,
    ACTIONS(35), 1,
      aux_sym__y_token1,
    STATE(37), 1,
      sym_y,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [382] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_font_token1,
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
      anon_sym_COMMA,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [415] = 2,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [426] = 2,
    ACTIONS(139), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [437] = 2,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [448] = 2,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [459] = 2,
    ACTIONS(149), 1,
      anon_sym_script,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [470] = 2,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [481] = 2,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [492] = 1,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [501] = 1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [510] = 1,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      anon_sym_COMMA,
  [519] = 1,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [527] = 1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [535] = 1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [543] = 1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [551] = 2,
    STATE(39), 1,
      sym_valign,
    ACTIONS(173), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [561] = 1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [569] = 1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [577] = 1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [585] = 1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [593] = 1,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [601] = 1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [609] = 1,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [617] = 1,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [625] = 1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [633] = 1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [641] = 1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [649] = 1,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [657] = 1,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [665] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [673] = 1,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [681] = 1,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [689] = 1,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [697] = 1,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [705] = 1,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [713] = 3,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      aux_sym__offset_token1,
    STATE(65), 1,
      sym__offset,
  [723] = 2,
    ACTIONS(213), 1,
      aux_sym__y_token1,
    STATE(19), 1,
      sym__y,
  [730] = 1,
    ACTIONS(215), 1,
      aux_sym__string_token1,
  [734] = 1,
    ACTIONS(217), 1,
      aux_sym__label_absolute_token1,
  [738] = 1,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [742] = 1,
    ACTIONS(221), 1,
      aux_sym__label_relative_token1,
  [746] = 1,
    ACTIONS(223), 1,
      anon_sym_COMMA,
  [750] = 1,
    ACTIONS(225), 1,
      sym_rgba,
  [754] = 1,
    ACTIONS(225), 1,
      sym_rgb,
  [758] = 1,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
  [762] = 1,
    ACTIONS(229), 1,
      aux_sym__label_absolute_token1,
  [766] = 1,
    ACTIONS(231), 1,
      anon_sym_COMMA,
  [770] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [774] = 1,
    ACTIONS(235), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 194,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 222,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 264,
  [SMALL_STATE(17)] = 278,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 324,
  [SMALL_STATE(21)] = 338,
  [SMALL_STATE(22)] = 354,
  [SMALL_STATE(23)] = 368,
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
  [SMALL_STATE(34)] = 492,
  [SMALL_STATE(35)] = 501,
  [SMALL_STATE(36)] = 510,
  [SMALL_STATE(37)] = 519,
  [SMALL_STATE(38)] = 527,
  [SMALL_STATE(39)] = 535,
  [SMALL_STATE(40)] = 543,
  [SMALL_STATE(41)] = 551,
  [SMALL_STATE(42)] = 561,
  [SMALL_STATE(43)] = 569,
  [SMALL_STATE(44)] = 577,
  [SMALL_STATE(45)] = 585,
  [SMALL_STATE(46)] = 593,
  [SMALL_STATE(47)] = 601,
  [SMALL_STATE(48)] = 609,
  [SMALL_STATE(49)] = 617,
  [SMALL_STATE(50)] = 625,
  [SMALL_STATE(51)] = 633,
  [SMALL_STATE(52)] = 641,
  [SMALL_STATE(53)] = 649,
  [SMALL_STATE(54)] = 657,
  [SMALL_STATE(55)] = 665,
  [SMALL_STATE(56)] = 673,
  [SMALL_STATE(57)] = 681,
  [SMALL_STATE(58)] = 689,
  [SMALL_STATE(59)] = 697,
  [SMALL_STATE(60)] = 705,
  [SMALL_STATE(61)] = 713,
  [SMALL_STATE(62)] = 723,
  [SMALL_STATE(63)] = 730,
  [SMALL_STATE(64)] = 734,
  [SMALL_STATE(65)] = 738,
  [SMALL_STATE(66)] = 742,
  [SMALL_STATE(67)] = 746,
  [SMALL_STATE(68)] = 750,
  [SMALL_STATE(69)] = 754,
  [SMALL_STATE(70)] = 758,
  [SMALL_STATE(71)] = 762,
  [SMALL_STATE(72)] = 766,
  [SMALL_STATE(73)] = 770,
  [SMALL_STATE(74)] = 774,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(31),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
