#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 2
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  sym_height = 3,
  sym_width = 4,
  anon_sym_set = 5,
  anon_sym_name = 6,
  anon_sym_height = 7,
  anon_sym_width = 8,
  anon_sym_decorate = 9,
  anon_sym_LPAREN = 10,
  anon_sym_input = 11,
  anon_sym_output = 12,
  anon_sym_parameter = 13,
  anon_sym_light = 14,
  anon_sym_widget = 15,
  anon_sym_RPAREN = 16,
  anon_sym_with = 17,
  anon_sym_load = 18,
  anon_sym_project = 19,
  anon_sym_script = 20,
  anon_sym_save = 21,
  anon_sym_timestamp = 22,
  anon_sym_COMMA = 23,
  anon_sym_gzip = 24,
  anon_sym_export = 25,
  anon_sym_panel = 26,
  anon_sym_svg = 27,
  anon_sym_dark = 28,
  anon_sym_origin = 29,
  anon_sym_background = 30,
  anon_sym_guide = 31,
  anon_sym_label = 32,
  anon_sym_AT = 33,
  aux_sym__label_absolute_token1 = 34,
  aux_sym__label_relative_token1 = 35,
  aux_sym_font_token1 = 36,
  aux_sym_fontsize_token1 = 37,
  anon_sym_left = 38,
  anon_sym_centre = 39,
  anon_sym_center = 40,
  anon_sym_right = 41,
  anon_sym_top = 42,
  anon_sym_middle = 43,
  anon_sym_baseline = 44,
  anon_sym_bottom = 45,
  aux_sym__rgb_token1 = 46,
  aux_sym__rgba_token1 = 47,
  aux_sym__x_token1 = 48,
  aux_sym__y_token1 = 49,
  aux_sym__offset_token1 = 50,
  anon_sym_DQUOTE = 51,
  aux_sym__string_token1 = 52,
  sym_command = 53,
  sym_new = 54,
  sym_module = 55,
  sym_set = 56,
  sym__module_attr = 57,
  sym_decorate = 58,
  sym__component = 59,
  sym_decoration = 60,
  sym_load = 61,
  sym_save = 62,
  sym_project = 63,
  sym__save_options = 64,
  sym_script = 65,
  sym_export = 66,
  sym_panel = 67,
  sym_svg = 68,
  sym_origin = 69,
  sym_background = 70,
  sym_guide = 71,
  sym_label = 72,
  sym__label_string = 73,
  sym__label_absolute = 74,
  sym__label_relative = 75,
  sym__label_geometry = 76,
  sym_font = 77,
  sym_fontsize = 78,
  sym_halign = 79,
  sym_valign = 80,
  sym_colour = 81,
  sym__rgb = 82,
  sym__rgba = 83,
  sym_name = 84,
  sym_rgb = 85,
  sym_rgba = 86,
  sym_absolute = 87,
  sym__x = 88,
  sym__y = 89,
  sym_x = 90,
  sym_y = 91,
  sym__offset = 92,
  sym_offset = 93,
  sym__string = 94,
  aux_sym_command_repeat1 = 95,
  alias_sym_light = 96,
  alias_sym_reference = 97,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_set] = "set",
  [anon_sym_name] = "name",
  [anon_sym_height] = "height",
  [anon_sym_width] = "width",
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
  [sym_module] = "module",
  [sym_set] = "set",
  [sym__module_attr] = "module",
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
  [anon_sym_module] = anon_sym_module,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_width] = anon_sym_width,
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
  [sym_module] = sym_module,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
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
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [sym_height] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
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
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym__module_attr] = {
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
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(227);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == ',') ADVANCE(256);
      if (lookahead == '0') ADVANCE(4);
      if (lookahead == '1') ADVANCE(5);
      if (lookahead == '@') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(97);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '2') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'U') ADVANCE(231);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(233);
      if (lookahead == 'h') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '8') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '8') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'U') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(203);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(128);
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(181);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(261);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(74);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(174);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 109:
      if (lookahead == 'j') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 'k') ADVANCE(262);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == 'z') ADVANCE(102);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 196:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 197:
      if (lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 198:
      if (lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 199:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 201:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 204:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(205)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 221:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 222:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 223:
      if (eof) ADVANCE(227);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(223)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 224:
      if (eof) ADVANCE(227);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(224)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 225:
      if (eof) ADVANCE(227);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(225)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 226:
      if (eof) ADVANCE(227);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(226)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(310);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 224},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 224},
  [8] = {.lex_state = 223},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 225},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 224},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 225},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 223},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 223},
  [25] = {.lex_state = 223},
  [26] = {.lex_state = 223},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 224},
  [29] = {.lex_state = 225},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 223},
  [32] = {.lex_state = 223},
  [33] = {.lex_state = 224},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 226},
  [37] = {.lex_state = 226},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 223},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 225},
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
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 225},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 224},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 224},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 223},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 226},
  [101] = {.lex_state = 205},
  [102] = {.lex_state = 223},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 224},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 226},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
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
    [sym_command] = STATE(104),
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
    STATE(106), 1,
      sym__x,
    STATE(60), 3,
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
    STATE(61), 3,
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
  [113] = 5,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(59), 1,
      anon_sym_origin,
    ACTIONS(61), 1,
      anon_sym_background,
    STATE(69), 3,
      sym__module_attr,
      sym_origin,
      sym_background,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [137] = 7,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      aux_sym__x_token1,
    ACTIONS(69), 1,
      aux_sym__y_token1,
    STATE(40), 1,
      sym_x,
    STATE(41), 1,
      sym_y,
    STATE(68), 1,
      sym_absolute,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [165] = 8,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_font_token1,
    ACTIONS(77), 1,
      aux_sym__rgb_token1,
    ACTIONS(79), 1,
      aux_sym__rgba_token1,
    STATE(45), 1,
      sym_rgb,
    STATE(46), 1,
      sym_rgba,
    STATE(67), 1,
      sym_name,
    ACTIONS(73), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [195] = 5,
    ACTIONS(83), 1,
      aux_sym__rgb_token1,
    ACTIONS(85), 1,
      aux_sym__rgba_token1,
    STATE(58), 1,
      sym_colour,
    STATE(35), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [218] = 3,
    STATE(63), 1,
      sym_halign,
    ACTIONS(89), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [237] = 4,
    ACTIONS(93), 1,
      anon_sym_project,
    ACTIONS(95), 1,
      anon_sym_script,
    STATE(82), 2,
      sym_project,
      sym_script,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [257] = 4,
    ACTIONS(99), 1,
      anon_sym_timestamp,
    ACTIONS(101), 1,
      anon_sym_gzip,
    STATE(66), 1,
      sym__save_options,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [276] = 3,
    ACTIONS(105), 1,
      aux_sym__offset_token1,
    STATE(44), 1,
      sym_offset,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [293] = 3,
    ACTIONS(105), 1,
      aux_sym__offset_token1,
    STATE(50), 1,
      sym_offset,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [310] = 1,
    ACTIONS(109), 10,
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
  [323] = 4,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym__string,
    STATE(84), 1,
      sym__label_string,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [342] = 2,
    ACTIONS(117), 1,
      sym_width,
    ACTIONS(115), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      sym_height,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [357] = 4,
    ACTIONS(121), 1,
      anon_sym_name,
    ACTIONS(123), 1,
      anon_sym_height,
    ACTIONS(125), 1,
      anon_sym_width,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [376] = 4,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      aux_sym__offset_token1,
    STATE(39), 1,
      sym__offset,
    ACTIONS(129), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [395] = 3,
    ACTIONS(135), 1,
      anon_sym_svg,
    STATE(64), 1,
      sym_svg,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [411] = 3,
    ACTIONS(139), 1,
      anon_sym_panel,
    STATE(85), 1,
      sym_panel,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [427] = 3,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__component,
    ACTIONS(141), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [443] = 3,
    ACTIONS(147), 1,
      anon_sym_light,
    ACTIONS(149), 1,
      anon_sym_dark,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [459] = 4,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      aux_sym_font_token1,
    STATE(71), 1,
      sym_font,
    ACTIONS(153), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [477] = 4,
    ACTIONS(75), 1,
      aux_sym_font_token1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_name,
    ACTIONS(159), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [495] = 4,
    ACTIONS(155), 1,
      aux_sym_font_token1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_font,
    ACTIONS(163), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [513] = 3,
    ACTIONS(167), 1,
      aux_sym_fontsize_token1,
    STATE(70), 1,
      sym_fontsize,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [529] = 3,
    ACTIONS(69), 1,
      aux_sym__y_token1,
    STATE(83), 1,
      sym_y,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [545] = 3,
    ACTIONS(173), 1,
      sym_height,
    ACTIONS(175), 1,
      sym_width,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [561] = 3,
    ACTIONS(179), 1,
      anon_sym_project,
    ACTIONS(181), 1,
      anon_sym_script,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [577] = 4,
    ACTIONS(155), 1,
      aux_sym_font_token1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_font,
    ACTIONS(185), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [595] = 4,
    ACTIONS(75), 1,
      aux_sym_font_token1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_name,
    ACTIONS(189), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [613] = 3,
    ACTIONS(67), 1,
      aux_sym__x_token1,
    STATE(83), 1,
      sym_x,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [629] = 3,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_decoration,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [645] = 2,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [658] = 2,
    ACTIONS(201), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [671] = 2,
    ACTIONS(205), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [684] = 2,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [697] = 2,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [710] = 2,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [723] = 2,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [736] = 1,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [747] = 1,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [758] = 1,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [769] = 2,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [782] = 2,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [795] = 2,
    ACTIONS(235), 1,
      sym_width,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [808] = 2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [821] = 2,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [834] = 1,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [845] = 1,
    ACTIONS(245), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [856] = 2,
    ACTIONS(249), 1,
      anon_sym_timestamp,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [869] = 2,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(251), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [882] = 1,
    ACTIONS(255), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [892] = 1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [902] = 1,
    ACTIONS(259), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [912] = 1,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [922] = 1,
    ACTIONS(263), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [932] = 1,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [942] = 1,
    ACTIONS(267), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [952] = 1,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [962] = 1,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [972] = 1,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [982] = 1,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [992] = 1,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1002] = 1,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1012] = 1,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1022] = 1,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1032] = 1,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1042] = 1,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1052] = 1,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1062] = 1,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1072] = 1,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1082] = 1,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1092] = 1,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1102] = 1,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1112] = 1,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1122] = 1,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1132] = 1,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1142] = 1,
    ACTIONS(301), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1152] = 1,
    ACTIONS(303), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1162] = 1,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1172] = 1,
    ACTIONS(307), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1182] = 1,
    ACTIONS(309), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1192] = 1,
    ACTIONS(311), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1202] = 1,
    ACTIONS(313), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1212] = 1,
    ACTIONS(315), 7,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1222] = 1,
    ACTIONS(317), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [1230] = 2,
    STATE(59), 1,
      sym_valign,
    ACTIONS(319), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1240] = 3,
    ACTIONS(321), 1,
      aux_sym__rgb_token1,
    ACTIONS(323), 1,
      aux_sym__rgba_token1,
    STATE(56), 2,
      sym__rgb,
      sym__rgba,
  [1251] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      aux_sym__offset_token1,
    STATE(107), 1,
      sym__offset,
  [1261] = 2,
    ACTIONS(329), 1,
      aux_sym_font_token1,
    STATE(62), 1,
      sym_name,
  [1268] = 2,
    ACTIONS(331), 1,
      aux_sym__y_token1,
    STATE(31), 1,
      sym__y,
  [1275] = 2,
    ACTIONS(329), 1,
      aux_sym_font_token1,
    STATE(72), 1,
      sym_name,
  [1282] = 2,
    ACTIONS(333), 1,
      aux_sym__rgb_token1,
    STATE(54), 1,
      sym_rgb,
  [1289] = 2,
    ACTIONS(79), 1,
      aux_sym__rgba_token1,
    STATE(54), 1,
      sym_rgba,
  [1296] = 1,
    ACTIONS(335), 1,
      sym_width,
  [1300] = 1,
    ACTIONS(337), 1,
      anon_sym_timestamp,
  [1304] = 1,
    ACTIONS(337), 1,
      anon_sym_gzip,
  [1308] = 1,
    ACTIONS(339), 1,
      aux_sym__label_absolute_token1,
  [1312] = 1,
    ACTIONS(341), 1,
      aux_sym__string_token1,
  [1316] = 1,
    ACTIONS(335), 1,
      sym_height,
  [1320] = 1,
    ACTIONS(343), 1,
      anon_sym_COMMA,
  [1324] = 1,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
  [1328] = 1,
    ACTIONS(347), 1,
      aux_sym__label_relative_token1,
  [1332] = 1,
    ACTIONS(349), 1,
      anon_sym_COMMA,
  [1336] = 1,
    ACTIONS(351), 1,
      anon_sym_COMMA,
  [1340] = 1,
    ACTIONS(353), 1,
      anon_sym_COMMA,
  [1344] = 1,
    ACTIONS(355), 1,
      aux_sym__label_absolute_token1,
  [1348] = 1,
    ACTIONS(357), 1,
      anon_sym_with,
  [1352] = 1,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 113,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 195,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 257,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 293,
  [SMALL_STATE(15)] = 310,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 342,
  [SMALL_STATE(18)] = 357,
  [SMALL_STATE(19)] = 376,
  [SMALL_STATE(20)] = 395,
  [SMALL_STATE(21)] = 411,
  [SMALL_STATE(22)] = 427,
  [SMALL_STATE(23)] = 443,
  [SMALL_STATE(24)] = 459,
  [SMALL_STATE(25)] = 477,
  [SMALL_STATE(26)] = 495,
  [SMALL_STATE(27)] = 513,
  [SMALL_STATE(28)] = 529,
  [SMALL_STATE(29)] = 545,
  [SMALL_STATE(30)] = 561,
  [SMALL_STATE(31)] = 577,
  [SMALL_STATE(32)] = 595,
  [SMALL_STATE(33)] = 613,
  [SMALL_STATE(34)] = 629,
  [SMALL_STATE(35)] = 645,
  [SMALL_STATE(36)] = 658,
  [SMALL_STATE(37)] = 671,
  [SMALL_STATE(38)] = 684,
  [SMALL_STATE(39)] = 697,
  [SMALL_STATE(40)] = 710,
  [SMALL_STATE(41)] = 723,
  [SMALL_STATE(42)] = 736,
  [SMALL_STATE(43)] = 747,
  [SMALL_STATE(44)] = 758,
  [SMALL_STATE(45)] = 769,
  [SMALL_STATE(46)] = 782,
  [SMALL_STATE(47)] = 795,
  [SMALL_STATE(48)] = 808,
  [SMALL_STATE(49)] = 821,
  [SMALL_STATE(50)] = 834,
  [SMALL_STATE(51)] = 845,
  [SMALL_STATE(52)] = 856,
  [SMALL_STATE(53)] = 869,
  [SMALL_STATE(54)] = 882,
  [SMALL_STATE(55)] = 892,
  [SMALL_STATE(56)] = 902,
  [SMALL_STATE(57)] = 912,
  [SMALL_STATE(58)] = 922,
  [SMALL_STATE(59)] = 932,
  [SMALL_STATE(60)] = 942,
  [SMALL_STATE(61)] = 952,
  [SMALL_STATE(62)] = 962,
  [SMALL_STATE(63)] = 972,
  [SMALL_STATE(64)] = 982,
  [SMALL_STATE(65)] = 992,
  [SMALL_STATE(66)] = 1002,
  [SMALL_STATE(67)] = 1012,
  [SMALL_STATE(68)] = 1022,
  [SMALL_STATE(69)] = 1032,
  [SMALL_STATE(70)] = 1042,
  [SMALL_STATE(71)] = 1052,
  [SMALL_STATE(72)] = 1062,
  [SMALL_STATE(73)] = 1072,
  [SMALL_STATE(74)] = 1082,
  [SMALL_STATE(75)] = 1092,
  [SMALL_STATE(76)] = 1102,
  [SMALL_STATE(77)] = 1112,
  [SMALL_STATE(78)] = 1122,
  [SMALL_STATE(79)] = 1132,
  [SMALL_STATE(80)] = 1142,
  [SMALL_STATE(81)] = 1152,
  [SMALL_STATE(82)] = 1162,
  [SMALL_STATE(83)] = 1172,
  [SMALL_STATE(84)] = 1182,
  [SMALL_STATE(85)] = 1192,
  [SMALL_STATE(86)] = 1202,
  [SMALL_STATE(87)] = 1212,
  [SMALL_STATE(88)] = 1222,
  [SMALL_STATE(89)] = 1230,
  [SMALL_STATE(90)] = 1240,
  [SMALL_STATE(91)] = 1251,
  [SMALL_STATE(92)] = 1261,
  [SMALL_STATE(93)] = 1268,
  [SMALL_STATE(94)] = 1275,
  [SMALL_STATE(95)] = 1282,
  [SMALL_STATE(96)] = 1289,
  [SMALL_STATE(97)] = 1296,
  [SMALL_STATE(98)] = 1300,
  [SMALL_STATE(99)] = 1304,
  [SMALL_STATE(100)] = 1308,
  [SMALL_STATE(101)] = 1312,
  [SMALL_STATE(102)] = 1316,
  [SMALL_STATE(103)] = 1320,
  [SMALL_STATE(104)] = 1324,
  [SMALL_STATE(105)] = 1328,
  [SMALL_STATE(106)] = 1332,
  [SMALL_STATE(107)] = 1336,
  [SMALL_STATE(108)] = 1340,
  [SMALL_STATE(109)] = 1344,
  [SMALL_STATE(110)] = 1348,
  [SMALL_STATE(111)] = 1352,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [345] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
