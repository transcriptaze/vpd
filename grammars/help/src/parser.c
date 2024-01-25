#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 2
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_new = 1,
  anon_sym_set = 2,
  anon_sym_decorate = 3,
  anon_sym_LPAREN = 4,
  anon_sym_input = 5,
  anon_sym_output = 6,
  anon_sym_parameter = 7,
  anon_sym_light = 8,
  anon_sym_widget = 9,
  anon_sym_RPAREN = 10,
  anon_sym_with = 11,
  anon_sym_load = 12,
  anon_sym_project = 13,
  anon_sym_script = 14,
  anon_sym_save = 15,
  anon_sym_timestamp = 16,
  anon_sym_COMMA = 17,
  anon_sym_gzip = 18,
  anon_sym_export = 19,
  anon_sym_panel = 20,
  anon_sym_svg = 21,
  anon_sym_dark = 22,
  anon_sym_module = 23,
  anon_sym_origin = 24,
  anon_sym_background = 25,
  anon_sym_guide = 26,
  anon_sym_label = 27,
  anon_sym_AT = 28,
  aux_sym__label_absolute_token1 = 29,
  aux_sym__label_relative_token1 = 30,
  aux_sym_font_token1 = 31,
  aux_sym_fontsize_token1 = 32,
  anon_sym_left = 33,
  anon_sym_centre = 34,
  anon_sym_center = 35,
  anon_sym_right = 36,
  anon_sym_top = 37,
  anon_sym_middle = 38,
  anon_sym_baseline = 39,
  anon_sym_bottom = 40,
  aux_sym__rgb_token1 = 41,
  aux_sym__rgba_token1 = 42,
  aux_sym__x_token1 = 43,
  aux_sym__y_token1 = 44,
  aux_sym__offset_token1 = 45,
  anon_sym_DQUOTE = 46,
  aux_sym__string_token1 = 47,
  sym_command = 48,
  sym_new = 49,
  sym_set = 50,
  sym_decorate = 51,
  sym__component = 52,
  sym_decoration = 53,
  sym_load = 54,
  sym_save = 55,
  sym_project = 56,
  sym__save_options = 57,
  sym_script = 58,
  sym_export = 59,
  sym_panel = 60,
  sym_svg = 61,
  sym_module = 62,
  sym_origin = 63,
  sym_background = 64,
  sym_guide = 65,
  sym_label = 66,
  sym__label_string = 67,
  sym__label_absolute = 68,
  sym__label_relative = 69,
  sym__label_geometry = 70,
  sym_font = 71,
  sym_fontsize = 72,
  sym_halign = 73,
  sym_valign = 74,
  sym_colour = 75,
  sym__rgb = 76,
  sym__rgba = 77,
  sym_name = 78,
  sym_rgb = 79,
  sym_rgba = 80,
  sym_absolute = 81,
  sym__x = 82,
  sym__y = 83,
  sym_x = 84,
  sym_y = 85,
  sym__offset = 86,
  sym_offset = 87,
  sym__string = 88,
  aux_sym_command_repeat1 = 89,
  alias_sym_light = 90,
  alias_sym_reference = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_decorate] = "decorate",
  [anon_sym_LPAREN] = "(",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_RPAREN] = ")",
  [anon_sym_with] = "with",
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
  [sym_decorate] = "decorate",
  [sym__component] = "component",
  [sym_decoration] = "decoration",
  [sym_load] = "load",
  [sym_save] = "save",
  [sym_project] = "project",
  [sym__save_options] = "_save_options",
  [sym_script] = "script",
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
  [alias_sym_light] = "light",
  [alias_sym_reference] = "reference",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_with] = anon_sym_with,
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
  [sym_decorate] = sym_decorate,
  [sym__component] = sym__component,
  [sym_decoration] = sym_decoration,
  [sym_load] = sym_load,
  [sym_save] = sym_save,
  [sym_project] = sym_project,
  [sym__save_options] = sym__save_options,
  [sym_script] = sym_script,
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
  [alias_sym_light] = alias_sym_light,
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
  [anon_sym_decorate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
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
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_light] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_widget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
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
    .named = false,
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
  [sym_decorate] = {
    .visible = true,
    .named = true,
  },
  [sym__component] = {
    .visible = true,
    .named = true,
  },
  [sym_decoration] = {
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
  [sym_script] = {
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
  [alias_sym_light] = {
    .visible = true,
    .named = true,
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
    [1] = sym_script,
  },
  [3] = {
    [0] = alias_sym_reference,
  },
  [4] = {
    [1] = sym_x,
  },
  [5] = {
    [1] = alias_sym_light,
  },
  [6] = {
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
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(189);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(202);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '0') ADVANCE(4);
      if (lookahead == '@') ADVANCE(223);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(72);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(263);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 83:
      if (lookahead == 'j') ADVANCE(47);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(217);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'z') ADVANCE(78);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 163:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 164:
      if (lookahead == 'w') ADVANCE(190);
      END_STATE();
    case 165:
      if (lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(263);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 184:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 185:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 186:
      if (eof) ADVANCE(189);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 187:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '@') ADVANCE(223);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 188:
      if (eof) ADVANCE(189);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 187},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 187},
  [7] = {.lex_state = 186},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 188},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 186},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 187},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 186},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 186},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 187},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 186},
  [27] = {.lex_state = 186},
  [28] = {.lex_state = 187},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 186},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 188},
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
  [45] = {.lex_state = 188},
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
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 188},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 187},
  [89] = {.lex_state = 187},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 186},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 187},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 186},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 169},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
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
    [sym_command] = STATE(99),
    [sym_new] = STATE(3),
    [sym_set] = STATE(3),
    [sym_decorate] = STATE(3),
    [sym_load] = STATE(3),
    [sym_save] = STATE(3),
    [sym_export] = STATE(3),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_decorate] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(11),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_export] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      aux_sym__label_relative_token1,
    ACTIONS(23), 1,
      aux_sym__x_token1,
    STATE(100), 1,
      sym__x,
    STATE(53), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [27] = 8,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_decorate,
    ACTIONS(11), 1,
      anon_sym_load,
    ACTIONS(13), 1,
      anon_sym_save,
    ACTIONS(15), 1,
      anon_sym_export,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(4), 7,
      sym_new,
      sym_set,
      sym_decorate,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [58] = 8,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(32), 1,
      anon_sym_set,
    ACTIONS(35), 1,
      anon_sym_decorate,
    ACTIONS(38), 1,
      anon_sym_load,
    ACTIONS(41), 1,
      anon_sym_save,
    ACTIONS(44), 1,
      anon_sym_export,
    STATE(4), 7,
      sym_new,
      sym_set,
      sym_decorate,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [89] = 5,
    ACTIONS(49), 1,
      anon_sym_module,
    ACTIONS(51), 1,
      anon_sym_guide,
    ACTIONS(53), 1,
      anon_sym_label,
    STATE(62), 3,
      sym_module,
      sym_guide,
      sym_label,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [113] = 7,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      aux_sym__x_token1,
    ACTIONS(61), 1,
      aux_sym__y_token1,
    STATE(34), 1,
      sym_x,
    STATE(35), 1,
      sym_y,
    STATE(68), 1,
      sym_absolute,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [141] = 8,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym_font_token1,
    ACTIONS(69), 1,
      aux_sym__rgb_token1,
    ACTIONS(71), 1,
      aux_sym__rgba_token1,
    STATE(40), 1,
      sym_rgb,
    STATE(41), 1,
      sym_rgba,
    STATE(63), 1,
      sym_name,
    ACTIONS(65), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [171] = 5,
    ACTIONS(75), 1,
      aux_sym__rgb_token1,
    ACTIONS(77), 1,
      aux_sym__rgba_token1,
    STATE(55), 1,
      sym_colour,
    STATE(32), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [194] = 3,
    STATE(61), 1,
      sym_halign,
    ACTIONS(81), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [213] = 4,
    ACTIONS(85), 1,
      anon_sym_origin,
    ACTIONS(87), 1,
      anon_sym_background,
    STATE(65), 2,
      sym_origin,
      sym_background,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [233] = 4,
    ACTIONS(91), 1,
      anon_sym_project,
    ACTIONS(93), 1,
      anon_sym_script,
    STATE(81), 2,
      sym_project,
      sym_script,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [253] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      aux_sym__offset_token1,
    STATE(31), 1,
      sym__offset,
    ACTIONS(97), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [272] = 3,
    ACTIONS(103), 1,
      aux_sym__offset_token1,
    STATE(46), 1,
      sym_offset,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [289] = 3,
    ACTIONS(103), 1,
      aux_sym__offset_token1,
    STATE(48), 1,
      sym_offset,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [306] = 1,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_AT,
      aux_sym__label_relative_token1,
      aux_sym__x_token1,
  [319] = 4,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym__string,
    STATE(73), 1,
      sym__label_string,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [338] = 4,
    ACTIONS(115), 1,
      anon_sym_timestamp,
    ACTIONS(117), 1,
      anon_sym_gzip,
    STATE(60), 1,
      sym__save_options,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [357] = 4,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      aux_sym_font_token1,
    STATE(71), 1,
      sym_font,
    ACTIONS(121), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [375] = 3,
    ACTIONS(127), 1,
      anon_sym_panel,
    STATE(80), 1,
      sym_panel,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [391] = 4,
    ACTIONS(123), 1,
      aux_sym_font_token1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_font,
    ACTIONS(131), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [409] = 3,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym__component,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [425] = 3,
    ACTIONS(139), 1,
      anon_sym_light,
    ACTIONS(141), 1,
      anon_sym_dark,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [441] = 3,
    ACTIONS(61), 1,
      aux_sym__y_token1,
    STATE(74), 1,
      sym_y,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [457] = 3,
    ACTIONS(147), 1,
      anon_sym_svg,
    STATE(58), 1,
      sym_svg,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [473] = 3,
    ACTIONS(151), 1,
      aux_sym_fontsize_token1,
    STATE(64), 1,
      sym_fontsize,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [489] = 4,
    ACTIONS(123), 1,
      aux_sym_font_token1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_font,
    ACTIONS(155), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [507] = 4,
    ACTIONS(67), 1,
      aux_sym_font_token1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_name,
    ACTIONS(159), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [525] = 3,
    ACTIONS(59), 1,
      aux_sym__x_token1,
    STATE(74), 1,
      sym_x,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [541] = 3,
    ACTIONS(163), 1,
      anon_sym_project,
    ACTIONS(165), 1,
      anon_sym_script,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [557] = 3,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_decoration,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [573] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [586] = 2,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [599] = 2,
    ACTIONS(181), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [612] = 2,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [625] = 2,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [638] = 1,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [649] = 1,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [660] = 1,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [671] = 2,
    ACTIONS(197), 1,
      anon_sym_timestamp,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [684] = 2,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [697] = 2,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [710] = 2,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(205), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [723] = 2,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(209), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [736] = 2,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(209), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [749] = 2,
    ACTIONS(217), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [762] = 1,
    ACTIONS(219), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [773] = 2,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [786] = 1,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [797] = 1,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [808] = 1,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [818] = 1,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [828] = 1,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [838] = 1,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [848] = 1,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [858] = 1,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [868] = 1,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [878] = 1,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [888] = 1,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [898] = 1,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [908] = 1,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [918] = 1,
    ACTIONS(251), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [928] = 1,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [938] = 1,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [948] = 1,
    ACTIONS(255), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [958] = 1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [968] = 1,
    ACTIONS(259), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [978] = 1,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [988] = 1,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [998] = 1,
    ACTIONS(263), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1008] = 1,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1018] = 1,
    ACTIONS(267), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1028] = 1,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1038] = 1,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1048] = 1,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1058] = 1,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1068] = 1,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1078] = 1,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1088] = 1,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1098] = 1,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1108] = 1,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1118] = 1,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1128] = 2,
    STATE(56), 1,
      sym_valign,
    ACTIONS(289), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1138] = 1,
    ACTIONS(291), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [1146] = 3,
    ACTIONS(293), 1,
      aux_sym__rgb_token1,
    ACTIONS(295), 1,
      aux_sym__rgba_token1,
    STATE(52), 2,
      sym__rgb,
      sym__rgba,
  [1157] = 3,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      aux_sym__offset_token1,
    STATE(101), 1,
      sym__offset,
  [1167] = 2,
    ACTIONS(71), 1,
      aux_sym__rgba_token1,
    STATE(50), 1,
      sym_rgba,
  [1174] = 2,
    ACTIONS(301), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
  [1181] = 2,
    ACTIONS(303), 1,
      aux_sym__y_token1,
    STATE(26), 1,
      sym__y,
  [1188] = 2,
    ACTIONS(305), 1,
      aux_sym__rgb_token1,
    STATE(50), 1,
      sym_rgb,
  [1195] = 1,
    ACTIONS(307), 1,
      anon_sym_timestamp,
  [1199] = 1,
    ACTIONS(309), 1,
      anon_sym_COMMA,
  [1203] = 1,
    ACTIONS(311), 1,
      aux_sym__label_absolute_token1,
  [1207] = 1,
    ACTIONS(307), 1,
      anon_sym_gzip,
  [1211] = 1,
    ACTIONS(313), 1,
      anon_sym_with,
  [1215] = 1,
    ACTIONS(315), 1,
      anon_sym_COMMA,
  [1219] = 1,
    ACTIONS(317), 1,
      aux_sym__label_relative_token1,
  [1223] = 1,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
  [1227] = 1,
    ACTIONS(321), 1,
      aux_sym__label_absolute_token1,
  [1231] = 1,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
  [1235] = 1,
    ACTIONS(325), 1,
      anon_sym_COMMA,
  [1239] = 1,
    ACTIONS(327), 1,
      anon_sym_COMMA,
  [1243] = 1,
    ACTIONS(329), 1,
      aux_sym__string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 113,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 213,
  [SMALL_STATE(11)] = 233,
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 272,
  [SMALL_STATE(14)] = 289,
  [SMALL_STATE(15)] = 306,
  [SMALL_STATE(16)] = 319,
  [SMALL_STATE(17)] = 338,
  [SMALL_STATE(18)] = 357,
  [SMALL_STATE(19)] = 375,
  [SMALL_STATE(20)] = 391,
  [SMALL_STATE(21)] = 409,
  [SMALL_STATE(22)] = 425,
  [SMALL_STATE(23)] = 441,
  [SMALL_STATE(24)] = 457,
  [SMALL_STATE(25)] = 473,
  [SMALL_STATE(26)] = 489,
  [SMALL_STATE(27)] = 507,
  [SMALL_STATE(28)] = 525,
  [SMALL_STATE(29)] = 541,
  [SMALL_STATE(30)] = 557,
  [SMALL_STATE(31)] = 573,
  [SMALL_STATE(32)] = 586,
  [SMALL_STATE(33)] = 599,
  [SMALL_STATE(34)] = 612,
  [SMALL_STATE(35)] = 625,
  [SMALL_STATE(36)] = 638,
  [SMALL_STATE(37)] = 649,
  [SMALL_STATE(38)] = 660,
  [SMALL_STATE(39)] = 671,
  [SMALL_STATE(40)] = 684,
  [SMALL_STATE(41)] = 697,
  [SMALL_STATE(42)] = 710,
  [SMALL_STATE(43)] = 723,
  [SMALL_STATE(44)] = 736,
  [SMALL_STATE(45)] = 749,
  [SMALL_STATE(46)] = 762,
  [SMALL_STATE(47)] = 773,
  [SMALL_STATE(48)] = 786,
  [SMALL_STATE(49)] = 797,
  [SMALL_STATE(50)] = 808,
  [SMALL_STATE(51)] = 818,
  [SMALL_STATE(52)] = 828,
  [SMALL_STATE(53)] = 838,
  [SMALL_STATE(54)] = 848,
  [SMALL_STATE(55)] = 858,
  [SMALL_STATE(56)] = 868,
  [SMALL_STATE(57)] = 878,
  [SMALL_STATE(58)] = 888,
  [SMALL_STATE(59)] = 898,
  [SMALL_STATE(60)] = 908,
  [SMALL_STATE(61)] = 918,
  [SMALL_STATE(62)] = 928,
  [SMALL_STATE(63)] = 938,
  [SMALL_STATE(64)] = 948,
  [SMALL_STATE(65)] = 958,
  [SMALL_STATE(66)] = 968,
  [SMALL_STATE(67)] = 978,
  [SMALL_STATE(68)] = 988,
  [SMALL_STATE(69)] = 998,
  [SMALL_STATE(70)] = 1008,
  [SMALL_STATE(71)] = 1018,
  [SMALL_STATE(72)] = 1028,
  [SMALL_STATE(73)] = 1038,
  [SMALL_STATE(74)] = 1048,
  [SMALL_STATE(75)] = 1058,
  [SMALL_STATE(76)] = 1068,
  [SMALL_STATE(77)] = 1078,
  [SMALL_STATE(78)] = 1088,
  [SMALL_STATE(79)] = 1098,
  [SMALL_STATE(80)] = 1108,
  [SMALL_STATE(81)] = 1118,
  [SMALL_STATE(82)] = 1128,
  [SMALL_STATE(83)] = 1138,
  [SMALL_STATE(84)] = 1146,
  [SMALL_STATE(85)] = 1157,
  [SMALL_STATE(86)] = 1167,
  [SMALL_STATE(87)] = 1174,
  [SMALL_STATE(88)] = 1181,
  [SMALL_STATE(89)] = 1188,
  [SMALL_STATE(90)] = 1195,
  [SMALL_STATE(91)] = 1199,
  [SMALL_STATE(92)] = 1203,
  [SMALL_STATE(93)] = 1207,
  [SMALL_STATE(94)] = 1211,
  [SMALL_STATE(95)] = 1215,
  [SMALL_STATE(96)] = 1219,
  [SMALL_STATE(97)] = 1223,
  [SMALL_STATE(98)] = 1227,
  [SMALL_STATE(99)] = 1231,
  [SMALL_STATE(100)] = 1235,
  [SMALL_STATE(101)] = 1239,
  [SMALL_STATE(102)] = 1243,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(10),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [323] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
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
