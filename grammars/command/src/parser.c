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
#define STATE_COUNT 189
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
    [1] = sym_light,
  },
  [5] = {
    [1] = sym_absolute,
  },
  [6] = {
    [2] = sym_y,
  },
  [7] = {
    [2] = sym_absolute,
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
  [34] = 7,
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
  [50] = 20,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 11,
  [57] = 57,
  [58] = 20,
  [59] = 59,
  [60] = 60,
  [61] = 18,
  [62] = 17,
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
  [104] = 30,
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
  [182] = 182,
  [183] = 183,
  [184] = 170,
  [185] = 178,
  [186] = 157,
  [187] = 183,
  [188] = 158,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(236);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(402);
      if (lookahead == ',') ADVANCE(251);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(334);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'g') ADVANCE(205);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(97);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == 'b') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(354);
      if (lookahead == 'h') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == 'v') ADVANCE(358);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '@') ADVANCE(334);
      if (lookahead == 'c') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == 'H') ADVANCE(335);
      if (lookahead == 'h') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'U') ADVANCE(345);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '5') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '8') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(128);
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 23:
      if (lookahead == ';') ADVANCE(237);
      END_STATE();
    case 24:
      if (lookahead == '@') ADVANCE(334);
      if (lookahead == 'b') ADVANCE(150);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(373);
      if (lookahead == 'm') ADVANCE(363);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(188);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(343);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 105:
      if (lookahead == 'j') ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(344);
      END_STATE();
    case 107:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(395);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(330);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(346);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(345);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(398);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(399);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(337);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == 'z') ADVANCE(99);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 207:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 208:
      if (lookahead == 'w') ADVANCE(238);
      END_STATE();
    case 209:
      if (lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 210:
      if (lookahead == 'z') ADVANCE(148);
      END_STATE();
    case 211:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 212:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 213:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 215:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(215)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 232:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 233:
      if (eof) ADVANCE(236);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(232);
      if (lookahead == ',') ADVANCE(251);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(334);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'm') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(292);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(233)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 234:
      if (eof) ADVANCE(236);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(232);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(234)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 235:
      if (eof) ADVANCE(236);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == ',') ADVANCE(251);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'g') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(97);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 233},
  [3] = {.lex_state = 233},
  [4] = {.lex_state = 235},
  [5] = {.lex_state = 235},
  [6] = {.lex_state = 235},
  [7] = {.lex_state = 233},
  [8] = {.lex_state = 235},
  [9] = {.lex_state = 235},
  [10] = {.lex_state = 235},
  [11] = {.lex_state = 233},
  [12] = {.lex_state = 233},
  [13] = {.lex_state = 233},
  [14] = {.lex_state = 233},
  [15] = {.lex_state = 233},
  [16] = {.lex_state = 233},
  [17] = {.lex_state = 233},
  [18] = {.lex_state = 233},
  [19] = {.lex_state = 233},
  [20] = {.lex_state = 233},
  [21] = {.lex_state = 235},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 235},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 235},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 234},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 235},
  [41] = {.lex_state = 235},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 234},
  [44] = {.lex_state = 234},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 235},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 234},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 234},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 234},
  [62] = {.lex_state = 234},
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
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 235},
  [110] = {.lex_state = 24},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 42},
  [114] = {.lex_state = 42},
  [115] = {.lex_state = 235},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 233},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 233},
  [121] = {.lex_state = 233},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 233},
  [124] = {.lex_state = 233},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 233},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 233},
  [131] = {.lex_state = 233},
  [132] = {.lex_state = 233},
  [133] = {.lex_state = 233},
  [134] = {.lex_state = 233},
  [135] = {.lex_state = 233},
  [136] = {.lex_state = 233},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 24},
  [140] = {.lex_state = 233},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 233},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 235},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 235},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 233},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 215},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 233},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 3},
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
    [sym_command] = STATE(180),
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
    STATE(29), 1,
      sym__align,
    STATE(31), 1,
      sym_valign,
    STATE(42), 1,
      sym_halign,
    STATE(86), 1,
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
    STATE(31), 1,
      sym_valign,
    STATE(39), 1,
      sym__align,
    STATE(42), 1,
      sym_halign,
    STATE(105), 1,
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
    STATE(31), 1,
      sym_valign,
    STATE(33), 1,
      sym__align,
    STATE(42), 1,
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
    STATE(31), 1,
      sym_valign,
    STATE(37), 1,
      sym__align,
    STATE(42), 1,
      sym_halign,
    STATE(99), 1,
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
    STATE(29), 1,
      sym__align,
    STATE(31), 1,
      sym_valign,
    STATE(42), 1,
      sym_halign,
    STATE(86), 1,
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
  [228] = 4,
    ACTIONS(55), 1,
      aux_sym_offset_token1,
    STATE(18), 1,
      sym_offset,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(53), 15,
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
  [258] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(31), 1,
      sym_valign,
    STATE(33), 1,
      sym__align,
    STATE(42), 1,
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
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [298] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(31), 1,
      sym_valign,
    STATE(38), 1,
      sym__align,
    STATE(42), 1,
      sym_halign,
    STATE(102), 1,
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
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [338] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(31), 1,
      sym_valign,
    STATE(37), 1,
      sym__align,
    STATE(42), 1,
      sym_halign,
    STATE(99), 1,
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
  [641] = 8,
    ACTIONS(105), 1,
      aux_sym_identifier_token1,
    ACTIONS(107), 1,
      anon_sym_vertical,
    ACTIONS(109), 1,
      anon_sym_horizontal,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    STATE(79), 1,
      sym_offset,
    STATE(140), 1,
      sym_identifier,
    STATE(63), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(103), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [675] = 9,
    ACTIONS(113), 1,
      anon_sym_module,
    ACTIONS(115), 1,
      anon_sym_input,
    ACTIONS(117), 1,
      anon_sym_output,
    ACTIONS(119), 1,
      aux_sym_parameter_token1,
    ACTIONS(121), 1,
      anon_sym_light,
    ACTIONS(123), 1,
      anon_sym_widget,
    ACTIONS(125), 1,
      anon_sym_label,
    ACTIONS(127), 1,
      anon_sym_guide,
    STATE(101), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [711] = 6,
    ACTIONS(105), 1,
      aux_sym_identifier_token1,
    ACTIONS(107), 1,
      anon_sym_vertical,
    ACTIONS(109), 1,
      anon_sym_horizontal,
    STATE(22), 1,
      sym_identifier,
    STATE(78), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(103), 7,
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
    STATE(174), 1,
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
  [840] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(99), 1,
      sym_colour,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [859] = 2,
    ACTIONS(167), 1,
      sym_width,
    ACTIONS(165), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_height,
      aux_sym_offset_token1,
  [874] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      sym_rgb,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [891] = 5,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_relative_token1,
    STATE(171), 1,
      sym_x,
    STATE(44), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(153), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [912] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(86), 1,
      sym_colour,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [931] = 4,
    ACTIONS(179), 1,
      aux_sym_offset_token1,
    STATE(61), 1,
      sym_offset,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(53), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [950] = 2,
    ACTIONS(183), 1,
      sym_rgb,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [965] = 2,
    ACTIONS(187), 1,
      sym_rgb,
    ACTIONS(185), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [980] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(102), 1,
      sym_colour,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [999] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(103), 1,
      sym_colour,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1018] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(80), 1,
      sym_colour,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1037] = 3,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    STATE(60), 1,
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
  [1054] = 3,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    STATE(59), 1,
      sym_offset,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1071] = 3,
    ACTIONS(173), 1,
      sym_rgb,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1088] = 4,
    ACTIONS(201), 1,
      aux_sym_font_token1,
    STATE(65), 1,
      sym_part,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1106] = 4,
    ACTIONS(201), 1,
      aux_sym_font_token1,
    STATE(94), 1,
      sym_part,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(205), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1124] = 2,
    ACTIONS(209), 1,
      sym_rgb,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1138] = 3,
    ACTIONS(213), 1,
      anon_sym_timestamp,
    ACTIONS(215), 1,
      anon_sym_gzip,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1154] = 3,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    STATE(70), 1,
      sym_offset,
    ACTIONS(217), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1170] = 3,
    ACTIONS(221), 1,
      anon_sym_light,
    ACTIONS(223), 1,
      anon_sym_dark,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1186] = 2,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(225), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1199] = 1,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1210] = 2,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1223] = 2,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1236] = 2,
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
  [1249] = 2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(225), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1262] = 2,
    ACTIONS(243), 3,
      anon_sym_AT,
      aux_sym_relative_token1,
      anon_sym_LPAREN,
    ACTIONS(241), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1275] = 2,
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
  [1288] = 2,
    ACTIONS(247), 1,
      anon_sym_timestamp,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1301] = 2,
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
  [1314] = 1,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1325] = 1,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1336] = 2,
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
  [1349] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(85), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1362] = 1,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1372] = 1,
    ACTIONS(255), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1382] = 1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1392] = 1,
    ACTIONS(259), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1402] = 1,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1412] = 1,
    ACTIONS(263), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1422] = 1,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1432] = 1,
    ACTIONS(267), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1442] = 1,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1452] = 1,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1462] = 1,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1472] = 1,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1482] = 1,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1492] = 1,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1502] = 1,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1512] = 1,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1522] = 1,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1532] = 1,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1542] = 1,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1552] = 1,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1562] = 1,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1572] = 1,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1582] = 1,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1592] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1602] = 1,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1612] = 1,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1622] = 1,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1632] = 1,
    ACTIONS(301), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1642] = 1,
    ACTIONS(303), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1652] = 1,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1662] = 1,
    ACTIONS(307), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1672] = 1,
    ACTIONS(309), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1682] = 1,
    ACTIONS(311), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1692] = 1,
    ACTIONS(313), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1702] = 1,
    ACTIONS(315), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1712] = 1,
    ACTIONS(317), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1722] = 1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1732] = 1,
    ACTIONS(319), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1742] = 1,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1752] = 1,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1762] = 1,
    ACTIONS(323), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1772] = 2,
    ACTIONS(165), 2,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(167), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1784] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1794] = 1,
    ACTIONS(325), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1804] = 1,
    ACTIONS(327), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1814] = 6,
    ACTIONS(329), 1,
      anon_sym_input,
    ACTIONS(331), 1,
      anon_sym_output,
    ACTIONS(333), 1,
      anon_sym_light,
    ACTIONS(335), 1,
      anon_sym_widget,
    ACTIONS(337), 1,
      anon_sym_label,
    ACTIONS(339), 1,
      anon_sym_parameter,
  [1833] = 2,
    STATE(45), 1,
      sym_valign,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1843] = 5,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    ACTIONS(341), 1,
      anon_sym_origin,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(345), 1,
      aux_sym_origin_token1,
    STATE(73), 1,
      sym_offset,
  [1859] = 5,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    ACTIONS(347), 1,
      anon_sym_origin,
    ACTIONS(349), 1,
      anon_sym_AT,
    ACTIONS(351), 1,
      aux_sym_origin_token1,
    STATE(76), 1,
      sym_offset,
  [1875] = 5,
    ACTIONS(353), 1,
      anon_sym_AT,
    ACTIONS(355), 1,
      aux_sym__originx_token1,
    ACTIONS(357), 1,
      aux_sym__originy_token1,
    STATE(161), 1,
      sym__originy,
    STATE(162), 1,
      sym__originx,
  [1891] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(359), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1901] = 2,
    STATE(43), 1,
      sym_y,
    ACTIONS(361), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1911] = 2,
    STATE(45), 1,
      sym_halign,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1921] = 3,
    ACTIONS(363), 1,
      anon_sym_origin,
    ACTIONS(365), 1,
      anon_sym_background,
    STATE(98), 2,
      sym_origin,
      sym_background,
  [1932] = 4,
    ACTIONS(367), 1,
      aux_sym_font_token1,
    ACTIONS(369), 1,
      sym_rgb,
    ACTIONS(371), 1,
      sym_rgba,
    STATE(81), 1,
      sym_name,
  [1945] = 4,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    ACTIONS(373), 1,
      anon_sym_AT,
    ACTIONS(375), 1,
      aux_sym_origin_token1,
    STATE(106), 1,
      sym_offset,
  [1958] = 3,
    ACTIONS(377), 1,
      anon_sym_project,
    ACTIONS(379), 1,
      anon_sym_script,
    STATE(84), 2,
      sym_project,
      sym_script,
  [1969] = 4,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    ACTIONS(381), 1,
      anon_sym_AT,
    ACTIONS(383), 1,
      aux_sym_origin_token1,
    STATE(67), 1,
      sym_offset,
  [1982] = 3,
    ACTIONS(385), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym__offset,
    STATE(166), 1,
      sym__relative,
  [1992] = 3,
    ACTIONS(387), 1,
      aux_sym_font_token1,
    STATE(32), 1,
      sym_name,
    STATE(66), 1,
      sym__component,
  [2002] = 3,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      sym_offset,
  [2012] = 3,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    ACTIONS(391), 1,
      aux_sym_origin_token1,
    STATE(72), 1,
      sym_offset,
  [2022] = 3,
    ACTIONS(387), 1,
      aux_sym_font_token1,
    STATE(32), 1,
      sym_name,
    STATE(77), 1,
      sym__component,
  [2032] = 3,
    ACTIONS(387), 1,
      aux_sym_font_token1,
    STATE(32), 1,
      sym_name,
    STATE(75), 1,
      sym__component,
  [2042] = 3,
    ACTIONS(387), 1,
      aux_sym_font_token1,
    STATE(32), 1,
      sym_name,
    STATE(74), 1,
      sym__component,
  [2052] = 3,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    ACTIONS(393), 1,
      aux_sym_origin_token1,
    STATE(71), 1,
      sym_offset,
  [2062] = 3,
    ACTIONS(387), 1,
      aux_sym_font_token1,
    STATE(32), 1,
      sym_name,
    STATE(68), 1,
      sym__component,
  [2072] = 3,
    ACTIONS(385), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym__offset,
    STATE(163), 1,
      sym__relative,
  [2082] = 3,
    ACTIONS(385), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym__offset,
    STATE(165), 1,
      sym__relative,
  [2092] = 3,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    ACTIONS(395), 1,
      aux_sym_origin_token1,
    STATE(107), 1,
      sym_offset,
  [2102] = 3,
    ACTIONS(385), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym__offset,
    STATE(168), 1,
      sym__relative,
  [2112] = 3,
    ACTIONS(385), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym__offset,
    STATE(169), 1,
      sym__relative,
  [2122] = 3,
    ACTIONS(385), 1,
      aux_sym_offset_token1,
    STATE(156), 1,
      sym__relative,
    STATE(159), 1,
      sym__offset,
  [2132] = 3,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    ACTIONS(397), 1,
      aux_sym_origin_token1,
    STATE(100), 1,
      sym_offset,
  [2142] = 2,
    ACTIONS(399), 1,
      sym_rgb,
    ACTIONS(401), 1,
      sym_rgba,
  [2149] = 2,
    ACTIONS(367), 1,
      aux_sym_font_token1,
    STATE(131), 1,
      sym_name,
  [2156] = 2,
    ACTIONS(357), 1,
      aux_sym__originy_token1,
    STATE(92), 1,
      sym__originy,
  [2163] = 2,
    ACTIONS(111), 1,
      aux_sym_offset_token1,
    STATE(79), 1,
      sym_offset,
  [2170] = 2,
    ACTIONS(367), 1,
      aux_sym_font_token1,
    STATE(133), 1,
      sym_name,
  [2177] = 2,
    ACTIONS(403), 1,
      anon_sym_panel,
    STATE(83), 1,
      sym_panel,
  [2184] = 2,
    ACTIONS(367), 1,
      aux_sym_font_token1,
    STATE(130), 1,
      sym_name,
  [2191] = 2,
    ACTIONS(355), 1,
      aux_sym__originx_token1,
    STATE(92), 1,
      sym__originx,
  [2198] = 2,
    ACTIONS(405), 1,
      anon_sym_svg,
    STATE(64), 1,
      sym_svg,
  [2205] = 2,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym__string,
  [2212] = 2,
    ACTIONS(367), 1,
      aux_sym_font_token1,
    STATE(121), 1,
      sym_name,
  [2219] = 2,
    ACTIONS(409), 1,
      anon_sym_project,
    ACTIONS(411), 1,
      anon_sym_script,
  [2226] = 1,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2231] = 2,
    ACTIONS(367), 1,
      aux_sym_font_token1,
    STATE(154), 1,
      sym_name,
  [2238] = 2,
    ACTIONS(385), 1,
      aux_sym_offset_token1,
    STATE(173), 1,
      sym__offset,
  [2245] = 2,
    ACTIONS(367), 1,
      aux_sym_font_token1,
    STATE(135), 1,
      sym_name,
  [2252] = 2,
    ACTIONS(367), 1,
      aux_sym_font_token1,
    STATE(134), 1,
      sym_name,
  [2259] = 2,
    ACTIONS(415), 1,
      sym_height,
    ACTIONS(417), 1,
      sym_width,
  [2266] = 1,
    ACTIONS(419), 1,
      sym_rgba,
  [2270] = 1,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
  [2274] = 1,
    ACTIONS(423), 1,
      anon_sym_COMMA,
  [2278] = 1,
    ACTIONS(425), 1,
      aux_sym_absolute_token1,
  [2282] = 1,
    ACTIONS(427), 1,
      anon_sym_COMMA,
  [2286] = 1,
    ACTIONS(429), 1,
      sym_width,
  [2290] = 1,
    ACTIONS(431), 1,
      anon_sym_COMMA,
  [2294] = 1,
    ACTIONS(433), 1,
      anon_sym_COMMA,
  [2298] = 1,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
  [2302] = 1,
    ACTIONS(437), 1,
      aux_sym_origin_token1,
  [2306] = 1,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [2310] = 1,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
  [2314] = 1,
    ACTIONS(443), 1,
      aux_sym__string_token1,
  [2318] = 1,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
  [2322] = 1,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [2326] = 1,
    ACTIONS(449), 1,
      aux_sym_relative_token1,
  [2330] = 1,
    ACTIONS(451), 1,
      anon_sym_COMMA,
  [2334] = 1,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
  [2338] = 1,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [2342] = 1,
    ACTIONS(457), 1,
      anon_sym_COMMA,
  [2346] = 1,
    ACTIONS(459), 1,
      anon_sym_COMMA,
  [2350] = 1,
    ACTIONS(419), 1,
      sym_rgb,
  [2354] = 1,
    ACTIONS(461), 1,
      anon_sym_gzip,
  [2358] = 1,
    ACTIONS(463), 1,
      aux_sym_absolute_token1,
  [2362] = 1,
    ACTIONS(461), 1,
      anon_sym_timestamp,
  [2366] = 1,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
  [2370] = 1,
    ACTIONS(467), 1,
      anon_sym_COMMA,
  [2374] = 1,
    ACTIONS(469), 1,
      aux_sym_origin_token1,
  [2378] = 1,
    ACTIONS(471), 1,
      anon_sym_COMMA,
  [2382] = 1,
    ACTIONS(473), 1,
      aux_sym_relative_token1,
  [2386] = 1,
    ACTIONS(475), 1,
      aux_sym_absolute_token1,
  [2390] = 1,
    ACTIONS(477), 1,
      anon_sym_COMMA,
  [2394] = 1,
    ACTIONS(479), 1,
      anon_sym_COMMA,
  [2398] = 1,
    ACTIONS(481), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 298,
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
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 711,
  [SMALL_STATE(25)] = 739,
  [SMALL_STATE(26)] = 769,
  [SMALL_STATE(27)] = 799,
  [SMALL_STATE(28)] = 824,
  [SMALL_STATE(29)] = 840,
  [SMALL_STATE(30)] = 859,
  [SMALL_STATE(31)] = 874,
  [SMALL_STATE(32)] = 891,
  [SMALL_STATE(33)] = 912,
  [SMALL_STATE(34)] = 931,
  [SMALL_STATE(35)] = 950,
  [SMALL_STATE(36)] = 965,
  [SMALL_STATE(37)] = 980,
  [SMALL_STATE(38)] = 999,
  [SMALL_STATE(39)] = 1018,
  [SMALL_STATE(40)] = 1037,
  [SMALL_STATE(41)] = 1054,
  [SMALL_STATE(42)] = 1071,
  [SMALL_STATE(43)] = 1088,
  [SMALL_STATE(44)] = 1106,
  [SMALL_STATE(45)] = 1124,
  [SMALL_STATE(46)] = 1138,
  [SMALL_STATE(47)] = 1154,
  [SMALL_STATE(48)] = 1170,
  [SMALL_STATE(49)] = 1186,
  [SMALL_STATE(50)] = 1199,
  [SMALL_STATE(51)] = 1210,
  [SMALL_STATE(52)] = 1223,
  [SMALL_STATE(53)] = 1236,
  [SMALL_STATE(54)] = 1249,
  [SMALL_STATE(55)] = 1262,
  [SMALL_STATE(56)] = 1275,
  [SMALL_STATE(57)] = 1288,
  [SMALL_STATE(58)] = 1301,
  [SMALL_STATE(59)] = 1314,
  [SMALL_STATE(60)] = 1325,
  [SMALL_STATE(61)] = 1336,
  [SMALL_STATE(62)] = 1349,
  [SMALL_STATE(63)] = 1362,
  [SMALL_STATE(64)] = 1372,
  [SMALL_STATE(65)] = 1382,
  [SMALL_STATE(66)] = 1392,
  [SMALL_STATE(67)] = 1402,
  [SMALL_STATE(68)] = 1412,
  [SMALL_STATE(69)] = 1422,
  [SMALL_STATE(70)] = 1432,
  [SMALL_STATE(71)] = 1442,
  [SMALL_STATE(72)] = 1452,
  [SMALL_STATE(73)] = 1462,
  [SMALL_STATE(74)] = 1472,
  [SMALL_STATE(75)] = 1482,
  [SMALL_STATE(76)] = 1492,
  [SMALL_STATE(77)] = 1502,
  [SMALL_STATE(78)] = 1512,
  [SMALL_STATE(79)] = 1522,
  [SMALL_STATE(80)] = 1532,
  [SMALL_STATE(81)] = 1542,
  [SMALL_STATE(82)] = 1552,
  [SMALL_STATE(83)] = 1562,
  [SMALL_STATE(84)] = 1572,
  [SMALL_STATE(85)] = 1582,
  [SMALL_STATE(86)] = 1592,
  [SMALL_STATE(87)] = 1602,
  [SMALL_STATE(88)] = 1612,
  [SMALL_STATE(89)] = 1622,
  [SMALL_STATE(90)] = 1632,
  [SMALL_STATE(91)] = 1642,
  [SMALL_STATE(92)] = 1652,
  [SMALL_STATE(93)] = 1662,
  [SMALL_STATE(94)] = 1672,
  [SMALL_STATE(95)] = 1682,
  [SMALL_STATE(96)] = 1692,
  [SMALL_STATE(97)] = 1702,
  [SMALL_STATE(98)] = 1712,
  [SMALL_STATE(99)] = 1722,
  [SMALL_STATE(100)] = 1732,
  [SMALL_STATE(101)] = 1742,
  [SMALL_STATE(102)] = 1752,
  [SMALL_STATE(103)] = 1762,
  [SMALL_STATE(104)] = 1772,
  [SMALL_STATE(105)] = 1784,
  [SMALL_STATE(106)] = 1794,
  [SMALL_STATE(107)] = 1804,
  [SMALL_STATE(108)] = 1814,
  [SMALL_STATE(109)] = 1833,
  [SMALL_STATE(110)] = 1843,
  [SMALL_STATE(111)] = 1859,
  [SMALL_STATE(112)] = 1875,
  [SMALL_STATE(113)] = 1891,
  [SMALL_STATE(114)] = 1901,
  [SMALL_STATE(115)] = 1911,
  [SMALL_STATE(116)] = 1921,
  [SMALL_STATE(117)] = 1932,
  [SMALL_STATE(118)] = 1945,
  [SMALL_STATE(119)] = 1958,
  [SMALL_STATE(120)] = 1969,
  [SMALL_STATE(121)] = 1982,
  [SMALL_STATE(122)] = 1992,
  [SMALL_STATE(123)] = 2002,
  [SMALL_STATE(124)] = 2012,
  [SMALL_STATE(125)] = 2022,
  [SMALL_STATE(126)] = 2032,
  [SMALL_STATE(127)] = 2042,
  [SMALL_STATE(128)] = 2052,
  [SMALL_STATE(129)] = 2062,
  [SMALL_STATE(130)] = 2072,
  [SMALL_STATE(131)] = 2082,
  [SMALL_STATE(132)] = 2092,
  [SMALL_STATE(133)] = 2102,
  [SMALL_STATE(134)] = 2112,
  [SMALL_STATE(135)] = 2122,
  [SMALL_STATE(136)] = 2132,
  [SMALL_STATE(137)] = 2142,
  [SMALL_STATE(138)] = 2149,
  [SMALL_STATE(139)] = 2156,
  [SMALL_STATE(140)] = 2163,
  [SMALL_STATE(141)] = 2170,
  [SMALL_STATE(142)] = 2177,
  [SMALL_STATE(143)] = 2184,
  [SMALL_STATE(144)] = 2191,
  [SMALL_STATE(145)] = 2198,
  [SMALL_STATE(146)] = 2205,
  [SMALL_STATE(147)] = 2212,
  [SMALL_STATE(148)] = 2219,
  [SMALL_STATE(149)] = 2226,
  [SMALL_STATE(150)] = 2231,
  [SMALL_STATE(151)] = 2238,
  [SMALL_STATE(152)] = 2245,
  [SMALL_STATE(153)] = 2252,
  [SMALL_STATE(154)] = 2259,
  [SMALL_STATE(155)] = 2266,
  [SMALL_STATE(156)] = 2270,
  [SMALL_STATE(157)] = 2274,
  [SMALL_STATE(158)] = 2278,
  [SMALL_STATE(159)] = 2282,
  [SMALL_STATE(160)] = 2286,
  [SMALL_STATE(161)] = 2290,
  [SMALL_STATE(162)] = 2294,
  [SMALL_STATE(163)] = 2298,
  [SMALL_STATE(164)] = 2302,
  [SMALL_STATE(165)] = 2306,
  [SMALL_STATE(166)] = 2310,
  [SMALL_STATE(167)] = 2314,
  [SMALL_STATE(168)] = 2318,
  [SMALL_STATE(169)] = 2322,
  [SMALL_STATE(170)] = 2326,
  [SMALL_STATE(171)] = 2330,
  [SMALL_STATE(172)] = 2334,
  [SMALL_STATE(173)] = 2338,
  [SMALL_STATE(174)] = 2342,
  [SMALL_STATE(175)] = 2346,
  [SMALL_STATE(176)] = 2350,
  [SMALL_STATE(177)] = 2354,
  [SMALL_STATE(178)] = 2358,
  [SMALL_STATE(179)] = 2362,
  [SMALL_STATE(180)] = 2366,
  [SMALL_STATE(181)] = 2370,
  [SMALL_STATE(182)] = 2374,
  [SMALL_STATE(183)] = 2378,
  [SMALL_STATE(184)] = 2382,
  [SMALL_STATE(185)] = 2386,
  [SMALL_STATE(186)] = 2390,
  [SMALL_STATE(187)] = 2394,
  [SMALL_STATE(188)] = 2398,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 6),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5, .production_id = 10),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5, .production_id = 10),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5, .production_id = 11),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5, .production_id = 11),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5, .production_id = 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5, .production_id = 12),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5, .production_id = 12),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 5, .production_id = 13),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 5, .production_id = 13),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(116),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(148),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(119),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(142),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 8),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 7),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 7),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 14),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [465] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
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
