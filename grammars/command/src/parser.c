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
#define STATE_COUNT 227
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 1
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_module = 4,
  anon_sym_name = 5,
  anon_sym_decorate = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_with = 9,
  anon_sym_load = 10,
  anon_sym_project = 11,
  anon_sym_script = 12,
  anon_sym_save = 13,
  anon_sym_export = 14,
  anon_sym_timestamp = 15,
  anon_sym_COMMA = 16,
  anon_sym_gzip = 17,
  anon_sym_input = 18,
  anon_sym_output = 19,
  anon_sym_parameter = 20,
  anon_sym_light = 21,
  anon_sym_widget = 22,
  aux_sym_parameter_token1 = 23,
  anon_sym_label = 24,
  aux_sym_font_token1 = 25,
  sym_fontsize = 26,
  anon_sym_left = 27,
  anon_sym_centre = 28,
  anon_sym_center = 29,
  anon_sym_right = 30,
  anon_sym_top = 31,
  anon_sym_middle = 32,
  anon_sym_baseline = 33,
  anon_sym_bottom = 34,
  anon_sym_scale = 35,
  aux_sym__scale_token1 = 36,
  anon_sym_stretch = 37,
  anon_sym_origin = 38,
  anon_sym_AT = 39,
  aux_sym_origin_token1 = 40,
  aux_sym__originx_token1 = 41,
  aux_sym__originy_token1 = 42,
  anon_sym_background = 43,
  sym_rgb = 44,
  sym_rgba = 45,
  anon_sym_panel = 46,
  anon_sym_svg = 47,
  anon_sym_dark = 48,
  sym_height = 49,
  sym_width = 50,
  anon_sym_guide = 51,
  aux_sym_identifier_token1 = 52,
  anon_sym_vertical = 53,
  anon_sym_horizontal = 54,
  aux_sym_offset_token1 = 55,
  anon_sym_DQUOTE = 56,
  aux_sym__string_token1 = 57,
  anon_sym_SQUOTE = 58,
  aux_sym__string_token2 = 59,
  aux_sym_absolute_token1 = 60,
  aux_sym_relative_token1 = 61,
  sym_command = 62,
  sym_new = 63,
  sym_set = 64,
  sym__module_attr = 65,
  sym_decorate = 66,
  sym_load = 67,
  sym_save = 68,
  sym_export = 69,
  sym_project = 70,
  sym_script = 71,
  sym__entity = 72,
  sym__input = 73,
  sym__output = 74,
  sym__parameter = 75,
  sym__light = 76,
  sym__widget = 77,
  sym_module = 78,
  sym_input = 79,
  sym_output = 80,
  sym_parameter = 81,
  sym_light = 82,
  sym_widget = 83,
  sym__component = 84,
  sym_label = 85,
  sym_font = 86,
  sym__align = 87,
  sym_halign = 88,
  sym_valign = 89,
  sym_colour = 90,
  sym_decoration = 91,
  sym__scale = 92,
  sym_stretch = 93,
  sym_origin = 94,
  sym__originx = 95,
  sym__originy = 96,
  sym_background = 97,
  sym_panel = 98,
  sym_svg = 99,
  sym_name = 100,
  sym_part = 101,
  sym_guide = 102,
  sym_identifier = 103,
  sym_vertical = 104,
  sym_horizontal = 105,
  sym_geometry = 106,
  sym_offset = 107,
  sym__offset = 108,
  sym_guideline = 109,
  sym__string = 110,
  sym_absolute = 111,
  sym_relative = 112,
  sym__decorate = 113,
  sym__relative = 114,
  sym_x = 115,
  sym_y = 116,
  aux_sym_command_repeat1 = 117,
  alias_sym_dy = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_module] = "module",
  [anon_sym_name] = "name",
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
  [sym__module_attr] = "module",
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
  [anon_sym_module] = anon_sym_module,
  [anon_sym_name] = anon_sym_name,
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
  [sym__module_attr] = sym_module,
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
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
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
  [sym__module_attr] = {
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
  [31] = 9,
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
  [60] = 15,
  [61] = 19,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 15,
  [66] = 17,
  [67] = 16,
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
  [117] = 117,
  [118] = 27,
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
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 186,
  [223] = 196,
  [224] = 175,
  [225] = 221,
  [226] = 176,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(258);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(443);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'g') ADVANCE(225);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(107);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == 'b') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == 'v') ADVANCE(402);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(439);
      if (lookahead == 'm') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(390);
      if (lookahead == 'U') ADVANCE(389);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(390);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'H') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'H') ADVANCE(390);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'H') ADVANCE(390);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(391);
      if (lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '8') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'H') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(146);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(146);
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 22:
      if (lookahead == ';') ADVANCE(259);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(387);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(270);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(376);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 121:
      if (lookahead == 'j') ADVANCE(77);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(388);
      END_STATE();
    case 123:
      if (lookahead == 'k') ADVANCE(96);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(379);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(439);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(366);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(446);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(381);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(381);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == 'z') ADVANCE(114);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 230:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 231:
      if (lookahead == 'w') ADVANCE(260);
      END_STATE();
    case 232:
      if (lookahead == 'x') ADVANCE(180);
      END_STATE();
    case 233:
      if (lookahead == 'z') ADVANCE(168);
      END_STATE();
    case 234:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(439);
      if (lookahead == 'm') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 253:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 254:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 255:
      if (eof) ADVANCE(258);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(292);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == 't') ADVANCE(325);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 256:
      if (eof) ADVANCE(258);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(256)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 257:
      if (eof) ADVANCE(258);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'w') ADVANCE(116);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(257)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'H') ADVANCE(379);
      if (lookahead == 'h') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(146);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 255},
  [3] = {.lex_state = 255},
  [4] = {.lex_state = 257},
  [5] = {.lex_state = 257},
  [6] = {.lex_state = 257},
  [7] = {.lex_state = 257},
  [8] = {.lex_state = 257},
  [9] = {.lex_state = 255},
  [10] = {.lex_state = 257},
  [11] = {.lex_state = 255},
  [12] = {.lex_state = 255},
  [13] = {.lex_state = 255},
  [14] = {.lex_state = 255},
  [15] = {.lex_state = 255},
  [16] = {.lex_state = 255},
  [17] = {.lex_state = 255},
  [18] = {.lex_state = 255},
  [19] = {.lex_state = 255},
  [20] = {.lex_state = 255},
  [21] = {.lex_state = 257},
  [22] = {.lex_state = 257},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 257},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 257},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 256},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 257},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 256},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 257},
  [49] = {.lex_state = 257},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 256},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 256},
  [61] = {.lex_state = 256},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 256},
  [67] = {.lex_state = 256},
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
  [83] = {.lex_state = 23},
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
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 257},
  [122] = {.lex_state = 257},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 45},
  [125] = {.lex_state = 45},
  [126] = {.lex_state = 255},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 255},
  [130] = {.lex_state = 255},
  [131] = {.lex_state = 255},
  [132] = {.lex_state = 255},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 255},
  [135] = {.lex_state = 255},
  [136] = {.lex_state = 255},
  [137] = {.lex_state = 255},
  [138] = {.lex_state = 255},
  [139] = {.lex_state = 255},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 255},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 255},
  [147] = {.lex_state = 255},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 24},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 257},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 255},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 255},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 257},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 255},
  [191] = {.lex_state = 255},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 255},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 444},
  [198] = {.lex_state = 441},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 256},
  [203] = {.lex_state = 256},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 256},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 255},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
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
    [sym_command] = STATE(218),
    [sym_new] = STATE(25),
    [sym_set] = STATE(25),
    [sym_decorate] = STATE(25),
    [sym_load] = STATE(25),
    [sym_save] = STATE(25),
    [sym_export] = STATE(25),
    [aux_sym_command_repeat1] = STATE(25),
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
    STATE(32), 1,
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(95), 1,
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
    STATE(38), 1,
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(106), 1,
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
    STATE(39), 1,
      sym_halign,
    STATE(40), 1,
      sym__align,
    STATE(42), 1,
      sym_valign,
    STATE(68), 1,
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
    STATE(36), 1,
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(87), 1,
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
    STATE(36), 1,
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(87), 1,
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
    STATE(37), 1,
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(117), 1,
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
  [274] = 9,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(32), 1,
      sym__align,
    STATE(39), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(95), 1,
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
  [315] = 4,
    ACTIONS(59), 1,
      aux_sym_offset_token1,
    STATE(17), 1,
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
  [346] = 9,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(39), 1,
      sym_halign,
    STATE(40), 1,
      sym__align,
    STATE(42), 1,
      sym_valign,
    STATE(68), 1,
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
  [661] = 9,
    ACTIONS(105), 1,
      anon_sym_module,
    ACTIONS(107), 1,
      anon_sym_input,
    ACTIONS(109), 1,
      anon_sym_output,
    ACTIONS(111), 1,
      anon_sym_light,
    ACTIONS(113), 1,
      anon_sym_widget,
    ACTIONS(115), 1,
      aux_sym_parameter_token1,
    ACTIONS(117), 1,
      anon_sym_label,
    ACTIONS(119), 1,
      anon_sym_guide,
    STATE(116), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [697] = 8,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    ACTIONS(125), 1,
      anon_sym_vertical,
    ACTIONS(127), 1,
      anon_sym_horizontal,
    ACTIONS(129), 1,
      aux_sym_offset_token1,
    STATE(92), 1,
      sym_offset,
    STATE(163), 1,
      sym_identifier,
    STATE(91), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(121), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [731] = 6,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    ACTIONS(125), 1,
      anon_sym_vertical,
    ACTIONS(127), 1,
      anon_sym_horizontal,
    STATE(23), 1,
      sym_identifier,
    STATE(79), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(121), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [759] = 9,
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
    STATE(188), 1,
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
  [870] = 3,
    ACTIONS(129), 1,
      aux_sym_offset_token1,
    STATE(57), 1,
      sym_offset,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [888] = 4,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym__scale,
    STATE(78), 1,
      sym_stretch,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [908] = 4,
    ACTIONS(176), 1,
      aux_sym_offset_token1,
    STATE(66), 1,
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
  [928] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(68), 1,
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
  [948] = 2,
    ACTIONS(180), 1,
      sym_rgb,
    ACTIONS(178), 10,
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
  [964] = 2,
    ACTIONS(184), 1,
      sym_rgb,
    ACTIONS(182), 10,
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
  [980] = 3,
    ACTIONS(129), 1,
      aux_sym_offset_token1,
    STATE(53), 1,
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
  [998] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(95), 1,
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
  [1018] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(81), 1,
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
  [1038] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(87), 1,
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
  [1058] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      sym_rgb,
    ACTIONS(190), 9,
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
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(117), 1,
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
  [1096] = 2,
    ACTIONS(198), 1,
      aux_sym_offset_token1,
    ACTIONS(196), 10,
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
  [1112] = 3,
    ACTIONS(194), 1,
      sym_rgb,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1130] = 4,
    ACTIONS(206), 1,
      aux_sym_font_token1,
    STATE(71), 1,
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
    STATE(185), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1172] = 3,
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
  [1189] = 2,
    ACTIONS(226), 1,
      sym_rgb,
    ACTIONS(224), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1204] = 3,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_stretch,
    ACTIONS(228), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1221] = 3,
    ACTIONS(129), 1,
      aux_sym_offset_token1,
    STATE(105), 1,
      sym_offset,
    ACTIONS(232), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1238] = 3,
    ACTIONS(129), 1,
      aux_sym_offset_token1,
    STATE(82), 1,
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
  [1255] = 3,
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
  [1272] = 4,
    ACTIONS(206), 1,
      aux_sym_font_token1,
    STATE(114), 1,
      sym_part,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(244), 6,
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
    STATE(200), 1,
      sym_x,
    STATE(51), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(164), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1312] = 1,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1324] = 1,
    ACTIONS(252), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1336] = 2,
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
  [1350] = 2,
    ACTIONS(258), 1,
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
  [1364] = 1,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1376] = 6,
    ACTIONS(129), 1,
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
  [1398] = 2,
    ACTIONS(272), 1,
      anon_sym_timestamp,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1412] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(79), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1426] = 2,
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
  [1440] = 2,
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
  [1454] = 2,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1468] = 2,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1482] = 1,
    ACTIONS(77), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1494] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(87), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1508] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(83), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1522] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1533] = 1,
    ACTIONS(284), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1544] = 1,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1555] = 1,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1566] = 1,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1577] = 1,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1588] = 1,
    ACTIONS(294), 8,
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
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1632] = 1,
    ACTIONS(228), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1643] = 1,
    ACTIONS(300), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1654] = 1,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1665] = 1,
    ACTIONS(304), 8,
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
  [1687] = 6,
    ACTIONS(129), 1,
      aux_sym_offset_token1,
    ACTIONS(308), 1,
      anon_sym_origin,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      aux_sym_origin_token1,
    STATE(89), 1,
      sym_offset,
    ACTIONS(262), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1708] = 1,
    ACTIONS(314), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1719] = 1,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1730] = 1,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1741] = 1,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1752] = 1,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1763] = 1,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1774] = 1,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1785] = 1,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1796] = 1,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1807] = 1,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1818] = 1,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1829] = 1,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1840] = 1,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1851] = 1,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1862] = 1,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1873] = 1,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1884] = 1,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
    ACTIONS(348), 8,
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
    ACTIONS(49), 8,
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
    ACTIONS(358), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1994] = 1,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2005] = 1,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2016] = 1,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2027] = 1,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2038] = 1,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2049] = 2,
    ACTIONS(370), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(372), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2062] = 1,
    ACTIONS(374), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2073] = 1,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2084] = 2,
    ACTIONS(158), 2,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(160), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2096] = 6,
    ACTIONS(376), 1,
      anon_sym_input,
    ACTIONS(378), 1,
      anon_sym_output,
    ACTIONS(380), 1,
      anon_sym_parameter,
    ACTIONS(382), 1,
      anon_sym_light,
    ACTIONS(384), 1,
      anon_sym_widget,
    ACTIONS(386), 1,
      anon_sym_label,
  [2115] = 4,
    ACTIONS(388), 1,
      anon_sym_module,
    ACTIONS(390), 1,
      anon_sym_origin,
    ACTIONS(392), 1,
      anon_sym_background,
    STATE(108), 3,
      sym__module_attr,
      sym_origin,
      sym_background,
  [2130] = 2,
    STATE(46), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [2140] = 2,
    STATE(46), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2150] = 5,
    ACTIONS(394), 1,
      anon_sym_AT,
    ACTIONS(396), 1,
      aux_sym__originx_token1,
    ACTIONS(398), 1,
      aux_sym__originy_token1,
    STATE(193), 1,
      sym__originy,
    STATE(194), 1,
      sym__originx,
  [2166] = 2,
    STATE(43), 1,
      sym_y,
    ACTIONS(400), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2176] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(402), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2186] = 4,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(173), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2199] = 4,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    ACTIONS(410), 1,
      sym_rgb,
    ACTIONS(412), 1,
      sym_rgba,
    STATE(77), 1,
      sym_name,
  [2212] = 3,
    ACTIONS(414), 1,
      anon_sym_project,
    ACTIONS(416), 1,
      anon_sym_script,
    STATE(96), 2,
      sym_project,
      sym_script,
  [2223] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2236] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2249] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2262] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2275] = 3,
    ACTIONS(426), 1,
      aux_sym_font_token1,
    STATE(52), 1,
      sym_name,
    STATE(94), 1,
      sym__component,
  [2285] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(181), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2295] = 3,
    ACTIONS(129), 1,
      aux_sym_offset_token1,
    ACTIONS(428), 1,
      aux_sym_origin_token1,
    STATE(104), 1,
      sym_offset,
  [2305] = 3,
    ACTIONS(129), 1,
      aux_sym_offset_token1,
    ACTIONS(430), 1,
      aux_sym_origin_token1,
    STATE(102), 1,
      sym_offset,
  [2315] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(182), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2325] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(180), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2335] = 3,
    ACTIONS(129), 1,
      aux_sym_offset_token1,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      sym_offset,
  [2345] = 3,
    ACTIONS(426), 1,
      aux_sym_font_token1,
    STATE(52), 1,
      sym_name,
    STATE(90), 1,
      sym__component,
  [2355] = 3,
    ACTIONS(426), 1,
      aux_sym_font_token1,
    STATE(52), 1,
      sym_name,
    STATE(88), 1,
      sym__component,
  [2365] = 3,
    ACTIONS(426), 1,
      aux_sym_font_token1,
    STATE(52), 1,
      sym_name,
    STATE(85), 1,
      sym__component,
  [2375] = 3,
    ACTIONS(426), 1,
      aux_sym_font_token1,
    STATE(52), 1,
      sym_name,
    STATE(84), 1,
      sym__component,
  [2385] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(179), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2395] = 3,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    ACTIONS(436), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym__string,
  [2405] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(178), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2415] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(177), 1,
      sym__relative,
    STATE(210), 1,
      sym__offset,
  [2425] = 3,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(30), 1,
      sym_name,
    STATE(75), 1,
      sym_decoration,
  [2435] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(147), 1,
      sym_name,
  [2442] = 2,
    ACTIONS(398), 1,
      aux_sym__originy_token1,
    STATE(100), 1,
      sym__originy,
  [2449] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(138), 1,
      sym_name,
  [2456] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(93), 1,
      sym_name,
  [2463] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(130), 1,
      sym_name,
  [2470] = 2,
    ACTIONS(396), 1,
      aux_sym__originx_token1,
    STATE(100), 1,
      sym__originx,
  [2477] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(159), 1,
      sym_name,
  [2484] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(129), 1,
      sym_name,
  [2491] = 2,
    ACTIONS(438), 1,
      anon_sym_project,
    ACTIONS(440), 1,
      anon_sym_script,
  [2498] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(134), 1,
      sym_name,
  [2505] = 2,
    ACTIONS(442), 1,
      sym_height,
    ACTIONS(444), 1,
      sym_width,
  [2512] = 1,
    ACTIONS(446), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2517] = 2,
    ACTIONS(448), 1,
      sym_rgb,
    ACTIONS(450), 1,
      sym_rgba,
  [2524] = 2,
    ACTIONS(452), 1,
      anon_sym_panel,
    STATE(69), 1,
      sym_panel,
  [2531] = 2,
    ACTIONS(129), 1,
      aux_sym_offset_token1,
    STATE(92), 1,
      sym_offset,
  [2538] = 2,
    ACTIONS(454), 1,
      anon_sym_scale,
    ACTIONS(456), 1,
      anon_sym_stretch,
  [2545] = 2,
    ACTIONS(458), 1,
      anon_sym_svg,
    STATE(74), 1,
      sym_svg,
  [2552] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(144), 1,
      sym_name,
  [2559] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(126), 1,
      sym_name,
  [2566] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(137), 1,
      sym_name,
  [2573] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(146), 1,
      sym_name,
  [2580] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(132), 1,
      sym_name,
  [2587] = 2,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(189), 1,
      sym__offset,
  [2594] = 2,
    ACTIONS(408), 1,
      aux_sym_font_token1,
    STATE(131), 1,
      sym_name,
  [2601] = 1,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
  [2605] = 1,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
  [2609] = 1,
    ACTIONS(464), 1,
      anon_sym_COMMA,
  [2613] = 1,
    ACTIONS(466), 1,
      aux_sym_absolute_token1,
  [2617] = 1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [2621] = 1,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [2625] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [2629] = 1,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [2633] = 1,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [2637] = 1,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [2641] = 1,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
  [2645] = 1,
    ACTIONS(482), 1,
      sym_width,
  [2649] = 1,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
  [2653] = 1,
    ACTIONS(486), 1,
      aux_sym_relative_token1,
  [2657] = 1,
    ACTIONS(480), 1,
      anon_sym_SQUOTE,
  [2661] = 1,
    ACTIONS(488), 1,
      anon_sym_COMMA,
  [2665] = 1,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
  [2669] = 1,
    ACTIONS(492), 1,
      aux_sym_origin_token1,
  [2673] = 1,
    ACTIONS(494), 1,
      aux_sym_origin_token1,
  [2677] = 1,
    ACTIONS(496), 1,
      anon_sym_COMMA,
  [2681] = 1,
    ACTIONS(498), 1,
      anon_sym_COMMA,
  [2685] = 1,
    ACTIONS(500), 1,
      anon_sym_COMMA,
  [2689] = 1,
    ACTIONS(502), 1,
      aux_sym_origin_token1,
  [2693] = 1,
    ACTIONS(504), 1,
      aux_sym_absolute_token1,
  [2697] = 1,
    ACTIONS(506), 1,
      aux_sym__string_token2,
  [2701] = 1,
    ACTIONS(508), 1,
      aux_sym__string_token1,
  [2705] = 1,
    ACTIONS(510), 1,
      sym_rgb,
  [2709] = 1,
    ACTIONS(512), 1,
      anon_sym_COMMA,
  [2713] = 1,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
  [2717] = 1,
    ACTIONS(516), 1,
      aux_sym__scale_token1,
  [2721] = 1,
    ACTIONS(518), 1,
      aux_sym__scale_token1,
  [2725] = 1,
    ACTIONS(456), 1,
      anon_sym_stretch,
  [2729] = 1,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [2733] = 1,
    ACTIONS(522), 1,
      anon_sym_name,
  [2737] = 1,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
  [2741] = 1,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
  [2745] = 1,
    ACTIONS(528), 1,
      anon_sym_COMMA,
  [2749] = 1,
    ACTIONS(530), 1,
      anon_sym_COMMA,
  [2753] = 1,
    ACTIONS(510), 1,
      sym_rgba,
  [2757] = 1,
    ACTIONS(532), 1,
      aux_sym__scale_token1,
  [2761] = 1,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
  [2765] = 1,
    ACTIONS(536), 1,
      aux_sym_origin_token1,
  [2769] = 1,
    ACTIONS(538), 1,
      anon_sym_with,
  [2773] = 1,
    ACTIONS(540), 1,
      anon_sym_gzip,
  [2777] = 1,
    ACTIONS(540), 1,
      anon_sym_timestamp,
  [2781] = 1,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
  [2785] = 1,
    ACTIONS(544), 1,
      anon_sym_COMMA,
  [2789] = 1,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
  [2793] = 1,
    ACTIONS(548), 1,
      anon_sym_COMMA,
  [2797] = 1,
    ACTIONS(550), 1,
      aux_sym_relative_token1,
  [2801] = 1,
    ACTIONS(552), 1,
      aux_sym_absolute_token1,
  [2805] = 1,
    ACTIONS(554), 1,
      anon_sym_COMMA,
  [2809] = 1,
    ACTIONS(556), 1,
      anon_sym_COMMA,
  [2813] = 1,
    ACTIONS(558), 1,
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
  [SMALL_STATE(9)] = 315,
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
  [SMALL_STATE(23)] = 697,
  [SMALL_STATE(24)] = 731,
  [SMALL_STATE(25)] = 759,
  [SMALL_STATE(26)] = 793,
  [SMALL_STATE(27)] = 827,
  [SMALL_STATE(28)] = 845,
  [SMALL_STATE(29)] = 870,
  [SMALL_STATE(30)] = 888,
  [SMALL_STATE(31)] = 908,
  [SMALL_STATE(32)] = 928,
  [SMALL_STATE(33)] = 948,
  [SMALL_STATE(34)] = 964,
  [SMALL_STATE(35)] = 980,
  [SMALL_STATE(36)] = 998,
  [SMALL_STATE(37)] = 1018,
  [SMALL_STATE(38)] = 1038,
  [SMALL_STATE(39)] = 1058,
  [SMALL_STATE(40)] = 1076,
  [SMALL_STATE(41)] = 1096,
  [SMALL_STATE(42)] = 1112,
  [SMALL_STATE(43)] = 1130,
  [SMALL_STATE(44)] = 1149,
  [SMALL_STATE(45)] = 1172,
  [SMALL_STATE(46)] = 1189,
  [SMALL_STATE(47)] = 1204,
  [SMALL_STATE(48)] = 1221,
  [SMALL_STATE(49)] = 1238,
  [SMALL_STATE(50)] = 1255,
  [SMALL_STATE(51)] = 1272,
  [SMALL_STATE(52)] = 1291,
  [SMALL_STATE(53)] = 1312,
  [SMALL_STATE(54)] = 1324,
  [SMALL_STATE(55)] = 1336,
  [SMALL_STATE(56)] = 1350,
  [SMALL_STATE(57)] = 1364,
  [SMALL_STATE(58)] = 1376,
  [SMALL_STATE(59)] = 1398,
  [SMALL_STATE(60)] = 1412,
  [SMALL_STATE(61)] = 1426,
  [SMALL_STATE(62)] = 1440,
  [SMALL_STATE(63)] = 1454,
  [SMALL_STATE(64)] = 1468,
  [SMALL_STATE(65)] = 1482,
  [SMALL_STATE(66)] = 1494,
  [SMALL_STATE(67)] = 1508,
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
  [SMALL_STATE(84)] = 1708,
  [SMALL_STATE(85)] = 1719,
  [SMALL_STATE(86)] = 1730,
  [SMALL_STATE(87)] = 1741,
  [SMALL_STATE(88)] = 1752,
  [SMALL_STATE(89)] = 1763,
  [SMALL_STATE(90)] = 1774,
  [SMALL_STATE(91)] = 1785,
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
  [SMALL_STATE(114)] = 2038,
  [SMALL_STATE(115)] = 2049,
  [SMALL_STATE(116)] = 2062,
  [SMALL_STATE(117)] = 2073,
  [SMALL_STATE(118)] = 2084,
  [SMALL_STATE(119)] = 2096,
  [SMALL_STATE(120)] = 2115,
  [SMALL_STATE(121)] = 2130,
  [SMALL_STATE(122)] = 2140,
  [SMALL_STATE(123)] = 2150,
  [SMALL_STATE(124)] = 2166,
  [SMALL_STATE(125)] = 2176,
  [SMALL_STATE(126)] = 2186,
  [SMALL_STATE(127)] = 2199,
  [SMALL_STATE(128)] = 2212,
  [SMALL_STATE(129)] = 2223,
  [SMALL_STATE(130)] = 2236,
  [SMALL_STATE(131)] = 2249,
  [SMALL_STATE(132)] = 2262,
  [SMALL_STATE(133)] = 2275,
  [SMALL_STATE(134)] = 2285,
  [SMALL_STATE(135)] = 2295,
  [SMALL_STATE(136)] = 2305,
  [SMALL_STATE(137)] = 2315,
  [SMALL_STATE(138)] = 2325,
  [SMALL_STATE(139)] = 2335,
  [SMALL_STATE(140)] = 2345,
  [SMALL_STATE(141)] = 2355,
  [SMALL_STATE(142)] = 2365,
  [SMALL_STATE(143)] = 2375,
  [SMALL_STATE(144)] = 2385,
  [SMALL_STATE(145)] = 2395,
  [SMALL_STATE(146)] = 2405,
  [SMALL_STATE(147)] = 2415,
  [SMALL_STATE(148)] = 2425,
  [SMALL_STATE(149)] = 2435,
  [SMALL_STATE(150)] = 2442,
  [SMALL_STATE(151)] = 2449,
  [SMALL_STATE(152)] = 2456,
  [SMALL_STATE(153)] = 2463,
  [SMALL_STATE(154)] = 2470,
  [SMALL_STATE(155)] = 2477,
  [SMALL_STATE(156)] = 2484,
  [SMALL_STATE(157)] = 2491,
  [SMALL_STATE(158)] = 2498,
  [SMALL_STATE(159)] = 2505,
  [SMALL_STATE(160)] = 2512,
  [SMALL_STATE(161)] = 2517,
  [SMALL_STATE(162)] = 2524,
  [SMALL_STATE(163)] = 2531,
  [SMALL_STATE(164)] = 2538,
  [SMALL_STATE(165)] = 2545,
  [SMALL_STATE(166)] = 2552,
  [SMALL_STATE(167)] = 2559,
  [SMALL_STATE(168)] = 2566,
  [SMALL_STATE(169)] = 2573,
  [SMALL_STATE(170)] = 2580,
  [SMALL_STATE(171)] = 2587,
  [SMALL_STATE(172)] = 2594,
  [SMALL_STATE(173)] = 2601,
  [SMALL_STATE(174)] = 2605,
  [SMALL_STATE(175)] = 2609,
  [SMALL_STATE(176)] = 2613,
  [SMALL_STATE(177)] = 2617,
  [SMALL_STATE(178)] = 2621,
  [SMALL_STATE(179)] = 2625,
  [SMALL_STATE(180)] = 2629,
  [SMALL_STATE(181)] = 2633,
  [SMALL_STATE(182)] = 2637,
  [SMALL_STATE(183)] = 2641,
  [SMALL_STATE(184)] = 2645,
  [SMALL_STATE(185)] = 2649,
  [SMALL_STATE(186)] = 2653,
  [SMALL_STATE(187)] = 2657,
  [SMALL_STATE(188)] = 2661,
  [SMALL_STATE(189)] = 2665,
  [SMALL_STATE(190)] = 2669,
  [SMALL_STATE(191)] = 2673,
  [SMALL_STATE(192)] = 2677,
  [SMALL_STATE(193)] = 2681,
  [SMALL_STATE(194)] = 2685,
  [SMALL_STATE(195)] = 2689,
  [SMALL_STATE(196)] = 2693,
  [SMALL_STATE(197)] = 2697,
  [SMALL_STATE(198)] = 2701,
  [SMALL_STATE(199)] = 2705,
  [SMALL_STATE(200)] = 2709,
  [SMALL_STATE(201)] = 2713,
  [SMALL_STATE(202)] = 2717,
  [SMALL_STATE(203)] = 2721,
  [SMALL_STATE(204)] = 2725,
  [SMALL_STATE(205)] = 2729,
  [SMALL_STATE(206)] = 2733,
  [SMALL_STATE(207)] = 2737,
  [SMALL_STATE(208)] = 2741,
  [SMALL_STATE(209)] = 2745,
  [SMALL_STATE(210)] = 2749,
  [SMALL_STATE(211)] = 2753,
  [SMALL_STATE(212)] = 2757,
  [SMALL_STATE(213)] = 2761,
  [SMALL_STATE(214)] = 2765,
  [SMALL_STATE(215)] = 2769,
  [SMALL_STATE(216)] = 2773,
  [SMALL_STATE(217)] = 2777,
  [SMALL_STATE(218)] = 2781,
  [SMALL_STATE(219)] = 2785,
  [SMALL_STATE(220)] = 2789,
  [SMALL_STATE(221)] = 2793,
  [SMALL_STATE(222)] = 2797,
  [SMALL_STATE(223)] = 2801,
  [SMALL_STATE(224)] = 2805,
  [SMALL_STATE(225)] = 2809,
  [SMALL_STATE(226)] = 2813,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 7),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(120),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(220),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(157),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(128),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(162),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 8),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 16),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 6),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 6),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 10),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [542] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
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
