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
#define STATE_COUNT 236
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
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
  anon_sym_delete = 12,
  anon_sym_guide = 13,
  anon_sym_input = 14,
  anon_sym_load = 15,
  anon_sym_project = 16,
  anon_sym_script = 17,
  anon_sym_save = 18,
  anon_sym_export = 19,
  anon_sym_timestamp = 20,
  anon_sym_COMMA = 21,
  anon_sym_gzip = 22,
  anon_sym_output = 23,
  anon_sym_parameter = 24,
  anon_sym_light = 25,
  anon_sym_widget = 26,
  aux_sym_parameter_token1 = 27,
  anon_sym_label = 28,
  aux_sym_font_token1 = 29,
  sym_fontsize = 30,
  anon_sym_left = 31,
  anon_sym_centre = 32,
  anon_sym_center = 33,
  anon_sym_right = 34,
  anon_sym_top = 35,
  anon_sym_middle = 36,
  anon_sym_baseline = 37,
  anon_sym_bottom = 38,
  anon_sym_scale = 39,
  aux_sym__scale_token1 = 40,
  anon_sym_stretch = 41,
  anon_sym_origin = 42,
  anon_sym_AT = 43,
  aux_sym_origin_token1 = 44,
  aux_sym__originx_token1 = 45,
  aux_sym__originy_token1 = 46,
  anon_sym_background = 47,
  anon_sym_none = 48,
  sym_rgb = 49,
  sym_rgba = 50,
  anon_sym_panel = 51,
  anon_sym_svg = 52,
  anon_sym_dark = 53,
  sym_height = 54,
  sym_width = 55,
  aux_sym_identifier_token1 = 56,
  anon_sym_vertical = 57,
  anon_sym_horizontal = 58,
  aux_sym_offset_token1 = 59,
  anon_sym_DQUOTE = 60,
  aux_sym__string_token1 = 61,
  anon_sym_SQUOTE = 62,
  aux_sym__string_token2 = 63,
  aux_sym_absolute_token1 = 64,
  aux_sym_relative_token1 = 65,
  sym_command = 66,
  sym_new = 67,
  sym_set = 68,
  sym__module_attr = 69,
  sym_decorate = 70,
  sym_delete = 71,
  sym__delete_guideline = 72,
  sym__delete_input = 73,
  sym_load = 74,
  sym_save = 75,
  sym_export = 76,
  sym_project = 77,
  sym_script = 78,
  sym__entity = 79,
  sym__input = 80,
  sym__output = 81,
  sym__parameter = 82,
  sym__light = 83,
  sym__widget = 84,
  sym_module = 85,
  sym_input = 86,
  sym_output = 87,
  sym_parameter = 88,
  sym_light = 89,
  sym_widget = 90,
  sym__component = 91,
  sym_label = 92,
  sym_font = 93,
  sym__align = 94,
  sym_halign = 95,
  sym_valign = 96,
  sym_colour = 97,
  sym_decoration = 98,
  sym__scale = 99,
  sym_stretch = 100,
  sym_origin = 101,
  sym__originx = 102,
  sym__originy = 103,
  sym_background = 104,
  sym_panel = 105,
  sym_svg = 106,
  sym_name = 107,
  sym_part = 108,
  sym_guide = 109,
  sym_identifier = 110,
  sym_vertical = 111,
  sym_horizontal = 112,
  sym_geometry = 113,
  sym_offset = 114,
  sym__offset = 115,
  sym_guideline = 116,
  sym__string = 117,
  sym_absolute = 118,
  sym_relative = 119,
  sym__decorate = 120,
  sym__relative = 121,
  sym_x = 122,
  sym_y = 123,
  aux_sym_command_repeat1 = 124,
  alias_sym_dy = 125,
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
  [anon_sym_delete] = "delete",
  [anon_sym_guide] = "guide",
  [anon_sym_input] = "input",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_COMMA] = ",",
  [anon_sym_gzip] = "gzip",
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
  [anon_sym_none] = "none",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [anon_sym_panel] = "panel",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [sym_height] = "height",
  [sym_width] = "width",
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
  [sym_delete] = "delete",
  [sym__delete_guideline] = "guide",
  [sym__delete_input] = "input",
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
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_gzip] = anon_sym_gzip,
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
  [anon_sym_none] = anon_sym_none,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
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
  [sym_delete] = sym_delete,
  [sym__delete_guideline] = sym_guide,
  [sym__delete_input] = sym_input,
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
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
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
  [anon_sym_none] = {
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
  [sym_delete] = {
    .visible = true,
    .named = true,
  },
  [sym__delete_guideline] = {
    .visible = true,
    .named = true,
  },
  [sym__delete_input] = {
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
  [38] = 8,
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
  [53] = 12,
  [54] = 14,
  [55] = 13,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 15,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 15,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 47,
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
  [122] = 27,
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
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 194,
  [232] = 219,
  [233] = 205,
  [234] = 181,
  [235] = 206,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(271);
      if (lookahead == '"') ADVANCE(465);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(468);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == ')') ADVANCE(284);
      if (lookahead == ',') ADVANCE(299);
      if (lookahead == '0') ADVANCE(394);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'v') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(116);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == 'b') ADVANCE(442);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'h') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(424);
      if (lookahead == 'm') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == 'v') ADVANCE(427);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'l') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(464);
      if (lookahead == 'm') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'U') ADVANCE(415);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '5') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(417);
      if (lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '8') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(472);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(155);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(155);
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 23:
      if (lookahead == ';') ADVANCE(272);
      END_STATE();
    case 24:
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(432);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(406);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(210);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(220);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(413);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(198);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(285);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(280);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(400);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(213);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 131:
      if (lookahead == 'j') ADVANCE(70);
      END_STATE();
    case 132:
      if (lookahead == 'k') ADVANCE(414);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(101);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(462);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(464);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(416);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(415);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(471);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(472);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(405);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(405);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == 'z') ADVANCE(122);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 242:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 243:
      if (lookahead == 'w') ADVANCE(273);
      END_STATE();
    case 244:
      if (lookahead == 'x') ADVANCE(190);
      END_STATE();
    case 245:
      if (lookahead == 'z') ADVANCE(178);
      END_STATE();
    case 246:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 247:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 248:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(464);
      if (lookahead == 'm') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(472);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 266:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 267:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 268:
      if (eof) ADVANCE(271);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == ')') ADVANCE(284);
      if (lookahead == ',') ADVANCE(299);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == 'm') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == 't') ADVANCE(347);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 269:
      if (eof) ADVANCE(271);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 270:
      if (eof) ADVANCE(271);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == ')') ADVANCE(284);
      if (lookahead == ',') ADVANCE(299);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(124);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'o') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(397);
      if (lookahead == 'H') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(155);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == 'r') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(470);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 268},
  [3] = {.lex_state = 268},
  [4] = {.lex_state = 270},
  [5] = {.lex_state = 270},
  [6] = {.lex_state = 270},
  [7] = {.lex_state = 270},
  [8] = {.lex_state = 268},
  [9] = {.lex_state = 270},
  [10] = {.lex_state = 270},
  [11] = {.lex_state = 268},
  [12] = {.lex_state = 268},
  [13] = {.lex_state = 268},
  [14] = {.lex_state = 268},
  [15] = {.lex_state = 268},
  [16] = {.lex_state = 268},
  [17] = {.lex_state = 268},
  [18] = {.lex_state = 268},
  [19] = {.lex_state = 268},
  [20] = {.lex_state = 268},
  [21] = {.lex_state = 270},
  [22] = {.lex_state = 270},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 270},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 270},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 269},
  [39] = {.lex_state = 270},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 269},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 270},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 269},
  [49] = {.lex_state = 270},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 269},
  [54] = {.lex_state = 269},
  [55] = {.lex_state = 269},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 269},
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
  [99] = {.lex_state = 24},
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
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 24},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 46},
  [126] = {.lex_state = 270},
  [127] = {.lex_state = 270},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 46},
  [131] = {.lex_state = 268},
  [132] = {.lex_state = 268},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 268},
  [135] = {.lex_state = 268},
  [136] = {.lex_state = 268},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 268},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 268},
  [141] = {.lex_state = 268},
  [142] = {.lex_state = 268},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 268},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 268},
  [148] = {.lex_state = 268},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 268},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 268},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 25},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 268},
  [170] = {.lex_state = 25},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 250},
  [174] = {.lex_state = 270},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 268},
  [180] = {.lex_state = 250},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 270},
  [196] = {.lex_state = 469},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 466},
  [199] = {.lex_state = 268},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 268},
  [209] = {.lex_state = 268},
  [210] = {.lex_state = 269},
  [211] = {.lex_state = 269},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 270},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 269},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 270},
  [223] = {.lex_state = 268},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 4},
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
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
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
    [anon_sym_none] = ACTIONS(1),
    [sym_rgb] = ACTIONS(1),
    [sym_rgba] = ACTIONS(1),
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [aux_sym_offset_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_relative_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(225),
    [sym_new] = STATE(25),
    [sym_set] = STATE(25),
    [sym_decorate] = STATE(25),
    [sym_delete] = STATE(25),
    [sym_load] = STATE(25),
    [sym_save] = STATE(25),
    [sym_export] = STATE(25),
    [aux_sym_command_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_decorate] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(13),
    [anon_sym_load] = ACTIONS(15),
    [anon_sym_save] = ACTIONS(17),
    [anon_sym_export] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(25), 1,
      aux_sym_font_token1,
    ACTIONS(27), 1,
      sym_fontsize,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(5), 1,
      sym_font,
    STATE(33), 1,
      sym__align,
    STATE(40), 1,
      sym_valign,
    STATE(41), 1,
      sym_halign,
    STATE(87), 1,
      sym_colour,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(31), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(23), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [53] = 13,
    ACTIONS(25), 1,
      aux_sym_font_token1,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    ACTIONS(41), 1,
      sym_fontsize,
    STATE(4), 1,
      sym_font,
    STATE(28), 1,
      sym__align,
    STATE(40), 1,
      sym_valign,
    STATE(41), 1,
      sym_halign,
    STATE(108), 1,
      sym_colour,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(31), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(39), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [106] = 10,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    ACTIONS(45), 1,
      sym_fontsize,
    STATE(32), 1,
      sym__align,
    STATE(40), 1,
      sym_valign,
    STATE(41), 1,
      sym_halign,
    STATE(90), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [151] = 10,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    ACTIONS(53), 1,
      sym_fontsize,
    STATE(37), 1,
      sym__align,
    STATE(40), 1,
      sym_valign,
    STATE(41), 1,
      sym_halign,
    STATE(100), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [196] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(37), 1,
      sym__align,
    STATE(40), 1,
      sym_valign,
    STATE(41), 1,
      sym_halign,
    STATE(100), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [238] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(28), 1,
      sym__align,
    STATE(40), 1,
      sym_valign,
    STATE(41), 1,
      sym_halign,
    STATE(108), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [280] = 4,
    ACTIONS(59), 1,
      aux_sym_offset_token1,
    STATE(14), 1,
      sym_offset,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(57), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [312] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(32), 1,
      sym__align,
    STATE(40), 1,
      sym_valign,
    STATE(41), 1,
      sym_halign,
    STATE(90), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [354] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(35), 1,
      sym__align,
    STATE(40), 1,
      sym_valign,
    STATE(41), 1,
      sym_halign,
    STATE(77), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [396] = 2,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(65), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [422] = 2,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(69), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [448] = 2,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(73), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
    ACTIONS(77), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [500] = 2,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(81), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [526] = 2,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(85), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [552] = 2,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(89), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [578] = 2,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(93), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [604] = 2,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(97), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [630] = 2,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(101), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [656] = 2,
    ACTIONS(105), 1,
      sym_rgb,
    ACTIONS(103), 19,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
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
  [681] = 9,
    ACTIONS(107), 1,
      anon_sym_module,
    ACTIONS(109), 1,
      anon_sym_guide,
    ACTIONS(111), 1,
      anon_sym_input,
    ACTIONS(113), 1,
      anon_sym_output,
    ACTIONS(115), 1,
      anon_sym_light,
    ACTIONS(117), 1,
      anon_sym_widget,
    ACTIONS(119), 1,
      aux_sym_parameter_token1,
    ACTIONS(121), 1,
      anon_sym_label,
    STATE(98), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [717] = 8,
    ACTIONS(125), 1,
      aux_sym_identifier_token1,
    ACTIONS(127), 1,
      anon_sym_vertical,
    ACTIONS(129), 1,
      anon_sym_horizontal,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    STATE(94), 1,
      sym_offset,
    STATE(169), 1,
      sym_identifier,
    STATE(93), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(123), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [751] = 10,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_new,
    ACTIONS(141), 1,
      anon_sym_set,
    ACTIONS(144), 1,
      anon_sym_decorate,
    ACTIONS(147), 1,
      anon_sym_delete,
    ACTIONS(150), 1,
      anon_sym_load,
    ACTIONS(153), 1,
      anon_sym_save,
    ACTIONS(156), 1,
      anon_sym_export,
    STATE(24), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [789] = 10,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_decorate,
    ACTIONS(13), 1,
      anon_sym_delete,
    ACTIONS(15), 1,
      anon_sym_load,
    ACTIONS(17), 1,
      anon_sym_save,
    ACTIONS(19), 1,
      anon_sym_export,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      sym_comment,
    STATE(24), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [827] = 6,
    ACTIONS(125), 1,
      aux_sym_identifier_token1,
    ACTIONS(127), 1,
      anon_sym_vertical,
    ACTIONS(129), 1,
      anon_sym_horizontal,
    STATE(23), 1,
      sym_identifier,
    STATE(69), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(123), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [855] = 2,
    ACTIONS(165), 1,
      sym_width,
    ACTIONS(163), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_height,
      aux_sym_offset_token1,
  [874] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(90), 1,
      sym_colour,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [895] = 4,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym__scale,
    STATE(102), 1,
      sym_stretch,
    ACTIONS(167), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [916] = 2,
    ACTIONS(173), 1,
      sym_rgb,
    ACTIONS(171), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [933] = 2,
    ACTIONS(177), 1,
      sym_rgb,
    ACTIONS(175), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [950] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(77), 1,
      sym_colour,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [971] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(100), 1,
      sym_colour,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [992] = 6,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      aux_sym_relative_token1,
    STATE(201), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(181), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1017] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(75), 1,
      sym_colour,
    ACTIONS(187), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1038] = 3,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    STATE(60), 1,
      sym_offset,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1057] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(108), 1,
      sym_colour,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1078] = 4,
    ACTIONS(191), 1,
      aux_sym_offset_token1,
    STATE(54), 1,
      sym_offset,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(57), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1099] = 3,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    STATE(51), 1,
      sym_offset,
    ACTIONS(193), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1118] = 3,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      sym_rgb,
    ACTIONS(195), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1137] = 3,
    ACTIONS(199), 1,
      sym_rgb,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(195), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1156] = 2,
    ACTIONS(205), 1,
      sym_rgb,
    ACTIONS(203), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1172] = 3,
    ACTIONS(209), 1,
      anon_sym_timestamp,
    ACTIONS(211), 1,
      anon_sym_gzip,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1190] = 4,
    ACTIONS(217), 1,
      aux_sym_font_token1,
    STATE(112), 1,
      sym_part,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(215), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1210] = 3,
    ACTIONS(221), 1,
      anon_sym_light,
    ACTIONS(223), 1,
      anon_sym_dark,
    ACTIONS(219), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1228] = 3,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    STATE(85), 1,
      sym_offset,
    ACTIONS(225), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1246] = 2,
    ACTIONS(229), 1,
      aux_sym_offset_token1,
    ACTIONS(227), 10,
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
  [1262] = 4,
    ACTIONS(217), 1,
      aux_sym_font_token1,
    STATE(110), 1,
      sym_part,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(233), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1282] = 3,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    STATE(118), 1,
      sym_offset,
    ACTIONS(235), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1300] = 3,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_stretch,
    ACTIONS(237), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1318] = 1,
    ACTIONS(241), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1331] = 2,
    ACTIONS(245), 1,
      anon_sym_timestamp,
    ACTIONS(243), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1346] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(69), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1361] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(77), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1376] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(73), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1391] = 1,
    ACTIONS(247), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1404] = 6,
    ACTIONS(249), 1,
      anon_sym_input,
    ACTIONS(251), 1,
      anon_sym_output,
    ACTIONS(253), 1,
      anon_sym_parameter,
    ACTIONS(255), 1,
      anon_sym_light,
    ACTIONS(257), 1,
      anon_sym_widget,
    STATE(214), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1427] = 5,
    ACTIONS(259), 1,
      anon_sym_AT,
    ACTIONS(261), 1,
      aux_sym_relative_token1,
    STATE(204), 1,
      sym_x,
    STATE(48), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(181), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1448] = 1,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1461] = 1,
    ACTIONS(263), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1474] = 2,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(265), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1489] = 2,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(269), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1504] = 2,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(269), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1519] = 2,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(265), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1534] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(81), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1549] = 2,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(277), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1564] = 1,
    ACTIONS(281), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1576] = 1,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1588] = 1,
    ACTIONS(285), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1600] = 1,
    ACTIONS(287), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1612] = 1,
    ACTIONS(229), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1624] = 1,
    ACTIONS(269), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1636] = 1,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1648] = 1,
    ACTIONS(291), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1660] = 1,
    ACTIONS(293), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1672] = 1,
    ACTIONS(295), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1684] = 1,
    ACTIONS(187), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1696] = 1,
    ACTIONS(297), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1708] = 1,
    ACTIONS(299), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1720] = 1,
    ACTIONS(301), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1732] = 1,
    ACTIONS(303), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1744] = 1,
    ACTIONS(305), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1756] = 1,
    ACTIONS(307), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1768] = 1,
    ACTIONS(309), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1780] = 1,
    ACTIONS(311), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1792] = 1,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1804] = 1,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1816] = 1,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1828] = 1,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1840] = 1,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1852] = 1,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1864] = 1,
    ACTIONS(321), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1876] = 1,
    ACTIONS(323), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1888] = 1,
    ACTIONS(325), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1900] = 1,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1912] = 1,
    ACTIONS(329), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1924] = 1,
    ACTIONS(331), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1936] = 1,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1948] = 6,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    ACTIONS(337), 1,
      anon_sym_origin,
    ACTIONS(339), 1,
      anon_sym_AT,
    ACTIONS(341), 1,
      aux_sym_origin_token1,
    STATE(88), 1,
      sym_offset,
    ACTIONS(335), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1970] = 1,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1982] = 1,
    ACTIONS(343), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1994] = 1,
    ACTIONS(237), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2006] = 1,
    ACTIONS(345), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2018] = 1,
    ACTIONS(347), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2030] = 1,
    ACTIONS(349), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2042] = 1,
    ACTIONS(351), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2054] = 1,
    ACTIONS(353), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2066] = 1,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2078] = 1,
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2090] = 1,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2102] = 1,
    ACTIONS(359), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2114] = 1,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2126] = 1,
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2138] = 1,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2150] = 1,
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2162] = 1,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2174] = 1,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2186] = 1,
    ACTIONS(373), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2198] = 1,
    ACTIONS(375), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2210] = 6,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    ACTIONS(377), 1,
      anon_sym_origin,
    ACTIONS(379), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      aux_sym_origin_token1,
    STATE(91), 1,
      sym_offset,
    ACTIONS(335), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2231] = 2,
    ACTIONS(383), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(385), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2244] = 2,
    ACTIONS(163), 2,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(165), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2256] = 6,
    ACTIONS(387), 1,
      anon_sym_input,
    ACTIONS(389), 1,
      anon_sym_output,
    ACTIONS(391), 1,
      anon_sym_parameter,
    ACTIONS(393), 1,
      anon_sym_light,
    ACTIONS(395), 1,
      anon_sym_widget,
    ACTIONS(397), 1,
      anon_sym_label,
  [2275] = 4,
    ACTIONS(399), 1,
      anon_sym_module,
    ACTIONS(401), 1,
      anon_sym_origin,
    ACTIONS(403), 1,
      anon_sym_background,
    STATE(105), 3,
      sym__module_attr,
      sym_origin,
      sym_background,
  [2290] = 2,
    STATE(44), 1,
      sym_y,
    ACTIONS(405), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2300] = 2,
    STATE(42), 1,
      sym_halign,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2310] = 2,
    STATE(42), 1,
      sym_valign,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [2320] = 5,
    ACTIONS(407), 1,
      aux_sym_font_token1,
    ACTIONS(409), 1,
      anon_sym_none,
    ACTIONS(411), 1,
      sym_rgb,
    ACTIONS(413), 1,
      sym_rgba,
    STATE(72), 1,
      sym_name,
  [2336] = 5,
    ACTIONS(415), 1,
      anon_sym_AT,
    ACTIONS(417), 1,
      aux_sym__originx_token1,
    ACTIONS(419), 1,
      aux_sym__originy_token1,
    STATE(227), 1,
      sym__originy,
    STATE(229), 1,
      sym__originx,
  [2352] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(421), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2362] = 4,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    STATE(218), 1,
      sym__offset,
    STATE(226), 1,
      sym__relative,
  [2375] = 4,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      sym__offset,
    STATE(224), 1,
      sym__relative,
  [2388] = 3,
    ACTIONS(429), 1,
      anon_sym_guide,
    ACTIONS(431), 1,
      anon_sym_input,
    STATE(106), 2,
      sym__delete_guideline,
      sym__delete_input,
  [2399] = 4,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      sym__offset,
    STATE(228), 1,
      sym__relative,
  [2412] = 4,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym__relative,
    STATE(218), 1,
      sym__offset,
  [2425] = 4,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__relative,
    STATE(218), 1,
      sym__offset,
  [2438] = 3,
    ACTIONS(439), 1,
      anon_sym_project,
    ACTIONS(441), 1,
      anon_sym_script,
    STATE(97), 2,
      sym_project,
      sym_script,
  [2449] = 3,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    STATE(187), 1,
      sym__relative,
    STATE(218), 1,
      sym__offset,
  [2459] = 3,
    ACTIONS(443), 1,
      anon_sym_name,
    ACTIONS(445), 1,
      anon_sym_height,
    ACTIONS(447), 1,
      anon_sym_width,
  [2469] = 3,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    STATE(188), 1,
      sym__relative,
    STATE(218), 1,
      sym__offset,
  [2479] = 3,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    STATE(186), 1,
      sym__relative,
    STATE(218), 1,
      sym__offset,
  [2489] = 3,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    STATE(185), 1,
      sym__relative,
    STATE(218), 1,
      sym__offset,
  [2499] = 3,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym__string,
  [2509] = 3,
    ACTIONS(453), 1,
      aux_sym_font_token1,
    STATE(58), 1,
      sym_name,
    STATE(68), 1,
      sym__component,
  [2519] = 3,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      sym_offset,
  [2529] = 3,
    ACTIONS(453), 1,
      aux_sym_font_token1,
    STATE(58), 1,
      sym_name,
    STATE(95), 1,
      sym__component,
  [2539] = 3,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    ACTIONS(457), 1,
      aux_sym_origin_token1,
    STATE(104), 1,
      sym_offset,
  [2549] = 3,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    STATE(190), 1,
      sym__relative,
    STATE(218), 1,
      sym__offset,
  [2559] = 3,
    ACTIONS(453), 1,
      aux_sym_font_token1,
    STATE(58), 1,
      sym_name,
    STATE(92), 1,
      sym__component,
  [2569] = 3,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    ACTIONS(459), 1,
      aux_sym_origin_token1,
    STATE(119), 1,
      sym_offset,
  [2579] = 3,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(29), 1,
      sym_name,
    STATE(73), 1,
      sym_decoration,
  [2589] = 3,
    ACTIONS(453), 1,
      aux_sym_font_token1,
    STATE(58), 1,
      sym_name,
    STATE(89), 1,
      sym__component,
  [2599] = 3,
    ACTIONS(453), 1,
      aux_sym_font_token1,
    STATE(58), 1,
      sym_name,
    STATE(70), 1,
      sym__component,
  [2609] = 3,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    STATE(189), 1,
      sym__relative,
    STATE(218), 1,
      sym__offset,
  [2619] = 1,
    ACTIONS(463), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2624] = 2,
    ACTIONS(417), 1,
      aux_sym__originx_token1,
    STATE(86), 1,
      sym__originx,
  [2631] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(148), 1,
      sym_name,
  [2638] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(154), 1,
      sym_name,
  [2645] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(140), 1,
      sym_name,
  [2652] = 2,
    ACTIONS(465), 1,
      sym_rgb,
    ACTIONS(467), 1,
      sym_rgba,
  [2659] = 2,
    ACTIONS(469), 1,
      anon_sym_project,
    ACTIONS(471), 1,
      anon_sym_script,
  [2666] = 2,
    ACTIONS(473), 1,
      anon_sym_panel,
    STATE(96), 1,
      sym_panel,
  [2673] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(136), 1,
      sym_name,
  [2680] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(135), 1,
      sym_name,
  [2687] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(134), 1,
      sym_name,
  [2694] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(174), 1,
      sym_name,
  [2701] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(131), 1,
      sym_name,
  [2708] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(132), 1,
      sym_name,
  [2715] = 2,
    ACTIONS(131), 1,
      aux_sym_offset_token1,
    STATE(94), 1,
      sym_offset,
  [2722] = 2,
    ACTIONS(419), 1,
      aux_sym__originy_token1,
    STATE(86), 1,
      sym__originy,
  [2729] = 2,
    ACTIONS(475), 1,
      anon_sym_scale,
    ACTIONS(477), 1,
      anon_sym_stretch,
  [2736] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(103), 1,
      sym_name,
  [2743] = 2,
    ACTIONS(479), 1,
      aux_sym_identifier_token1,
    STATE(79), 1,
      sym_identifier,
  [2750] = 2,
    ACTIONS(481), 1,
      sym_height,
    ACTIONS(483), 1,
      sym_width,
  [2757] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(138), 1,
      sym_name,
  [2764] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(141), 1,
      sym_name,
  [2771] = 2,
    ACTIONS(461), 1,
      aux_sym_font_token1,
    STATE(142), 1,
      sym_name,
  [2778] = 2,
    ACTIONS(485), 1,
      anon_sym_svg,
    STATE(82), 1,
      sym_svg,
  [2785] = 2,
    ACTIONS(425), 1,
      aux_sym_offset_token1,
    STATE(197), 1,
      sym__offset,
  [2792] = 2,
    ACTIONS(479), 1,
      aux_sym_identifier_token1,
    STATE(80), 1,
      sym_identifier,
  [2799] = 1,
    ACTIONS(487), 1,
      anon_sym_COMMA,
  [2803] = 1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
  [2807] = 1,
    ACTIONS(491), 1,
      anon_sym_timestamp,
  [2811] = 1,
    ACTIONS(491), 1,
      anon_sym_gzip,
  [2815] = 1,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [2819] = 1,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [2823] = 1,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
  [2827] = 1,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
  [2831] = 1,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
  [2835] = 1,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
  [2839] = 1,
    ACTIONS(505), 1,
      anon_sym_with,
  [2843] = 1,
    ACTIONS(507), 1,
      sym_rgba,
  [2847] = 1,
    ACTIONS(507), 1,
      sym_rgb,
  [2851] = 1,
    ACTIONS(509), 1,
      aux_sym_relative_token1,
  [2855] = 1,
    ACTIONS(511), 1,
      sym_height,
  [2859] = 1,
    ACTIONS(513), 1,
      aux_sym__string_token2,
  [2863] = 1,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [2867] = 1,
    ACTIONS(517), 1,
      aux_sym__string_token1,
  [2871] = 1,
    ACTIONS(519), 1,
      aux_sym_origin_token1,
  [2875] = 1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
  [2879] = 1,
    ACTIONS(523), 1,
      anon_sym_COMMA,
  [2883] = 1,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
  [2887] = 1,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
  [2891] = 1,
    ACTIONS(527), 1,
      anon_sym_COMMA,
  [2895] = 1,
    ACTIONS(529), 1,
      anon_sym_COMMA,
  [2899] = 1,
    ACTIONS(531), 1,
      aux_sym_absolute_token1,
  [2903] = 1,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
  [2907] = 1,
    ACTIONS(535), 1,
      aux_sym_origin_token1,
  [2911] = 1,
    ACTIONS(537), 1,
      aux_sym_origin_token1,
  [2915] = 1,
    ACTIONS(539), 1,
      aux_sym__scale_token1,
  [2919] = 1,
    ACTIONS(541), 1,
      aux_sym__scale_token1,
  [2923] = 1,
    ACTIONS(477), 1,
      anon_sym_stretch,
  [2927] = 1,
    ACTIONS(543), 1,
      sym_width,
  [2931] = 1,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
  [2935] = 1,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
  [2939] = 1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [2943] = 1,
    ACTIONS(551), 1,
      anon_sym_COMMA,
  [2947] = 1,
    ACTIONS(553), 1,
      anon_sym_COMMA,
  [2951] = 1,
    ACTIONS(555), 1,
      aux_sym_absolute_token1,
  [2955] = 1,
    ACTIONS(557), 1,
      aux_sym__scale_token1,
  [2959] = 1,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [2963] = 1,
    ACTIONS(511), 1,
      sym_width,
  [2967] = 1,
    ACTIONS(561), 1,
      aux_sym_origin_token1,
  [2971] = 1,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
  [2975] = 1,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
  [2979] = 1,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
  [2983] = 1,
    ACTIONS(569), 1,
      anon_sym_COMMA,
  [2987] = 1,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
  [2991] = 1,
    ACTIONS(573), 1,
      anon_sym_COMMA,
  [2995] = 1,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [2999] = 1,
    ACTIONS(577), 1,
      aux_sym_relative_token1,
  [3003] = 1,
    ACTIONS(579), 1,
      aux_sym_absolute_token1,
  [3007] = 1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
  [3011] = 1,
    ACTIONS(583), 1,
      anon_sym_COMMA,
  [3015] = 1,
    ACTIONS(585), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 238,
  [SMALL_STATE(8)] = 280,
  [SMALL_STATE(9)] = 312,
  [SMALL_STATE(10)] = 354,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 448,
  [SMALL_STATE(14)] = 474,
  [SMALL_STATE(15)] = 500,
  [SMALL_STATE(16)] = 526,
  [SMALL_STATE(17)] = 552,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 604,
  [SMALL_STATE(20)] = 630,
  [SMALL_STATE(21)] = 656,
  [SMALL_STATE(22)] = 681,
  [SMALL_STATE(23)] = 717,
  [SMALL_STATE(24)] = 751,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 855,
  [SMALL_STATE(28)] = 874,
  [SMALL_STATE(29)] = 895,
  [SMALL_STATE(30)] = 916,
  [SMALL_STATE(31)] = 933,
  [SMALL_STATE(32)] = 950,
  [SMALL_STATE(33)] = 971,
  [SMALL_STATE(34)] = 992,
  [SMALL_STATE(35)] = 1017,
  [SMALL_STATE(36)] = 1038,
  [SMALL_STATE(37)] = 1057,
  [SMALL_STATE(38)] = 1078,
  [SMALL_STATE(39)] = 1099,
  [SMALL_STATE(40)] = 1118,
  [SMALL_STATE(41)] = 1137,
  [SMALL_STATE(42)] = 1156,
  [SMALL_STATE(43)] = 1172,
  [SMALL_STATE(44)] = 1190,
  [SMALL_STATE(45)] = 1210,
  [SMALL_STATE(46)] = 1228,
  [SMALL_STATE(47)] = 1246,
  [SMALL_STATE(48)] = 1262,
  [SMALL_STATE(49)] = 1282,
  [SMALL_STATE(50)] = 1300,
  [SMALL_STATE(51)] = 1318,
  [SMALL_STATE(52)] = 1331,
  [SMALL_STATE(53)] = 1346,
  [SMALL_STATE(54)] = 1361,
  [SMALL_STATE(55)] = 1376,
  [SMALL_STATE(56)] = 1391,
  [SMALL_STATE(57)] = 1404,
  [SMALL_STATE(58)] = 1427,
  [SMALL_STATE(59)] = 1448,
  [SMALL_STATE(60)] = 1461,
  [SMALL_STATE(61)] = 1474,
  [SMALL_STATE(62)] = 1489,
  [SMALL_STATE(63)] = 1504,
  [SMALL_STATE(64)] = 1519,
  [SMALL_STATE(65)] = 1534,
  [SMALL_STATE(66)] = 1549,
  [SMALL_STATE(67)] = 1564,
  [SMALL_STATE(68)] = 1576,
  [SMALL_STATE(69)] = 1588,
  [SMALL_STATE(70)] = 1600,
  [SMALL_STATE(71)] = 1612,
  [SMALL_STATE(72)] = 1624,
  [SMALL_STATE(73)] = 1636,
  [SMALL_STATE(74)] = 1648,
  [SMALL_STATE(75)] = 1660,
  [SMALL_STATE(76)] = 1672,
  [SMALL_STATE(77)] = 1684,
  [SMALL_STATE(78)] = 1696,
  [SMALL_STATE(79)] = 1708,
  [SMALL_STATE(80)] = 1720,
  [SMALL_STATE(81)] = 1732,
  [SMALL_STATE(82)] = 1744,
  [SMALL_STATE(83)] = 1756,
  [SMALL_STATE(84)] = 1768,
  [SMALL_STATE(85)] = 1780,
  [SMALL_STATE(86)] = 1792,
  [SMALL_STATE(87)] = 1804,
  [SMALL_STATE(88)] = 1816,
  [SMALL_STATE(89)] = 1828,
  [SMALL_STATE(90)] = 1840,
  [SMALL_STATE(91)] = 1852,
  [SMALL_STATE(92)] = 1864,
  [SMALL_STATE(93)] = 1876,
  [SMALL_STATE(94)] = 1888,
  [SMALL_STATE(95)] = 1900,
  [SMALL_STATE(96)] = 1912,
  [SMALL_STATE(97)] = 1924,
  [SMALL_STATE(98)] = 1936,
  [SMALL_STATE(99)] = 1948,
  [SMALL_STATE(100)] = 1970,
  [SMALL_STATE(101)] = 1982,
  [SMALL_STATE(102)] = 1994,
  [SMALL_STATE(103)] = 2006,
  [SMALL_STATE(104)] = 2018,
  [SMALL_STATE(105)] = 2030,
  [SMALL_STATE(106)] = 2042,
  [SMALL_STATE(107)] = 2054,
  [SMALL_STATE(108)] = 2066,
  [SMALL_STATE(109)] = 2078,
  [SMALL_STATE(110)] = 2090,
  [SMALL_STATE(111)] = 2102,
  [SMALL_STATE(112)] = 2114,
  [SMALL_STATE(113)] = 2126,
  [SMALL_STATE(114)] = 2138,
  [SMALL_STATE(115)] = 2150,
  [SMALL_STATE(116)] = 2162,
  [SMALL_STATE(117)] = 2174,
  [SMALL_STATE(118)] = 2186,
  [SMALL_STATE(119)] = 2198,
  [SMALL_STATE(120)] = 2210,
  [SMALL_STATE(121)] = 2231,
  [SMALL_STATE(122)] = 2244,
  [SMALL_STATE(123)] = 2256,
  [SMALL_STATE(124)] = 2275,
  [SMALL_STATE(125)] = 2290,
  [SMALL_STATE(126)] = 2300,
  [SMALL_STATE(127)] = 2310,
  [SMALL_STATE(128)] = 2320,
  [SMALL_STATE(129)] = 2336,
  [SMALL_STATE(130)] = 2352,
  [SMALL_STATE(131)] = 2362,
  [SMALL_STATE(132)] = 2375,
  [SMALL_STATE(133)] = 2388,
  [SMALL_STATE(134)] = 2399,
  [SMALL_STATE(135)] = 2412,
  [SMALL_STATE(136)] = 2425,
  [SMALL_STATE(137)] = 2438,
  [SMALL_STATE(138)] = 2449,
  [SMALL_STATE(139)] = 2459,
  [SMALL_STATE(140)] = 2469,
  [SMALL_STATE(141)] = 2479,
  [SMALL_STATE(142)] = 2489,
  [SMALL_STATE(143)] = 2499,
  [SMALL_STATE(144)] = 2509,
  [SMALL_STATE(145)] = 2519,
  [SMALL_STATE(146)] = 2529,
  [SMALL_STATE(147)] = 2539,
  [SMALL_STATE(148)] = 2549,
  [SMALL_STATE(149)] = 2559,
  [SMALL_STATE(150)] = 2569,
  [SMALL_STATE(151)] = 2579,
  [SMALL_STATE(152)] = 2589,
  [SMALL_STATE(153)] = 2599,
  [SMALL_STATE(154)] = 2609,
  [SMALL_STATE(155)] = 2619,
  [SMALL_STATE(156)] = 2624,
  [SMALL_STATE(157)] = 2631,
  [SMALL_STATE(158)] = 2638,
  [SMALL_STATE(159)] = 2645,
  [SMALL_STATE(160)] = 2652,
  [SMALL_STATE(161)] = 2659,
  [SMALL_STATE(162)] = 2666,
  [SMALL_STATE(163)] = 2673,
  [SMALL_STATE(164)] = 2680,
  [SMALL_STATE(165)] = 2687,
  [SMALL_STATE(166)] = 2694,
  [SMALL_STATE(167)] = 2701,
  [SMALL_STATE(168)] = 2708,
  [SMALL_STATE(169)] = 2715,
  [SMALL_STATE(170)] = 2722,
  [SMALL_STATE(171)] = 2729,
  [SMALL_STATE(172)] = 2736,
  [SMALL_STATE(173)] = 2743,
  [SMALL_STATE(174)] = 2750,
  [SMALL_STATE(175)] = 2757,
  [SMALL_STATE(176)] = 2764,
  [SMALL_STATE(177)] = 2771,
  [SMALL_STATE(178)] = 2778,
  [SMALL_STATE(179)] = 2785,
  [SMALL_STATE(180)] = 2792,
  [SMALL_STATE(181)] = 2799,
  [SMALL_STATE(182)] = 2803,
  [SMALL_STATE(183)] = 2807,
  [SMALL_STATE(184)] = 2811,
  [SMALL_STATE(185)] = 2815,
  [SMALL_STATE(186)] = 2819,
  [SMALL_STATE(187)] = 2823,
  [SMALL_STATE(188)] = 2827,
  [SMALL_STATE(189)] = 2831,
  [SMALL_STATE(190)] = 2835,
  [SMALL_STATE(191)] = 2839,
  [SMALL_STATE(192)] = 2843,
  [SMALL_STATE(193)] = 2847,
  [SMALL_STATE(194)] = 2851,
  [SMALL_STATE(195)] = 2855,
  [SMALL_STATE(196)] = 2859,
  [SMALL_STATE(197)] = 2863,
  [SMALL_STATE(198)] = 2867,
  [SMALL_STATE(199)] = 2871,
  [SMALL_STATE(200)] = 2875,
  [SMALL_STATE(201)] = 2879,
  [SMALL_STATE(202)] = 2883,
  [SMALL_STATE(203)] = 2887,
  [SMALL_STATE(204)] = 2891,
  [SMALL_STATE(205)] = 2895,
  [SMALL_STATE(206)] = 2899,
  [SMALL_STATE(207)] = 2903,
  [SMALL_STATE(208)] = 2907,
  [SMALL_STATE(209)] = 2911,
  [SMALL_STATE(210)] = 2915,
  [SMALL_STATE(211)] = 2919,
  [SMALL_STATE(212)] = 2923,
  [SMALL_STATE(213)] = 2927,
  [SMALL_STATE(214)] = 2931,
  [SMALL_STATE(215)] = 2935,
  [SMALL_STATE(216)] = 2939,
  [SMALL_STATE(217)] = 2943,
  [SMALL_STATE(218)] = 2947,
  [SMALL_STATE(219)] = 2951,
  [SMALL_STATE(220)] = 2955,
  [SMALL_STATE(221)] = 2959,
  [SMALL_STATE(222)] = 2963,
  [SMALL_STATE(223)] = 2967,
  [SMALL_STATE(224)] = 2971,
  [SMALL_STATE(225)] = 2975,
  [SMALL_STATE(226)] = 2979,
  [SMALL_STATE(227)] = 2983,
  [SMALL_STATE(228)] = 2987,
  [SMALL_STATE(229)] = 2991,
  [SMALL_STATE(230)] = 2995,
  [SMALL_STATE(231)] = 2999,
  [SMALL_STATE(232)] = 3003,
  [SMALL_STATE(233)] = 3007,
  [SMALL_STATE(234)] = 3011,
  [SMALL_STATE(235)] = 3015,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 7),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 7),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(124),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(230),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(133),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(161),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(137),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(162),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 8),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 16),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_guideline, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_input, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 6),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 10),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [565] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
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
