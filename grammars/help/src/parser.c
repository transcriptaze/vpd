#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_new = 1,
  anon_sym_set = 2,
  anon_sym_load = 3,
  anon_sym_project = 4,
  anon_sym_script = 5,
  anon_sym_save = 6,
  anon_sym_timestamp = 7,
  anon_sym_COMMA = 8,
  anon_sym_gzip = 9,
  anon_sym_export = 10,
  anon_sym_panel = 11,
  anon_sym_svg = 12,
  anon_sym_light = 13,
  anon_sym_dark = 14,
  anon_sym_module = 15,
  anon_sym_origin = 16,
  anon_sym_background = 17,
  anon_sym_guide = 18,
  anon_sym_label = 19,
  anon_sym_AT = 20,
  aux_sym__label_absolute_token1 = 21,
  aux_sym__label_relative_token1 = 22,
  aux_sym_font_token1 = 23,
  aux_sym_fontsize_token1 = 24,
  anon_sym_left = 25,
  anon_sym_centre = 26,
  anon_sym_center = 27,
  anon_sym_right = 28,
  anon_sym_top = 29,
  anon_sym_middle = 30,
  anon_sym_baseline = 31,
  anon_sym_bottom = 32,
  aux_sym__rgb_token1 = 33,
  aux_sym__rgba_token1 = 34,
  aux_sym__x_token1 = 35,
  aux_sym__y_token1 = 36,
  aux_sym__offset_token1 = 37,
  anon_sym_DQUOTE = 38,
  aux_sym__string_token1 = 39,
  sym_command = 40,
  sym_new = 41,
  sym_set = 42,
  sym_load = 43,
  sym_save = 44,
  sym_project = 45,
  sym__save_options = 46,
  sym_export = 47,
  sym_panel = 48,
  sym_svg = 49,
  sym_module = 50,
  sym_origin = 51,
  sym_background = 52,
  sym_guide = 53,
  sym_label = 54,
  sym__label_string = 55,
  sym__label_absolute = 56,
  sym__label_relative = 57,
  sym__label_geometry = 58,
  sym_font = 59,
  sym_fontsize = 60,
  sym_halign = 61,
  sym_valign = 62,
  sym_colour = 63,
  sym__rgb = 64,
  sym__rgba = 65,
  sym_name = 66,
  sym_rgb = 67,
  sym_rgba = 68,
  sym_absolute = 69,
  sym__x = 70,
  sym__y = 71,
  sym_x = 72,
  sym_y = 73,
  sym__offset = 74,
  sym_offset = 75,
  sym__string = 76,
  aux_sym_command_repeat1 = 77,
  alias_sym_reference = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_COMMA] = ",",
  [anon_sym_gzip] = "gzip",
  [anon_sym_export] = "export",
  [anon_sym_panel] = "panel",
  [anon_sym_svg] = "svg",
  [anon_sym_light] = "light",
  [anon_sym_dark] = "dark",
  [anon_sym_module] = "module",
  [anon_sym_origin] = "origin",
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
  [sym_project] = "project",
  [sym__save_options] = "_save_options",
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
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_gzip] = anon_sym_gzip,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_dark] = anon_sym_dark,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_origin] = anon_sym_origin,
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
  [sym_project] = sym_project,
  [sym__save_options] = sym__save_options,
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
    .named = false,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gzip] = {
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
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym__save_options] = {
    .visible = false,
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
    [1] = sym_project,
  },
  [2] = {
    [0] = alias_sym_reference,
  },
  [3] = {
    [1] = sym_x,
  },
  [4] = {
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '0') ADVANCE(3);
      if (lookahead == '@') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'g') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(60);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(187);
      if (lookahead == 'm') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(187);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 70:
      if (lookahead == 'j') ADVANCE(34);
      END_STATE();
    case 71:
      if (lookahead == 'k') ADVANCE(180);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'z') ADVANCE(62);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 136:
      if (lookahead == 'w') ADVANCE(162);
      END_STATE();
    case 137:
      if (lookahead == 'x') ADVANCE(105);
      END_STATE();
    case 138:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(187);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(187);
      if (lookahead == 'm') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 156:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 157:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 158:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 159:
      if (eof) ADVANCE(161);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '@') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 160:
      if (eof) ADVANCE(161);
      if (lookahead == 'b') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(221);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 159},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 159},
  [8] = {.lex_state = 160},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 158},
  [13] = {.lex_state = 159},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 158},
  [20] = {.lex_state = 158},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 158},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 159},
  [27] = {.lex_state = 159},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 158},
  [30] = {.lex_state = 160},
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
  [41] = {.lex_state = 160},
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
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 160},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 159},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 159},
  [79] = {.lex_state = 141},
  [80] = {.lex_state = 158},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 159},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 158},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
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
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
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
    [sym_command] = STATE(89),
    [sym_new] = STATE(6),
    [sym_set] = STATE(6),
    [sym_load] = STATE(6),
    [sym_save] = STATE(6),
    [sym_export] = STATE(6),
    [aux_sym_command_repeat1] = STATE(6),
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
    STATE(90), 1,
      sym__x,
    STATE(47), 3,
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
  [26] = 8,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_font_token1,
    ACTIONS(29), 1,
      aux_sym__rgb_token1,
    ACTIONS(31), 1,
      aux_sym__rgba_token1,
    STATE(36), 1,
      sym_rgb,
    STATE(37), 1,
      sym_rgba,
    STATE(60), 1,
      sym_name,
    ACTIONS(25), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [55] = 5,
    ACTIONS(35), 1,
      anon_sym_module,
    ACTIONS(37), 1,
      anon_sym_guide,
    ACTIONS(39), 1,
      anon_sym_label,
    STATE(56), 3,
      sym_module,
      sym_guide,
      sym_label,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [78] = 7,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_new,
    ACTIONS(46), 1,
      anon_sym_set,
    ACTIONS(49), 1,
      anon_sym_load,
    ACTIONS(52), 1,
      anon_sym_save,
    ACTIONS(55), 1,
      anon_sym_export,
    STATE(5), 6,
      sym_new,
      sym_set,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [105] = 7,
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
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(5), 6,
      sym_new,
      sym_set,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [132] = 7,
    ACTIONS(62), 1,
      anon_sym_AT,
    ACTIONS(64), 1,
      aux_sym__x_token1,
    ACTIONS(66), 1,
      aux_sym__y_token1,
    STATE(28), 1,
      sym_x,
    STATE(31), 1,
      sym_y,
    STATE(66), 1,
      sym_absolute,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [159] = 3,
    STATE(55), 1,
      sym_halign,
    ACTIONS(70), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [177] = 5,
    ACTIONS(74), 1,
      aux_sym__rgb_token1,
    ACTIONS(76), 1,
      aux_sym__rgba_token1,
    STATE(50), 1,
      sym_colour,
    STATE(35), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(72), 6,
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
    STATE(58), 2,
      sym_origin,
      sym_background,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [218] = 4,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym__string,
    STATE(70), 1,
      sym__label_string,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [236] = 4,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      aux_sym__offset_token1,
    STATE(29), 1,
      sym__offset,
    ACTIONS(90), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [254] = 1,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_AT,
      aux_sym__label_relative_token1,
      aux_sym__x_token1,
  [266] = 3,
    ACTIONS(98), 1,
      aux_sym__offset_token1,
    STATE(42), 1,
      sym_offset,
    ACTIONS(96), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [282] = 3,
    ACTIONS(98), 1,
      aux_sym__offset_token1,
    STATE(43), 1,
      sym_offset,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [298] = 4,
    ACTIONS(104), 1,
      anon_sym_timestamp,
    ACTIONS(106), 1,
      anon_sym_gzip,
    STATE(54), 1,
      sym__save_options,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [316] = 3,
    ACTIONS(110), 1,
      anon_sym_svg,
    STATE(53), 1,
      sym_svg,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [331] = 3,
    ACTIONS(114), 1,
      aux_sym_fontsize_token1,
    STATE(57), 1,
      sym_fontsize,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [346] = 4,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      aux_sym_font_token1,
    STATE(46), 1,
      sym_font,
    ACTIONS(118), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [363] = 4,
    ACTIONS(120), 1,
      aux_sym_font_token1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_font,
    ACTIONS(124), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [380] = 2,
    ACTIONS(128), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [393] = 3,
    ACTIONS(132), 1,
      anon_sym_project,
    ACTIONS(134), 1,
      anon_sym_script,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [408] = 4,
    ACTIONS(120), 1,
      aux_sym_font_token1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_font,
    ACTIONS(138), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [425] = 3,
    ACTIONS(142), 1,
      anon_sym_panel,
    STATE(72), 1,
      sym_panel,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [440] = 3,
    ACTIONS(146), 1,
      anon_sym_project,
    STATE(69), 1,
      sym_project,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [455] = 3,
    ACTIONS(66), 1,
      aux_sym__y_token1,
    STATE(45), 1,
      sym_y,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [470] = 3,
    ACTIONS(64), 1,
      aux_sym__x_token1,
    STATE(45), 1,
      sym_x,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [485] = 2,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [497] = 2,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [509] = 2,
    ACTIONS(160), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [521] = 2,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [533] = 2,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [545] = 1,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [555] = 1,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [565] = 2,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [577] = 2,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [589] = 2,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [601] = 2,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [613] = 2,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [625] = 2,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [637] = 2,
    ACTIONS(194), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [649] = 1,
    ACTIONS(196), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [659] = 1,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [669] = 1,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [679] = 1,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [688] = 1,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [697] = 1,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [706] = 1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [715] = 1,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [724] = 1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [733] = 1,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [742] = 1,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [751] = 1,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [760] = 1,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [769] = 1,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [778] = 1,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [787] = 1,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [796] = 1,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [805] = 1,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [814] = 1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [823] = 1,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [832] = 1,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [841] = 1,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [850] = 1,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [859] = 1,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [868] = 1,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [877] = 1,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [886] = 1,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [895] = 1,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [904] = 1,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [913] = 1,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [922] = 1,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [931] = 2,
    STATE(51), 1,
      sym_valign,
    ACTIONS(254), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [941] = 3,
    ACTIONS(256), 1,
      aux_sym__rgb_token1,
    ACTIONS(258), 1,
      aux_sym__rgba_token1,
    STATE(48), 2,
      sym__rgb,
      sym__rgba,
  [952] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      aux_sym__offset_token1,
    STATE(81), 1,
      sym__offset,
  [962] = 2,
    ACTIONS(264), 1,
      aux_sym__y_token1,
    STATE(20), 1,
      sym__y,
  [969] = 2,
    ACTIONS(31), 1,
      aux_sym__rgba_token1,
    STATE(67), 1,
      sym_rgba,
  [976] = 2,
    ACTIONS(266), 1,
      aux_sym__rgb_token1,
    STATE(67), 1,
      sym_rgb,
  [983] = 1,
    ACTIONS(268), 1,
      aux_sym__string_token1,
  [987] = 1,
    ACTIONS(270), 1,
      aux_sym__label_absolute_token1,
  [991] = 1,
    ACTIONS(272), 1,
      anon_sym_COMMA,
  [995] = 1,
    ACTIONS(274), 1,
      aux_sym__label_relative_token1,
  [999] = 1,
    ACTIONS(276), 1,
      anon_sym_COMMA,
  [1003] = 1,
    ACTIONS(278), 1,
      anon_sym_timestamp,
  [1007] = 1,
    ACTIONS(278), 1,
      anon_sym_gzip,
  [1011] = 1,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
  [1015] = 1,
    ACTIONS(282), 1,
      aux_sym__label_absolute_token1,
  [1019] = 1,
    ACTIONS(284), 1,
      anon_sym_COMMA,
  [1023] = 1,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
  [1027] = 1,
    ACTIONS(288), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 199,
  [SMALL_STATE(11)] = 218,
  [SMALL_STATE(12)] = 236,
  [SMALL_STATE(13)] = 254,
  [SMALL_STATE(14)] = 266,
  [SMALL_STATE(15)] = 282,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 331,
  [SMALL_STATE(19)] = 346,
  [SMALL_STATE(20)] = 363,
  [SMALL_STATE(21)] = 380,
  [SMALL_STATE(22)] = 393,
  [SMALL_STATE(23)] = 408,
  [SMALL_STATE(24)] = 425,
  [SMALL_STATE(25)] = 440,
  [SMALL_STATE(26)] = 455,
  [SMALL_STATE(27)] = 470,
  [SMALL_STATE(28)] = 485,
  [SMALL_STATE(29)] = 497,
  [SMALL_STATE(30)] = 509,
  [SMALL_STATE(31)] = 521,
  [SMALL_STATE(32)] = 533,
  [SMALL_STATE(33)] = 545,
  [SMALL_STATE(34)] = 555,
  [SMALL_STATE(35)] = 565,
  [SMALL_STATE(36)] = 577,
  [SMALL_STATE(37)] = 589,
  [SMALL_STATE(38)] = 601,
  [SMALL_STATE(39)] = 613,
  [SMALL_STATE(40)] = 625,
  [SMALL_STATE(41)] = 637,
  [SMALL_STATE(42)] = 649,
  [SMALL_STATE(43)] = 659,
  [SMALL_STATE(44)] = 669,
  [SMALL_STATE(45)] = 679,
  [SMALL_STATE(46)] = 688,
  [SMALL_STATE(47)] = 697,
  [SMALL_STATE(48)] = 706,
  [SMALL_STATE(49)] = 715,
  [SMALL_STATE(50)] = 724,
  [SMALL_STATE(51)] = 733,
  [SMALL_STATE(52)] = 742,
  [SMALL_STATE(53)] = 751,
  [SMALL_STATE(54)] = 760,
  [SMALL_STATE(55)] = 769,
  [SMALL_STATE(56)] = 778,
  [SMALL_STATE(57)] = 787,
  [SMALL_STATE(58)] = 796,
  [SMALL_STATE(59)] = 805,
  [SMALL_STATE(60)] = 814,
  [SMALL_STATE(61)] = 823,
  [SMALL_STATE(62)] = 832,
  [SMALL_STATE(63)] = 841,
  [SMALL_STATE(64)] = 850,
  [SMALL_STATE(65)] = 859,
  [SMALL_STATE(66)] = 868,
  [SMALL_STATE(67)] = 877,
  [SMALL_STATE(68)] = 886,
  [SMALL_STATE(69)] = 895,
  [SMALL_STATE(70)] = 904,
  [SMALL_STATE(71)] = 913,
  [SMALL_STATE(72)] = 922,
  [SMALL_STATE(73)] = 931,
  [SMALL_STATE(74)] = 941,
  [SMALL_STATE(75)] = 952,
  [SMALL_STATE(76)] = 962,
  [SMALL_STATE(77)] = 969,
  [SMALL_STATE(78)] = 976,
  [SMALL_STATE(79)] = 983,
  [SMALL_STATE(80)] = 987,
  [SMALL_STATE(81)] = 991,
  [SMALL_STATE(82)] = 995,
  [SMALL_STATE(83)] = 999,
  [SMALL_STATE(84)] = 1003,
  [SMALL_STATE(85)] = 1007,
  [SMALL_STATE(86)] = 1011,
  [SMALL_STATE(87)] = 1015,
  [SMALL_STATE(88)] = 1019,
  [SMALL_STATE(89)] = 1023,
  [SMALL_STATE(90)] = 1027,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(10),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [286] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
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
