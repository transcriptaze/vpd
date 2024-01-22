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
#define STATE_COUNT 222
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 1
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_decorate = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_with = 7,
  anon_sym_load = 8,
  anon_sym_project = 9,
  anon_sym_script = 10,
  anon_sym_save = 11,
  anon_sym_export = 12,
  anon_sym_timestamp = 13,
  anon_sym_COMMA = 14,
  anon_sym_gzip = 15,
  anon_sym_input = 16,
  anon_sym_output = 17,
  anon_sym_parameter = 18,
  anon_sym_light = 19,
  anon_sym_widget = 20,
  anon_sym_module = 21,
  aux_sym_parameter_token1 = 22,
  anon_sym_label = 23,
  aux_sym_font_token1 = 24,
  sym_fontsize = 25,
  anon_sym_left = 26,
  anon_sym_centre = 27,
  anon_sym_center = 28,
  anon_sym_right = 29,
  anon_sym_top = 30,
  anon_sym_middle = 31,
  anon_sym_baseline = 32,
  anon_sym_bottom = 33,
  anon_sym_scale = 34,
  aux_sym__scale_token1 = 35,
  anon_sym_stretch = 36,
  anon_sym_origin = 37,
  anon_sym_AT = 38,
  aux_sym_origin_token1 = 39,
  aux_sym__originx_token1 = 40,
  aux_sym__originy_token1 = 41,
  anon_sym_background = 42,
  sym_rgb = 43,
  sym_rgba = 44,
  anon_sym_panel = 45,
  anon_sym_svg = 46,
  anon_sym_dark = 47,
  sym_height = 48,
  sym_width = 49,
  anon_sym_guide = 50,
  aux_sym_identifier_token1 = 51,
  anon_sym_vertical = 52,
  anon_sym_horizontal = 53,
  aux_sym_offset_token1 = 54,
  anon_sym_DQUOTE = 55,
  aux_sym__string_token1 = 56,
  aux_sym_absolute_token1 = 57,
  aux_sym_relative_token1 = 58,
  sym_command = 59,
  sym_new = 60,
  sym_set = 61,
  sym_decorate = 62,
  sym_load = 63,
  sym_save = 64,
  sym_export = 65,
  sym_project = 66,
  sym_script = 67,
  sym__entity = 68,
  sym__input = 69,
  sym__output = 70,
  sym__parameter = 71,
  sym__light = 72,
  sym__widget = 73,
  sym_module = 74,
  sym_input = 75,
  sym_output = 76,
  sym_parameter = 77,
  sym_light = 78,
  sym_widget = 79,
  sym__component = 80,
  sym_label = 81,
  sym_font = 82,
  sym__align = 83,
  sym_halign = 84,
  sym_valign = 85,
  sym_colour = 86,
  sym_decoration = 87,
  sym__scale = 88,
  sym_stretch = 89,
  sym_origin = 90,
  sym__originx = 91,
  sym__originy = 92,
  sym_background = 93,
  sym_panel = 94,
  sym_svg = 95,
  sym_name = 96,
  sym_part = 97,
  sym_guide = 98,
  sym_identifier = 99,
  sym_vertical = 100,
  sym_horizontal = 101,
  sym_geometry = 102,
  sym_offset = 103,
  sym__offset = 104,
  sym_guideline = 105,
  sym__string = 106,
  sym_absolute = 107,
  sym_relative = 108,
  sym__decorate = 109,
  sym__relative = 110,
  sym_x = 111,
  sym_y = 112,
  aux_sym_command_repeat1 = 113,
  alias_sym_dy = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_decorate] = "decorate",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_scale] = "scale",
  [aux_sym__scale_token1] = "scale",
  [anon_sym_stretch] = "stretch",
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
  [sym__scale] = "_scale",
  [sym_stretch] = "stretch",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_scale] = anon_sym_scale,
  [aux_sym__scale_token1] = aux_sym__scale_token1,
  [anon_sym_stretch] = anon_sym_stretch,
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
  [sym__scale] = sym__scale,
  [sym_stretch] = sym_stretch,
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
  [anon_sym_LPAREN] = {
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
  [anon_sym_scale] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__scale_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_stretch] = {
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
  [sym__scale] = {
    .visible = false,
    .named = true,
  },
  [sym_stretch] = {
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
    [2] = alias_sym_dy,
  },
  [11] = {
    [1] = sym_input,
  },
  [12] = {
    [1] = sym_output,
  },
  [13] = {
    [1] = sym_parameter,
  },
  [14] = {
    [1] = sym_widget,
  },
  [15] = {
    [1] = sym_label,
  },
  [16] = {
    [2] = sym_x,
    [4] = sym_y,
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
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 8,
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
  [56] = 11,
  [57] = 57,
  [58] = 18,
  [59] = 19,
  [60] = 20,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 20,
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
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 27,
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
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 192,
  [218] = 182,
  [219] = 215,
  [220] = 171,
  [221] = 183,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(256);
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(265);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '0') ADVANCE(367);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(222);
      if (lookahead == 'h') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(105);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == 'b') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead == 'h') ADVANCE(415);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == 'v') ADVANCE(399);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(436);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'U') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '8') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(143);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(143);
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 22:
      if (lookahead == ';') ADVANCE(257);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'w') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == '@') ADVANCE(375);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(414);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(197);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(206);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(384);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(373);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(200);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 119:
      if (lookahead == 'j') ADVANCE(75);
      END_STATE();
    case 120:
      if (lookahead == 'k') ADVANCE(385);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(436);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(387);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(439);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(440);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(378);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == 'z') ADVANCE(113);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 227:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 228:
      if (lookahead == 'w') ADVANCE(258);
      END_STATE();
    case 229:
      if (lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 230:
      if (lookahead == 'z') ADVANCE(165);
      END_STATE();
    case 231:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(436);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 251:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 252:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 253:
      if (eof) ADVANCE(256);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == ')') ADVANCE(265);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(289);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead == 't') ADVANCE(322);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 254:
      if (eof) ADVANCE(256);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 255:
      if (eof) ADVANCE(256);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(265);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'w') ADVANCE(115);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == 'H') ADVANCE(376);
      if (lookahead == 'h') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(143);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 253},
  [3] = {.lex_state = 253},
  [4] = {.lex_state = 255},
  [5] = {.lex_state = 255},
  [6] = {.lex_state = 255},
  [7] = {.lex_state = 255},
  [8] = {.lex_state = 253},
  [9] = {.lex_state = 255},
  [10] = {.lex_state = 255},
  [11] = {.lex_state = 253},
  [12] = {.lex_state = 253},
  [13] = {.lex_state = 253},
  [14] = {.lex_state = 253},
  [15] = {.lex_state = 253},
  [16] = {.lex_state = 253},
  [17] = {.lex_state = 253},
  [18] = {.lex_state = 253},
  [19] = {.lex_state = 253},
  [20] = {.lex_state = 253},
  [21] = {.lex_state = 255},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 255},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 255},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 255},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 255},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 254},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 255},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 254},
  [49] = {.lex_state = 254},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 255},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 254},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 254},
  [59] = {.lex_state = 254},
  [60] = {.lex_state = 254},
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
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 23},
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
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 255},
  [121] = {.lex_state = 255},
  [122] = {.lex_state = 44},
  [123] = {.lex_state = 44},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 253},
  [127] = {.lex_state = 253},
  [128] = {.lex_state = 253},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 253},
  [131] = {.lex_state = 253},
  [132] = {.lex_state = 253},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 253},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 253},
  [138] = {.lex_state = 253},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 253},
  [141] = {.lex_state = 253},
  [142] = {.lex_state = 253},
  [143] = {.lex_state = 253},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 253},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 255},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 24},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 253},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 253},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 24},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 253},
  [179] = {.lex_state = 235},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 253},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 254},
  [198] = {.lex_state = 254},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 253},
  [207] = {.lex_state = 254},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 253},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 255},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_scale] = ACTIONS(1),
    [aux_sym__scale_token1] = ACTIONS(1),
    [anon_sym_stretch] = ACTIONS(1),
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
  },
  [1] = {
    [sym_command] = STATE(212),
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
    STATE(5), 1,
      sym_font,
    STATE(31), 1,
      sym__align,
    STATE(36), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(74), 1,
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
    STATE(4), 1,
      sym_font,
    STATE(35), 1,
      sym__align,
    STATE(36), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(114), 1,
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
    STATE(36), 1,
      sym_halign,
    STATE(38), 1,
      sym__align,
    STATE(40), 1,
      sym_valign,
    STATE(88), 1,
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
    STATE(33), 1,
      sym__align,
    STATE(36), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(103), 1,
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
    STATE(33), 1,
      sym__align,
    STATE(36), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(103), 1,
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
    STATE(31), 1,
      sym__align,
    STATE(36), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(74), 1,
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
  [274] = 4,
    ACTIONS(57), 1,
      aux_sym_offset_token1,
    STATE(19), 1,
      sym_offset,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(55), 16,
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
    STATE(36), 1,
      sym_halign,
    STATE(38), 1,
      sym__align,
    STATE(40), 1,
      sym_valign,
    STATE(88), 1,
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
  [346] = 9,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(32), 1,
      sym__align,
    STATE(36), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(94), 1,
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
    ACTIONS(59), 8,
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
    STATE(90), 1,
      sym_offset,
    STATE(154), 1,
      sym_identifier,
    STATE(89), 4,
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
    STATE(107), 9,
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
  [827] = 2,
    ACTIONS(160), 1,
      sym_width,
    ACTIONS(158), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_height,
      aux_sym_offset_token1,
  [845] = 6,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_AT,
    ACTIONS(168), 1,
      aux_sym_relative_token1,
    STATE(210), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(164), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [870] = 4,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__scale,
    STATE(97), 1,
      sym_stretch,
    ACTIONS(170), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [890] = 2,
    ACTIONS(176), 1,
      sym_rgb,
    ACTIONS(174), 10,
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
  [906] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(103), 1,
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
  [926] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(86), 1,
      sym_colour,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [946] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(94), 1,
      sym_colour,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [966] = 2,
    ACTIONS(182), 1,
      sym_rgb,
    ACTIONS(180), 10,
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
  [982] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(88), 1,
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
  [1002] = 3,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      sym_rgb,
    ACTIONS(184), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1020] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(67), 1,
      sym_offset,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1038] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(74), 1,
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
  [1058] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(65), 1,
      sym_offset,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1076] = 3,
    ACTIONS(188), 1,
      sym_rgb,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(184), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1094] = 4,
    ACTIONS(196), 1,
      aux_sym_offset_token1,
    STATE(59), 1,
      sym_offset,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(55), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1114] = 2,
    ACTIONS(200), 1,
      aux_sym_offset_token1,
    ACTIONS(198), 10,
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
  [1130] = 6,
    ACTIONS(202), 1,
      anon_sym_input,
    ACTIONS(204), 1,
      anon_sym_output,
    ACTIONS(206), 1,
      anon_sym_parameter,
    ACTIONS(208), 1,
      anon_sym_light,
    ACTIONS(210), 1,
      anon_sym_widget,
    STATE(193), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1153] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(81), 1,
      sym_offset,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1170] = 3,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_stretch,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1187] = 3,
    ACTIONS(220), 1,
      anon_sym_light,
    ACTIONS(222), 1,
      anon_sym_dark,
    ACTIONS(218), 8,
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
      anon_sym_timestamp,
    ACTIONS(228), 1,
      anon_sym_gzip,
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
    ACTIONS(234), 1,
      aux_sym_font_token1,
    STATE(75), 1,
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
  [1240] = 4,
    ACTIONS(234), 1,
      aux_sym_font_token1,
    STATE(110), 1,
      sym_part,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(238), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1259] = 2,
    ACTIONS(242), 1,
      sym_rgb,
    ACTIONS(240), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1274] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(111), 1,
      sym_offset,
    ACTIONS(244), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1291] = 5,
    ACTIONS(246), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      aux_sym_relative_token1,
    STATE(214), 1,
      sym_x,
    STATE(49), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(164), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1312] = 2,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1326] = 2,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1340] = 6,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(260), 1,
      anon_sym_origin,
    ACTIONS(262), 1,
      anon_sym_AT,
    ACTIONS(264), 1,
      aux_sym_origin_token1,
    STATE(84), 1,
      sym_offset,
    ACTIONS(258), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1362] = 2,
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
  [1376] = 2,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1390] = 2,
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
  [1404] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(95), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1418] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(99), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1432] = 2,
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
  [1446] = 2,
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
  [1460] = 1,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1472] = 2,
    ACTIONS(278), 1,
      anon_sym_timestamp,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1486] = 1,
    ACTIONS(280), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1498] = 1,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1510] = 1,
    ACTIONS(282), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1522] = 1,
    ACTIONS(284), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1533] = 1,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1544] = 1,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1555] = 1,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1566] = 1,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1577] = 1,
    ACTIONS(294), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1588] = 1,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1599] = 1,
    ACTIONS(296), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1610] = 1,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1621] = 1,
    ACTIONS(300), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1632] = 1,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1643] = 1,
    ACTIONS(304), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1654] = 1,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1665] = 1,
    ACTIONS(308), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1676] = 1,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1687] = 1,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1698] = 1,
    ACTIONS(314), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1709] = 1,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1720] = 1,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1731] = 1,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1742] = 1,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1753] = 1,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1764] = 1,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1775] = 6,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(326), 1,
      anon_sym_origin,
    ACTIONS(328), 1,
      anon_sym_AT,
    ACTIONS(330), 1,
      aux_sym_origin_token1,
    STATE(87), 1,
      sym_offset,
    ACTIONS(258), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1796] = 1,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1807] = 1,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1818] = 1,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1829] = 1,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1840] = 1,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1851] = 1,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1862] = 1,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1873] = 1,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1884] = 1,
    ACTIONS(344), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1895] = 1,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1906] = 1,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1917] = 1,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1928] = 1,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1939] = 1,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1950] = 1,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1961] = 1,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1972] = 1,
    ACTIONS(358), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1983] = 1,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1994] = 1,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2005] = 1,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2016] = 1,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2027] = 2,
    ACTIONS(368), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(370), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2040] = 1,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2051] = 1,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2062] = 1,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2073] = 2,
    ACTIONS(158), 2,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(160), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2085] = 6,
    ACTIONS(374), 1,
      anon_sym_input,
    ACTIONS(376), 1,
      anon_sym_output,
    ACTIONS(378), 1,
      anon_sym_parameter,
    ACTIONS(380), 1,
      anon_sym_light,
    ACTIONS(382), 1,
      anon_sym_widget,
    ACTIONS(384), 1,
      anon_sym_label,
  [2104] = 5,
    ACTIONS(386), 1,
      anon_sym_AT,
    ACTIONS(388), 1,
      aux_sym__originx_token1,
    ACTIONS(390), 1,
      aux_sym__originy_token1,
    STATE(190), 1,
      sym__originx,
    STATE(191), 1,
      sym__originy,
  [2120] = 2,
    STATE(50), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2130] = 2,
    STATE(50), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [2140] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(392), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2150] = 2,
    STATE(48), 1,
      sym_y,
    ACTIONS(394), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2160] = 3,
    ACTIONS(396), 1,
      anon_sym_project,
    ACTIONS(398), 1,
      anon_sym_script,
    STATE(93), 2,
      sym_project,
      sym_script,
  [2171] = 3,
    ACTIONS(400), 1,
      anon_sym_origin,
    ACTIONS(402), 1,
      anon_sym_background,
    STATE(115), 2,
      sym_origin,
      sym_background,
  [2182] = 4,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(185), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2195] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2208] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2221] = 4,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    ACTIONS(414), 1,
      sym_rgb,
    ACTIONS(416), 1,
      sym_rgba,
    STATE(116), 1,
      sym_name,
  [2234] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2247] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2260] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(422), 1,
      aux_sym_origin_token1,
    STATE(102), 1,
      sym_offset,
  [2270] = 3,
    ACTIONS(424), 1,
      aux_sym_font_token1,
    STATE(52), 1,
      sym_name,
    STATE(79), 1,
      sym__component,
  [2280] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      sym_offset,
  [2290] = 3,
    ACTIONS(424), 1,
      aux_sym_font_token1,
    STATE(52), 1,
      sym_name,
    STATE(76), 1,
      sym__component,
  [2300] = 3,
    ACTIONS(424), 1,
      aux_sym_font_token1,
    STATE(52), 1,
      sym_name,
    STATE(78), 1,
      sym__component,
  [2310] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(428), 1,
      aux_sym_origin_token1,
    STATE(108), 1,
      sym_offset,
  [2320] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(177), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2330] = 3,
    ACTIONS(424), 1,
      aux_sym_font_token1,
    STATE(52), 1,
      sym_name,
    STATE(85), 1,
      sym__component,
  [2340] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(176), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2350] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(175), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2360] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(174), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2370] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(173), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2380] = 3,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(29), 1,
      sym_name,
    STATE(82), 1,
      sym_decoration,
  [2390] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(172), 1,
      sym__relative,
    STATE(188), 1,
      sym__offset,
  [2400] = 3,
    ACTIONS(424), 1,
      aux_sym_font_token1,
    STATE(52), 1,
      sym_name,
    STATE(83), 1,
      sym__component,
  [2410] = 2,
    ACTIONS(430), 1,
      sym_height,
    ACTIONS(432), 1,
      sym_width,
  [2417] = 2,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym__string,
  [2424] = 2,
    ACTIONS(388), 1,
      aux_sym__originx_token1,
    STATE(99), 1,
      sym__originx,
  [2431] = 2,
    ACTIONS(436), 1,
      anon_sym_scale,
    ACTIONS(438), 1,
      anon_sym_stretch,
  [2438] = 1,
    ACTIONS(440), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2443] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(147), 1,
      sym_name,
  [2450] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(126), 1,
      sym_name,
  [2457] = 2,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(90), 1,
      sym_offset,
  [2464] = 2,
    ACTIONS(442), 1,
      sym_rgb,
    ACTIONS(444), 1,
      sym_rgba,
  [2471] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(141), 1,
      sym_name,
  [2478] = 2,
    ACTIONS(446), 1,
      anon_sym_svg,
    STATE(71), 1,
      sym_svg,
  [2485] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(140), 1,
      sym_name,
  [2492] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(131), 1,
      sym_name,
  [2499] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(128), 1,
      sym_name,
  [2506] = 2,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(184), 1,
      sym__offset,
  [2513] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(145), 1,
      sym_name,
  [2520] = 2,
    ACTIONS(390), 1,
      aux_sym__originy_token1,
    STATE(99), 1,
      sym__originy,
  [2527] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(143), 1,
      sym_name,
  [2534] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(142), 1,
      sym_name,
  [2541] = 2,
    ACTIONS(448), 1,
      anon_sym_panel,
    STATE(72), 1,
      sym_panel,
  [2548] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(130), 1,
      sym_name,
  [2555] = 2,
    ACTIONS(450), 1,
      anon_sym_project,
    ACTIONS(452), 1,
      anon_sym_script,
  [2562] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(138), 1,
      sym_name,
  [2569] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(127), 1,
      sym_name,
  [2576] = 1,
    ACTIONS(454), 1,
      anon_sym_COMMA,
  [2580] = 1,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
  [2584] = 1,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
  [2588] = 1,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
  [2592] = 1,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
  [2596] = 1,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [2600] = 1,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
  [2604] = 1,
    ACTIONS(468), 1,
      aux_sym_origin_token1,
  [2608] = 1,
    ACTIONS(470), 1,
      aux_sym__string_token1,
  [2612] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [2616] = 1,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [2620] = 1,
    ACTIONS(476), 1,
      aux_sym_absolute_token1,
  [2624] = 1,
    ACTIONS(478), 1,
      aux_sym_absolute_token1,
  [2628] = 1,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [2632] = 1,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [2636] = 1,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
  [2640] = 1,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
  [2644] = 1,
    ACTIONS(488), 1,
      anon_sym_COMMA,
  [2648] = 1,
    ACTIONS(490), 1,
      aux_sym_origin_token1,
  [2652] = 1,
    ACTIONS(492), 1,
      anon_sym_COMMA,
  [2656] = 1,
    ACTIONS(494), 1,
      anon_sym_COMMA,
  [2660] = 1,
    ACTIONS(496), 1,
      aux_sym_relative_token1,
  [2664] = 1,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
  [2668] = 1,
    ACTIONS(500), 1,
      anon_sym_COMMA,
  [2672] = 1,
    ACTIONS(502), 1,
      anon_sym_timestamp,
  [2676] = 1,
    ACTIONS(502), 1,
      anon_sym_gzip,
  [2680] = 1,
    ACTIONS(504), 1,
      aux_sym__scale_token1,
  [2684] = 1,
    ACTIONS(506), 1,
      aux_sym__scale_token1,
  [2688] = 1,
    ACTIONS(438), 1,
      anon_sym_stretch,
  [2692] = 1,
    ACTIONS(508), 1,
      anon_sym_with,
  [2696] = 1,
    ACTIONS(510), 1,
      sym_rgba,
  [2700] = 1,
    ACTIONS(510), 1,
      sym_rgb,
  [2704] = 1,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
  [2708] = 1,
    ACTIONS(514), 1,
      anon_sym_COMMA,
  [2712] = 1,
    ACTIONS(516), 1,
      anon_sym_COMMA,
  [2716] = 1,
    ACTIONS(518), 1,
      aux_sym_origin_token1,
  [2720] = 1,
    ACTIONS(520), 1,
      aux_sym__scale_token1,
  [2724] = 1,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
  [2728] = 1,
    ACTIONS(524), 1,
      aux_sym_origin_token1,
  [2732] = 1,
    ACTIONS(526), 1,
      anon_sym_COMMA,
  [2736] = 1,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
  [2740] = 1,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
  [2744] = 1,
    ACTIONS(532), 1,
      sym_width,
  [2748] = 1,
    ACTIONS(534), 1,
      anon_sym_COMMA,
  [2752] = 1,
    ACTIONS(536), 1,
      anon_sym_COMMA,
  [2756] = 1,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
  [2760] = 1,
    ACTIONS(540), 1,
      aux_sym_relative_token1,
  [2764] = 1,
    ACTIONS(542), 1,
      aux_sym_absolute_token1,
  [2768] = 1,
    ACTIONS(544), 1,
      anon_sym_COMMA,
  [2772] = 1,
    ACTIONS(546), 1,
      anon_sym_COMMA,
  [2776] = 1,
    ACTIONS(548), 1,
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
  [SMALL_STATE(28)] = 845,
  [SMALL_STATE(29)] = 870,
  [SMALL_STATE(30)] = 890,
  [SMALL_STATE(31)] = 906,
  [SMALL_STATE(32)] = 926,
  [SMALL_STATE(33)] = 946,
  [SMALL_STATE(34)] = 966,
  [SMALL_STATE(35)] = 982,
  [SMALL_STATE(36)] = 1002,
  [SMALL_STATE(37)] = 1020,
  [SMALL_STATE(38)] = 1038,
  [SMALL_STATE(39)] = 1058,
  [SMALL_STATE(40)] = 1076,
  [SMALL_STATE(41)] = 1094,
  [SMALL_STATE(42)] = 1114,
  [SMALL_STATE(43)] = 1130,
  [SMALL_STATE(44)] = 1153,
  [SMALL_STATE(45)] = 1170,
  [SMALL_STATE(46)] = 1187,
  [SMALL_STATE(47)] = 1204,
  [SMALL_STATE(48)] = 1221,
  [SMALL_STATE(49)] = 1240,
  [SMALL_STATE(50)] = 1259,
  [SMALL_STATE(51)] = 1274,
  [SMALL_STATE(52)] = 1291,
  [SMALL_STATE(53)] = 1312,
  [SMALL_STATE(54)] = 1326,
  [SMALL_STATE(55)] = 1340,
  [SMALL_STATE(56)] = 1362,
  [SMALL_STATE(57)] = 1376,
  [SMALL_STATE(58)] = 1390,
  [SMALL_STATE(59)] = 1404,
  [SMALL_STATE(60)] = 1418,
  [SMALL_STATE(61)] = 1432,
  [SMALL_STATE(62)] = 1446,
  [SMALL_STATE(63)] = 1460,
  [SMALL_STATE(64)] = 1472,
  [SMALL_STATE(65)] = 1486,
  [SMALL_STATE(66)] = 1498,
  [SMALL_STATE(67)] = 1510,
  [SMALL_STATE(68)] = 1522,
  [SMALL_STATE(69)] = 1533,
  [SMALL_STATE(70)] = 1544,
  [SMALL_STATE(71)] = 1555,
  [SMALL_STATE(72)] = 1566,
  [SMALL_STATE(73)] = 1577,
  [SMALL_STATE(74)] = 1588,
  [SMALL_STATE(75)] = 1599,
  [SMALL_STATE(76)] = 1610,
  [SMALL_STATE(77)] = 1621,
  [SMALL_STATE(78)] = 1632,
  [SMALL_STATE(79)] = 1643,
  [SMALL_STATE(80)] = 1654,
  [SMALL_STATE(81)] = 1665,
  [SMALL_STATE(82)] = 1676,
  [SMALL_STATE(83)] = 1687,
  [SMALL_STATE(84)] = 1698,
  [SMALL_STATE(85)] = 1709,
  [SMALL_STATE(86)] = 1720,
  [SMALL_STATE(87)] = 1731,
  [SMALL_STATE(88)] = 1742,
  [SMALL_STATE(89)] = 1753,
  [SMALL_STATE(90)] = 1764,
  [SMALL_STATE(91)] = 1775,
  [SMALL_STATE(92)] = 1796,
  [SMALL_STATE(93)] = 1807,
  [SMALL_STATE(94)] = 1818,
  [SMALL_STATE(95)] = 1829,
  [SMALL_STATE(96)] = 1840,
  [SMALL_STATE(97)] = 1851,
  [SMALL_STATE(98)] = 1862,
  [SMALL_STATE(99)] = 1873,
  [SMALL_STATE(100)] = 1884,
  [SMALL_STATE(101)] = 1895,
  [SMALL_STATE(102)] = 1906,
  [SMALL_STATE(103)] = 1917,
  [SMALL_STATE(104)] = 1928,
  [SMALL_STATE(105)] = 1939,
  [SMALL_STATE(106)] = 1950,
  [SMALL_STATE(107)] = 1961,
  [SMALL_STATE(108)] = 1972,
  [SMALL_STATE(109)] = 1983,
  [SMALL_STATE(110)] = 1994,
  [SMALL_STATE(111)] = 2005,
  [SMALL_STATE(112)] = 2016,
  [SMALL_STATE(113)] = 2027,
  [SMALL_STATE(114)] = 2040,
  [SMALL_STATE(115)] = 2051,
  [SMALL_STATE(116)] = 2062,
  [SMALL_STATE(117)] = 2073,
  [SMALL_STATE(118)] = 2085,
  [SMALL_STATE(119)] = 2104,
  [SMALL_STATE(120)] = 2120,
  [SMALL_STATE(121)] = 2130,
  [SMALL_STATE(122)] = 2140,
  [SMALL_STATE(123)] = 2150,
  [SMALL_STATE(124)] = 2160,
  [SMALL_STATE(125)] = 2171,
  [SMALL_STATE(126)] = 2182,
  [SMALL_STATE(127)] = 2195,
  [SMALL_STATE(128)] = 2208,
  [SMALL_STATE(129)] = 2221,
  [SMALL_STATE(130)] = 2234,
  [SMALL_STATE(131)] = 2247,
  [SMALL_STATE(132)] = 2260,
  [SMALL_STATE(133)] = 2270,
  [SMALL_STATE(134)] = 2280,
  [SMALL_STATE(135)] = 2290,
  [SMALL_STATE(136)] = 2300,
  [SMALL_STATE(137)] = 2310,
  [SMALL_STATE(138)] = 2320,
  [SMALL_STATE(139)] = 2330,
  [SMALL_STATE(140)] = 2340,
  [SMALL_STATE(141)] = 2350,
  [SMALL_STATE(142)] = 2360,
  [SMALL_STATE(143)] = 2370,
  [SMALL_STATE(144)] = 2380,
  [SMALL_STATE(145)] = 2390,
  [SMALL_STATE(146)] = 2400,
  [SMALL_STATE(147)] = 2410,
  [SMALL_STATE(148)] = 2417,
  [SMALL_STATE(149)] = 2424,
  [SMALL_STATE(150)] = 2431,
  [SMALL_STATE(151)] = 2438,
  [SMALL_STATE(152)] = 2443,
  [SMALL_STATE(153)] = 2450,
  [SMALL_STATE(154)] = 2457,
  [SMALL_STATE(155)] = 2464,
  [SMALL_STATE(156)] = 2471,
  [SMALL_STATE(157)] = 2478,
  [SMALL_STATE(158)] = 2485,
  [SMALL_STATE(159)] = 2492,
  [SMALL_STATE(160)] = 2499,
  [SMALL_STATE(161)] = 2506,
  [SMALL_STATE(162)] = 2513,
  [SMALL_STATE(163)] = 2520,
  [SMALL_STATE(164)] = 2527,
  [SMALL_STATE(165)] = 2534,
  [SMALL_STATE(166)] = 2541,
  [SMALL_STATE(167)] = 2548,
  [SMALL_STATE(168)] = 2555,
  [SMALL_STATE(169)] = 2562,
  [SMALL_STATE(170)] = 2569,
  [SMALL_STATE(171)] = 2576,
  [SMALL_STATE(172)] = 2580,
  [SMALL_STATE(173)] = 2584,
  [SMALL_STATE(174)] = 2588,
  [SMALL_STATE(175)] = 2592,
  [SMALL_STATE(176)] = 2596,
  [SMALL_STATE(177)] = 2600,
  [SMALL_STATE(178)] = 2604,
  [SMALL_STATE(179)] = 2608,
  [SMALL_STATE(180)] = 2612,
  [SMALL_STATE(181)] = 2616,
  [SMALL_STATE(182)] = 2620,
  [SMALL_STATE(183)] = 2624,
  [SMALL_STATE(184)] = 2628,
  [SMALL_STATE(185)] = 2632,
  [SMALL_STATE(186)] = 2636,
  [SMALL_STATE(187)] = 2640,
  [SMALL_STATE(188)] = 2644,
  [SMALL_STATE(189)] = 2648,
  [SMALL_STATE(190)] = 2652,
  [SMALL_STATE(191)] = 2656,
  [SMALL_STATE(192)] = 2660,
  [SMALL_STATE(193)] = 2664,
  [SMALL_STATE(194)] = 2668,
  [SMALL_STATE(195)] = 2672,
  [SMALL_STATE(196)] = 2676,
  [SMALL_STATE(197)] = 2680,
  [SMALL_STATE(198)] = 2684,
  [SMALL_STATE(199)] = 2688,
  [SMALL_STATE(200)] = 2692,
  [SMALL_STATE(201)] = 2696,
  [SMALL_STATE(202)] = 2700,
  [SMALL_STATE(203)] = 2704,
  [SMALL_STATE(204)] = 2708,
  [SMALL_STATE(205)] = 2712,
  [SMALL_STATE(206)] = 2716,
  [SMALL_STATE(207)] = 2720,
  [SMALL_STATE(208)] = 2724,
  [SMALL_STATE(209)] = 2728,
  [SMALL_STATE(210)] = 2732,
  [SMALL_STATE(211)] = 2736,
  [SMALL_STATE(212)] = 2740,
  [SMALL_STATE(213)] = 2744,
  [SMALL_STATE(214)] = 2748,
  [SMALL_STATE(215)] = 2752,
  [SMALL_STATE(216)] = 2756,
  [SMALL_STATE(217)] = 2760,
  [SMALL_STATE(218)] = 2764,
  [SMALL_STATE(219)] = 2768,
  [SMALL_STATE(220)] = 2772,
  [SMALL_STATE(221)] = 2776,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(125),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(216),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(168),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(124),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(166),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 8),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 16),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 6),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 6),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 10),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [530] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
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
