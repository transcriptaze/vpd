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
#define STATE_COUNT 202
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 1
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_decorate = 4,
  anon_sym_with = 5,
  anon_sym_load = 6,
  anon_sym_project = 7,
  anon_sym_script = 8,
  anon_sym_save = 9,
  anon_sym_export = 10,
  anon_sym_timestamp = 11,
  anon_sym_COMMA = 12,
  anon_sym_gzip = 13,
  anon_sym_input = 14,
  anon_sym_output = 15,
  anon_sym_parameter = 16,
  anon_sym_light = 17,
  anon_sym_widget = 18,
  anon_sym_module = 19,
  aux_sym_parameter_token1 = 20,
  anon_sym_label = 21,
  aux_sym_font_token1 = 22,
  sym_fontsize = 23,
  anon_sym_left = 24,
  anon_sym_centre = 25,
  anon_sym_center = 26,
  anon_sym_right = 27,
  anon_sym_top = 28,
  anon_sym_middle = 29,
  anon_sym_baseline = 30,
  anon_sym_bottom = 31,
  anon_sym_origin = 32,
  anon_sym_AT = 33,
  aux_sym_origin_token1 = 34,
  aux_sym__originx_token1 = 35,
  aux_sym__originy_token1 = 36,
  anon_sym_background = 37,
  sym_rgb = 38,
  sym_rgba = 39,
  anon_sym_panel = 40,
  anon_sym_svg = 41,
  anon_sym_dark = 42,
  sym_height = 43,
  sym_width = 44,
  anon_sym_guide = 45,
  aux_sym_identifier_token1 = 46,
  anon_sym_vertical = 47,
  anon_sym_horizontal = 48,
  aux_sym_offset_token1 = 49,
  anon_sym_DQUOTE = 50,
  aux_sym__string_token1 = 51,
  aux_sym_absolute_token1 = 52,
  aux_sym_relative_token1 = 53,
  anon_sym_LPAREN = 54,
  anon_sym_RPAREN = 55,
  sym_command = 56,
  sym_new = 57,
  sym_set = 58,
  sym_decorate = 59,
  sym_load = 60,
  sym_save = 61,
  sym_export = 62,
  sym_project = 63,
  sym_script = 64,
  sym__entity = 65,
  sym__input = 66,
  sym__output = 67,
  sym__parameter = 68,
  sym__light = 69,
  sym__widget = 70,
  sym_module = 71,
  sym_input = 72,
  sym_output = 73,
  sym_parameter = 74,
  sym_light = 75,
  sym_widget = 76,
  sym__component = 77,
  sym_label = 78,
  sym_font = 79,
  sym__align = 80,
  sym_halign = 81,
  sym_valign = 82,
  sym_colour = 83,
  sym_decoration = 84,
  sym_origin = 85,
  sym__originx = 86,
  sym__originy = 87,
  sym_background = 88,
  sym_panel = 89,
  sym_svg = 90,
  sym_name = 91,
  sym_part = 92,
  sym_guide = 93,
  sym_identifier = 94,
  sym_vertical = 95,
  sym_horizontal = 96,
  sym_geometry = 97,
  sym_offset = 98,
  sym__offset = 99,
  sym_guideline = 100,
  sym__string = 101,
  sym_absolute = 102,
  sym_relative = 103,
  sym__decorate = 104,
  sym__relative = 105,
  sym_x = 106,
  sym_y = 107,
  aux_sym_command_repeat1 = 108,
  alias_sym_dy = 109,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_decorate] = "decorate",
  [anon_sym_with] = "with",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_COMMA] = ",",
  [anon_sym_gzip] = "gzip",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_module] = "module",
  [aux_sym_parameter_token1] = "parameter_token1",
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
  [anon_sym_RPAREN] = ")",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_decorate] = "decorate",
  [sym_load] = "load",
  [sym_save] = "save",
  [sym_export] = "export",
  [sym_project] = "project",
  [sym_script] = "script",
  [sym__entity] = "_entity",
  [sym__input] = "input",
  [sym__output] = "output",
  [sym__parameter] = "parameter",
  [sym__light] = "light",
  [sym__widget] = "widget",
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
  [sym_decoration] = "decoration",
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
  [sym__decorate] = "decorate",
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
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_gzip] = anon_sym_gzip,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_module] = anon_sym_module,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
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
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_decorate] = sym_decorate,
  [sym_load] = sym_load,
  [sym_save] = sym_save,
  [sym_export] = sym_export,
  [sym_project] = sym_project,
  [sym_script] = sym_script,
  [sym__entity] = sym__entity,
  [sym__input] = sym_input,
  [sym__output] = sym_output,
  [sym__parameter] = sym_parameter,
  [sym__light] = sym_light,
  [sym__widget] = sym_widget,
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
  [sym_decoration] = sym_decoration,
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
  [sym__decorate] = sym_decorate,
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
  [anon_sym_decorate] = {
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
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_token1] = {
    .visible = false,
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
  [sym_decorate] = {
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
  [sym__input] = {
    .visible = true,
    .named = true,
  },
  [sym__output] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__light] = {
    .visible = true,
    .named = true,
  },
  [sym__widget] = {
    .visible = true,
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
  [sym_decoration] = {
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
  [sym__decorate] = {
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
    [1] = sym_parameter,
  },
  [13] = {
    [1] = sym_widget,
  },
  [14] = {
    [1] = sym_label,
  },
  [15] = {
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
  [34] = 8,
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
  [52] = 18,
  [53] = 18,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 13,
  [61] = 14,
  [62] = 11,
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
  [112] = 28,
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
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 194,
  [198] = 189,
  [199] = 182,
  [200] = 181,
  [201] = 179,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(250);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(426);
      if (lookahead == ',') ADVANCE(268);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'g') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == 'v') ADVANCE(76);
      if (lookahead == 'w') ADVANCE(101);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'h') ADVANCE(399);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == 'm') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == 'v') ADVANCE(383);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == 'H') ADVANCE(360);
      if (lookahead == 'h') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'U') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '5') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(372);
      if (lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(420);
      if (lookahead == 'm') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '8') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(424);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(138);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(138);
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 23:
      if (lookahead == ';') ADVANCE(251);
      END_STATE();
    case 24:
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'b') ADVANCE(162);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(388);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(192);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(201);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(368);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 115:
      if (lookahead == 'j') ADVANCE(74);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(369);
      END_STATE();
    case 117:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(367);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(360);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(420);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(355);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(371);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(370);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(423);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(424);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(362);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == 'z') ADVANCE(109);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 221:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 222:
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 223:
      if (lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 224:
      if (lookahead == 'z') ADVANCE(160);
      END_STATE();
    case 225:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 226:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(420);
      if (lookahead == 'm') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(424);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(229)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 245:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 246:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 247:
      if (eof) ADVANCE(250);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ',') ADVANCE(268);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(281);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(314);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 248:
      if (eof) ADVANCE(250);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 249:
      if (eof) ADVANCE(250);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ',') ADVANCE(268);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'g') ADVANCE(215);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'w') ADVANCE(101);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(138);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 247},
  [3] = {.lex_state = 247},
  [4] = {.lex_state = 249},
  [5] = {.lex_state = 249},
  [6] = {.lex_state = 249},
  [7] = {.lex_state = 249},
  [8] = {.lex_state = 247},
  [9] = {.lex_state = 249},
  [10] = {.lex_state = 249},
  [11] = {.lex_state = 247},
  [12] = {.lex_state = 247},
  [13] = {.lex_state = 247},
  [14] = {.lex_state = 247},
  [15] = {.lex_state = 247},
  [16] = {.lex_state = 247},
  [17] = {.lex_state = 247},
  [18] = {.lex_state = 247},
  [19] = {.lex_state = 247},
  [20] = {.lex_state = 247},
  [21] = {.lex_state = 249},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 249},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 249},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 248},
  [35] = {.lex_state = 249},
  [36] = {.lex_state = 249},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 248},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 249},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 248},
  [49] = {.lex_state = 249},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 248},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 248},
  [61] = {.lex_state = 248},
  [62] = {.lex_state = 248},
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
  [80] = {.lex_state = 24},
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
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 44},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 249},
  [117] = {.lex_state = 249},
  [118] = {.lex_state = 44},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 247},
  [123] = {.lex_state = 247},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 247},
  [131] = {.lex_state = 247},
  [132] = {.lex_state = 247},
  [133] = {.lex_state = 247},
  [134] = {.lex_state = 247},
  [135] = {.lex_state = 247},
  [136] = {.lex_state = 247},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 25},
  [146] = {.lex_state = 25},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 247},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 249},
  [158] = {.lex_state = 247},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 247},
  [178] = {.lex_state = 229},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 249},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 247},
  [188] = {.lex_state = 247},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 247},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
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
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(195),
    [sym_new] = STATE(24),
    [sym_set] = STATE(24),
    [sym_decorate] = STATE(24),
    [sym_load] = STATE(24),
    [sym_save] = STATE(24),
    [sym_export] = STATE(24),
    [aux_sym_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_decorate] = ACTIONS(11),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(15),
    [anon_sym_export] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(23), 1,
      aux_sym_font_token1,
    ACTIONS(25), 1,
      sym_fontsize,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(4), 1,
      sym_font,
    STATE(31), 1,
      sym__align,
    STATE(32), 1,
      sym_halign,
    STATE(33), 1,
      sym_valign,
    STATE(69), 1,
      sym_colour,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(27), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(29), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(21), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [52] = 13,
    ACTIONS(23), 1,
      aux_sym_font_token1,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    ACTIONS(39), 1,
      sym_fontsize,
    STATE(5), 1,
      sym_font,
    STATE(32), 1,
      sym_halign,
    STATE(33), 1,
      sym_valign,
    STATE(37), 1,
      sym__align,
    STATE(73), 1,
      sym_colour,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(27), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(29), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(37), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [104] = 10,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    ACTIONS(43), 1,
      sym_fontsize,
    STATE(30), 1,
      sym__align,
    STATE(32), 1,
      sym_halign,
    STATE(33), 1,
      sym_valign,
    STATE(111), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [148] = 10,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    ACTIONS(51), 1,
      sym_fontsize,
    STATE(32), 1,
      sym_halign,
    STATE(33), 1,
      sym_valign,
    STATE(41), 1,
      sym__align,
    STATE(78), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [192] = 9,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(32), 1,
      sym_halign,
    STATE(33), 1,
      sym_valign,
    STATE(41), 1,
      sym__align,
    STATE(78), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [233] = 9,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(32), 1,
      sym_halign,
    STATE(33), 1,
      sym_valign,
    STATE(38), 1,
      sym__align,
    STATE(79), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [274] = 4,
    ACTIONS(59), 1,
      aux_sym_offset_token1,
    STATE(14), 1,
      sym_offset,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(57), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [305] = 9,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(31), 1,
      sym__align,
    STATE(32), 1,
      sym_halign,
    STATE(33), 1,
      sym_valign,
    STATE(69), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [346] = 9,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(30), 1,
      sym__align,
    STATE(32), 1,
      sym_halign,
    STATE(33), 1,
      sym_valign,
    STATE(111), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [387] = 2,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(63), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [412] = 2,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(67), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [437] = 2,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(71), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [462] = 2,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(75), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [487] = 2,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(79), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [512] = 2,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(83), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [537] = 2,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(87), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [562] = 2,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(91), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [587] = 2,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(95), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [612] = 2,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(99), 16,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [637] = 2,
    ACTIONS(103), 1,
      sym_rgb,
    ACTIONS(101), 18,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
  [661] = 8,
    ACTIONS(107), 1,
      aux_sym_identifier_token1,
    ACTIONS(109), 1,
      anon_sym_vertical,
    ACTIONS(111), 1,
      anon_sym_horizontal,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(93), 1,
      sym_offset,
    STATE(149), 1,
      sym_identifier,
    STATE(92), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(105), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [695] = 9,
    ACTIONS(115), 1,
      anon_sym_input,
    ACTIONS(117), 1,
      anon_sym_output,
    ACTIONS(119), 1,
      anon_sym_light,
    ACTIONS(121), 1,
      anon_sym_widget,
    ACTIONS(123), 1,
      anon_sym_module,
    ACTIONS(125), 1,
      aux_sym_parameter_token1,
    ACTIONS(127), 1,
      anon_sym_label,
    ACTIONS(129), 1,
      anon_sym_guide,
    STATE(88), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [731] = 9,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_decorate,
    ACTIONS(13), 1,
      anon_sym_load,
    ACTIONS(15), 1,
      anon_sym_save,
    ACTIONS(17), 1,
      anon_sym_export,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym_comment,
    STATE(26), 7,
      sym_new,
      sym_set,
      sym_decorate,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [765] = 6,
    ACTIONS(107), 1,
      aux_sym_identifier_token1,
    ACTIONS(109), 1,
      anon_sym_vertical,
    ACTIONS(111), 1,
      anon_sym_horizontal,
    STATE(22), 1,
      sym_identifier,
    STATE(76), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(105), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [793] = 9,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_new,
    ACTIONS(143), 1,
      anon_sym_set,
    ACTIONS(146), 1,
      anon_sym_decorate,
    ACTIONS(149), 1,
      anon_sym_load,
    ACTIONS(152), 1,
      anon_sym_save,
    ACTIONS(155), 1,
      anon_sym_export,
    STATE(26), 7,
      sym_new,
      sym_set,
      sym_decorate,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [827] = 6,
    ACTIONS(160), 1,
      anon_sym_AT,
    ACTIONS(162), 1,
      aux_sym_relative_token1,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(158), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [852] = 2,
    ACTIONS(168), 1,
      sym_width,
    ACTIONS(166), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_with,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_height,
      aux_sym_offset_token1,
  [869] = 2,
    ACTIONS(172), 1,
      aux_sym_offset_token1,
    ACTIONS(170), 10,
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
  [885] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(79), 1,
      sym_colour,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [905] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(111), 1,
      sym_colour,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [925] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      sym_rgb,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [943] = 3,
    ACTIONS(178), 1,
      sym_rgb,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [961] = 4,
    ACTIONS(182), 1,
      aux_sym_offset_token1,
    STATE(61), 1,
      sym_offset,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(57), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [981] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(51), 1,
      sym_offset,
    ACTIONS(184), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [999] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(55), 1,
      sym_offset,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1017] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(78), 1,
      sym_colour,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1037] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(75), 1,
      sym_colour,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1057] = 2,
    ACTIONS(192), 1,
      sym_rgb,
    ACTIONS(190), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [1073] = 2,
    ACTIONS(196), 1,
      sym_rgb,
    ACTIONS(194), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [1089] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(69), 1,
      sym_colour,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1109] = 5,
    ACTIONS(198), 1,
      anon_sym_AT,
    ACTIONS(200), 1,
      aux_sym_relative_token1,
    STATE(183), 1,
      sym_x,
    STATE(43), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(158), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1130] = 4,
    ACTIONS(206), 1,
      aux_sym_font_token1,
    STATE(106), 1,
      sym_part,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(204), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1149] = 6,
    ACTIONS(208), 1,
      anon_sym_input,
    ACTIONS(210), 1,
      anon_sym_output,
    ACTIONS(212), 1,
      anon_sym_parameter,
    ACTIONS(214), 1,
      anon_sym_light,
    ACTIONS(216), 1,
      anon_sym_widget,
    STATE(161), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1172] = 2,
    ACTIONS(220), 1,
      sym_rgb,
    ACTIONS(218), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1187] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(83), 1,
      sym_offset,
    ACTIONS(222), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1204] = 3,
    ACTIONS(226), 1,
      anon_sym_light,
    ACTIONS(228), 1,
      anon_sym_dark,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1221] = 4,
    ACTIONS(206), 1,
      aux_sym_font_token1,
    STATE(94), 1,
      sym_part,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(232), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1240] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(72), 1,
      sym_offset,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1257] = 3,
    ACTIONS(238), 1,
      anon_sym_timestamp,
    ACTIONS(240), 1,
      anon_sym_gzip,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1274] = 1,
    ACTIONS(242), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1286] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(91), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1300] = 1,
    ACTIONS(89), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1312] = 2,
    ACTIONS(246), 1,
      anon_sym_timestamp,
    ACTIONS(244), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1326] = 1,
    ACTIONS(248), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1338] = 6,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(252), 1,
      anon_sym_origin,
    ACTIONS(254), 1,
      anon_sym_AT,
    ACTIONS(256), 1,
      aux_sym_origin_token1,
    STATE(87), 1,
      sym_offset,
    ACTIONS(250), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1360] = 2,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1374] = 2,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1388] = 2,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1402] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(71), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1416] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(75), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1430] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(63), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1444] = 2,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(268), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1458] = 2,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(268), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1472] = 1,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1483] = 1,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1494] = 1,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1505] = 1,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1516] = 1,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1527] = 1,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1538] = 1,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1549] = 1,
    ACTIONS(284), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1560] = 1,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1571] = 1,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1582] = 1,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1593] = 1,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1604] = 1,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1615] = 1,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1626] = 1,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1637] = 6,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(294), 1,
      anon_sym_origin,
    ACTIONS(296), 1,
      anon_sym_AT,
    ACTIONS(298), 1,
      aux_sym_origin_token1,
    STATE(90), 1,
      sym_offset,
    ACTIONS(250), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1658] = 1,
    ACTIONS(300), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1669] = 1,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1680] = 1,
    ACTIONS(304), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1691] = 1,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1702] = 1,
    ACTIONS(308), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1713] = 1,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1724] = 1,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1735] = 1,
    ACTIONS(314), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1746] = 1,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1757] = 1,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1768] = 1,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1779] = 1,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1790] = 1,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1801] = 1,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1812] = 1,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1823] = 1,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1834] = 1,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1845] = 1,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1856] = 1,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1867] = 1,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1878] = 1,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1889] = 1,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1900] = 1,
    ACTIONS(344), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1911] = 1,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1922] = 1,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1933] = 1,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1944] = 1,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1955] = 1,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1966] = 2,
    ACTIONS(358), 3,
      anon_sym_AT,
      aux_sym_relative_token1,
      anon_sym_LPAREN,
    ACTIONS(356), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1979] = 1,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1990] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2001] = 2,
    ACTIONS(166), 2,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(168), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2013] = 6,
    ACTIONS(362), 1,
      anon_sym_input,
    ACTIONS(364), 1,
      anon_sym_output,
    ACTIONS(366), 1,
      anon_sym_parameter,
    ACTIONS(368), 1,
      anon_sym_light,
    ACTIONS(370), 1,
      anon_sym_widget,
    ACTIONS(372), 1,
      anon_sym_label,
  [2032] = 2,
    STATE(48), 1,
      sym_y,
    ACTIONS(374), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2042] = 5,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      aux_sym__originx_token1,
    ACTIONS(380), 1,
      aux_sym__originy_token1,
    STATE(174), 1,
      sym__originy,
    STATE(175), 1,
      sym__originx,
  [2058] = 2,
    STATE(45), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [2068] = 2,
    STATE(45), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2078] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(382), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2088] = 4,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    ACTIONS(386), 1,
      sym_rgb,
    ACTIONS(388), 1,
      sym_rgba,
    STATE(65), 1,
      sym_name,
  [2101] = 3,
    ACTIONS(390), 1,
      anon_sym_project,
    ACTIONS(392), 1,
      anon_sym_script,
    STATE(95), 2,
      sym_project,
      sym_script,
  [2112] = 3,
    ACTIONS(394), 1,
      anon_sym_origin,
    ACTIONS(396), 1,
      anon_sym_background,
    STATE(107), 2,
      sym_origin,
      sym_background,
  [2123] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(163), 1,
      sym__offset,
    STATE(168), 1,
      sym__relative,
  [2133] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(400), 1,
      aux_sym_origin_token1,
    STATE(99), 1,
      sym_offset,
  [2143] = 3,
    ACTIONS(402), 1,
      aux_sym_font_token1,
    STATE(42), 1,
      sym_name,
    STATE(86), 1,
      sym__component,
  [2153] = 3,
    ACTIONS(402), 1,
      aux_sym_font_token1,
    STATE(42), 1,
      sym_name,
    STATE(85), 1,
      sym__component,
  [2163] = 3,
    ACTIONS(402), 1,
      aux_sym_font_token1,
    STATE(42), 1,
      sym_name,
    STATE(84), 1,
      sym__component,
  [2173] = 3,
    ACTIONS(402), 1,
      aux_sym_font_token1,
    STATE(42), 1,
      sym_name,
    STATE(82), 1,
      sym__component,
  [2183] = 3,
    ACTIONS(402), 1,
      aux_sym_font_token1,
    STATE(42), 1,
      sym_name,
    STATE(81), 1,
      sym__component,
  [2193] = 3,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(101), 1,
      sym_decoration,
    STATE(102), 1,
      sym_name,
  [2203] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      sym_offset,
  [2213] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(163), 1,
      sym__offset,
    STATE(164), 1,
      sym__relative,
  [2223] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(163), 1,
      sym__offset,
    STATE(165), 1,
      sym__relative,
  [2233] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(163), 1,
      sym__offset,
    STATE(166), 1,
      sym__relative,
  [2243] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(163), 1,
      sym__offset,
    STATE(167), 1,
      sym__relative,
  [2253] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(406), 1,
      aux_sym_origin_token1,
    STATE(74), 1,
      sym_offset,
  [2263] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(163), 1,
      sym__offset,
    STATE(169), 1,
      sym__relative,
  [2273] = 2,
    ACTIONS(408), 1,
      anon_sym_svg,
    STATE(70), 1,
      sym_svg,
  [2280] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(122), 1,
      sym_name,
  [2287] = 2,
    ACTIONS(410), 1,
      anon_sym_panel,
    STATE(89), 1,
      sym_panel,
  [2294] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(131), 1,
      sym_name,
  [2301] = 2,
    ACTIONS(412), 1,
      anon_sym_project,
    ACTIONS(414), 1,
      anon_sym_script,
  [2308] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(132), 1,
      sym_name,
  [2315] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(133), 1,
      sym_name,
  [2322] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(157), 1,
      sym_name,
  [2329] = 2,
    ACTIONS(378), 1,
      aux_sym__originx_token1,
    STATE(97), 1,
      sym__originx,
  [2336] = 2,
    ACTIONS(380), 1,
      aux_sym__originy_token1,
    STATE(97), 1,
      sym__originy,
  [2343] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(134), 1,
      sym_name,
  [2350] = 2,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym__string,
  [2357] = 2,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(93), 1,
      sym_offset,
  [2364] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(173), 1,
      sym_name,
  [2371] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(172), 1,
      sym_name,
  [2378] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(171), 1,
      sym_name,
  [2385] = 2,
    ACTIONS(418), 1,
      sym_rgb,
    ACTIONS(420), 1,
      sym_rgba,
  [2392] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(136), 1,
      sym_name,
  [2399] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(170), 1,
      sym_name,
  [2406] = 2,
    ACTIONS(384), 1,
      aux_sym_font_token1,
    STATE(162), 1,
      sym_name,
  [2413] = 2,
    ACTIONS(422), 1,
      sym_height,
    ACTIONS(424), 1,
      sym_width,
  [2420] = 2,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(186), 1,
      sym__offset,
  [2427] = 1,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2432] = 1,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
  [2436] = 1,
    ACTIONS(430), 1,
      anon_sym_with,
  [2440] = 1,
    ACTIONS(432), 1,
      anon_sym_with,
  [2444] = 1,
    ACTIONS(434), 1,
      anon_sym_COMMA,
  [2448] = 1,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
  [2452] = 1,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
  [2456] = 1,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
  [2460] = 1,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
  [2464] = 1,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
  [2468] = 1,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
  [2472] = 1,
    ACTIONS(448), 1,
      anon_sym_with,
  [2476] = 1,
    ACTIONS(450), 1,
      anon_sym_with,
  [2480] = 1,
    ACTIONS(452), 1,
      anon_sym_with,
  [2484] = 1,
    ACTIONS(454), 1,
      anon_sym_with,
  [2488] = 1,
    ACTIONS(456), 1,
      anon_sym_COMMA,
  [2492] = 1,
    ACTIONS(458), 1,
      anon_sym_COMMA,
  [2496] = 1,
    ACTIONS(460), 1,
      anon_sym_gzip,
  [2500] = 1,
    ACTIONS(462), 1,
      aux_sym_origin_token1,
  [2504] = 1,
    ACTIONS(464), 1,
      aux_sym__string_token1,
  [2508] = 1,
    ACTIONS(466), 1,
      aux_sym_absolute_token1,
  [2512] = 1,
    ACTIONS(468), 1,
      anon_sym_COMMA,
  [2516] = 1,
    ACTIONS(470), 1,
      anon_sym_COMMA,
  [2520] = 1,
    ACTIONS(472), 1,
      anon_sym_COMMA,
  [2524] = 1,
    ACTIONS(474), 1,
      anon_sym_COMMA,
  [2528] = 1,
    ACTIONS(476), 1,
      sym_width,
  [2532] = 1,
    ACTIONS(478), 1,
      anon_sym_COMMA,
  [2536] = 1,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [2540] = 1,
    ACTIONS(482), 1,
      aux_sym_origin_token1,
  [2544] = 1,
    ACTIONS(484), 1,
      aux_sym_origin_token1,
  [2548] = 1,
    ACTIONS(486), 1,
      aux_sym_absolute_token1,
  [2552] = 1,
    ACTIONS(488), 1,
      anon_sym_COMMA,
  [2556] = 1,
    ACTIONS(490), 1,
      aux_sym_origin_token1,
  [2560] = 1,
    ACTIONS(492), 1,
      sym_rgb,
  [2564] = 1,
    ACTIONS(492), 1,
      sym_rgba,
  [2568] = 1,
    ACTIONS(494), 1,
      aux_sym_relative_token1,
  [2572] = 1,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
  [2576] = 1,
    ACTIONS(460), 1,
      anon_sym_timestamp,
  [2580] = 1,
    ACTIONS(498), 1,
      aux_sym_relative_token1,
  [2584] = 1,
    ACTIONS(500), 1,
      aux_sym_absolute_token1,
  [2588] = 1,
    ACTIONS(502), 1,
      anon_sym_COMMA,
  [2592] = 1,
    ACTIONS(504), 1,
      anon_sym_COMMA,
  [2596] = 1,
    ACTIONS(506), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 148,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 233,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 305,
  [SMALL_STATE(10)] = 346,
  [SMALL_STATE(11)] = 387,
  [SMALL_STATE(12)] = 412,
  [SMALL_STATE(13)] = 437,
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 487,
  [SMALL_STATE(16)] = 512,
  [SMALL_STATE(17)] = 537,
  [SMALL_STATE(18)] = 562,
  [SMALL_STATE(19)] = 587,
  [SMALL_STATE(20)] = 612,
  [SMALL_STATE(21)] = 637,
  [SMALL_STATE(22)] = 661,
  [SMALL_STATE(23)] = 695,
  [SMALL_STATE(24)] = 731,
  [SMALL_STATE(25)] = 765,
  [SMALL_STATE(26)] = 793,
  [SMALL_STATE(27)] = 827,
  [SMALL_STATE(28)] = 852,
  [SMALL_STATE(29)] = 869,
  [SMALL_STATE(30)] = 885,
  [SMALL_STATE(31)] = 905,
  [SMALL_STATE(32)] = 925,
  [SMALL_STATE(33)] = 943,
  [SMALL_STATE(34)] = 961,
  [SMALL_STATE(35)] = 981,
  [SMALL_STATE(36)] = 999,
  [SMALL_STATE(37)] = 1017,
  [SMALL_STATE(38)] = 1037,
  [SMALL_STATE(39)] = 1057,
  [SMALL_STATE(40)] = 1073,
  [SMALL_STATE(41)] = 1089,
  [SMALL_STATE(42)] = 1109,
  [SMALL_STATE(43)] = 1130,
  [SMALL_STATE(44)] = 1149,
  [SMALL_STATE(45)] = 1172,
  [SMALL_STATE(46)] = 1187,
  [SMALL_STATE(47)] = 1204,
  [SMALL_STATE(48)] = 1221,
  [SMALL_STATE(49)] = 1240,
  [SMALL_STATE(50)] = 1257,
  [SMALL_STATE(51)] = 1274,
  [SMALL_STATE(52)] = 1286,
  [SMALL_STATE(53)] = 1300,
  [SMALL_STATE(54)] = 1312,
  [SMALL_STATE(55)] = 1326,
  [SMALL_STATE(56)] = 1338,
  [SMALL_STATE(57)] = 1360,
  [SMALL_STATE(58)] = 1374,
  [SMALL_STATE(59)] = 1388,
  [SMALL_STATE(60)] = 1402,
  [SMALL_STATE(61)] = 1416,
  [SMALL_STATE(62)] = 1430,
  [SMALL_STATE(63)] = 1444,
  [SMALL_STATE(64)] = 1458,
  [SMALL_STATE(65)] = 1472,
  [SMALL_STATE(66)] = 1483,
  [SMALL_STATE(67)] = 1494,
  [SMALL_STATE(68)] = 1505,
  [SMALL_STATE(69)] = 1516,
  [SMALL_STATE(70)] = 1527,
  [SMALL_STATE(71)] = 1538,
  [SMALL_STATE(72)] = 1549,
  [SMALL_STATE(73)] = 1560,
  [SMALL_STATE(74)] = 1571,
  [SMALL_STATE(75)] = 1582,
  [SMALL_STATE(76)] = 1593,
  [SMALL_STATE(77)] = 1604,
  [SMALL_STATE(78)] = 1615,
  [SMALL_STATE(79)] = 1626,
  [SMALL_STATE(80)] = 1637,
  [SMALL_STATE(81)] = 1658,
  [SMALL_STATE(82)] = 1669,
  [SMALL_STATE(83)] = 1680,
  [SMALL_STATE(84)] = 1691,
  [SMALL_STATE(85)] = 1702,
  [SMALL_STATE(86)] = 1713,
  [SMALL_STATE(87)] = 1724,
  [SMALL_STATE(88)] = 1735,
  [SMALL_STATE(89)] = 1746,
  [SMALL_STATE(90)] = 1757,
  [SMALL_STATE(91)] = 1768,
  [SMALL_STATE(92)] = 1779,
  [SMALL_STATE(93)] = 1790,
  [SMALL_STATE(94)] = 1801,
  [SMALL_STATE(95)] = 1812,
  [SMALL_STATE(96)] = 1823,
  [SMALL_STATE(97)] = 1834,
  [SMALL_STATE(98)] = 1845,
  [SMALL_STATE(99)] = 1856,
  [SMALL_STATE(100)] = 1867,
  [SMALL_STATE(101)] = 1878,
  [SMALL_STATE(102)] = 1889,
  [SMALL_STATE(103)] = 1900,
  [SMALL_STATE(104)] = 1911,
  [SMALL_STATE(105)] = 1922,
  [SMALL_STATE(106)] = 1933,
  [SMALL_STATE(107)] = 1944,
  [SMALL_STATE(108)] = 1955,
  [SMALL_STATE(109)] = 1966,
  [SMALL_STATE(110)] = 1979,
  [SMALL_STATE(111)] = 1990,
  [SMALL_STATE(112)] = 2001,
  [SMALL_STATE(113)] = 2013,
  [SMALL_STATE(114)] = 2032,
  [SMALL_STATE(115)] = 2042,
  [SMALL_STATE(116)] = 2058,
  [SMALL_STATE(117)] = 2068,
  [SMALL_STATE(118)] = 2078,
  [SMALL_STATE(119)] = 2088,
  [SMALL_STATE(120)] = 2101,
  [SMALL_STATE(121)] = 2112,
  [SMALL_STATE(122)] = 2123,
  [SMALL_STATE(123)] = 2133,
  [SMALL_STATE(124)] = 2143,
  [SMALL_STATE(125)] = 2153,
  [SMALL_STATE(126)] = 2163,
  [SMALL_STATE(127)] = 2173,
  [SMALL_STATE(128)] = 2183,
  [SMALL_STATE(129)] = 2193,
  [SMALL_STATE(130)] = 2203,
  [SMALL_STATE(131)] = 2213,
  [SMALL_STATE(132)] = 2223,
  [SMALL_STATE(133)] = 2233,
  [SMALL_STATE(134)] = 2243,
  [SMALL_STATE(135)] = 2253,
  [SMALL_STATE(136)] = 2263,
  [SMALL_STATE(137)] = 2273,
  [SMALL_STATE(138)] = 2280,
  [SMALL_STATE(139)] = 2287,
  [SMALL_STATE(140)] = 2294,
  [SMALL_STATE(141)] = 2301,
  [SMALL_STATE(142)] = 2308,
  [SMALL_STATE(143)] = 2315,
  [SMALL_STATE(144)] = 2322,
  [SMALL_STATE(145)] = 2329,
  [SMALL_STATE(146)] = 2336,
  [SMALL_STATE(147)] = 2343,
  [SMALL_STATE(148)] = 2350,
  [SMALL_STATE(149)] = 2357,
  [SMALL_STATE(150)] = 2364,
  [SMALL_STATE(151)] = 2371,
  [SMALL_STATE(152)] = 2378,
  [SMALL_STATE(153)] = 2385,
  [SMALL_STATE(154)] = 2392,
  [SMALL_STATE(155)] = 2399,
  [SMALL_STATE(156)] = 2406,
  [SMALL_STATE(157)] = 2413,
  [SMALL_STATE(158)] = 2420,
  [SMALL_STATE(159)] = 2427,
  [SMALL_STATE(160)] = 2432,
  [SMALL_STATE(161)] = 2436,
  [SMALL_STATE(162)] = 2440,
  [SMALL_STATE(163)] = 2444,
  [SMALL_STATE(164)] = 2448,
  [SMALL_STATE(165)] = 2452,
  [SMALL_STATE(166)] = 2456,
  [SMALL_STATE(167)] = 2460,
  [SMALL_STATE(168)] = 2464,
  [SMALL_STATE(169)] = 2468,
  [SMALL_STATE(170)] = 2472,
  [SMALL_STATE(171)] = 2476,
  [SMALL_STATE(172)] = 2480,
  [SMALL_STATE(173)] = 2484,
  [SMALL_STATE(174)] = 2488,
  [SMALL_STATE(175)] = 2492,
  [SMALL_STATE(176)] = 2496,
  [SMALL_STATE(177)] = 2500,
  [SMALL_STATE(178)] = 2504,
  [SMALL_STATE(179)] = 2508,
  [SMALL_STATE(180)] = 2512,
  [SMALL_STATE(181)] = 2516,
  [SMALL_STATE(182)] = 2520,
  [SMALL_STATE(183)] = 2524,
  [SMALL_STATE(184)] = 2528,
  [SMALL_STATE(185)] = 2532,
  [SMALL_STATE(186)] = 2536,
  [SMALL_STATE(187)] = 2540,
  [SMALL_STATE(188)] = 2544,
  [SMALL_STATE(189)] = 2548,
  [SMALL_STATE(190)] = 2552,
  [SMALL_STATE(191)] = 2556,
  [SMALL_STATE(192)] = 2560,
  [SMALL_STATE(193)] = 2564,
  [SMALL_STATE(194)] = 2568,
  [SMALL_STATE(195)] = 2572,
  [SMALL_STATE(196)] = 2576,
  [SMALL_STATE(197)] = 2580,
  [SMALL_STATE(198)] = 2584,
  [SMALL_STATE(199)] = 2588,
  [SMALL_STATE(200)] = 2592,
  [SMALL_STATE(201)] = 2596,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 7),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 7),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 10),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 10),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(121),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(44),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(141),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(120),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(139),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 8),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 15),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [496] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
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
