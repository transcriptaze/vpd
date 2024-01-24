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
#define STATE_COUNT 224
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 1
#define TOKEN_COUNT 61
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
  anon_sym_SQUOTE = 57,
  aux_sym__string_token2 = 58,
  aux_sym_absolute_token1 = 59,
  aux_sym_relative_token1 = 60,
  sym_command = 61,
  sym_new = 62,
  sym_set = 63,
  sym_decorate = 64,
  sym_load = 65,
  sym_save = 66,
  sym_export = 67,
  sym_project = 68,
  sym_script = 69,
  sym__entity = 70,
  sym__input = 71,
  sym__output = 72,
  sym__parameter = 73,
  sym__light = 74,
  sym__widget = 75,
  sym_module = 76,
  sym_input = 77,
  sym_output = 78,
  sym_parameter = 79,
  sym_light = 80,
  sym_widget = 81,
  sym__component = 82,
  sym_label = 83,
  sym_font = 84,
  sym__align = 85,
  sym_halign = 86,
  sym_valign = 87,
  sym_colour = 88,
  sym_decoration = 89,
  sym__scale = 90,
  sym_stretch = 91,
  sym_origin = 92,
  sym__originx = 93,
  sym__originy = 94,
  sym_background = 95,
  sym_panel = 96,
  sym_svg = 97,
  sym_name = 98,
  sym_part = 99,
  sym_guide = 100,
  sym_identifier = 101,
  sym_vertical = 102,
  sym_horizontal = 103,
  sym_geometry = 104,
  sym_offset = 105,
  sym__offset = 106,
  sym_guideline = 107,
  sym__string = 108,
  sym_absolute = 109,
  sym_relative = 110,
  sym__decorate = 111,
  sym__relative = 112,
  sym_x = 113,
  sym_y = 114,
  aux_sym_command_repeat1 = 115,
  alias_sym_dy = 116,
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
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_token2] = "string",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_token2] = aux_sym__string_token1,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token2] = {
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
  [40] = 8,
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
  [53] = 20,
  [54] = 54,
  [55] = 55,
  [56] = 18,
  [57] = 57,
  [58] = 19,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 20,
  [65] = 11,
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
  [217] = 217,
  [218] = 218,
  [219] = 213,
  [220] = 187,
  [221] = 203,
  [222] = 215,
  [223] = 207,
};

static inline bool aux_sym__string_token1_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(255);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(264);
      if (lookahead == ',') ADVANCE(275);
      if (lookahead == '0') ADVANCE(366);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '@') ADVANCE(374);
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
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(414);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(403);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == 'v') ADVANCE(398);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '@') ADVANCE(374);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(386);
      if (lookahead == 'U') ADVANCE(385);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'H') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'H') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'H') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(387);
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
          lookahead == 'h') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '8') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'H') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(445);
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
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 22:
      if (lookahead == ';') ADVANCE(256);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(374);
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
          lookahead == '-') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == '@') ADVANCE(374);
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
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead == 'm') ADVANCE(403);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
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
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(378);
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
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(376);
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
      if (lookahead == 'g') ADVANCE(383);
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
      if (lookahead == 'h') ADVANCE(265);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(372);
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
      if (lookahead == 'k') ADVANCE(384);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(433);
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
      if (lookahead == 'm') ADVANCE(375);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(435);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(385);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(444);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(377);
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
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(373);
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
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(276);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(377);
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
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(376);
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
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(376);
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
      if (lookahead == 'w') ADVANCE(257);
      END_STATE();
    case 229:
      if (lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 230:
      if (lookahead == 'z') ADVANCE(165);
      END_STATE();
    case 231:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 251:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 252:
      if (eof) ADVANCE(255);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == ')') ADVANCE(264);
      if (lookahead == ',') ADVANCE(275);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(288);
      if (lookahead == 'c') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == 't') ADVANCE(321);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 253:
      if (eof) ADVANCE(255);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 254:
      if (eof) ADVANCE(255);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(264);
      if (lookahead == ',') ADVANCE(275);
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
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'H') ADVANCE(375);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(143);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(430);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(437);
      if (aux_sym__string_token1_character_set_1(lookahead)) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(439);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (aux_sym__string_token1_character_set_1(lookahead)) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(441);
      if (aux_sym__string_token1_character_set_1(lookahead)) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(443);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (aux_sym__string_token1_character_set_1(lookahead)) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 252},
  [3] = {.lex_state = 252},
  [4] = {.lex_state = 254},
  [5] = {.lex_state = 254},
  [6] = {.lex_state = 254},
  [7] = {.lex_state = 254},
  [8] = {.lex_state = 252},
  [9] = {.lex_state = 254},
  [10] = {.lex_state = 254},
  [11] = {.lex_state = 252},
  [12] = {.lex_state = 252},
  [13] = {.lex_state = 252},
  [14] = {.lex_state = 252},
  [15] = {.lex_state = 252},
  [16] = {.lex_state = 252},
  [17] = {.lex_state = 252},
  [18] = {.lex_state = 252},
  [19] = {.lex_state = 252},
  [20] = {.lex_state = 252},
  [21] = {.lex_state = 254},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 254},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 254},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 254},
  [37] = {.lex_state = 254},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 253},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 254},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 253},
  [49] = {.lex_state = 254},
  [50] = {.lex_state = 253},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 253},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 253},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 253},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 253},
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
  [100] = {.lex_state = 23},
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
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 44},
  [120] = {.lex_state = 254},
  [121] = {.lex_state = 254},
  [122] = {.lex_state = 44},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 252},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 252},
  [127] = {.lex_state = 252},
  [128] = {.lex_state = 252},
  [129] = {.lex_state = 252},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 252},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 252},
  [137] = {.lex_state = 252},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 252},
  [141] = {.lex_state = 252},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 252},
  [145] = {.lex_state = 252},
  [146] = {.lex_state = 252},
  [147] = {.lex_state = 252},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 252},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 254},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 252},
  [169] = {.lex_state = 24},
  [170] = {.lex_state = 24},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 252},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 437},
  [184] = {.lex_state = 441},
  [185] = {.lex_state = 252},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 254},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 253},
  [200] = {.lex_state = 253},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 252},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 252},
  [209] = {.lex_state = 253},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 3},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_relative_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(214),
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
    STATE(32), 1,
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(41), 1,
      sym_valign,
    STATE(88), 1,
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
    STATE(39), 1,
      sym_halign,
    STATE(41), 1,
      sym_valign,
    STATE(109), 1,
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
    STATE(38), 1,
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(41), 1,
      sym_valign,
    STATE(99), 1,
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
    STATE(39), 1,
      sym_halign,
    STATE(41), 1,
      sym_valign,
    STATE(76), 1,
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
    STATE(39), 1,
      sym_halign,
    STATE(41), 1,
      sym_valign,
    STATE(76), 1,
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
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(41), 1,
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
    STATE(38), 1,
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(41), 1,
      sym_valign,
    STATE(99), 1,
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
    STATE(31), 1,
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(41), 1,
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
    STATE(92), 1,
      sym_offset,
    STATE(157), 1,
      sym_identifier,
    STATE(91), 4,
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
    STATE(77), 9,
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
    STATE(101), 4,
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
    STATE(189), 1,
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
    STATE(46), 1,
      sym__scale,
    STATE(81), 1,
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
    STATE(73), 1,
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
  [926] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(76), 1,
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
  [946] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(74), 1,
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
    STATE(99), 1,
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
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(60), 1,
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
  [1020] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(67), 1,
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
  [1038] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(88), 1,
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
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      sym_rgb,
    ACTIONS(188), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1076] = 4,
    ACTIONS(194), 1,
      aux_sym_offset_token1,
    STATE(58), 1,
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
  [1096] = 3,
    ACTIONS(192), 1,
      sym_rgb,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(188), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
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
  [1130] = 2,
    ACTIONS(204), 1,
      sym_rgb,
    ACTIONS(202), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1145] = 3,
    ACTIONS(208), 1,
      anon_sym_light,
    ACTIONS(210), 1,
      anon_sym_dark,
    ACTIONS(206), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1162] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(113), 1,
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
  [1179] = 3,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
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
  [1196] = 3,
    ACTIONS(220), 1,
      anon_sym_timestamp,
    ACTIONS(222), 1,
      anon_sym_gzip,
    ACTIONS(218), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1213] = 4,
    ACTIONS(228), 1,
      aux_sym_font_token1,
    STATE(90), 1,
      sym_part,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(226), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1232] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(83), 1,
      sym_offset,
    ACTIONS(230), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1249] = 4,
    ACTIONS(228), 1,
      aux_sym_font_token1,
    STATE(112), 1,
      sym_part,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(234), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1268] = 5,
    ACTIONS(236), 1,
      anon_sym_AT,
    ACTIONS(238), 1,
      aux_sym_relative_token1,
    STATE(202), 1,
      sym_x,
    STATE(50), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(164), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1289] = 6,
    ACTIONS(240), 1,
      anon_sym_input,
    ACTIONS(242), 1,
      anon_sym_output,
    ACTIONS(244), 1,
      anon_sym_parameter,
    ACTIONS(246), 1,
      anon_sym_light,
    ACTIONS(248), 1,
      anon_sym_widget,
    STATE(188), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1312] = 2,
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
  [1326] = 2,
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
  [1340] = 2,
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
  [1354] = 2,
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
  [1368] = 2,
    ACTIONS(260), 1,
      anon_sym_timestamp,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1382] = 2,
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
  [1396] = 6,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(264), 1,
      anon_sym_origin,
    ACTIONS(266), 1,
      anon_sym_AT,
    ACTIONS(268), 1,
      aux_sym_origin_token1,
    STATE(86), 1,
      sym_offset,
    ACTIONS(262), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1418] = 1,
    ACTIONS(270), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1430] = 2,
    ACTIONS(272), 1,
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
  [1444] = 2,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1458] = 2,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1472] = 1,
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
  [1484] = 2,
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
  [1498] = 1,
    ACTIONS(280), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
    ACTIONS(178), 8,
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
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1621] = 1,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1632] = 1,
    ACTIONS(300), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1643] = 1,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1654] = 1,
    ACTIONS(304), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1665] = 1,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1676] = 1,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1687] = 1,
    ACTIONS(308), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1698] = 1,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1709] = 1,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1720] = 1,
    ACTIONS(314), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1731] = 1,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1742] = 1,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1753] = 1,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1764] = 1,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1775] = 1,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1786] = 1,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1797] = 1,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1808] = 1,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1819] = 1,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1830] = 1,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1841] = 1,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1852] = 1,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1863] = 1,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1874] = 6,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(338), 1,
      anon_sym_origin,
    ACTIONS(340), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_origin_token1,
    STATE(89), 1,
      sym_offset,
    ACTIONS(262), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1895] = 1,
    ACTIONS(344), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1906] = 1,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1917] = 1,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1928] = 1,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1939] = 1,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1950] = 1,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1961] = 1,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1972] = 1,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1983] = 1,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1994] = 1,
    ACTIONS(358), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2005] = 1,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2016] = 1,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2027] = 1,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2038] = 1,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2049] = 2,
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
  [2062] = 1,
    ACTIONS(372), 8,
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
  [2104] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(386), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2114] = 2,
    STATE(43), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2124] = 2,
    STATE(43), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [2134] = 2,
    STATE(48), 1,
      sym_y,
    ACTIONS(388), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2144] = 5,
    ACTIONS(390), 1,
      anon_sym_AT,
    ACTIONS(392), 1,
      aux_sym__originx_token1,
    ACTIONS(394), 1,
      aux_sym__originy_token1,
    STATE(211), 1,
      sym__originx,
    STATE(212), 1,
      sym__originy,
  [2160] = 4,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(197), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2173] = 3,
    ACTIONS(400), 1,
      anon_sym_project,
    ACTIONS(402), 1,
      anon_sym_script,
    STATE(84), 2,
      sym_project,
      sym_script,
  [2184] = 4,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2197] = 4,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2210] = 4,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2223] = 4,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2236] = 4,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    ACTIONS(414), 1,
      sym_rgb,
    ACTIONS(416), 1,
      sym_rgba,
    STATE(103), 1,
      sym_name,
  [2249] = 3,
    ACTIONS(418), 1,
      anon_sym_origin,
    ACTIONS(420), 1,
      anon_sym_background,
    STATE(79), 2,
      sym_origin,
      sym_background,
  [2260] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(177), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2270] = 3,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(29), 1,
      sym_name,
    STATE(68), 1,
      sym_decoration,
  [2280] = 3,
    ACTIONS(422), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
    STATE(93), 1,
      sym__component,
  [2290] = 3,
    ACTIONS(422), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
    STATE(94), 1,
      sym__component,
  [2300] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(179), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2310] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      sym_offset,
  [2320] = 3,
    ACTIONS(422), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
    STATE(95), 1,
      sym__component,
  [2330] = 3,
    ACTIONS(422), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
    STATE(96), 1,
      sym__component,
  [2340] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(178), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2350] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(176), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2360] = 3,
    ACTIONS(422), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
    STATE(98), 1,
      sym__component,
  [2370] = 3,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym__string,
  [2380] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(175), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2390] = 3,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(174), 1,
      sym__relative,
    STATE(198), 1,
      sym__offset,
  [2400] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(430), 1,
      aux_sym_origin_token1,
    STATE(104), 1,
      sym_offset,
  [2410] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(432), 1,
      aux_sym_origin_token1,
    STATE(116), 1,
      sym_offset,
  [2420] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(132), 1,
      sym_name,
  [2427] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(166), 1,
      sym_name,
  [2434] = 2,
    ACTIONS(434), 1,
      anon_sym_svg,
    STATE(72), 1,
      sym_svg,
  [2441] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(128), 1,
      sym_name,
  [2448] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(141), 1,
      sym_name,
  [2455] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(127), 1,
      sym_name,
  [2462] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(140), 1,
      sym_name,
  [2469] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(136), 1,
      sym_name,
  [2476] = 2,
    ACTIONS(436), 1,
      anon_sym_project,
    ACTIONS(438), 1,
      anon_sym_script,
  [2483] = 2,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(92), 1,
      sym_offset,
  [2490] = 1,
    ACTIONS(440), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2495] = 2,
    ACTIONS(442), 1,
      anon_sym_scale,
    ACTIONS(444), 1,
      anon_sym_stretch,
  [2502] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(129), 1,
      sym_name,
  [2509] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(144), 1,
      sym_name,
  [2516] = 2,
    ACTIONS(446), 1,
      sym_rgb,
    ACTIONS(448), 1,
      sym_rgba,
  [2523] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(145), 1,
      sym_name,
  [2530] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(124), 1,
      sym_name,
  [2537] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(126), 1,
      sym_name,
  [2544] = 2,
    ACTIONS(450), 1,
      sym_height,
    ACTIONS(452), 1,
      sym_width,
  [2551] = 2,
    ACTIONS(454), 1,
      anon_sym_panel,
    STATE(85), 1,
      sym_panel,
  [2558] = 2,
    ACTIONS(398), 1,
      aux_sym_offset_token1,
    STATE(186), 1,
      sym__offset,
  [2565] = 2,
    ACTIONS(392), 1,
      aux_sym__originx_token1,
    STATE(110), 1,
      sym__originx,
  [2572] = 2,
    ACTIONS(394), 1,
      aux_sym__originy_token1,
    STATE(110), 1,
      sym__originy,
  [2579] = 1,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
  [2583] = 1,
    ACTIONS(458), 1,
      sym_rgb,
  [2587] = 1,
    ACTIONS(460), 1,
      anon_sym_COMMA,
  [2591] = 1,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
  [2595] = 1,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [2599] = 1,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
  [2603] = 1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [2607] = 1,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [2611] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [2615] = 1,
    ACTIONS(458), 1,
      sym_rgba,
  [2619] = 1,
    ACTIONS(474), 1,
      aux_sym_origin_token1,
  [2623] = 1,
    ACTIONS(476), 1,
      anon_sym_gzip,
  [2627] = 1,
    ACTIONS(478), 1,
      aux_sym__string_token1,
  [2631] = 1,
    ACTIONS(480), 1,
      aux_sym__string_token2,
  [2635] = 1,
    ACTIONS(482), 1,
      aux_sym_origin_token1,
  [2639] = 1,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
  [2643] = 1,
    ACTIONS(486), 1,
      aux_sym_absolute_token1,
  [2647] = 1,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
  [2651] = 1,
    ACTIONS(490), 1,
      anon_sym_COMMA,
  [2655] = 1,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [2659] = 1,
    ACTIONS(494), 1,
      anon_sym_SQUOTE,
  [2663] = 1,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
  [2667] = 1,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
  [2671] = 1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
  [2675] = 1,
    ACTIONS(500), 1,
      anon_sym_with,
  [2679] = 1,
    ACTIONS(502), 1,
      sym_width,
  [2683] = 1,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [2687] = 1,
    ACTIONS(506), 1,
      anon_sym_COMMA,
  [2691] = 1,
    ACTIONS(508), 1,
      aux_sym__scale_token1,
  [2695] = 1,
    ACTIONS(510), 1,
      aux_sym__scale_token1,
  [2699] = 1,
    ACTIONS(444), 1,
      anon_sym_stretch,
  [2703] = 1,
    ACTIONS(512), 1,
      anon_sym_COMMA,
  [2707] = 1,
    ACTIONS(514), 1,
      anon_sym_COMMA,
  [2711] = 1,
    ACTIONS(516), 1,
      aux_sym_origin_token1,
  [2715] = 1,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [2719] = 1,
    ACTIONS(520), 1,
      anon_sym_COMMA,
  [2723] = 1,
    ACTIONS(522), 1,
      aux_sym_absolute_token1,
  [2727] = 1,
    ACTIONS(524), 1,
      aux_sym_origin_token1,
  [2731] = 1,
    ACTIONS(526), 1,
      aux_sym__scale_token1,
  [2735] = 1,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
  [2739] = 1,
    ACTIONS(530), 1,
      anon_sym_COMMA,
  [2743] = 1,
    ACTIONS(532), 1,
      anon_sym_COMMA,
  [2747] = 1,
    ACTIONS(534), 1,
      aux_sym_relative_token1,
  [2751] = 1,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
  [2755] = 1,
    ACTIONS(538), 1,
      anon_sym_COMMA,
  [2759] = 1,
    ACTIONS(540), 1,
      anon_sym_COMMA,
  [2763] = 1,
    ACTIONS(476), 1,
      anon_sym_timestamp,
  [2767] = 1,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
  [2771] = 1,
    ACTIONS(544), 1,
      aux_sym_relative_token1,
  [2775] = 1,
    ACTIONS(546), 1,
      aux_sym_absolute_token1,
  [2779] = 1,
    ACTIONS(548), 1,
      anon_sym_COMMA,
  [2783] = 1,
    ACTIONS(550), 1,
      anon_sym_COMMA,
  [2787] = 1,
    ACTIONS(552), 1,
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
  [SMALL_STATE(41)] = 1096,
  [SMALL_STATE(42)] = 1114,
  [SMALL_STATE(43)] = 1130,
  [SMALL_STATE(44)] = 1145,
  [SMALL_STATE(45)] = 1162,
  [SMALL_STATE(46)] = 1179,
  [SMALL_STATE(47)] = 1196,
  [SMALL_STATE(48)] = 1213,
  [SMALL_STATE(49)] = 1232,
  [SMALL_STATE(50)] = 1249,
  [SMALL_STATE(51)] = 1268,
  [SMALL_STATE(52)] = 1289,
  [SMALL_STATE(53)] = 1312,
  [SMALL_STATE(54)] = 1326,
  [SMALL_STATE(55)] = 1340,
  [SMALL_STATE(56)] = 1354,
  [SMALL_STATE(57)] = 1368,
  [SMALL_STATE(58)] = 1382,
  [SMALL_STATE(59)] = 1396,
  [SMALL_STATE(60)] = 1418,
  [SMALL_STATE(61)] = 1430,
  [SMALL_STATE(62)] = 1444,
  [SMALL_STATE(63)] = 1458,
  [SMALL_STATE(64)] = 1472,
  [SMALL_STATE(65)] = 1484,
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
  [SMALL_STATE(92)] = 1786,
  [SMALL_STATE(93)] = 1797,
  [SMALL_STATE(94)] = 1808,
  [SMALL_STATE(95)] = 1819,
  [SMALL_STATE(96)] = 1830,
  [SMALL_STATE(97)] = 1841,
  [SMALL_STATE(98)] = 1852,
  [SMALL_STATE(99)] = 1863,
  [SMALL_STATE(100)] = 1874,
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
  [SMALL_STATE(114)] = 2038,
  [SMALL_STATE(115)] = 2049,
  [SMALL_STATE(116)] = 2062,
  [SMALL_STATE(117)] = 2073,
  [SMALL_STATE(118)] = 2085,
  [SMALL_STATE(119)] = 2104,
  [SMALL_STATE(120)] = 2114,
  [SMALL_STATE(121)] = 2124,
  [SMALL_STATE(122)] = 2134,
  [SMALL_STATE(123)] = 2144,
  [SMALL_STATE(124)] = 2160,
  [SMALL_STATE(125)] = 2173,
  [SMALL_STATE(126)] = 2184,
  [SMALL_STATE(127)] = 2197,
  [SMALL_STATE(128)] = 2210,
  [SMALL_STATE(129)] = 2223,
  [SMALL_STATE(130)] = 2236,
  [SMALL_STATE(131)] = 2249,
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
  [SMALL_STATE(148)] = 2420,
  [SMALL_STATE(149)] = 2427,
  [SMALL_STATE(150)] = 2434,
  [SMALL_STATE(151)] = 2441,
  [SMALL_STATE(152)] = 2448,
  [SMALL_STATE(153)] = 2455,
  [SMALL_STATE(154)] = 2462,
  [SMALL_STATE(155)] = 2469,
  [SMALL_STATE(156)] = 2476,
  [SMALL_STATE(157)] = 2483,
  [SMALL_STATE(158)] = 2490,
  [SMALL_STATE(159)] = 2495,
  [SMALL_STATE(160)] = 2502,
  [SMALL_STATE(161)] = 2509,
  [SMALL_STATE(162)] = 2516,
  [SMALL_STATE(163)] = 2523,
  [SMALL_STATE(164)] = 2530,
  [SMALL_STATE(165)] = 2537,
  [SMALL_STATE(166)] = 2544,
  [SMALL_STATE(167)] = 2551,
  [SMALL_STATE(168)] = 2558,
  [SMALL_STATE(169)] = 2565,
  [SMALL_STATE(170)] = 2572,
  [SMALL_STATE(171)] = 2579,
  [SMALL_STATE(172)] = 2583,
  [SMALL_STATE(173)] = 2587,
  [SMALL_STATE(174)] = 2591,
  [SMALL_STATE(175)] = 2595,
  [SMALL_STATE(176)] = 2599,
  [SMALL_STATE(177)] = 2603,
  [SMALL_STATE(178)] = 2607,
  [SMALL_STATE(179)] = 2611,
  [SMALL_STATE(180)] = 2615,
  [SMALL_STATE(181)] = 2619,
  [SMALL_STATE(182)] = 2623,
  [SMALL_STATE(183)] = 2627,
  [SMALL_STATE(184)] = 2631,
  [SMALL_STATE(185)] = 2635,
  [SMALL_STATE(186)] = 2639,
  [SMALL_STATE(187)] = 2643,
  [SMALL_STATE(188)] = 2647,
  [SMALL_STATE(189)] = 2651,
  [SMALL_STATE(190)] = 2655,
  [SMALL_STATE(191)] = 2659,
  [SMALL_STATE(192)] = 2663,
  [SMALL_STATE(193)] = 2667,
  [SMALL_STATE(194)] = 2671,
  [SMALL_STATE(195)] = 2675,
  [SMALL_STATE(196)] = 2679,
  [SMALL_STATE(197)] = 2683,
  [SMALL_STATE(198)] = 2687,
  [SMALL_STATE(199)] = 2691,
  [SMALL_STATE(200)] = 2695,
  [SMALL_STATE(201)] = 2699,
  [SMALL_STATE(202)] = 2703,
  [SMALL_STATE(203)] = 2707,
  [SMALL_STATE(204)] = 2711,
  [SMALL_STATE(205)] = 2715,
  [SMALL_STATE(206)] = 2719,
  [SMALL_STATE(207)] = 2723,
  [SMALL_STATE(208)] = 2727,
  [SMALL_STATE(209)] = 2731,
  [SMALL_STATE(210)] = 2735,
  [SMALL_STATE(211)] = 2739,
  [SMALL_STATE(212)] = 2743,
  [SMALL_STATE(213)] = 2747,
  [SMALL_STATE(214)] = 2751,
  [SMALL_STATE(215)] = 2755,
  [SMALL_STATE(216)] = 2759,
  [SMALL_STATE(217)] = 2763,
  [SMALL_STATE(218)] = 2767,
  [SMALL_STATE(219)] = 2771,
  [SMALL_STATE(220)] = 2775,
  [SMALL_STATE(221)] = 2779,
  [SMALL_STATE(222)] = 2783,
  [SMALL_STATE(223)] = 2787,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(131),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(218),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(156),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(125),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(167),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 16),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 8),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 10),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [536] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
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
