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
#define STATE_COUNT 229
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 1
#define TOKEN_COUNT 64
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
  anon_sym_height = 6,
  anon_sym_width = 7,
  anon_sym_decorate = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_with = 11,
  anon_sym_load = 12,
  anon_sym_project = 13,
  anon_sym_script = 14,
  anon_sym_save = 15,
  anon_sym_export = 16,
  anon_sym_timestamp = 17,
  anon_sym_COMMA = 18,
  anon_sym_gzip = 19,
  anon_sym_input = 20,
  anon_sym_output = 21,
  anon_sym_parameter = 22,
  anon_sym_light = 23,
  anon_sym_widget = 24,
  aux_sym_parameter_token1 = 25,
  anon_sym_label = 26,
  aux_sym_font_token1 = 27,
  sym_fontsize = 28,
  anon_sym_left = 29,
  anon_sym_centre = 30,
  anon_sym_center = 31,
  anon_sym_right = 32,
  anon_sym_top = 33,
  anon_sym_middle = 34,
  anon_sym_baseline = 35,
  anon_sym_bottom = 36,
  anon_sym_scale = 37,
  aux_sym__scale_token1 = 38,
  anon_sym_stretch = 39,
  anon_sym_origin = 40,
  anon_sym_AT = 41,
  aux_sym_origin_token1 = 42,
  aux_sym__originx_token1 = 43,
  aux_sym__originy_token1 = 44,
  anon_sym_background = 45,
  sym_rgb = 46,
  sym_rgba = 47,
  anon_sym_panel = 48,
  anon_sym_svg = 49,
  anon_sym_dark = 50,
  sym_height = 51,
  sym_width = 52,
  anon_sym_guide = 53,
  aux_sym_identifier_token1 = 54,
  anon_sym_vertical = 55,
  anon_sym_horizontal = 56,
  aux_sym_offset_token1 = 57,
  anon_sym_DQUOTE = 58,
  aux_sym__string_token1 = 59,
  anon_sym_SQUOTE = 60,
  aux_sym__string_token2 = 61,
  aux_sym_absolute_token1 = 62,
  aux_sym_relative_token1 = 63,
  sym_command = 64,
  sym_new = 65,
  sym_set = 66,
  sym__module_attr = 67,
  sym_decorate = 68,
  sym_load = 69,
  sym_save = 70,
  sym_export = 71,
  sym_project = 72,
  sym_script = 73,
  sym__entity = 74,
  sym__input = 75,
  sym__output = 76,
  sym__parameter = 77,
  sym__light = 78,
  sym__widget = 79,
  sym_module = 80,
  sym_input = 81,
  sym_output = 82,
  sym_parameter = 83,
  sym_light = 84,
  sym_widget = 85,
  sym__component = 86,
  sym_label = 87,
  sym_font = 88,
  sym__align = 89,
  sym_halign = 90,
  sym_valign = 91,
  sym_colour = 92,
  sym_decoration = 93,
  sym__scale = 94,
  sym_stretch = 95,
  sym_origin = 96,
  sym__originx = 97,
  sym__originy = 98,
  sym_background = 99,
  sym_panel = 100,
  sym_svg = 101,
  sym_name = 102,
  sym_part = 103,
  sym_guide = 104,
  sym_identifier = 105,
  sym_vertical = 106,
  sym_horizontal = 107,
  sym_geometry = 108,
  sym_offset = 109,
  sym__offset = 110,
  sym_guideline = 111,
  sym__string = 112,
  sym_absolute = 113,
  sym_relative = 114,
  sym__decorate = 115,
  sym__relative = 116,
  sym_x = 117,
  sym_y = 118,
  aux_sym_command_repeat1 = 119,
  alias_sym_dy = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_module] = "module",
  [anon_sym_name] = "name",
  [anon_sym_height] = "height",
  [anon_sym_width] = "width",
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
  [anon_sym_height] = anon_sym_height,
  [anon_sym_width] = anon_sym_width,
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 7,
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
  [53] = 18,
  [54] = 54,
  [55] = 20,
  [56] = 19,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 20,
  [64] = 64,
  [65] = 17,
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
  [222] = 222,
  [223] = 223,
  [224] = 198,
  [225] = 185,
  [226] = 220,
  [227] = 199,
  [228] = 221,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(264);
      if (lookahead == '"') ADVANCE(448);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(451);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '0') ADVANCE(378);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'g') ADVANCE(231);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(112);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == 'b') ADVANCE(425);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == 'h') ADVANCE(426);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead == 'm') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == 'v') ADVANCE(410);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(397);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '8') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(455);
      if (lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(152);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(152);
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 22:
      if (lookahead == ';') ADVANCE(265);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(415);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(390);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(395);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(87);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(278);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(384);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 127:
      if (lookahead == 'j') ADVANCE(77);
      END_STATE();
    case 128:
      if (lookahead == 'k') ADVANCE(396);
      END_STATE();
    case 129:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(387);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(398);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(397);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(454);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(455);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(297);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(366);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(389);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == 'z') ADVANCE(119);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 236:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 237:
      if (lookahead == 'w') ADVANCE(266);
      END_STATE();
    case 238:
      if (lookahead == 'x') ADVANCE(185);
      END_STATE();
    case 239:
      if (lookahead == 'z') ADVANCE(173);
      END_STATE();
    case 240:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 243:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(455);
      if (lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 259:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 260:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 261:
      if (eof) ADVANCE(264);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(300);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == 't') ADVANCE(333);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(261)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 262:
      if (eof) ADVANCE(264);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(262)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 263:
      if (eof) ADVANCE(264);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'g') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(121);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(382);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'h') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(152);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == 'r') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 261},
  [3] = {.lex_state = 261},
  [4] = {.lex_state = 263},
  [5] = {.lex_state = 263},
  [6] = {.lex_state = 263},
  [7] = {.lex_state = 261},
  [8] = {.lex_state = 263},
  [9] = {.lex_state = 263},
  [10] = {.lex_state = 263},
  [11] = {.lex_state = 261},
  [12] = {.lex_state = 261},
  [13] = {.lex_state = 261},
  [14] = {.lex_state = 261},
  [15] = {.lex_state = 261},
  [16] = {.lex_state = 261},
  [17] = {.lex_state = 261},
  [18] = {.lex_state = 261},
  [19] = {.lex_state = 261},
  [20] = {.lex_state = 261},
  [21] = {.lex_state = 263},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 263},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 263},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 263},
  [35] = {.lex_state = 263},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 262},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 262},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 263},
  [46] = {.lex_state = 263},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 262},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 262},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 262},
  [56] = {.lex_state = 262},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 262},
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
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 45},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 263},
  [124] = {.lex_state = 45},
  [125] = {.lex_state = 263},
  [126] = {.lex_state = 261},
  [127] = {.lex_state = 261},
  [128] = {.lex_state = 261},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 261},
  [131] = {.lex_state = 261},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 261},
  [135] = {.lex_state = 261},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 261},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 261},
  [140] = {.lex_state = 261},
  [141] = {.lex_state = 261},
  [142] = {.lex_state = 261},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 261},
  [147] = {.lex_state = 261},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 261},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 261},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 263},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 452},
  [188] = {.lex_state = 449},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 261},
  [193] = {.lex_state = 263},
  [194] = {.lex_state = 263},
  [195] = {.lex_state = 261},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 262},
  [205] = {.lex_state = 262},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 261},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 261},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 262},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 263},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
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
    [sym_command] = STATE(219),
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
    STATE(39), 1,
      sym__align,
    STATE(41), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(85), 1,
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
    STATE(31), 1,
      sym__align,
    STATE(41), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(71), 1,
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
    STATE(41), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(91), 1,
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
    STATE(37), 1,
      sym__align,
    STATE(41), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(108), 1,
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
    STATE(37), 1,
      sym__align,
    STATE(41), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(108), 1,
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
  [233] = 4,
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
  [264] = 9,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(31), 1,
      sym__align,
    STATE(41), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(71), 1,
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
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [305] = 9,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(32), 1,
      sym__align,
    STATE(41), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(92), 1,
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
  [346] = 9,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(38), 1,
      sym__align,
    STATE(41), 1,
      sym_halign,
    STATE(42), 1,
      sym_valign,
    STATE(91), 1,
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
    STATE(96), 1,
      sym_offset,
    STATE(158), 1,
      sym_identifier,
    STATE(95), 4,
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
      anon_sym_module,
    ACTIONS(117), 1,
      anon_sym_input,
    ACTIONS(119), 1,
      anon_sym_output,
    ACTIONS(121), 1,
      anon_sym_light,
    ACTIONS(123), 1,
      anon_sym_widget,
    ACTIONS(125), 1,
      aux_sym_parameter_token1,
    ACTIONS(127), 1,
      anon_sym_label,
    ACTIONS(129), 1,
      anon_sym_guide,
    STATE(115), 9,
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
    STATE(88), 4,
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
    STATE(213), 1,
      sym_x,
    STATE(2), 3,
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
    STATE(47), 1,
      sym__scale,
    STATE(104), 1,
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
      aux_sym_offset_token1,
    ACTIONS(174), 10,
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
  [906] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(108), 1,
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
  [946] = 2,
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
  [962] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(62), 1,
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
  [980] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(64), 1,
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
  [998] = 2,
    ACTIONS(190), 1,
      sym_rgb,
    ACTIONS(188), 10,
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
  [1014] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(92), 1,
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
  [1034] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(71), 1,
      sym_colour,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1054] = 4,
    ACTIONS(31), 1,
      sym_rgb,
    ACTIONS(33), 1,
      sym_rgba,
    STATE(91), 1,
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
  [1074] = 4,
    ACTIONS(192), 1,
      aux_sym_offset_token1,
    STATE(56), 1,
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
  [1094] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      sym_rgb,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1112] = 3,
    ACTIONS(198), 1,
      sym_rgb,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(194), 9,
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
    STATE(72), 1,
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
  [1149] = 3,
    ACTIONS(210), 1,
      anon_sym_timestamp,
    ACTIONS(212), 1,
      anon_sym_gzip,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1166] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(84), 1,
      sym_offset,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1183] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(87), 1,
      sym_offset,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1200] = 3,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_stretch,
    ACTIONS(218), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1217] = 6,
    ACTIONS(222), 1,
      anon_sym_input,
    ACTIONS(224), 1,
      anon_sym_output,
    ACTIONS(226), 1,
      anon_sym_parameter,
    ACTIONS(228), 1,
      anon_sym_light,
    ACTIONS(230), 1,
      anon_sym_widget,
    STATE(189), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1240] = 4,
    ACTIONS(206), 1,
      aux_sym_font_token1,
    STATE(107), 1,
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
  [1259] = 3,
    ACTIONS(238), 1,
      anon_sym_light,
    ACTIONS(240), 1,
      anon_sym_dark,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1276] = 5,
    ACTIONS(242), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      aux_sym_relative_token1,
    STATE(218), 1,
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
  [1297] = 2,
    ACTIONS(248), 1,
      sym_rgb,
    ACTIONS(246), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1312] = 2,
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
  [1354] = 2,
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
  [1368] = 2,
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
  [1382] = 2,
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
  [1396] = 1,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1408] = 6,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(264), 1,
      anon_sym_origin,
    ACTIONS(266), 1,
      anon_sym_AT,
    ACTIONS(268), 1,
      aux_sym_origin_token1,
    STATE(90), 1,
      sym_offset,
    ACTIONS(262), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1430] = 2,
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
  [1444] = 1,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1456] = 1,
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
  [1468] = 1,
    ACTIONS(276), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1480] = 2,
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
  [1494] = 2,
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
  [1508] = 2,
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
    ACTIONS(49), 8,
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
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1720] = 1,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1731] = 1,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1742] = 1,
    ACTIONS(320), 8,
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
  [1775] = 1,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1786] = 1,
    ACTIONS(178), 8,
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
  [1863] = 6,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(338), 1,
      anon_sym_origin,
    ACTIONS(340), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_origin_token1,
    STATE(93), 1,
      sym_offset,
    ACTIONS(262), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
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
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1928] = 1,
    ACTIONS(218), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1939] = 1,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1950] = 2,
    ACTIONS(352), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(354), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1963] = 1,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1974] = 1,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1985] = 1,
    ACTIONS(358), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1996] = 1,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2007] = 1,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2018] = 1,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2029] = 1,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2040] = 1,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2051] = 1,
    ACTIONS(370), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
  [2073] = 1,
    ACTIONS(374), 8,
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
  [2096] = 4,
    ACTIONS(376), 1,
      anon_sym_module,
    ACTIONS(378), 1,
      anon_sym_origin,
    ACTIONS(380), 1,
      anon_sym_background,
    STATE(103), 3,
      sym__module_attr,
      sym_origin,
      sym_background,
  [2111] = 6,
    ACTIONS(382), 1,
      anon_sym_input,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(386), 1,
      anon_sym_parameter,
    ACTIONS(388), 1,
      anon_sym_light,
    ACTIONS(390), 1,
      anon_sym_widget,
    ACTIONS(392), 1,
      anon_sym_label,
  [2130] = 2,
    STATE(43), 1,
      sym_y,
    ACTIONS(394), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2140] = 5,
    ACTIONS(396), 1,
      anon_sym_AT,
    ACTIONS(398), 1,
      aux_sym__originx_token1,
    ACTIONS(400), 1,
      aux_sym__originy_token1,
    STATE(196), 1,
      sym__originx,
    STATE(197), 1,
      sym__originy,
  [2156] = 2,
    STATE(52), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [2166] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(402), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2176] = 2,
    STATE(52), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2186] = 4,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(176), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2199] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2212] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2225] = 4,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    ACTIONS(414), 1,
      sym_rgb,
    ACTIONS(416), 1,
      sym_rgba,
    STATE(105), 1,
      sym_name,
  [2238] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2251] = 4,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2264] = 3,
    ACTIONS(422), 1,
      anon_sym_project,
    ACTIONS(424), 1,
      anon_sym_script,
    STATE(101), 2,
      sym_project,
      sym_script,
  [2275] = 3,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(29), 1,
      sym_name,
    STATE(79), 1,
      sym_decoration,
  [2285] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(182), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2295] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      sym_offset,
  [2305] = 3,
    ACTIONS(428), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
    STATE(74), 1,
      sym__component,
  [2315] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(430), 1,
      aux_sym_origin_token1,
    STATE(82), 1,
      sym_offset,
  [2325] = 3,
    ACTIONS(428), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
    STATE(80), 1,
      sym__component,
  [2335] = 3,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    ACTIONS(432), 1,
      aux_sym_origin_token1,
    STATE(117), 1,
      sym_offset,
  [2345] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(184), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2355] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(183), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2365] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(181), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2375] = 3,
    ACTIONS(434), 1,
      anon_sym_name,
    ACTIONS(436), 1,
      anon_sym_height,
    ACTIONS(438), 1,
      anon_sym_width,
  [2385] = 3,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym__string,
  [2395] = 3,
    ACTIONS(428), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
    STATE(94), 1,
      sym__component,
  [2405] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(180), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2415] = 3,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(179), 1,
      sym__relative,
    STATE(190), 1,
      sym__offset,
  [2425] = 3,
    ACTIONS(428), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
    STATE(89), 1,
      sym__component,
  [2435] = 3,
    ACTIONS(428), 1,
      aux_sym_font_token1,
    STATE(51), 1,
      sym_name,
    STATE(81), 1,
      sym__component,
  [2445] = 2,
    ACTIONS(398), 1,
      aux_sym__originx_token1,
    STATE(110), 1,
      sym__originx,
  [2452] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(131), 1,
      sym_name,
  [2459] = 1,
    ACTIONS(444), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2464] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(130), 1,
      sym_name,
  [2471] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(97), 1,
      sym_name,
  [2478] = 2,
    ACTIONS(446), 1,
      anon_sym_scale,
    ACTIONS(448), 1,
      anon_sym_stretch,
  [2485] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(140), 1,
      sym_name,
  [2492] = 2,
    ACTIONS(400), 1,
      aux_sym__originy_token1,
    STATE(110), 1,
      sym__originy,
  [2499] = 2,
    ACTIONS(113), 1,
      aux_sym_offset_token1,
    STATE(96), 1,
      sym_offset,
  [2506] = 2,
    ACTIONS(450), 1,
      sym_rgb,
    ACTIONS(452), 1,
      sym_rgba,
  [2513] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(141), 1,
      sym_name,
  [2520] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(134), 1,
      sym_name,
  [2527] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(142), 1,
      sym_name,
  [2534] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(146), 1,
      sym_name,
  [2541] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(168), 1,
      sym_name,
  [2548] = 2,
    ACTIONS(406), 1,
      aux_sym_offset_token1,
    STATE(191), 1,
      sym__offset,
  [2555] = 2,
    ACTIONS(454), 1,
      anon_sym_panel,
    STATE(73), 1,
      sym_panel,
  [2562] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(147), 1,
      sym_name,
  [2569] = 2,
    ACTIONS(456), 1,
      sym_height,
    ACTIONS(458), 1,
      sym_width,
  [2576] = 2,
    ACTIONS(460), 1,
      anon_sym_project,
    ACTIONS(462), 1,
      anon_sym_script,
  [2583] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(126), 1,
      sym_name,
  [2590] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(127), 1,
      sym_name,
  [2597] = 2,
    ACTIONS(412), 1,
      aux_sym_font_token1,
    STATE(128), 1,
      sym_name,
  [2604] = 2,
    ACTIONS(464), 1,
      anon_sym_svg,
    STATE(76), 1,
      sym_svg,
  [2611] = 1,
    ACTIONS(466), 1,
      anon_sym_gzip,
  [2615] = 1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [2619] = 1,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [2623] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [2627] = 1,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [2631] = 1,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [2635] = 1,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [2639] = 1,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [2643] = 1,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [2647] = 1,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
  [2651] = 1,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
  [2655] = 1,
    ACTIONS(488), 1,
      aux_sym_absolute_token1,
  [2659] = 1,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
  [2663] = 1,
    ACTIONS(492), 1,
      aux_sym__string_token2,
  [2667] = 1,
    ACTIONS(494), 1,
      aux_sym__string_token1,
  [2671] = 1,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
  [2675] = 1,
    ACTIONS(498), 1,
      anon_sym_COMMA,
  [2679] = 1,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
  [2683] = 1,
    ACTIONS(502), 1,
      aux_sym_origin_token1,
  [2687] = 1,
    ACTIONS(504), 1,
      sym_height,
  [2691] = 1,
    ACTIONS(504), 1,
      sym_width,
  [2695] = 1,
    ACTIONS(506), 1,
      aux_sym_origin_token1,
  [2699] = 1,
    ACTIONS(508), 1,
      anon_sym_COMMA,
  [2703] = 1,
    ACTIONS(510), 1,
      anon_sym_COMMA,
  [2707] = 1,
    ACTIONS(512), 1,
      aux_sym_relative_token1,
  [2711] = 1,
    ACTIONS(514), 1,
      anon_sym_COMMA,
  [2715] = 1,
    ACTIONS(516), 1,
      anon_sym_COMMA,
  [2719] = 1,
    ACTIONS(466), 1,
      anon_sym_timestamp,
  [2723] = 1,
    ACTIONS(518), 1,
      anon_sym_with,
  [2727] = 1,
    ACTIONS(520), 1,
      sym_rgba,
  [2731] = 1,
    ACTIONS(522), 1,
      aux_sym__scale_token1,
  [2735] = 1,
    ACTIONS(524), 1,
      aux_sym__scale_token1,
  [2739] = 1,
    ACTIONS(448), 1,
      anon_sym_stretch,
  [2743] = 1,
    ACTIONS(520), 1,
      sym_rgb,
  [2747] = 1,
    ACTIONS(526), 1,
      anon_sym_COMMA,
  [2751] = 1,
    ACTIONS(528), 1,
      aux_sym_origin_token1,
  [2755] = 1,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [2759] = 1,
    ACTIONS(532), 1,
      anon_sym_COMMA,
  [2763] = 1,
    ACTIONS(534), 1,
      aux_sym_origin_token1,
  [2767] = 1,
    ACTIONS(536), 1,
      anon_sym_COMMA,
  [2771] = 1,
    ACTIONS(538), 1,
      aux_sym__scale_token1,
  [2775] = 1,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
  [2779] = 1,
    ACTIONS(542), 1,
      anon_sym_SQUOTE,
  [2783] = 1,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
  [2787] = 1,
    ACTIONS(544), 1,
      anon_sym_COMMA,
  [2791] = 1,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
  [2795] = 1,
    ACTIONS(548), 1,
      anon_sym_COMMA,
  [2799] = 1,
    ACTIONS(550), 1,
      aux_sym_absolute_token1,
  [2803] = 1,
    ACTIONS(552), 1,
      sym_width,
  [2807] = 1,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
  [2811] = 1,
    ACTIONS(556), 1,
      aux_sym_relative_token1,
  [2815] = 1,
    ACTIONS(558), 1,
      aux_sym_absolute_token1,
  [2819] = 1,
    ACTIONS(560), 1,
      anon_sym_COMMA,
  [2823] = 1,
    ACTIONS(562), 1,
      anon_sym_COMMA,
  [2827] = 1,
    ACTIONS(564), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 148,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 233,
  [SMALL_STATE(8)] = 264,
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
  [SMALL_STATE(34)] = 962,
  [SMALL_STATE(35)] = 980,
  [SMALL_STATE(36)] = 998,
  [SMALL_STATE(37)] = 1014,
  [SMALL_STATE(38)] = 1034,
  [SMALL_STATE(39)] = 1054,
  [SMALL_STATE(40)] = 1074,
  [SMALL_STATE(41)] = 1094,
  [SMALL_STATE(42)] = 1112,
  [SMALL_STATE(43)] = 1130,
  [SMALL_STATE(44)] = 1149,
  [SMALL_STATE(45)] = 1166,
  [SMALL_STATE(46)] = 1183,
  [SMALL_STATE(47)] = 1200,
  [SMALL_STATE(48)] = 1217,
  [SMALL_STATE(49)] = 1240,
  [SMALL_STATE(50)] = 1259,
  [SMALL_STATE(51)] = 1276,
  [SMALL_STATE(52)] = 1297,
  [SMALL_STATE(53)] = 1312,
  [SMALL_STATE(54)] = 1326,
  [SMALL_STATE(55)] = 1340,
  [SMALL_STATE(56)] = 1354,
  [SMALL_STATE(57)] = 1368,
  [SMALL_STATE(58)] = 1382,
  [SMALL_STATE(59)] = 1396,
  [SMALL_STATE(60)] = 1408,
  [SMALL_STATE(61)] = 1430,
  [SMALL_STATE(62)] = 1444,
  [SMALL_STATE(63)] = 1456,
  [SMALL_STATE(64)] = 1468,
  [SMALL_STATE(65)] = 1480,
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
  [SMALL_STATE(100)] = 1884,
  [SMALL_STATE(101)] = 1895,
  [SMALL_STATE(102)] = 1906,
  [SMALL_STATE(103)] = 1917,
  [SMALL_STATE(104)] = 1928,
  [SMALL_STATE(105)] = 1939,
  [SMALL_STATE(106)] = 1950,
  [SMALL_STATE(107)] = 1963,
  [SMALL_STATE(108)] = 1974,
  [SMALL_STATE(109)] = 1985,
  [SMALL_STATE(110)] = 1996,
  [SMALL_STATE(111)] = 2007,
  [SMALL_STATE(112)] = 2018,
  [SMALL_STATE(113)] = 2029,
  [SMALL_STATE(114)] = 2040,
  [SMALL_STATE(115)] = 2051,
  [SMALL_STATE(116)] = 2062,
  [SMALL_STATE(117)] = 2073,
  [SMALL_STATE(118)] = 2084,
  [SMALL_STATE(119)] = 2096,
  [SMALL_STATE(120)] = 2111,
  [SMALL_STATE(121)] = 2130,
  [SMALL_STATE(122)] = 2140,
  [SMALL_STATE(123)] = 2156,
  [SMALL_STATE(124)] = 2166,
  [SMALL_STATE(125)] = 2176,
  [SMALL_STATE(126)] = 2186,
  [SMALL_STATE(127)] = 2199,
  [SMALL_STATE(128)] = 2212,
  [SMALL_STATE(129)] = 2225,
  [SMALL_STATE(130)] = 2238,
  [SMALL_STATE(131)] = 2251,
  [SMALL_STATE(132)] = 2264,
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
  [SMALL_STATE(150)] = 2445,
  [SMALL_STATE(151)] = 2452,
  [SMALL_STATE(152)] = 2459,
  [SMALL_STATE(153)] = 2464,
  [SMALL_STATE(154)] = 2471,
  [SMALL_STATE(155)] = 2478,
  [SMALL_STATE(156)] = 2485,
  [SMALL_STATE(157)] = 2492,
  [SMALL_STATE(158)] = 2499,
  [SMALL_STATE(159)] = 2506,
  [SMALL_STATE(160)] = 2513,
  [SMALL_STATE(161)] = 2520,
  [SMALL_STATE(162)] = 2527,
  [SMALL_STATE(163)] = 2534,
  [SMALL_STATE(164)] = 2541,
  [SMALL_STATE(165)] = 2548,
  [SMALL_STATE(166)] = 2555,
  [SMALL_STATE(167)] = 2562,
  [SMALL_STATE(168)] = 2569,
  [SMALL_STATE(169)] = 2576,
  [SMALL_STATE(170)] = 2583,
  [SMALL_STATE(171)] = 2590,
  [SMALL_STATE(172)] = 2597,
  [SMALL_STATE(173)] = 2604,
  [SMALL_STATE(174)] = 2611,
  [SMALL_STATE(175)] = 2615,
  [SMALL_STATE(176)] = 2619,
  [SMALL_STATE(177)] = 2623,
  [SMALL_STATE(178)] = 2627,
  [SMALL_STATE(179)] = 2631,
  [SMALL_STATE(180)] = 2635,
  [SMALL_STATE(181)] = 2639,
  [SMALL_STATE(182)] = 2643,
  [SMALL_STATE(183)] = 2647,
  [SMALL_STATE(184)] = 2651,
  [SMALL_STATE(185)] = 2655,
  [SMALL_STATE(186)] = 2659,
  [SMALL_STATE(187)] = 2663,
  [SMALL_STATE(188)] = 2667,
  [SMALL_STATE(189)] = 2671,
  [SMALL_STATE(190)] = 2675,
  [SMALL_STATE(191)] = 2679,
  [SMALL_STATE(192)] = 2683,
  [SMALL_STATE(193)] = 2687,
  [SMALL_STATE(194)] = 2691,
  [SMALL_STATE(195)] = 2695,
  [SMALL_STATE(196)] = 2699,
  [SMALL_STATE(197)] = 2703,
  [SMALL_STATE(198)] = 2707,
  [SMALL_STATE(199)] = 2711,
  [SMALL_STATE(200)] = 2715,
  [SMALL_STATE(201)] = 2719,
  [SMALL_STATE(202)] = 2723,
  [SMALL_STATE(203)] = 2727,
  [SMALL_STATE(204)] = 2731,
  [SMALL_STATE(205)] = 2735,
  [SMALL_STATE(206)] = 2739,
  [SMALL_STATE(207)] = 2743,
  [SMALL_STATE(208)] = 2747,
  [SMALL_STATE(209)] = 2751,
  [SMALL_STATE(210)] = 2755,
  [SMALL_STATE(211)] = 2759,
  [SMALL_STATE(212)] = 2763,
  [SMALL_STATE(213)] = 2767,
  [SMALL_STATE(214)] = 2771,
  [SMALL_STATE(215)] = 2775,
  [SMALL_STATE(216)] = 2779,
  [SMALL_STATE(217)] = 2783,
  [SMALL_STATE(218)] = 2787,
  [SMALL_STATE(219)] = 2791,
  [SMALL_STATE(220)] = 2795,
  [SMALL_STATE(221)] = 2799,
  [SMALL_STATE(222)] = 2803,
  [SMALL_STATE(223)] = 2807,
  [SMALL_STATE(224)] = 2811,
  [SMALL_STATE(225)] = 2815,
  [SMALL_STATE(226)] = 2819,
  [SMALL_STATE(227)] = 2823,
  [SMALL_STATE(228)] = 2827,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(119),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(223),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(169),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(132),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(166),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 8),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 6),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 16),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 6),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 10),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [546] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
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
