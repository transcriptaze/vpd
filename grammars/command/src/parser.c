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
#define STATE_COUNT 244
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 18

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
  aux_sym__input_id_token1 = 15,
  anon_sym_output = 16,
  anon_sym_parameter = 17,
  anon_sym_light = 18,
  anon_sym_widget = 19,
  anon_sym_load = 20,
  anon_sym_project = 21,
  anon_sym_script = 22,
  anon_sym_save = 23,
  anon_sym_export = 24,
  anon_sym_timestamp = 25,
  anon_sym_COMMA = 26,
  anon_sym_gzip = 27,
  aux_sym_parameter_token1 = 28,
  anon_sym_label = 29,
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
  sym__guideline_id = 72,
  sym__input_id = 73,
  sym__output_id = 74,
  sym__parameter_id = 75,
  sym__light_id = 76,
  sym__widget_id = 77,
  sym_load = 78,
  sym_save = 79,
  sym_export = 80,
  sym_project = 81,
  sym_script = 82,
  sym__entity = 83,
  sym__input = 84,
  sym__output = 85,
  sym__parameter = 86,
  sym__light = 87,
  sym__widget = 88,
  sym_module = 89,
  sym_input = 90,
  sym_output = 91,
  sym_parameter = 92,
  sym_light = 93,
  sym_widget = 94,
  sym__component = 95,
  sym_label = 96,
  sym_font = 97,
  sym__align = 98,
  sym_halign = 99,
  sym_valign = 100,
  sym_colour = 101,
  sym_decoration = 102,
  sym__scale = 103,
  sym_stretch = 104,
  sym_origin = 105,
  sym__originx = 106,
  sym__originy = 107,
  sym_background = 108,
  sym_panel = 109,
  sym_svg = 110,
  sym_name = 111,
  sym_part = 112,
  sym_guide = 113,
  sym_identifier = 114,
  sym_vertical = 115,
  sym_horizontal = 116,
  sym_geometry = 117,
  sym_offset = 118,
  sym__offset = 119,
  sym_guideline = 120,
  sym__string = 121,
  sym_absolute = 122,
  sym_relative = 123,
  sym__decorate = 124,
  sym__relative = 125,
  sym_x = 126,
  sym_y = 127,
  aux_sym_command_repeat1 = 128,
  alias_sym_dy = 129,
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
  [aux_sym__input_id_token1] = "_input_id_token1",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_COMMA] = ",",
  [anon_sym_gzip] = "gzip",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_label] = "label",
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
  [sym__guideline_id] = "guide",
  [sym__input_id] = "input",
  [sym__output_id] = "output",
  [sym__parameter_id] = "parameter",
  [sym__light_id] = "light",
  [sym__widget_id] = "widget",
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
  [aux_sym__input_id_token1] = aux_sym__input_id_token1,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_gzip] = anon_sym_gzip,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_label] = anon_sym_label,
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
  [sym__guideline_id] = sym_guide,
  [sym__input_id] = sym_input,
  [sym__output_id] = sym_output,
  [sym__parameter_id] = sym_parameter,
  [sym__light_id] = sym_light,
  [sym__widget_id] = sym_widget,
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
  [aux_sym__input_id_token1] = {
    .visible = false,
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
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
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
  [sym__guideline_id] = {
    .visible = true,
    .named = true,
  },
  [sym__input_id] = {
    .visible = true,
    .named = true,
  },
  [sym__output_id] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_id] = {
    .visible = true,
    .named = true,
  },
  [sym__light_id] = {
    .visible = true,
    .named = true,
  },
  [sym__widget_id] = {
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
    [1] = sym_identifier,
  },
  [5] = {
    [1] = aux_sym__originx_token1,
  },
  [6] = {
    [1] = sym_light,
  },
  [7] = {
    [1] = sym_absolute,
  },
  [8] = {
    [2] = sym_y,
  },
  [9] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [10] = {
    [3] = sym_y,
  },
  [11] = {
    [2] = alias_sym_dy,
  },
  [12] = {
    [1] = sym_input,
  },
  [13] = {
    [1] = sym_output,
  },
  [14] = {
    [1] = sym_parameter,
  },
  [15] = {
    [1] = sym_widget,
  },
  [16] = {
    [1] = sym_label,
  },
  [17] = {
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
  [40] = 9,
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
  [56] = 20,
  [57] = 57,
  [58] = 58,
  [59] = 13,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 19,
  [66] = 14,
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
  [118] = 118,
  [119] = 46,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 27,
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
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 236,
  [240] = 192,
  [241] = 191,
  [242] = 237,
  [243] = 190,
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
      if (lookahead == ',') ADVANCE(363);
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
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(290);
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
      if (lookahead == '\'') ADVANCE(290);
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
      if (lookahead == 'g') ADVANCE(236);
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
      if (lookahead == 'd') ADVANCE(354);
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
      if (lookahead == 'e') ADVANCE(358);
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
      if (lookahead == 'l') ADVANCE(368);
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
      if (lookahead == 'm') ADVANCE(366);
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
      if (lookahead == 'm') ADVANCE(367);
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
      if (lookahead == 'p') ADVANCE(364);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(362);
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
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(365);
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
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(356);
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
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(328);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 269:
      if (eof) ADVANCE(271);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 270:
      if (eof) ADVANCE(271);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == ')') ADVANCE(284);
      if (lookahead == ',') ADVANCE(363);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(346);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_label);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
  [8] = {.lex_state = 270},
  [9] = {.lex_state = 268},
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 270},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 270},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 270},
  [34] = {.lex_state = 270},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 269},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 270},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 270},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 269},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 269},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 269},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 269},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 269},
  [66] = {.lex_state = 269},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 24},
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
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 270},
  [131] = {.lex_state = 270},
  [132] = {.lex_state = 25},
  [133] = {.lex_state = 46},
  [134] = {.lex_state = 46},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 268},
  [138] = {.lex_state = 268},
  [139] = {.lex_state = 268},
  [140] = {.lex_state = 268},
  [141] = {.lex_state = 268},
  [142] = {.lex_state = 268},
  [143] = {.lex_state = 268},
  [144] = {.lex_state = 268},
  [145] = {.lex_state = 268},
  [146] = {.lex_state = 268},
  [147] = {.lex_state = 268},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 268},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 268},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 268},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 250},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 270},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 25},
  [173] = {.lex_state = 25},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 268},
  [180] = {.lex_state = 268},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 270},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 268},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 268},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 268},
  [203] = {.lex_state = 270},
  [204] = {.lex_state = 270},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 469},
  [209] = {.lex_state = 466},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 269},
  [219] = {.lex_state = 269},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 268},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 269},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 4},
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
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
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
    [sym_command] = STATE(235),
    [sym_new] = STATE(22),
    [sym_set] = STATE(22),
    [sym_decorate] = STATE(22),
    [sym_delete] = STATE(22),
    [sym_load] = STATE(22),
    [sym_save] = STATE(22),
    [sym_export] = STATE(22),
    [aux_sym_command_repeat1] = STATE(22),
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
      aux_sym__input_id_token1,
    ACTIONS(27), 1,
      sym_fontsize,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(5), 1,
      sym_font,
    STATE(30), 1,
      sym_halign,
    STATE(31), 1,
      sym__align,
    STATE(35), 1,
      sym_valign,
    STATE(105), 1,
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
      aux_sym__input_id_token1,
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
    STATE(30), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(68), 1,
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
    STATE(29), 1,
      sym__align,
    STATE(30), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(111), 1,
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
    STATE(30), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(42), 1,
      sym__align,
    STATE(93), 1,
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
    STATE(29), 1,
      sym__align,
    STATE(30), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(111), 1,
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
  [238] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(30), 1,
      sym_halign,
    STATE(32), 1,
      sym__align,
    STATE(35), 1,
      sym_valign,
    STATE(114), 1,
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
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [280] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(30), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(42), 1,
      sym__align,
    STATE(93), 1,
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
  [322] = 4,
    ACTIONS(61), 1,
      aux_sym_offset_token1,
    STATE(19), 1,
      sym_offset,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(59), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [354] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(28), 1,
      sym__align,
    STATE(30), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(68), 1,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
  [681] = 10,
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
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym_comment,
    STATE(25), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [719] = 9,
    ACTIONS(111), 1,
      anon_sym_module,
    ACTIONS(113), 1,
      anon_sym_guide,
    ACTIONS(115), 1,
      anon_sym_input,
    ACTIONS(117), 1,
      anon_sym_output,
    ACTIONS(119), 1,
      anon_sym_light,
    ACTIONS(121), 1,
      anon_sym_widget,
    ACTIONS(123), 1,
      aux_sym_parameter_token1,
    ACTIONS(125), 1,
      anon_sym_label,
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
  [755] = 8,
    ACTIONS(129), 1,
      aux_sym_identifier_token1,
    ACTIONS(131), 1,
      anon_sym_vertical,
    ACTIONS(133), 1,
      anon_sym_horizontal,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(98), 1,
      sym_offset,
    STATE(179), 1,
      sym_identifier,
    STATE(97), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(127), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [789] = 10,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_new,
    ACTIONS(145), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_decorate,
    ACTIONS(151), 1,
      anon_sym_delete,
    ACTIONS(154), 1,
      anon_sym_load,
    ACTIONS(157), 1,
      anon_sym_save,
    ACTIONS(160), 1,
      anon_sym_export,
    STATE(25), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [827] = 6,
    ACTIONS(129), 1,
      aux_sym_identifier_token1,
    ACTIONS(131), 1,
      anon_sym_vertical,
    ACTIONS(133), 1,
      anon_sym_horizontal,
    STATE(24), 1,
      sym_identifier,
    STATE(94), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(127), 7,
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
    STATE(111), 1,
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
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(114), 1,
      sym_colour,
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [916] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      sym_rgb,
    ACTIONS(167), 10,
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
  [935] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(93), 1,
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
  [956] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(116), 1,
      sym_colour,
    ACTIONS(173), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [977] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(60), 1,
      sym_offset,
    ACTIONS(175), 10,
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
  [996] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(61), 1,
      sym_offset,
    ACTIONS(177), 10,
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
  [1015] = 3,
    ACTIONS(171), 1,
      sym_rgb,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(167), 10,
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
  [1034] = 2,
    ACTIONS(183), 1,
      sym_rgb,
    ACTIONS(181), 11,
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
  [1051] = 6,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_AT,
    ACTIONS(191), 1,
      aux_sym_relative_token1,
    STATE(227), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(187), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1076] = 2,
    ACTIONS(195), 1,
      sym_rgb,
    ACTIONS(193), 11,
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
  [1093] = 4,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym__scale,
    STATE(82), 1,
      sym_stretch,
    ACTIONS(197), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1114] = 4,
    ACTIONS(201), 1,
      aux_sym_offset_token1,
    STATE(65), 1,
      sym_offset,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(59), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1135] = 7,
    ACTIONS(203), 1,
      anon_sym_guide,
    ACTIONS(205), 1,
      anon_sym_input,
    ACTIONS(207), 1,
      anon_sym_output,
    ACTIONS(209), 1,
      anon_sym_parameter,
    ACTIONS(211), 1,
      anon_sym_light,
    ACTIONS(213), 1,
      anon_sym_widget,
    STATE(110), 6,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1162] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(68), 1,
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
  [1183] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(124), 1,
      sym_offset,
    ACTIONS(215), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1201] = 3,
    ACTIONS(219), 1,
      anon_sym_light,
    ACTIONS(221), 1,
      anon_sym_dark,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1219] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(88), 1,
      sym_offset,
    ACTIONS(223), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1237] = 2,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    ACTIONS(225), 10,
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
  [1253] = 2,
    ACTIONS(231), 1,
      sym_rgb,
    ACTIONS(229), 10,
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
  [1269] = 4,
    ACTIONS(237), 1,
      aux_sym__input_id_token1,
    STATE(71), 1,
      sym_part,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(235), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1289] = 3,
    ACTIONS(241), 1,
      anon_sym_timestamp,
    ACTIONS(243), 1,
      anon_sym_gzip,
    ACTIONS(239), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1307] = 4,
    ACTIONS(237), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_part,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(247), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1327] = 3,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_stretch,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1345] = 2,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1360] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(101), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1375] = 2,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1390] = 2,
    ACTIONS(261), 1,
      anon_sym_timestamp,
    ACTIONS(259), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1405] = 1,
    ACTIONS(99), 10,
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
  [1418] = 5,
    ACTIONS(263), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      aux_sym_relative_token1,
    STATE(199), 1,
      sym_x,
    STATE(48), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(187), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1439] = 6,
    ACTIONS(267), 1,
      anon_sym_input,
    ACTIONS(269), 1,
      anon_sym_output,
    ACTIONS(271), 1,
      anon_sym_parameter,
    ACTIONS(273), 1,
      anon_sym_light,
    ACTIONS(275), 1,
      anon_sym_widget,
    STATE(188), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1462] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(73), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1477] = 1,
    ACTIONS(277), 10,
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
  [1490] = 1,
    ACTIONS(279), 10,
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
  [1503] = 2,
    ACTIONS(283), 1,
      anon_sym_COMMA,
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
  [1518] = 2,
    ACTIONS(287), 1,
      anon_sym_COMMA,
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
  [1533] = 2,
    ACTIONS(289), 1,
      anon_sym_COMMA,
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
  [1548] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(97), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1563] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(77), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1578] = 1,
    ACTIONS(291), 10,
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
  [1591] = 1,
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
  [1603] = 6,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    ACTIONS(295), 1,
      anon_sym_origin,
    ACTIONS(297), 1,
      anon_sym_AT,
    ACTIONS(299), 1,
      aux_sym_origin_token1,
    STATE(92), 1,
      sym_offset,
    ACTIONS(293), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1625] = 1,
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
  [1637] = 1,
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
  [1649] = 1,
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
  [1661] = 1,
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
  [1673] = 1,
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
  [1685] = 1,
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
  [1697] = 1,
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
  [1709] = 1,
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
  [1721] = 1,
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
  [1733] = 1,
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
  [1745] = 1,
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
  [1757] = 1,
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
  [1769] = 1,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1781] = 1,
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
  [1793] = 1,
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
  [1805] = 1,
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
  [1817] = 1,
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
  [1829] = 1,
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
  [1841] = 1,
    ACTIONS(335), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1853] = 1,
    ACTIONS(337), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1865] = 1,
    ACTIONS(339), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1877] = 1,
    ACTIONS(341), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1889] = 1,
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
  [1901] = 1,
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
  [1913] = 1,
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
  [1925] = 1,
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
  [1937] = 1,
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
  [1949] = 1,
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
  [1961] = 1,
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
  [1973] = 1,
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
  [1985] = 1,
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
  [1997] = 1,
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
  [2009] = 1,
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
  [2021] = 1,
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
  [2033] = 1,
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
  [2045] = 1,
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
  [2057] = 1,
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
  [2069] = 1,
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
  [2081] = 1,
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
  [2093] = 1,
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
  [2105] = 1,
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
  [2117] = 1,
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2129] = 1,
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
  [2141] = 1,
    ACTIONS(377), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2153] = 1,
    ACTIONS(173), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2165] = 1,
    ACTIONS(379), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2177] = 1,
    ACTIONS(381), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2189] = 1,
    ACTIONS(383), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2201] = 1,
    ACTIONS(385), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2213] = 1,
    ACTIONS(227), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2225] = 1,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2237] = 1,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2249] = 1,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2261] = 1,
    ACTIONS(393), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2273] = 1,
    ACTIONS(395), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2285] = 2,
    ACTIONS(397), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(399), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2298] = 6,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    ACTIONS(401), 1,
      anon_sym_origin,
    ACTIONS(403), 1,
      anon_sym_AT,
    ACTIONS(405), 1,
      aux_sym_origin_token1,
    STATE(95), 1,
      sym_offset,
    ACTIONS(293), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2319] = 2,
    ACTIONS(163), 2,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(165), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2331] = 6,
    ACTIONS(407), 1,
      anon_sym_input,
    ACTIONS(409), 1,
      anon_sym_output,
    ACTIONS(411), 1,
      anon_sym_parameter,
    ACTIONS(413), 1,
      anon_sym_light,
    ACTIONS(415), 1,
      anon_sym_widget,
    ACTIONS(417), 1,
      anon_sym_label,
  [2350] = 4,
    ACTIONS(419), 1,
      anon_sym_module,
    ACTIONS(421), 1,
      anon_sym_origin,
    ACTIONS(423), 1,
      anon_sym_background,
    STATE(112), 3,
      sym__module_attr,
      sym_origin,
      sym_background,
  [2365] = 2,
    STATE(47), 1,
      sym_valign,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [2375] = 2,
    STATE(47), 1,
      sym_halign,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2385] = 5,
    ACTIONS(425), 1,
      anon_sym_AT,
    ACTIONS(427), 1,
      aux_sym__originx_token1,
    ACTIONS(429), 1,
      aux_sym__originy_token1,
    STATE(200), 1,
      sym__originy,
    STATE(201), 1,
      sym__originx,
  [2401] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(431), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2411] = 2,
    STATE(50), 1,
      sym_y,
    ACTIONS(433), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2421] = 5,
    ACTIONS(435), 1,
      aux_sym__input_id_token1,
    ACTIONS(437), 1,
      anon_sym_none,
    ACTIONS(439), 1,
      sym_rgb,
    ACTIONS(441), 1,
      sym_rgba,
    STATE(99), 1,
      sym_name,
  [2437] = 3,
    ACTIONS(443), 1,
      anon_sym_project,
    ACTIONS(445), 1,
      anon_sym_script,
    STATE(102), 2,
      sym_project,
      sym_script,
  [2448] = 4,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    STATE(217), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2461] = 4,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2474] = 4,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2487] = 4,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2500] = 4,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2513] = 3,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    STATE(193), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2523] = 3,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    STATE(195), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2533] = 3,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    STATE(194), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2543] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    ACTIONS(459), 1,
      aux_sym_origin_token1,
    STATE(120), 1,
      sym_offset,
  [2553] = 3,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    STATE(196), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2563] = 3,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    STATE(197), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2573] = 3,
    ACTIONS(461), 1,
      aux_sym__input_id_token1,
    STATE(57), 1,
      sym_name,
    STATE(90), 1,
      sym__component,
  [2583] = 3,
    ACTIONS(461), 1,
      aux_sym__input_id_token1,
    STATE(57), 1,
      sym_name,
    STATE(91), 1,
      sym__component,
  [2593] = 3,
    ACTIONS(461), 1,
      aux_sym__input_id_token1,
    STATE(57), 1,
      sym_name,
    STATE(89), 1,
      sym__component,
  [2603] = 3,
    ACTIONS(461), 1,
      aux_sym__input_id_token1,
    STATE(57), 1,
      sym_name,
    STATE(87), 1,
      sym__component,
  [2613] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      sym_offset,
  [2623] = 3,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(39), 1,
      sym_name,
    STATE(72), 1,
      sym_decoration,
  [2633] = 3,
    ACTIONS(461), 1,
      aux_sym__input_id_token1,
    STATE(57), 1,
      sym_name,
    STATE(84), 1,
      sym__component,
  [2643] = 3,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym__string,
  [2653] = 3,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    STATE(198), 1,
      sym__relative,
    STATE(221), 1,
      sym__offset,
  [2663] = 3,
    ACTIONS(471), 1,
      anon_sym_name,
    ACTIONS(473), 1,
      anon_sym_height,
    ACTIONS(475), 1,
      anon_sym_width,
  [2673] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    ACTIONS(477), 1,
      aux_sym_origin_token1,
    STATE(106), 1,
      sym_offset,
  [2683] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(147), 1,
      sym_name,
  [2690] = 1,
    ACTIONS(479), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2695] = 2,
    ACTIONS(481), 1,
      aux_sym_identifier_token1,
    STATE(74), 1,
      sym_identifier,
  [2702] = 2,
    ACTIONS(483), 1,
      anon_sym_svg,
    STATE(83), 1,
      sym_svg,
  [2709] = 2,
    ACTIONS(485), 1,
      sym_height,
    ACTIONS(487), 1,
      sym_width,
  [2716] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(109), 1,
      sym_name,
  [2723] = 2,
    ACTIONS(489), 1,
      anon_sym_scale,
    ACTIONS(491), 1,
      anon_sym_stretch,
  [2730] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(137), 1,
      sym_name,
  [2737] = 2,
    ACTIONS(493), 1,
      anon_sym_project,
    ACTIONS(495), 1,
      anon_sym_script,
  [2744] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(139), 1,
      sym_name,
  [2751] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(140), 1,
      sym_name,
  [2758] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(141), 1,
      sym_name,
  [2765] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(138), 1,
      sym_name,
  [2772] = 2,
    ACTIONS(429), 1,
      aux_sym__originy_token1,
    STATE(104), 1,
      sym__originy,
  [2779] = 2,
    ACTIONS(427), 1,
      aux_sym__originx_token1,
    STATE(104), 1,
      sym__originx,
  [2786] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(156), 1,
      sym_name,
  [2793] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(146), 1,
      sym_name,
  [2800] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(143), 1,
      sym_name,
  [2807] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(144), 1,
      sym_name,
  [2814] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(142), 1,
      sym_name,
  [2821] = 2,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(98), 1,
      sym_offset,
  [2828] = 2,
    ACTIONS(449), 1,
      aux_sym_offset_token1,
    STATE(205), 1,
      sym__offset,
  [2835] = 2,
    ACTIONS(497), 1,
      sym_rgb,
    ACTIONS(499), 1,
      sym_rgba,
  [2842] = 2,
    ACTIONS(465), 1,
      aux_sym__input_id_token1,
    STATE(163), 1,
      sym_name,
  [2849] = 2,
    ACTIONS(501), 1,
      anon_sym_panel,
    STATE(100), 1,
      sym_panel,
  [2856] = 1,
    ACTIONS(503), 1,
      sym_width,
  [2860] = 1,
    ACTIONS(505), 1,
      aux_sym__input_id_token1,
  [2864] = 1,
    ACTIONS(507), 1,
      anon_sym_gzip,
  [2868] = 1,
    ACTIONS(509), 1,
      aux_sym_origin_token1,
  [2872] = 1,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
  [2876] = 1,
    ACTIONS(513), 1,
      aux_sym_origin_token1,
  [2880] = 1,
    ACTIONS(515), 1,
      aux_sym_absolute_token1,
  [2884] = 1,
    ACTIONS(517), 1,
      anon_sym_COMMA,
  [2888] = 1,
    ACTIONS(519), 1,
      aux_sym_absolute_token1,
  [2892] = 1,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [2896] = 1,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
  [2900] = 1,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
  [2904] = 1,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [2908] = 1,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
  [2912] = 1,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [2916] = 1,
    ACTIONS(533), 1,
      anon_sym_COMMA,
  [2920] = 1,
    ACTIONS(535), 1,
      anon_sym_COMMA,
  [2924] = 1,
    ACTIONS(537), 1,
      anon_sym_COMMA,
  [2928] = 1,
    ACTIONS(539), 1,
      aux_sym_origin_token1,
  [2932] = 1,
    ACTIONS(541), 1,
      sym_width,
  [2936] = 1,
    ACTIONS(541), 1,
      sym_height,
  [2940] = 1,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [2944] = 1,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
  [2948] = 1,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
  [2952] = 1,
    ACTIONS(549), 1,
      aux_sym__string_token2,
  [2956] = 1,
    ACTIONS(551), 1,
      aux_sym__string_token1,
  [2960] = 1,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [2964] = 1,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
  [2968] = 1,
    ACTIONS(557), 1,
      aux_sym__input_id_token1,
  [2972] = 1,
    ACTIONS(507), 1,
      anon_sym_timestamp,
  [2976] = 1,
    ACTIONS(559), 1,
      aux_sym__input_id_token1,
  [2980] = 1,
    ACTIONS(561), 1,
      aux_sym__input_id_token1,
  [2984] = 1,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
  [2988] = 1,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [2992] = 1,
    ACTIONS(567), 1,
      aux_sym__scale_token1,
  [2996] = 1,
    ACTIONS(569), 1,
      aux_sym__scale_token1,
  [3000] = 1,
    ACTIONS(491), 1,
      anon_sym_stretch,
  [3004] = 1,
    ACTIONS(571), 1,
      anon_sym_COMMA,
  [3008] = 1,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
  [3012] = 1,
    ACTIONS(573), 1,
      anon_sym_SQUOTE,
  [3016] = 1,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
  [3020] = 1,
    ACTIONS(577), 1,
      anon_sym_COMMA,
  [3024] = 1,
    ACTIONS(579), 1,
      aux_sym_origin_token1,
  [3028] = 1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
  [3032] = 1,
    ACTIONS(583), 1,
      aux_sym__scale_token1,
  [3036] = 1,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [3040] = 1,
    ACTIONS(587), 1,
      anon_sym_COMMA,
  [3044] = 1,
    ACTIONS(589), 1,
      sym_rgb,
  [3048] = 1,
    ACTIONS(589), 1,
      sym_rgba,
  [3052] = 1,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
  [3056] = 1,
    ACTIONS(593), 1,
      anon_sym_with,
  [3060] = 1,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
  [3064] = 1,
    ACTIONS(597), 1,
      aux_sym_relative_token1,
  [3068] = 1,
    ACTIONS(599), 1,
      anon_sym_COMMA,
  [3072] = 1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
  [3076] = 1,
    ACTIONS(603), 1,
      aux_sym_relative_token1,
  [3080] = 1,
    ACTIONS(605), 1,
      aux_sym_absolute_token1,
  [3084] = 1,
    ACTIONS(607), 1,
      anon_sym_COMMA,
  [3088] = 1,
    ACTIONS(609), 1,
      anon_sym_COMMA,
  [3092] = 1,
    ACTIONS(611), 1,
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
  [SMALL_STATE(9)] = 322,
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
  [SMALL_STATE(23)] = 719,
  [SMALL_STATE(24)] = 755,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 855,
  [SMALL_STATE(28)] = 874,
  [SMALL_STATE(29)] = 895,
  [SMALL_STATE(30)] = 916,
  [SMALL_STATE(31)] = 935,
  [SMALL_STATE(32)] = 956,
  [SMALL_STATE(33)] = 977,
  [SMALL_STATE(34)] = 996,
  [SMALL_STATE(35)] = 1015,
  [SMALL_STATE(36)] = 1034,
  [SMALL_STATE(37)] = 1051,
  [SMALL_STATE(38)] = 1076,
  [SMALL_STATE(39)] = 1093,
  [SMALL_STATE(40)] = 1114,
  [SMALL_STATE(41)] = 1135,
  [SMALL_STATE(42)] = 1162,
  [SMALL_STATE(43)] = 1183,
  [SMALL_STATE(44)] = 1201,
  [SMALL_STATE(45)] = 1219,
  [SMALL_STATE(46)] = 1237,
  [SMALL_STATE(47)] = 1253,
  [SMALL_STATE(48)] = 1269,
  [SMALL_STATE(49)] = 1289,
  [SMALL_STATE(50)] = 1307,
  [SMALL_STATE(51)] = 1327,
  [SMALL_STATE(52)] = 1345,
  [SMALL_STATE(53)] = 1360,
  [SMALL_STATE(54)] = 1375,
  [SMALL_STATE(55)] = 1390,
  [SMALL_STATE(56)] = 1405,
  [SMALL_STATE(57)] = 1418,
  [SMALL_STATE(58)] = 1439,
  [SMALL_STATE(59)] = 1462,
  [SMALL_STATE(60)] = 1477,
  [SMALL_STATE(61)] = 1490,
  [SMALL_STATE(62)] = 1503,
  [SMALL_STATE(63)] = 1518,
  [SMALL_STATE(64)] = 1533,
  [SMALL_STATE(65)] = 1548,
  [SMALL_STATE(66)] = 1563,
  [SMALL_STATE(67)] = 1578,
  [SMALL_STATE(68)] = 1591,
  [SMALL_STATE(69)] = 1603,
  [SMALL_STATE(70)] = 1625,
  [SMALL_STATE(71)] = 1637,
  [SMALL_STATE(72)] = 1649,
  [SMALL_STATE(73)] = 1661,
  [SMALL_STATE(74)] = 1673,
  [SMALL_STATE(75)] = 1685,
  [SMALL_STATE(76)] = 1697,
  [SMALL_STATE(77)] = 1709,
  [SMALL_STATE(78)] = 1721,
  [SMALL_STATE(79)] = 1733,
  [SMALL_STATE(80)] = 1745,
  [SMALL_STATE(81)] = 1757,
  [SMALL_STATE(82)] = 1769,
  [SMALL_STATE(83)] = 1781,
  [SMALL_STATE(84)] = 1793,
  [SMALL_STATE(85)] = 1805,
  [SMALL_STATE(86)] = 1817,
  [SMALL_STATE(87)] = 1829,
  [SMALL_STATE(88)] = 1841,
  [SMALL_STATE(89)] = 1853,
  [SMALL_STATE(90)] = 1865,
  [SMALL_STATE(91)] = 1877,
  [SMALL_STATE(92)] = 1889,
  [SMALL_STATE(93)] = 1901,
  [SMALL_STATE(94)] = 1913,
  [SMALL_STATE(95)] = 1925,
  [SMALL_STATE(96)] = 1937,
  [SMALL_STATE(97)] = 1949,
  [SMALL_STATE(98)] = 1961,
  [SMALL_STATE(99)] = 1973,
  [SMALL_STATE(100)] = 1985,
  [SMALL_STATE(101)] = 1997,
  [SMALL_STATE(102)] = 2009,
  [SMALL_STATE(103)] = 2021,
  [SMALL_STATE(104)] = 2033,
  [SMALL_STATE(105)] = 2045,
  [SMALL_STATE(106)] = 2057,
  [SMALL_STATE(107)] = 2069,
  [SMALL_STATE(108)] = 2081,
  [SMALL_STATE(109)] = 2093,
  [SMALL_STATE(110)] = 2105,
  [SMALL_STATE(111)] = 2117,
  [SMALL_STATE(112)] = 2129,
  [SMALL_STATE(113)] = 2141,
  [SMALL_STATE(114)] = 2153,
  [SMALL_STATE(115)] = 2165,
  [SMALL_STATE(116)] = 2177,
  [SMALL_STATE(117)] = 2189,
  [SMALL_STATE(118)] = 2201,
  [SMALL_STATE(119)] = 2213,
  [SMALL_STATE(120)] = 2225,
  [SMALL_STATE(121)] = 2237,
  [SMALL_STATE(122)] = 2249,
  [SMALL_STATE(123)] = 2261,
  [SMALL_STATE(124)] = 2273,
  [SMALL_STATE(125)] = 2285,
  [SMALL_STATE(126)] = 2298,
  [SMALL_STATE(127)] = 2319,
  [SMALL_STATE(128)] = 2331,
  [SMALL_STATE(129)] = 2350,
  [SMALL_STATE(130)] = 2365,
  [SMALL_STATE(131)] = 2375,
  [SMALL_STATE(132)] = 2385,
  [SMALL_STATE(133)] = 2401,
  [SMALL_STATE(134)] = 2411,
  [SMALL_STATE(135)] = 2421,
  [SMALL_STATE(136)] = 2437,
  [SMALL_STATE(137)] = 2448,
  [SMALL_STATE(138)] = 2461,
  [SMALL_STATE(139)] = 2474,
  [SMALL_STATE(140)] = 2487,
  [SMALL_STATE(141)] = 2500,
  [SMALL_STATE(142)] = 2513,
  [SMALL_STATE(143)] = 2523,
  [SMALL_STATE(144)] = 2533,
  [SMALL_STATE(145)] = 2543,
  [SMALL_STATE(146)] = 2553,
  [SMALL_STATE(147)] = 2563,
  [SMALL_STATE(148)] = 2573,
  [SMALL_STATE(149)] = 2583,
  [SMALL_STATE(150)] = 2593,
  [SMALL_STATE(151)] = 2603,
  [SMALL_STATE(152)] = 2613,
  [SMALL_STATE(153)] = 2623,
  [SMALL_STATE(154)] = 2633,
  [SMALL_STATE(155)] = 2643,
  [SMALL_STATE(156)] = 2653,
  [SMALL_STATE(157)] = 2663,
  [SMALL_STATE(158)] = 2673,
  [SMALL_STATE(159)] = 2683,
  [SMALL_STATE(160)] = 2690,
  [SMALL_STATE(161)] = 2695,
  [SMALL_STATE(162)] = 2702,
  [SMALL_STATE(163)] = 2709,
  [SMALL_STATE(164)] = 2716,
  [SMALL_STATE(165)] = 2723,
  [SMALL_STATE(166)] = 2730,
  [SMALL_STATE(167)] = 2737,
  [SMALL_STATE(168)] = 2744,
  [SMALL_STATE(169)] = 2751,
  [SMALL_STATE(170)] = 2758,
  [SMALL_STATE(171)] = 2765,
  [SMALL_STATE(172)] = 2772,
  [SMALL_STATE(173)] = 2779,
  [SMALL_STATE(174)] = 2786,
  [SMALL_STATE(175)] = 2793,
  [SMALL_STATE(176)] = 2800,
  [SMALL_STATE(177)] = 2807,
  [SMALL_STATE(178)] = 2814,
  [SMALL_STATE(179)] = 2821,
  [SMALL_STATE(180)] = 2828,
  [SMALL_STATE(181)] = 2835,
  [SMALL_STATE(182)] = 2842,
  [SMALL_STATE(183)] = 2849,
  [SMALL_STATE(184)] = 2856,
  [SMALL_STATE(185)] = 2860,
  [SMALL_STATE(186)] = 2864,
  [SMALL_STATE(187)] = 2868,
  [SMALL_STATE(188)] = 2872,
  [SMALL_STATE(189)] = 2876,
  [SMALL_STATE(190)] = 2880,
  [SMALL_STATE(191)] = 2884,
  [SMALL_STATE(192)] = 2888,
  [SMALL_STATE(193)] = 2892,
  [SMALL_STATE(194)] = 2896,
  [SMALL_STATE(195)] = 2900,
  [SMALL_STATE(196)] = 2904,
  [SMALL_STATE(197)] = 2908,
  [SMALL_STATE(198)] = 2912,
  [SMALL_STATE(199)] = 2916,
  [SMALL_STATE(200)] = 2920,
  [SMALL_STATE(201)] = 2924,
  [SMALL_STATE(202)] = 2928,
  [SMALL_STATE(203)] = 2932,
  [SMALL_STATE(204)] = 2936,
  [SMALL_STATE(205)] = 2940,
  [SMALL_STATE(206)] = 2944,
  [SMALL_STATE(207)] = 2948,
  [SMALL_STATE(208)] = 2952,
  [SMALL_STATE(209)] = 2956,
  [SMALL_STATE(210)] = 2960,
  [SMALL_STATE(211)] = 2964,
  [SMALL_STATE(212)] = 2968,
  [SMALL_STATE(213)] = 2972,
  [SMALL_STATE(214)] = 2976,
  [SMALL_STATE(215)] = 2980,
  [SMALL_STATE(216)] = 2984,
  [SMALL_STATE(217)] = 2988,
  [SMALL_STATE(218)] = 2992,
  [SMALL_STATE(219)] = 2996,
  [SMALL_STATE(220)] = 3000,
  [SMALL_STATE(221)] = 3004,
  [SMALL_STATE(222)] = 3008,
  [SMALL_STATE(223)] = 3012,
  [SMALL_STATE(224)] = 3016,
  [SMALL_STATE(225)] = 3020,
  [SMALL_STATE(226)] = 3024,
  [SMALL_STATE(227)] = 3028,
  [SMALL_STATE(228)] = 3032,
  [SMALL_STATE(229)] = 3036,
  [SMALL_STATE(230)] = 3040,
  [SMALL_STATE(231)] = 3044,
  [SMALL_STATE(232)] = 3048,
  [SMALL_STATE(233)] = 3052,
  [SMALL_STATE(234)] = 3056,
  [SMALL_STATE(235)] = 3060,
  [SMALL_STATE(236)] = 3064,
  [SMALL_STATE(237)] = 3068,
  [SMALL_STATE(238)] = 3072,
  [SMALL_STATE(239)] = 3076,
  [SMALL_STATE(240)] = 3080,
  [SMALL_STATE(241)] = 3084,
  [SMALL_STATE(242)] = 3088,
  [SMALL_STATE(243)] = 3092,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 10),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 10),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(129),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(233),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(41),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(167),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(136),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(183),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 9),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 7),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 17),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 7),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 11),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [595] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
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
