#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 1
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_new = 1,
  anon_sym_set = 2,
  anon_sym_load = 3,
  anon_sym_project = 4,
  anon_sym_script = 5,
  anon_sym_save = 6,
  anon_sym_export = 7,
  anon_sym_panel = 8,
  anon_sym_svg = 9,
  anon_sym_light = 10,
  anon_sym_dark = 11,
  anon_sym_module = 12,
  anon_sym_origin = 13,
  anon_sym_COMMA = 14,
  anon_sym_background = 15,
  anon_sym_guide = 16,
  anon_sym_label = 17,
  anon_sym_AT = 18,
  aux_sym__label_absolute_token1 = 19,
  aux_sym__label_relative_token1 = 20,
  aux_sym_font_token1 = 21,
  aux_sym_fontsize_token1 = 22,
  anon_sym_left = 23,
  anon_sym_centre = 24,
  anon_sym_center = 25,
  anon_sym_right = 26,
  anon_sym_top = 27,
  anon_sym_middle = 28,
  anon_sym_baseline = 29,
  anon_sym_bottom = 30,
  aux_sym__rgb_token1 = 31,
  aux_sym__rgba_token1 = 32,
  aux_sym__x_token1 = 33,
  aux_sym__y_token1 = 34,
  aux_sym__offset_token1 = 35,
  anon_sym_DQUOTE = 36,
  aux_sym__string_token1 = 37,
  sym_command = 38,
  sym_new = 39,
  sym_set = 40,
  sym_load = 41,
  sym_save = 42,
  sym_export = 43,
  sym_panel = 44,
  sym_svg = 45,
  sym_module = 46,
  sym_origin = 47,
  sym_background = 48,
  sym_guide = 49,
  sym_label = 50,
  sym__label_string = 51,
  sym__label_absolute = 52,
  sym__label_relative = 53,
  sym__label_geometry = 54,
  sym_font = 55,
  sym_fontsize = 56,
  sym_halign = 57,
  sym_valign = 58,
  sym_colour = 59,
  sym__rgb = 60,
  sym__rgba = 61,
  sym_name = 62,
  sym_rgb = 63,
  sym_rgba = 64,
  sym_absolute = 65,
  sym__x = 66,
  sym__y = 67,
  sym_x = 68,
  sym_y = 69,
  sym__offset = 70,
  sym_offset = 71,
  sym__string = 72,
  aux_sym_command_repeat1 = 73,
  alias_sym_reference = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
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
  [aux_sym__rgb_token1] = "_rgb_token1",
  [aux_sym__rgba_token1] = "_rgba_token1",
  [aux_sym__x_token1] = "_x_token1",
  [aux_sym__y_token1] = "_y_token1",
  [aux_sym__offset_token1] = "_offset_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "_string_token1",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_load] = "load",
  [sym_save] = "save",
  [sym_export] = "export",
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
  [sym_colour] = "colour",
  [sym__rgb] = "_rgb",
  [sym__rgba] = "_rgba",
  [sym_name] = "name",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
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
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_save] = anon_sym_save,
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
  [aux_sym__rgb_token1] = aux_sym__rgb_token1,
  [aux_sym__rgba_token1] = aux_sym__rgba_token1,
  [aux_sym__x_token1] = aux_sym__x_token1,
  [aux_sym__y_token1] = aux_sym__y_token1,
  [aux_sym__offset_token1] = aux_sym__offset_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_load] = sym_load,
  [sym_save] = sym_save,
  [sym_export] = sym_export,
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
  [sym_colour] = sym_colour,
  [sym__rgb] = sym__rgb,
  [sym__rgba] = sym__rgba,
  [sym_name] = sym_name,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
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
  [anon_sym_project] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
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
  [aux_sym__rgb_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__rgba_token1] = {
    .visible = false,
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
  [sym_save] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
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
  [sym_colour] = {
    .visible = true,
    .named = true,
  },
  [sym__rgb] = {
    .visible = false,
    .named = true,
  },
  [sym__rgba] = {
    .visible = false,
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
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(151);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == ',') ADVANCE(170);
      if (lookahead == '0') ADVANCE(3);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(88);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(177);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(207);
      if (lookahead == 'm') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 66:
      if (lookahead == 'j') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(167);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 126:
      if (lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 127:
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 128:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(207);
      if (lookahead == 'm') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 146:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 147:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 148:
      if (eof) ADVANCE(151);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 149:
      if (eof) ADVANCE(151);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 150:
      if (eof) ADVANCE(151);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(209);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 149},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 149},
  [7] = {.lex_state = 148},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 150},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 148},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 149},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 148},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 148},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 148},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 149},
  [25] = {.lex_state = 149},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 150},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 150},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 148},
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
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 150},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 149},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 149},
  [73] = {.lex_state = 131},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 148},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 149},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 148},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
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
    [aux_sym__rgb_token1] = ACTIONS(1),
    [aux_sym__rgba_token1] = ACTIONS(1),
    [aux_sym__x_token1] = ACTIONS(1),
    [aux_sym__y_token1] = ACTIONS(1),
    [aux_sym__offset_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(82),
    [sym_new] = STATE(5),
    [sym_set] = STATE(5),
    [sym_load] = STATE(5),
    [sym_save] = STATE(5),
    [sym_export] = STATE(5),
    [aux_sym_command_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_load] = ACTIONS(9),
    [anon_sym_save] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      aux_sym__label_relative_token1,
    ACTIONS(21), 1,
      aux_sym__x_token1,
    STATE(74), 1,
      sym__x,
    STATE(45), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(15), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [26] = 7,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_new,
    ACTIONS(28), 1,
      anon_sym_set,
    ACTIONS(31), 1,
      anon_sym_load,
    ACTIONS(34), 1,
      anon_sym_save,
    ACTIONS(37), 1,
      anon_sym_export,
    STATE(3), 6,
      sym_new,
      sym_set,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [53] = 5,
    ACTIONS(42), 1,
      anon_sym_module,
    ACTIONS(44), 1,
      anon_sym_guide,
    ACTIONS(46), 1,
      anon_sym_label,
    STATE(51), 3,
      sym_module,
      sym_guide,
      sym_label,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [76] = 7,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_load,
    ACTIONS(11), 1,
      anon_sym_save,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(3), 6,
      sym_new,
      sym_set,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [103] = 7,
    ACTIONS(52), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      aux_sym__x_token1,
    ACTIONS(56), 1,
      aux_sym__y_token1,
    STATE(28), 1,
      sym_x,
    STATE(29), 1,
      sym_y,
    STATE(62), 1,
      sym_absolute,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [130] = 8,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_font_token1,
    ACTIONS(64), 1,
      aux_sym__rgb_token1,
    ACTIONS(66), 1,
      aux_sym__rgba_token1,
    STATE(34), 1,
      sym_rgb,
    STATE(35), 1,
      sym_rgba,
    STATE(58), 1,
      sym_name,
    ACTIONS(60), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [159] = 5,
    ACTIONS(70), 1,
      aux_sym__rgb_token1,
    ACTIONS(72), 1,
      aux_sym__rgba_token1,
    STATE(47), 1,
      sym_colour,
    STATE(38), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [181] = 3,
    STATE(50), 1,
      sym_halign,
    ACTIONS(76), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(74), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [199] = 4,
    ACTIONS(80), 1,
      anon_sym_origin,
    ACTIONS(82), 1,
      anon_sym_background,
    STATE(55), 2,
      sym_origin,
      sym_background,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [218] = 3,
    ACTIONS(86), 1,
      aux_sym__offset_token1,
    STATE(39), 1,
      sym_offset,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [234] = 3,
    ACTIONS(86), 1,
      aux_sym__offset_token1,
    STATE(40), 1,
      sym_offset,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [250] = 4,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      aux_sym__offset_token1,
    STATE(36), 1,
      sym__offset,
    ACTIONS(92), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [268] = 4,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym__string,
    STATE(43), 1,
      sym__label_string,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [286] = 1,
    ACTIONS(100), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_AT,
      aux_sym__label_relative_token1,
      aux_sym__x_token1,
  [298] = 3,
    ACTIONS(104), 1,
      anon_sym_panel,
    STATE(66), 1,
      sym_panel,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [313] = 4,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      aux_sym_font_token1,
    STATE(56), 1,
      sym_font,
    ACTIONS(108), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [330] = 3,
    ACTIONS(114), 1,
      anon_sym_svg,
    STATE(53), 1,
      sym_svg,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [345] = 4,
    ACTIONS(110), 1,
      aux_sym_font_token1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_font,
    ACTIONS(118), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [362] = 3,
    ACTIONS(122), 1,
      aux_sym_fontsize_token1,
    STATE(54), 1,
      sym_fontsize,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [377] = 2,
    ACTIONS(126), 2,
      anon_sym_project,
      anon_sym_script,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [390] = 4,
    ACTIONS(110), 1,
      aux_sym_font_token1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_font,
    ACTIONS(130), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [407] = 2,
    ACTIONS(134), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [420] = 3,
    ACTIONS(54), 1,
      aux_sym__x_token1,
    STATE(59), 1,
      sym_x,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [435] = 3,
    ACTIONS(56), 1,
      aux_sym__y_token1,
    STATE(59), 1,
      sym_y,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [450] = 2,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [462] = 2,
    ACTIONS(144), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [474] = 2,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [486] = 2,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [498] = 2,
    ACTIONS(154), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [510] = 1,
    ACTIONS(156), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [520] = 1,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [530] = 2,
    ACTIONS(162), 1,
      anon_sym_project,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [542] = 2,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [554] = 2,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [566] = 2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [578] = 2,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [590] = 2,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [602] = 1,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [612] = 1,
    ACTIONS(184), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [622] = 1,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [632] = 1,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [641] = 1,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [650] = 1,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [659] = 1,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [668] = 1,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [677] = 1,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [686] = 1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [695] = 1,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [704] = 1,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [713] = 1,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [722] = 1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [731] = 1,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [740] = 1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [749] = 1,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [758] = 1,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [767] = 1,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [776] = 1,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [785] = 1,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [794] = 1,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [803] = 1,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [812] = 1,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [821] = 1,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [830] = 1,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [839] = 1,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [848] = 1,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [857] = 2,
    STATE(48), 1,
      sym_valign,
    ACTIONS(234), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [867] = 3,
    ACTIONS(236), 1,
      aux_sym__rgb_token1,
    ACTIONS(238), 1,
      aux_sym__rgba_token1,
    STATE(44), 2,
      sym__rgb,
      sym__rgba,
  [878] = 3,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      aux_sym__offset_token1,
    STATE(76), 1,
      sym__offset,
  [888] = 2,
    ACTIONS(244), 1,
      aux_sym__y_token1,
    STATE(19), 1,
      sym__y,
  [895] = 2,
    ACTIONS(66), 1,
      aux_sym__rgba_token1,
    STATE(42), 1,
      sym_rgba,
  [902] = 2,
    ACTIONS(246), 1,
      aux_sym__rgb_token1,
    STATE(42), 1,
      sym_rgb,
  [909] = 1,
    ACTIONS(248), 1,
      aux_sym__string_token1,
  [913] = 1,
    ACTIONS(250), 1,
      anon_sym_COMMA,
  [917] = 1,
    ACTIONS(252), 1,
      aux_sym__label_absolute_token1,
  [921] = 1,
    ACTIONS(254), 1,
      anon_sym_COMMA,
  [925] = 1,
    ACTIONS(256), 1,
      aux_sym__label_relative_token1,
  [929] = 1,
    ACTIONS(258), 1,
      anon_sym_COMMA,
  [933] = 1,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
  [937] = 1,
    ACTIONS(262), 1,
      aux_sym__label_absolute_token1,
  [941] = 1,
    ACTIONS(264), 1,
      anon_sym_COMMA,
  [945] = 1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 181,
  [SMALL_STATE(10)] = 199,
  [SMALL_STATE(11)] = 218,
  [SMALL_STATE(12)] = 234,
  [SMALL_STATE(13)] = 250,
  [SMALL_STATE(14)] = 268,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 313,
  [SMALL_STATE(18)] = 330,
  [SMALL_STATE(19)] = 345,
  [SMALL_STATE(20)] = 362,
  [SMALL_STATE(21)] = 377,
  [SMALL_STATE(22)] = 390,
  [SMALL_STATE(23)] = 407,
  [SMALL_STATE(24)] = 420,
  [SMALL_STATE(25)] = 435,
  [SMALL_STATE(26)] = 450,
  [SMALL_STATE(27)] = 462,
  [SMALL_STATE(28)] = 474,
  [SMALL_STATE(29)] = 486,
  [SMALL_STATE(30)] = 498,
  [SMALL_STATE(31)] = 510,
  [SMALL_STATE(32)] = 520,
  [SMALL_STATE(33)] = 530,
  [SMALL_STATE(34)] = 542,
  [SMALL_STATE(35)] = 554,
  [SMALL_STATE(36)] = 566,
  [SMALL_STATE(37)] = 578,
  [SMALL_STATE(38)] = 590,
  [SMALL_STATE(39)] = 602,
  [SMALL_STATE(40)] = 612,
  [SMALL_STATE(41)] = 622,
  [SMALL_STATE(42)] = 632,
  [SMALL_STATE(43)] = 641,
  [SMALL_STATE(44)] = 650,
  [SMALL_STATE(45)] = 659,
  [SMALL_STATE(46)] = 668,
  [SMALL_STATE(47)] = 677,
  [SMALL_STATE(48)] = 686,
  [SMALL_STATE(49)] = 695,
  [SMALL_STATE(50)] = 704,
  [SMALL_STATE(51)] = 713,
  [SMALL_STATE(52)] = 722,
  [SMALL_STATE(53)] = 731,
  [SMALL_STATE(54)] = 740,
  [SMALL_STATE(55)] = 749,
  [SMALL_STATE(56)] = 758,
  [SMALL_STATE(57)] = 767,
  [SMALL_STATE(58)] = 776,
  [SMALL_STATE(59)] = 785,
  [SMALL_STATE(60)] = 794,
  [SMALL_STATE(61)] = 803,
  [SMALL_STATE(62)] = 812,
  [SMALL_STATE(63)] = 821,
  [SMALL_STATE(64)] = 830,
  [SMALL_STATE(65)] = 839,
  [SMALL_STATE(66)] = 848,
  [SMALL_STATE(67)] = 857,
  [SMALL_STATE(68)] = 867,
  [SMALL_STATE(69)] = 878,
  [SMALL_STATE(70)] = 888,
  [SMALL_STATE(71)] = 895,
  [SMALL_STATE(72)] = 902,
  [SMALL_STATE(73)] = 909,
  [SMALL_STATE(74)] = 913,
  [SMALL_STATE(75)] = 917,
  [SMALL_STATE(76)] = 921,
  [SMALL_STATE(77)] = 925,
  [SMALL_STATE(78)] = 929,
  [SMALL_STATE(79)] = 933,
  [SMALL_STATE(80)] = 937,
  [SMALL_STATE(81)] = 941,
  [SMALL_STATE(82)] = 945,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(10),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(33),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(16),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [266] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
