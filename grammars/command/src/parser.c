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
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 1
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 15

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_load = 4,
  anon_sym_project = 5,
  anon_sym_script = 6,
  anon_sym_save = 7,
  anon_sym_export = 8,
  anon_sym_timestamp = 9,
  anon_sym_COMMA = 10,
  anon_sym_gzip = 11,
  anon_sym_module = 12,
  anon_sym_input = 13,
  anon_sym_output = 14,
  aux_sym_parameter_token1 = 15,
  anon_sym_light = 16,
  anon_sym_widget = 17,
  anon_sym_label = 18,
  aux_sym_font_token1 = 19,
  sym_fontsize = 20,
  anon_sym_left = 21,
  anon_sym_centre = 22,
  anon_sym_center = 23,
  anon_sym_right = 24,
  anon_sym_top = 25,
  anon_sym_middle = 26,
  anon_sym_baseline = 27,
  anon_sym_bottom = 28,
  anon_sym_origin = 29,
  anon_sym_AT = 30,
  aux_sym_origin_token1 = 31,
  aux_sym__originx_token1 = 32,
  aux_sym__originy_token1 = 33,
  anon_sym_background = 34,
  sym_rgb = 35,
  sym_rgba = 36,
  anon_sym_panel = 37,
  anon_sym_svg = 38,
  anon_sym_dark = 39,
  sym_height = 40,
  sym_width = 41,
  anon_sym_guide = 42,
  aux_sym_identifier_token1 = 43,
  anon_sym_vertical = 44,
  anon_sym_horizontal = 45,
  aux_sym_offset_token1 = 46,
  anon_sym_DQUOTE = 47,
  aux_sym__string_token1 = 48,
  aux_sym_absolute_token1 = 49,
  aux_sym_relative_token1 = 50,
  anon_sym_LPAREN = 51,
  anon_sym_parameter = 52,
  anon_sym_RPAREN = 53,
  sym_command = 54,
  sym_new = 55,
  sym_set = 56,
  sym_load = 57,
  sym_save = 58,
  sym_export = 59,
  sym_project = 60,
  sym_script = 61,
  sym__entity = 62,
  sym_module = 63,
  sym_input = 64,
  sym_output = 65,
  sym_parameter = 66,
  sym_light = 67,
  sym_widget = 68,
  sym__component = 69,
  sym_label = 70,
  sym_font = 71,
  sym__align = 72,
  sym_halign = 73,
  sym_valign = 74,
  sym_colour = 75,
  sym_origin = 76,
  sym__originx = 77,
  sym__originy = 78,
  sym_background = 79,
  sym_panel = 80,
  sym_svg = 81,
  sym_name = 82,
  sym_part = 83,
  sym_guide = 84,
  sym_identifier = 85,
  sym_vertical = 86,
  sym_horizontal = 87,
  sym_geometry = 88,
  sym_offset = 89,
  sym__offset = 90,
  sym_guideline = 91,
  sym__string = 92,
  sym_absolute = 93,
  sym_relative = 94,
  sym_decorate = 95,
  sym__relative = 96,
  sym_x = 97,
  sym_y = 98,
  aux_sym_command_repeat1 = 99,
  alias_sym_dy = 100,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_COMMA] = ",",
  [anon_sym_gzip] = "gzip",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_label] = "label",
  [aux_sym_font_token1] = "font_token1",
  [sym_fontsize] = "fontsize",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_baseline] = "baseline",
  [anon_sym_bottom] = "bottom",
  [anon_sym_origin] = "origin",
  [anon_sym_AT] = "@",
  [aux_sym_origin_token1] = "offset",
  [aux_sym__originx_token1] = "reference",
  [aux_sym__originy_token1] = "reference",
  [anon_sym_background] = "background",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [anon_sym_panel] = "panel",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_guide] = "guide",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
  [aux_sym_offset_token1] = "offset_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "string",
  [aux_sym_absolute_token1] = "x",
  [aux_sym_relative_token1] = "x",
  [anon_sym_LPAREN] = "(",
  [anon_sym_parameter] = "parameter",
  [anon_sym_RPAREN] = ")",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_load] = "load",
  [sym_save] = "save",
  [sym_export] = "export",
  [sym_project] = "project",
  [sym_script] = "script",
  [sym__entity] = "_entity",
  [sym_module] = "module",
  [sym_input] = "input",
  [sym_output] = "output",
  [sym_parameter] = "parameter",
  [sym_light] = "light",
  [sym_widget] = "widget",
  [sym__component] = "_component",
  [sym_label] = "label",
  [sym_font] = "font",
  [sym__align] = "_align",
  [sym_halign] = "halign",
  [sym_valign] = "valign",
  [sym_colour] = "colour",
  [sym_origin] = "origin",
  [sym__originx] = "x",
  [sym__originy] = "y",
  [sym_background] = "background",
  [sym_panel] = "panel",
  [sym_svg] = "svg",
  [sym_name] = "name",
  [sym_part] = "part",
  [sym_guide] = "guide",
  [sym_identifier] = "identifier",
  [sym_vertical] = "vertical",
  [sym_horizontal] = "horizontal",
  [sym_geometry] = "geometry",
  [sym_offset] = "offset",
  [sym__offset] = "dx",
  [sym_guideline] = "guideline",
  [sym__string] = "_string",
  [sym_absolute] = "absolute",
  [sym_relative] = "relative",
  [sym_decorate] = "decorate",
  [sym__relative] = "_relative",
  [sym_x] = "x",
  [sym_y] = "y",
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_dy] = "dy",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_gzip] = anon_sym_gzip,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_label] = anon_sym_label,
  [aux_sym_font_token1] = aux_sym_font_token1,
  [sym_fontsize] = sym_fontsize,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_baseline] = anon_sym_baseline,
  [anon_sym_bottom] = anon_sym_bottom,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_origin_token1] = sym_offset,
  [aux_sym__originx_token1] = aux_sym__originx_token1,
  [aux_sym__originy_token1] = aux_sym__originx_token1,
  [anon_sym_background] = anon_sym_background,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_guide] = anon_sym_guide,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [aux_sym_offset_token1] = aux_sym_offset_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym_absolute_token1] = sym_x,
  [aux_sym_relative_token1] = sym_x,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_parameter] = sym_parameter,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_load] = sym_load,
  [sym_save] = sym_save,
  [sym_export] = sym_export,
  [sym_project] = sym_project,
  [sym_script] = sym_script,
  [sym__entity] = sym__entity,
  [sym_module] = sym_module,
  [sym_input] = sym_input,
  [sym_output] = sym_output,
  [sym_parameter] = sym_parameter,
  [sym_light] = sym_light,
  [sym_widget] = sym_widget,
  [sym__component] = sym__component,
  [sym_label] = sym_label,
  [sym_font] = sym_font,
  [sym__align] = sym__align,
  [sym_halign] = sym_halign,
  [sym_valign] = sym_valign,
  [sym_colour] = sym_colour,
  [sym_origin] = sym_origin,
  [sym__originx] = sym_x,
  [sym__originy] = sym_y,
  [sym_background] = sym_background,
  [sym_panel] = sym_panel,
  [sym_svg] = sym_svg,
  [sym_name] = sym_name,
  [sym_part] = sym_part,
  [sym_guide] = sym_guide,
  [sym_identifier] = sym_identifier,
  [sym_vertical] = sym_vertical,
  [sym_horizontal] = sym_horizontal,
  [sym_geometry] = sym_geometry,
  [sym_offset] = sym_offset,
  [sym__offset] = sym__offset,
  [sym_guideline] = sym_guideline,
  [sym__string] = sym__string,
  [sym_absolute] = sym_absolute,
  [sym_relative] = sym_relative,
  [sym_decorate] = sym_decorate,
  [sym__relative] = sym__relative,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [alias_sym_dy] = alias_sym_dy,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
    .named = false,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
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
  [anon_sym_module] = {
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
  [aux_sym_parameter_token1] = {
    .visible = false,
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
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_font_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_fontsize] = {
    .visible = true,
    .named = true,
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
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_origin_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__originx_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__originy_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_background] = {
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
  [sym_height] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_offset_token1] = {
    .visible = false,
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
  [aux_sym_absolute_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_relative_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym__entity] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_light] = {
    .visible = true,
    .named = true,
  },
  [sym_widget] = {
    .visible = true,
    .named = true,
  },
  [sym__component] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_font] = {
    .visible = true,
    .named = true,
  },
  [sym__align] = {
    .visible = false,
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
  [sym_origin] = {
    .visible = true,
    .named = true,
  },
  [sym__originx] = {
    .visible = true,
    .named = true,
  },
  [sym__originy] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_part] = {
    .visible = true,
    .named = true,
  },
  [sym_guide] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_vertical] = {
    .visible = true,
    .named = true,
  },
  [sym_horizontal] = {
    .visible = true,
    .named = true,
  },
  [sym_geometry] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__offset] = {
    .visible = true,
    .named = true,
  },
  [sym_guideline] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
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
  [sym_decorate] = {
    .visible = true,
    .named = true,
  },
  [sym__relative] = {
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
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_dy] = {
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
    [0] = aux_sym__originx_token1,
  },
  [4] = {
    [1] = aux_sym__originx_token1,
  },
  [5] = {
    [1] = sym_light,
  },
  [6] = {
    [1] = sym_absolute,
  },
  [7] = {
    [2] = sym_y,
  },
  [8] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [9] = {
    [3] = sym_y,
  },
  [10] = {
    [1] = sym_input,
  },
  [11] = {
    [1] = sym_output,
  },
  [12] = {
    [1] = sym_widget,
  },
  [13] = {
    [1] = sym_label,
  },
  [14] = {
    [2] = alias_sym_dy,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    aux_sym__originx_token1,
  sym__offset, 2,
    sym__offset,
    alias_sym_dy,
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
  [35] = 9,
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
  [54] = 19,
  [55] = 20,
  [56] = 56,
  [57] = 18,
  [58] = 58,
  [59] = 59,
  [60] = 11,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 20,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 31,
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
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 181,
  [183] = 177,
  [184] = 175,
  [185] = 179,
  [186] = 158,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(240);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(406);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'g') ADVANCE(209);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(100);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'h') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == 'v') ADVANCE(362);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'H') ADVANCE(339);
      if (lookahead == 'h') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(350);
      if (lookahead == 'U') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '5') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'H') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'H') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'H') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(351);
      if (lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '8') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == 'H') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(131);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(131);
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 23:
      if (lookahead == ';') ADVANCE(241);
      END_STATE();
    case 24:
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == 'w') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(192);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(347);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 108:
      if (lookahead == 'j') ADVANCE(62);
      END_STATE();
    case 109:
      if (lookahead == 'k') ADVANCE(348);
      END_STATE();
    case 110:
      if (lookahead == 'k') ADVANCE(85);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(339);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(399);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(334);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(341);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == 'z') ADVANCE(102);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 212:
      if (lookahead == 'w') ADVANCE(242);
      END_STATE();
    case 213:
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 214:
      if (lookahead == 'z') ADVANCE(152);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(219)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 235:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 236:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 237:
      if (eof) ADVANCE(240);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'm') ADVANCE(285);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == 't') ADVANCE(296);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 238:
      if (eof) ADVANCE(240);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 239:
      if (eof) ADVANCE(240);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'g') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == 'w') ADVANCE(100);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(131);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 237},
  [3] = {.lex_state = 237},
  [4] = {.lex_state = 239},
  [5] = {.lex_state = 239},
  [6] = {.lex_state = 239},
  [7] = {.lex_state = 239},
  [8] = {.lex_state = 239},
  [9] = {.lex_state = 237},
  [10] = {.lex_state = 239},
  [11] = {.lex_state = 237},
  [12] = {.lex_state = 237},
  [13] = {.lex_state = 237},
  [14] = {.lex_state = 237},
  [15] = {.lex_state = 237},
  [16] = {.lex_state = 237},
  [17] = {.lex_state = 237},
  [18] = {.lex_state = 237},
  [19] = {.lex_state = 237},
  [20] = {.lex_state = 237},
  [21] = {.lex_state = 239},
  [22] = {.lex_state = 239},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 239},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 238},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 239},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 239},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 239},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 238},
  [47] = {.lex_state = 239},
  [48] = {.lex_state = 238},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 238},
  [55] = {.lex_state = 238},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 238},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 238},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
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
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 24},
  [111] = {.lex_state = 43},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 239},
  [114] = {.lex_state = 43},
  [115] = {.lex_state = 239},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 237},
  [121] = {.lex_state = 237},
  [122] = {.lex_state = 237},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 237},
  [125] = {.lex_state = 237},
  [126] = {.lex_state = 237},
  [127] = {.lex_state = 237},
  [128] = {.lex_state = 237},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 237},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 25},
  [144] = {.lex_state = 239},
  [145] = {.lex_state = 25},
  [146] = {.lex_state = 237},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 237},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 237},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 237},
  [156] = {.lex_state = 237},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 237},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 239},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 219},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [sym_fontsize] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_baseline] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_origin_token1] = ACTIONS(1),
    [aux_sym__originx_token1] = ACTIONS(1),
    [aux_sym__originy_token1] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [sym_rgb] = ACTIONS(1),
    [sym_rgba] = ACTIONS(1),
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [aux_sym_offset_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_relative_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(178),
    [sym_new] = STATE(25),
    [sym_set] = STATE(25),
    [sym_load] = STATE(25),
    [sym_save] = STATE(25),
    [sym_export] = STATE(25),
    [aux_sym_command_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(11),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_export] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(21), 1,
      aux_sym_font_token1,
    ACTIONS(23), 1,
      sym_fontsize,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(5), 1,
      sym_font,
    STATE(30), 1,
      sym__align,
    STATE(37), 1,
      sym_valign,
    STATE(40), 1,
      sym_halign,
    STATE(80), 1,
      sym_colour,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(25), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(27), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(19), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [51] = 13,
    ACTIONS(21), 1,
      aux_sym_font_token1,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    ACTIONS(37), 1,
      sym_fontsize,
    STATE(4), 1,
      sym_font,
    STATE(37), 1,
      sym_valign,
    STATE(40), 1,
      sym_halign,
    STATE(41), 1,
      sym__align,
    STATE(104), 1,
      sym_colour,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(25), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(27), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(35), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [102] = 10,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    ACTIONS(41), 1,
      sym_fontsize,
    STATE(33), 1,
      sym__align,
    STATE(37), 1,
      sym_valign,
    STATE(40), 1,
      sym_halign,
    STATE(88), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [145] = 10,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    ACTIONS(49), 1,
      sym_fontsize,
    STATE(34), 1,
      sym__align,
    STATE(37), 1,
      sym_valign,
    STATE(40), 1,
      sym_halign,
    STATE(71), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [188] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(32), 1,
      sym__align,
    STATE(37), 1,
      sym_valign,
    STATE(40), 1,
      sym_halign,
    STATE(70), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [228] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(33), 1,
      sym__align,
    STATE(37), 1,
      sym_valign,
    STATE(40), 1,
      sym_halign,
    STATE(88), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [268] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(34), 1,
      sym__align,
    STATE(37), 1,
      sym_valign,
    STATE(40), 1,
      sym_halign,
    STATE(71), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [308] = 4,
    ACTIONS(57), 1,
      aux_sym_offset_token1,
    STATE(19), 1,
      sym_offset,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(55), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [338] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(30), 1,
      sym__align,
    STATE(37), 1,
      sym_valign,
    STATE(40), 1,
      sym_halign,
    STATE(80), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [378] = 2,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(61), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [402] = 2,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(65), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [426] = 2,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(69), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [450] = 2,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(73), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [474] = 2,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(77), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [498] = 2,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(81), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [522] = 2,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(85), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [546] = 2,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(89), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [570] = 2,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(93), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [594] = 2,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(97), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [618] = 2,
    ACTIONS(101), 1,
      sym_rgb,
    ACTIONS(99), 17,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_fontsize,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgba,
  [641] = 9,
    ACTIONS(103), 1,
      anon_sym_module,
    ACTIONS(105), 1,
      anon_sym_input,
    ACTIONS(107), 1,
      anon_sym_output,
    ACTIONS(109), 1,
      aux_sym_parameter_token1,
    ACTIONS(111), 1,
      anon_sym_light,
    ACTIONS(113), 1,
      anon_sym_widget,
    ACTIONS(115), 1,
      anon_sym_label,
    ACTIONS(117), 1,
      anon_sym_guide,
    STATE(72), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [677] = 8,
    ACTIONS(121), 1,
      aux_sym_identifier_token1,
    ACTIONS(123), 1,
      anon_sym_vertical,
    ACTIONS(125), 1,
      anon_sym_horizontal,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    STATE(82), 1,
      sym_offset,
    STATE(150), 1,
      sym_identifier,
    STATE(81), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(119), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [711] = 6,
    ACTIONS(121), 1,
      aux_sym_identifier_token1,
    ACTIONS(123), 1,
      anon_sym_vertical,
    ACTIONS(125), 1,
      anon_sym_horizontal,
    STATE(23), 1,
      sym_identifier,
    STATE(105), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(119), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [739] = 8,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_load,
    ACTIONS(13), 1,
      anon_sym_save,
    ACTIONS(15), 1,
      anon_sym_export,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      sym_comment,
    STATE(26), 6,
      sym_new,
      sym_set,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [769] = 8,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_new,
    ACTIONS(141), 1,
      anon_sym_set,
    ACTIONS(144), 1,
      anon_sym_load,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(150), 1,
      anon_sym_export,
    STATE(26), 6,
      sym_new,
      sym_set,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [799] = 6,
    ACTIONS(155), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      aux_sym_relative_token1,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym_decorate,
    ACTIONS(153), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [824] = 2,
    ACTIONS(163), 1,
      aux_sym_offset_token1,
    ACTIONS(161), 10,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
      anon_sym_vertical,
      anon_sym_horizontal,
  [840] = 5,
    ACTIONS(165), 1,
      anon_sym_AT,
    ACTIONS(167), 1,
      aux_sym_relative_token1,
    STATE(174), 1,
      sym_x,
    STATE(46), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(153), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [861] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(71), 1,
      sym_colour,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [880] = 2,
    ACTIONS(171), 1,
      sym_width,
    ACTIONS(169), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_height,
      aux_sym_offset_token1,
  [895] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(69), 1,
      sym_colour,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [914] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(80), 1,
      sym_colour,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [933] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(70), 1,
      sym_colour,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [952] = 4,
    ACTIONS(175), 1,
      aux_sym_offset_token1,
    STATE(54), 1,
      sym_offset,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(55), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [971] = 2,
    ACTIONS(179), 1,
      sym_rgb,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [986] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      sym_rgb,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1003] = 2,
    ACTIONS(189), 1,
      sym_rgb,
    ACTIONS(187), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [1018] = 3,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    STATE(65), 1,
      sym_offset,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1035] = 3,
    ACTIONS(185), 1,
      sym_rgb,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1052] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(88), 1,
      sym_colour,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1071] = 3,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    STATE(62), 1,
      sym_offset,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1088] = 3,
    ACTIONS(199), 1,
      anon_sym_timestamp,
    ACTIONS(201), 1,
      anon_sym_gzip,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1104] = 3,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    STATE(73), 1,
      sym_offset,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1120] = 6,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    ACTIONS(207), 1,
      anon_sym_origin,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      aux_sym_origin_token1,
    STATE(76), 1,
      sym_offset,
    ACTIONS(205), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1142] = 4,
    ACTIONS(217), 1,
      aux_sym_font_token1,
    STATE(97), 1,
      sym_part,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(215), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1160] = 3,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    STATE(103), 1,
      sym_offset,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1176] = 4,
    ACTIONS(217), 1,
      aux_sym_font_token1,
    STATE(83), 1,
      sym_part,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(223), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1194] = 2,
    ACTIONS(227), 1,
      sym_rgb,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1208] = 3,
    ACTIONS(231), 1,
      anon_sym_light,
    ACTIONS(233), 1,
      anon_sym_dark,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1224] = 2,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1237] = 2,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1250] = 2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1263] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(93), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1276] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(97), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1289] = 6,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    ACTIONS(245), 1,
      anon_sym_origin,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      aux_sym_origin_token1,
    STATE(79), 1,
      sym_offset,
    ACTIONS(205), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1310] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(89), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1323] = 2,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1336] = 2,
    ACTIONS(255), 3,
      anon_sym_AT,
      aux_sym_relative_token1,
      anon_sym_LPAREN,
    ACTIONS(253), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1349] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(61), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1362] = 2,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1375] = 1,
    ACTIONS(261), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1386] = 2,
    ACTIONS(265), 1,
      anon_sym_timestamp,
    ACTIONS(263), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1399] = 1,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1410] = 1,
    ACTIONS(267), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1421] = 1,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1431] = 1,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1441] = 2,
    ACTIONS(169), 2,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(171), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1453] = 1,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1463] = 1,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1473] = 1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1483] = 1,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1493] = 1,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1503] = 1,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1513] = 1,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1523] = 1,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1533] = 1,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1543] = 1,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1553] = 1,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1563] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1573] = 1,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1583] = 1,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1593] = 1,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1603] = 1,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1613] = 1,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1623] = 1,
    ACTIONS(301), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1633] = 1,
    ACTIONS(303), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1643] = 1,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1653] = 1,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1663] = 1,
    ACTIONS(307), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1673] = 1,
    ACTIONS(309), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1683] = 1,
    ACTIONS(311), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1693] = 1,
    ACTIONS(313), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1703] = 1,
    ACTIONS(315), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1713] = 1,
    ACTIONS(317), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1723] = 1,
    ACTIONS(319), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1733] = 1,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1743] = 1,
    ACTIONS(323), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1753] = 1,
    ACTIONS(325), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1763] = 1,
    ACTIONS(327), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1773] = 1,
    ACTIONS(329), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1783] = 1,
    ACTIONS(331), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1793] = 1,
    ACTIONS(333), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1803] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1813] = 1,
    ACTIONS(335), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1823] = 1,
    ACTIONS(337), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1833] = 1,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1843] = 1,
    ACTIONS(339), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1853] = 1,
    ACTIONS(341), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1863] = 6,
    ACTIONS(343), 1,
      anon_sym_input,
    ACTIONS(345), 1,
      anon_sym_output,
    ACTIONS(347), 1,
      anon_sym_light,
    ACTIONS(349), 1,
      anon_sym_widget,
    ACTIONS(351), 1,
      anon_sym_label,
    ACTIONS(353), 1,
      anon_sym_parameter,
  [1882] = 2,
    STATE(48), 1,
      sym_y,
    ACTIONS(355), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1892] = 5,
    ACTIONS(357), 1,
      anon_sym_AT,
    ACTIONS(359), 1,
      aux_sym__originx_token1,
    ACTIONS(361), 1,
      aux_sym__originy_token1,
    STATE(163), 1,
      sym__originy,
    STATE(180), 1,
      sym__originx,
  [1908] = 2,
    STATE(49), 1,
      sym_valign,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1918] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(363), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1928] = 2,
    STATE(49), 1,
      sym_halign,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1938] = 3,
    ACTIONS(365), 1,
      anon_sym_project,
    ACTIONS(367), 1,
      anon_sym_script,
    STATE(67), 2,
      sym_project,
      sym_script,
  [1949] = 4,
    ACTIONS(369), 1,
      aux_sym_font_token1,
    ACTIONS(371), 1,
      sym_rgb,
    ACTIONS(373), 1,
      sym_rgba,
    STATE(107), 1,
      sym_name,
  [1962] = 3,
    ACTIONS(375), 1,
      anon_sym_origin,
    ACTIONS(377), 1,
      anon_sym_background,
    STATE(74), 2,
      sym_origin,
      sym_background,
  [1973] = 3,
    ACTIONS(379), 1,
      aux_sym_font_token1,
    STATE(29), 1,
      sym_name,
    STATE(93), 1,
      sym__component,
  [1983] = 3,
    ACTIONS(381), 1,
      aux_sym_offset_token1,
    STATE(157), 1,
      sym__relative,
    STATE(161), 1,
      sym__offset,
  [1993] = 3,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    ACTIONS(383), 1,
      aux_sym_origin_token1,
    STATE(100), 1,
      sym_offset,
  [2003] = 3,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    ACTIONS(385), 1,
      aux_sym_origin_token1,
    STATE(102), 1,
      sym_offset,
  [2013] = 3,
    ACTIONS(379), 1,
      aux_sym_font_token1,
    STATE(29), 1,
      sym_name,
    STATE(92), 1,
      sym__component,
  [2023] = 3,
    ACTIONS(381), 1,
      aux_sym_offset_token1,
    STATE(154), 1,
      sym__relative,
    STATE(161), 1,
      sym__offset,
  [2033] = 3,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_offset,
  [2043] = 3,
    ACTIONS(381), 1,
      aux_sym_offset_token1,
    STATE(153), 1,
      sym__relative,
    STATE(161), 1,
      sym__offset,
  [2053] = 3,
    ACTIONS(381), 1,
      aux_sym_offset_token1,
    STATE(151), 1,
      sym__relative,
    STATE(161), 1,
      sym__offset,
  [2063] = 3,
    ACTIONS(381), 1,
      aux_sym_offset_token1,
    STATE(161), 1,
      sym__offset,
    STATE(168), 1,
      sym__relative,
  [2073] = 3,
    ACTIONS(379), 1,
      aux_sym_font_token1,
    STATE(29), 1,
      sym_name,
    STATE(86), 1,
      sym__component,
  [2083] = 3,
    ACTIONS(379), 1,
      aux_sym_font_token1,
    STATE(29), 1,
      sym_name,
    STATE(87), 1,
      sym__component,
  [2093] = 3,
    ACTIONS(379), 1,
      aux_sym_font_token1,
    STATE(29), 1,
      sym_name,
    STATE(89), 1,
      sym__component,
  [2103] = 3,
    ACTIONS(381), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym__relative,
    STATE(161), 1,
      sym__offset,
  [2113] = 2,
    ACTIONS(389), 1,
      anon_sym_panel,
    STATE(84), 1,
      sym_panel,
  [2120] = 2,
    ACTIONS(369), 1,
      aux_sym_font_token1,
    STATE(144), 1,
      sym_name,
  [2127] = 2,
    ACTIONS(369), 1,
      aux_sym_font_token1,
    STATE(127), 1,
      sym_name,
  [2134] = 2,
    ACTIONS(369), 1,
      aux_sym_font_token1,
    STATE(126), 1,
      sym_name,
  [2141] = 2,
    ACTIONS(391), 1,
      anon_sym_project,
    ACTIONS(393), 1,
      anon_sym_script,
  [2148] = 2,
    ACTIONS(369), 1,
      aux_sym_font_token1,
    STATE(132), 1,
      sym_name,
  [2155] = 2,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym__string,
  [2162] = 2,
    ACTIONS(397), 1,
      sym_rgb,
    ACTIONS(399), 1,
      sym_rgba,
  [2169] = 2,
    ACTIONS(369), 1,
      aux_sym_font_token1,
    STATE(124), 1,
      sym_name,
  [2176] = 2,
    ACTIONS(369), 1,
      aux_sym_font_token1,
    STATE(120), 1,
      sym_name,
  [2183] = 2,
    ACTIONS(359), 1,
      aux_sym__originx_token1,
    STATE(98), 1,
      sym__originx,
  [2190] = 2,
    ACTIONS(401), 1,
      sym_height,
    ACTIONS(403), 1,
      sym_width,
  [2197] = 2,
    ACTIONS(361), 1,
      aux_sym__originy_token1,
    STATE(98), 1,
      sym__originy,
  [2204] = 2,
    ACTIONS(381), 1,
      aux_sym_offset_token1,
    STATE(171), 1,
      sym__offset,
  [2211] = 1,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2216] = 2,
    ACTIONS(369), 1,
      aux_sym_font_token1,
    STATE(128), 1,
      sym_name,
  [2223] = 2,
    ACTIONS(407), 1,
      anon_sym_svg,
    STATE(108), 1,
      sym_svg,
  [2230] = 2,
    ACTIONS(127), 1,
      aux_sym_offset_token1,
    STATE(82), 1,
      sym_offset,
  [2237] = 1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [2241] = 1,
    ACTIONS(411), 1,
      aux_sym_origin_token1,
  [2245] = 1,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [2249] = 1,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [2253] = 1,
    ACTIONS(417), 1,
      aux_sym_origin_token1,
  [2257] = 1,
    ACTIONS(419), 1,
      aux_sym_origin_token1,
  [2261] = 1,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
  [2265] = 1,
    ACTIONS(423), 1,
      aux_sym_absolute_token1,
  [2269] = 1,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
  [2273] = 1,
    ACTIONS(427), 1,
      aux_sym_origin_token1,
  [2277] = 1,
    ACTIONS(429), 1,
      anon_sym_COMMA,
  [2281] = 1,
    ACTIONS(431), 1,
      anon_sym_COMMA,
  [2285] = 1,
    ACTIONS(433), 1,
      anon_sym_COMMA,
  [2289] = 1,
    ACTIONS(435), 1,
      sym_rgb,
  [2293] = 1,
    ACTIONS(437), 1,
      anon_sym_COMMA,
  [2297] = 1,
    ACTIONS(435), 1,
      sym_rgba,
  [2301] = 1,
    ACTIONS(439), 1,
      sym_width,
  [2305] = 1,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
  [2309] = 1,
    ACTIONS(443), 1,
      anon_sym_gzip,
  [2313] = 1,
    ACTIONS(443), 1,
      anon_sym_timestamp,
  [2317] = 1,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
  [2321] = 1,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
  [2325] = 1,
    ACTIONS(449), 1,
      anon_sym_COMMA,
  [2329] = 1,
    ACTIONS(451), 1,
      anon_sym_COMMA,
  [2333] = 1,
    ACTIONS(453), 1,
      anon_sym_COMMA,
  [2337] = 1,
    ACTIONS(455), 1,
      aux_sym__string_token1,
  [2341] = 1,
    ACTIONS(457), 1,
      aux_sym_absolute_token1,
  [2345] = 1,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
  [2349] = 1,
    ACTIONS(461), 1,
      anon_sym_COMMA,
  [2353] = 1,
    ACTIONS(463), 1,
      anon_sym_COMMA,
  [2357] = 1,
    ACTIONS(465), 1,
      aux_sym_relative_token1,
  [2361] = 1,
    ACTIONS(467), 1,
      aux_sym_relative_token1,
  [2365] = 1,
    ACTIONS(469), 1,
      aux_sym_absolute_token1,
  [2369] = 1,
    ACTIONS(471), 1,
      anon_sym_COMMA,
  [2373] = 1,
    ACTIONS(473), 1,
      anon_sym_COMMA,
  [2377] = 1,
    ACTIONS(475), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 268,
  [SMALL_STATE(9)] = 308,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 402,
  [SMALL_STATE(13)] = 426,
  [SMALL_STATE(14)] = 450,
  [SMALL_STATE(15)] = 474,
  [SMALL_STATE(16)] = 498,
  [SMALL_STATE(17)] = 522,
  [SMALL_STATE(18)] = 546,
  [SMALL_STATE(19)] = 570,
  [SMALL_STATE(20)] = 594,
  [SMALL_STATE(21)] = 618,
  [SMALL_STATE(22)] = 641,
  [SMALL_STATE(23)] = 677,
  [SMALL_STATE(24)] = 711,
  [SMALL_STATE(25)] = 739,
  [SMALL_STATE(26)] = 769,
  [SMALL_STATE(27)] = 799,
  [SMALL_STATE(28)] = 824,
  [SMALL_STATE(29)] = 840,
  [SMALL_STATE(30)] = 861,
  [SMALL_STATE(31)] = 880,
  [SMALL_STATE(32)] = 895,
  [SMALL_STATE(33)] = 914,
  [SMALL_STATE(34)] = 933,
  [SMALL_STATE(35)] = 952,
  [SMALL_STATE(36)] = 971,
  [SMALL_STATE(37)] = 986,
  [SMALL_STATE(38)] = 1003,
  [SMALL_STATE(39)] = 1018,
  [SMALL_STATE(40)] = 1035,
  [SMALL_STATE(41)] = 1052,
  [SMALL_STATE(42)] = 1071,
  [SMALL_STATE(43)] = 1088,
  [SMALL_STATE(44)] = 1104,
  [SMALL_STATE(45)] = 1120,
  [SMALL_STATE(46)] = 1142,
  [SMALL_STATE(47)] = 1160,
  [SMALL_STATE(48)] = 1176,
  [SMALL_STATE(49)] = 1194,
  [SMALL_STATE(50)] = 1208,
  [SMALL_STATE(51)] = 1224,
  [SMALL_STATE(52)] = 1237,
  [SMALL_STATE(53)] = 1250,
  [SMALL_STATE(54)] = 1263,
  [SMALL_STATE(55)] = 1276,
  [SMALL_STATE(56)] = 1289,
  [SMALL_STATE(57)] = 1310,
  [SMALL_STATE(58)] = 1323,
  [SMALL_STATE(59)] = 1336,
  [SMALL_STATE(60)] = 1349,
  [SMALL_STATE(61)] = 1362,
  [SMALL_STATE(62)] = 1375,
  [SMALL_STATE(63)] = 1386,
  [SMALL_STATE(64)] = 1399,
  [SMALL_STATE(65)] = 1410,
  [SMALL_STATE(66)] = 1421,
  [SMALL_STATE(67)] = 1431,
  [SMALL_STATE(68)] = 1441,
  [SMALL_STATE(69)] = 1453,
  [SMALL_STATE(70)] = 1463,
  [SMALL_STATE(71)] = 1473,
  [SMALL_STATE(72)] = 1483,
  [SMALL_STATE(73)] = 1493,
  [SMALL_STATE(74)] = 1503,
  [SMALL_STATE(75)] = 1513,
  [SMALL_STATE(76)] = 1523,
  [SMALL_STATE(77)] = 1533,
  [SMALL_STATE(78)] = 1543,
  [SMALL_STATE(79)] = 1553,
  [SMALL_STATE(80)] = 1563,
  [SMALL_STATE(81)] = 1573,
  [SMALL_STATE(82)] = 1583,
  [SMALL_STATE(83)] = 1593,
  [SMALL_STATE(84)] = 1603,
  [SMALL_STATE(85)] = 1613,
  [SMALL_STATE(86)] = 1623,
  [SMALL_STATE(87)] = 1633,
  [SMALL_STATE(88)] = 1643,
  [SMALL_STATE(89)] = 1653,
  [SMALL_STATE(90)] = 1663,
  [SMALL_STATE(91)] = 1673,
  [SMALL_STATE(92)] = 1683,
  [SMALL_STATE(93)] = 1693,
  [SMALL_STATE(94)] = 1703,
  [SMALL_STATE(95)] = 1713,
  [SMALL_STATE(96)] = 1723,
  [SMALL_STATE(97)] = 1733,
  [SMALL_STATE(98)] = 1743,
  [SMALL_STATE(99)] = 1753,
  [SMALL_STATE(100)] = 1763,
  [SMALL_STATE(101)] = 1773,
  [SMALL_STATE(102)] = 1783,
  [SMALL_STATE(103)] = 1793,
  [SMALL_STATE(104)] = 1803,
  [SMALL_STATE(105)] = 1813,
  [SMALL_STATE(106)] = 1823,
  [SMALL_STATE(107)] = 1833,
  [SMALL_STATE(108)] = 1843,
  [SMALL_STATE(109)] = 1853,
  [SMALL_STATE(110)] = 1863,
  [SMALL_STATE(111)] = 1882,
  [SMALL_STATE(112)] = 1892,
  [SMALL_STATE(113)] = 1908,
  [SMALL_STATE(114)] = 1918,
  [SMALL_STATE(115)] = 1928,
  [SMALL_STATE(116)] = 1938,
  [SMALL_STATE(117)] = 1949,
  [SMALL_STATE(118)] = 1962,
  [SMALL_STATE(119)] = 1973,
  [SMALL_STATE(120)] = 1983,
  [SMALL_STATE(121)] = 1993,
  [SMALL_STATE(122)] = 2003,
  [SMALL_STATE(123)] = 2013,
  [SMALL_STATE(124)] = 2023,
  [SMALL_STATE(125)] = 2033,
  [SMALL_STATE(126)] = 2043,
  [SMALL_STATE(127)] = 2053,
  [SMALL_STATE(128)] = 2063,
  [SMALL_STATE(129)] = 2073,
  [SMALL_STATE(130)] = 2083,
  [SMALL_STATE(131)] = 2093,
  [SMALL_STATE(132)] = 2103,
  [SMALL_STATE(133)] = 2113,
  [SMALL_STATE(134)] = 2120,
  [SMALL_STATE(135)] = 2127,
  [SMALL_STATE(136)] = 2134,
  [SMALL_STATE(137)] = 2141,
  [SMALL_STATE(138)] = 2148,
  [SMALL_STATE(139)] = 2155,
  [SMALL_STATE(140)] = 2162,
  [SMALL_STATE(141)] = 2169,
  [SMALL_STATE(142)] = 2176,
  [SMALL_STATE(143)] = 2183,
  [SMALL_STATE(144)] = 2190,
  [SMALL_STATE(145)] = 2197,
  [SMALL_STATE(146)] = 2204,
  [SMALL_STATE(147)] = 2211,
  [SMALL_STATE(148)] = 2216,
  [SMALL_STATE(149)] = 2223,
  [SMALL_STATE(150)] = 2230,
  [SMALL_STATE(151)] = 2237,
  [SMALL_STATE(152)] = 2241,
  [SMALL_STATE(153)] = 2245,
  [SMALL_STATE(154)] = 2249,
  [SMALL_STATE(155)] = 2253,
  [SMALL_STATE(156)] = 2257,
  [SMALL_STATE(157)] = 2261,
  [SMALL_STATE(158)] = 2265,
  [SMALL_STATE(159)] = 2269,
  [SMALL_STATE(160)] = 2273,
  [SMALL_STATE(161)] = 2277,
  [SMALL_STATE(162)] = 2281,
  [SMALL_STATE(163)] = 2285,
  [SMALL_STATE(164)] = 2289,
  [SMALL_STATE(165)] = 2293,
  [SMALL_STATE(166)] = 2297,
  [SMALL_STATE(167)] = 2301,
  [SMALL_STATE(168)] = 2305,
  [SMALL_STATE(169)] = 2309,
  [SMALL_STATE(170)] = 2313,
  [SMALL_STATE(171)] = 2317,
  [SMALL_STATE(172)] = 2321,
  [SMALL_STATE(173)] = 2325,
  [SMALL_STATE(174)] = 2329,
  [SMALL_STATE(175)] = 2333,
  [SMALL_STATE(176)] = 2337,
  [SMALL_STATE(177)] = 2341,
  [SMALL_STATE(178)] = 2345,
  [SMALL_STATE(179)] = 2349,
  [SMALL_STATE(180)] = 2353,
  [SMALL_STATE(181)] = 2357,
  [SMALL_STATE(182)] = 2361,
  [SMALL_STATE(183)] = 2365,
  [SMALL_STATE(184)] = 2369,
  [SMALL_STATE(185)] = 2373,
  [SMALL_STATE(186)] = 2377,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5, .production_id = 13),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5, .production_id = 13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5, .production_id = 12),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5, .production_id = 12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5, .production_id = 5),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5, .production_id = 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5, .production_id = 11),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5, .production_id = 11),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5, .production_id = 10),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5, .production_id = 10),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(118),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(137),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(116),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(133),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 6),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 14),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [459] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_command(void) {
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
