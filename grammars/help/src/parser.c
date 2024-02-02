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
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 1
#define TOKEN_COUNT 58
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
  anon_sym_delete = 18,
  anon_sym_guide = 19,
  anon_sym_label = 20,
  anon_sym_decoration = 21,
  anon_sym_load = 22,
  anon_sym_project = 23,
  anon_sym_script = 24,
  anon_sym_save = 25,
  anon_sym_timestamp = 26,
  anon_sym_COMMA = 27,
  anon_sym_gzip = 28,
  anon_sym_export = 29,
  anon_sym_panel = 30,
  anon_sym_svg = 31,
  anon_sym_dark = 32,
  anon_sym_origin = 33,
  anon_sym_background = 34,
  anon_sym_AT = 35,
  aux_sym__label_absolute_token1 = 36,
  aux_sym__label_relative_token1 = 37,
  aux_sym_font_token1 = 38,
  aux_sym_fontsize_token1 = 39,
  anon_sym_left = 40,
  anon_sym_centre = 41,
  anon_sym_center = 42,
  anon_sym_right = 43,
  anon_sym_top = 44,
  anon_sym_middle = 45,
  anon_sym_baseline = 46,
  anon_sym_bottom = 47,
  aux_sym__rgb_token1 = 48,
  aux_sym__rgba_token1 = 49,
  aux_sym__x_token1 = 50,
  aux_sym__y_token1 = 51,
  aux_sym__offset_token1 = 52,
  aux_sym_string_token1 = 53,
  aux_sym_string_token2 = 54,
  aux_sym__string_token1 = 55,
  aux_sym__string_token2 = 56,
  sym_identifier = 57,
  sym_command = 58,
  sym_new = 59,
  sym_module = 60,
  sym_set = 61,
  sym__module_attr = 62,
  sym_decorate = 63,
  sym__component = 64,
  sym_decoration = 65,
  sym_delete = 66,
  sym__guideline_id = 67,
  sym__input_id = 68,
  sym__output_id = 69,
  sym__parameter_id = 70,
  sym__light_id = 71,
  sym__widget_id = 72,
  sym__label_id = 73,
  sym__decoration_id = 74,
  sym__component_id = 75,
  sym_load = 76,
  sym_save = 77,
  sym_project = 78,
  sym__save_options = 79,
  sym_script = 80,
  sym_export = 81,
  sym_panel = 82,
  sym_svg = 83,
  sym_origin = 84,
  sym_background = 85,
  sym_guide = 86,
  sym_input = 87,
  sym_output = 88,
  sym_parameter = 89,
  sym_light = 90,
  sym_widget = 91,
  sym_label = 92,
  sym__label_string = 93,
  sym__label_absolute = 94,
  sym__label_relative = 95,
  sym__label_geometry = 96,
  sym_font = 97,
  sym_fontsize = 98,
  sym_halign = 99,
  sym_valign = 100,
  sym_colour = 101,
  sym__rgb = 102,
  sym__rgba = 103,
  sym_name = 104,
  sym_rgb = 105,
  sym_rgba = 106,
  sym_absolute = 107,
  sym__x = 108,
  sym__y = 109,
  sym_x = 110,
  sym_y = 111,
  sym__offset = 112,
  sym_offset = 113,
  sym_string = 114,
  sym__string = 115,
  aux_sym_command_repeat1 = 116,
  alias_sym_reference = 117,
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
  [anon_sym_delete] = "delete",
  [anon_sym_guide] = "guide",
  [anon_sym_label] = "label",
  [anon_sym_decoration] = "decoration",
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
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym__string_token1] = "_string_token1",
  [aux_sym__string_token2] = "_string_token2",
  [sym_identifier] = "identifier",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_module] = "module",
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym_decorate] = "decorate",
  [sym__component] = "component",
  [sym_decoration] = "decoration",
  [sym_delete] = "delete",
  [sym__guideline_id] = "guide",
  [sym__input_id] = "input",
  [sym__output_id] = "output",
  [sym__parameter_id] = "parameter",
  [sym__light_id] = "light",
  [sym__widget_id] = "widget",
  [sym__label_id] = "label",
  [sym__decoration_id] = "decoration",
  [sym__component_id] = "_component_id",
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
  [sym_input] = "input",
  [sym_output] = "output",
  [sym_parameter] = "parameter",
  [sym_light] = "light",
  [sym_widget] = "widget",
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
  [sym_string] = "string",
  [sym__string] = "_string",
  [aux_sym_command_repeat1] = "command_repeat1",
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
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_decoration] = anon_sym_decoration,
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym__string_token2] = aux_sym__string_token2,
  [sym_identifier] = sym_identifier,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_module] = sym_module,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym_decorate] = sym_decorate,
  [sym__component] = sym__component,
  [sym_decoration] = sym_decoration,
  [sym_delete] = sym_delete,
  [sym__guideline_id] = sym_guide,
  [sym__input_id] = sym_input,
  [sym__output_id] = sym_output,
  [sym__parameter_id] = sym_parameter,
  [sym__light_id] = sym_light,
  [sym__widget_id] = sym_widget,
  [sym__label_id] = sym_label,
  [sym__decoration_id] = sym_decoration,
  [sym__component_id] = sym__component_id,
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
  [sym_input] = sym_input,
  [sym_output] = sym_output,
  [sym_parameter] = sym_parameter,
  [sym_light] = sym_light,
  [sym_widget] = sym_widget,
  [sym_label] = sym_label,
  [sym__label_string] = sym_string,
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
  [sym_string] = sym_string,
  [sym__string] = sym__string,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
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
  [anon_sym_delete] = {
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
  [anon_sym_decoration] = {
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym__label_id] = {
    .visible = true,
    .named = true,
  },
  [sym__decoration_id] = {
    .visible = true,
    .named = true,
  },
  [sym__component_id] = {
    .visible = false,
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
  [sym_string] = {
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
    [1] = sym_light,
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
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 52,
  [119] = 53,
  [120] = 120,
  [121] = 121,
  [122] = 61,
  [123] = 68,
  [124] = 51,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(247);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(270);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'g') ADVANCE(209);
      if (lookahead == 'h') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(109);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(342);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(343);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'U') ADVANCE(252);
      if (lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '5') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'U') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == '5') ADVANCE(221);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 27:
      if (lookahead == '5') ADVANCE(140);
      END_STATE();
    case 28:
      if (lookahead == '5') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 29:
      if (lookahead == '5') ADVANCE(140);
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 30:
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'H') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'H') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'H') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(198);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(293);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(85);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(271);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(260);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(189);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 121:
      if (lookahead == 'j') ADVANCE(68);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(294);
      END_STATE();
    case 123:
      if (lookahead == 'k') ADVANCE(96);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(340);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == 'z') ADVANCE(114);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 214:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 215:
      if (lookahead == 'w') ADVANCE(248);
      END_STATE();
    case 216:
      if (lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 222:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 239:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 240:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 241:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 242:
      if (eof) ADVANCE(247);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == 'd') ADVANCE(351);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(242)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 243:
      if (eof) ADVANCE(247);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'b') ADVANCE(162);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 244:
      if (eof) ADVANCE(247);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 245:
      if (eof) ADVANCE(247);
      if (lookahead == ')') ADVANCE(270);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 246:
      if (eof) ADVANCE(247);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(140);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      if (lookahead == '5') ADVANCE(140);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'l') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 243},
  [7] = {.lex_state = 244},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 243},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 245},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 242},
  [14] = {.lex_state = 243},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 245},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 242},
  [20] = {.lex_state = 244},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 243},
  [24] = {.lex_state = 244},
  [25] = {.lex_state = 244},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 244},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 244},
  [34] = {.lex_state = 245},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 243},
  [37] = {.lex_state = 244},
  [38] = {.lex_state = 244},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 246},
  [42] = {.lex_state = 244},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 245},
  [50] = {.lex_state = 246},
  [51] = {.lex_state = 242},
  [52] = {.lex_state = 242},
  [53] = {.lex_state = 242},
  [54] = {.lex_state = 242},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 242},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 242},
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
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 245},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 243},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 243},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 244},
  [130] = {.lex_state = 244},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 242},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 242},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 243},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
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
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_decoration] = ACTIONS(1),
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
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [aux_sym__string_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(136),
    [sym_new] = STATE(4),
    [sym_set] = STATE(4),
    [sym_decorate] = STATE(4),
    [sym_delete] = STATE(4),
    [sym_load] = STATE(4),
    [sym_save] = STATE(4),
    [sym_export] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_decorate] = ACTIONS(9),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(15),
    [anon_sym_export] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(21), 1,
      anon_sym_input,
    ACTIONS(23), 1,
      anon_sym_output,
    ACTIONS(25), 1,
      anon_sym_parameter,
    ACTIONS(27), 1,
      anon_sym_light,
    ACTIONS(29), 1,
      anon_sym_widget,
    ACTIONS(31), 1,
      anon_sym_guide,
    ACTIONS(33), 1,
      anon_sym_label,
    ACTIONS(35), 1,
      anon_sym_decoration,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(110), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [45] = 10,
    ACTIONS(39), 1,
      anon_sym_module,
    ACTIONS(41), 1,
      anon_sym_input,
    ACTIONS(43), 1,
      anon_sym_output,
    ACTIONS(45), 1,
      anon_sym_parameter,
    ACTIONS(47), 1,
      anon_sym_light,
    ACTIONS(49), 1,
      anon_sym_widget,
    ACTIONS(51), 1,
      anon_sym_guide,
    ACTIONS(53), 1,
      anon_sym_label,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(103), 8,
      sym_module,
      sym_guide,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
  [90] = 9,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_decorate,
    ACTIONS(11), 1,
      anon_sym_delete,
    ACTIONS(13), 1,
      anon_sym_load,
    ACTIONS(15), 1,
      anon_sym_save,
    ACTIONS(17), 1,
      anon_sym_export,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(5), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [125] = 9,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_new,
    ACTIONS(62), 1,
      anon_sym_set,
    ACTIONS(65), 1,
      anon_sym_decorate,
    ACTIONS(68), 1,
      anon_sym_delete,
    ACTIONS(71), 1,
      anon_sym_load,
    ACTIONS(74), 1,
      anon_sym_save,
    ACTIONS(77), 1,
      anon_sym_export,
    STATE(5), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [160] = 6,
    ACTIONS(82), 1,
      anon_sym_AT,
    ACTIONS(84), 1,
      aux_sym__label_relative_token1,
    ACTIONS(86), 1,
      aux_sym__x_token1,
    STATE(131), 1,
      sym__x,
    STATE(83), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [188] = 8,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      aux_sym_font_token1,
    ACTIONS(94), 1,
      aux_sym__rgb_token1,
    ACTIONS(96), 1,
      aux_sym__rgba_token1,
    STATE(59), 1,
      sym_rgb,
    STATE(60), 1,
      sym_rgba,
    STATE(76), 1,
      sym_name,
    ACTIONS(90), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [219] = 5,
    ACTIONS(100), 1,
      anon_sym_module,
    ACTIONS(102), 1,
      anon_sym_origin,
    ACTIONS(104), 1,
      anon_sym_background,
    STATE(112), 3,
      sym__module_attr,
      sym_origin,
      sym_background,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [244] = 7,
    ACTIONS(108), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      aux_sym__x_token1,
    ACTIONS(112), 1,
      aux_sym__y_token1,
    STATE(40), 1,
      sym_x,
    STATE(55), 1,
      sym_y,
    STATE(78), 1,
      sym_absolute,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [273] = 5,
    ACTIONS(116), 1,
      aux_sym__rgb_token1,
    ACTIONS(118), 1,
      aux_sym__rgba_token1,
    STATE(81), 1,
      sym_colour,
    STATE(46), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [297] = 3,
    STATE(86), 1,
      sym_halign,
    ACTIONS(122), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [317] = 4,
    ACTIONS(126), 1,
      anon_sym_project,
    ACTIONS(128), 1,
      anon_sym_script,
    STATE(91), 2,
      sym_project,
      sym_script,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [338] = 5,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(69), 1,
      sym_string,
    ACTIONS(134), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(132), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [361] = 4,
    STATE(6), 1,
      sym__string,
    STATE(89), 1,
      sym__label_string,
    ACTIONS(140), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [382] = 3,
    ACTIONS(144), 1,
      aux_sym__offset_token1,
    STATE(44), 1,
      sym_offset,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [400] = 3,
    ACTIONS(144), 1,
      aux_sym__offset_token1,
    STATE(39), 1,
      sym_offset,
    ACTIONS(146), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [418] = 2,
    ACTIONS(150), 1,
      sym_width,
    ACTIONS(148), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      sym_height,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [434] = 4,
    ACTIONS(154), 1,
      anon_sym_timestamp,
    ACTIONS(156), 1,
      anon_sym_gzip,
    STATE(74), 1,
      sym__save_options,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [454] = 5,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(71), 1,
      sym__component_id,
    ACTIONS(160), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [476] = 4,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      aux_sym__offset_token1,
    STATE(42), 1,
      sym__offset,
    ACTIONS(168), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [496] = 4,
    ACTIONS(174), 1,
      anon_sym_name,
    ACTIONS(176), 1,
      anon_sym_height,
    ACTIONS(178), 1,
      anon_sym_width,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [516] = 3,
    ACTIONS(182), 1,
      aux_sym_fontsize_token1,
    STATE(88), 1,
      sym_fontsize,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [533] = 3,
    ACTIONS(112), 1,
      aux_sym__y_token1,
    STATE(106), 1,
      sym_y,
    ACTIONS(184), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [550] = 4,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym_font_token1,
    STATE(101), 1,
      sym_font,
    ACTIONS(188), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [569] = 4,
    ACTIONS(92), 1,
      aux_sym_font_token1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym_name,
    ACTIONS(194), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [588] = 6,
    ACTIONS(196), 1,
      anon_sym_input,
    ACTIONS(198), 1,
      anon_sym_output,
    ACTIONS(200), 1,
      anon_sym_parameter,
    ACTIONS(202), 1,
      anon_sym_light,
    ACTIONS(204), 1,
      anon_sym_widget,
    STATE(135), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [611] = 4,
    ACTIONS(92), 1,
      aux_sym_font_token1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_name,
    ACTIONS(208), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [630] = 3,
    ACTIONS(212), 1,
      anon_sym_light,
    ACTIONS(214), 1,
      anon_sym_dark,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [647] = 3,
    ACTIONS(218), 1,
      anon_sym_project,
    ACTIONS(220), 1,
      anon_sym_script,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [664] = 3,
    ACTIONS(224), 1,
      anon_sym_panel,
    STATE(90), 1,
      sym_panel,
    ACTIONS(222), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [681] = 3,
    ACTIONS(228), 1,
      anon_sym_svg,
    STATE(77), 1,
      sym_svg,
    ACTIONS(226), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [698] = 3,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym__component,
    ACTIONS(230), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [715] = 4,
    ACTIONS(190), 1,
      aux_sym_font_token1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      sym_font,
    ACTIONS(236), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [734] = 3,
    ACTIONS(240), 1,
      sym_height,
    ACTIONS(242), 1,
      sym_width,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [751] = 3,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_decoration,
    ACTIONS(244), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [768] = 3,
    ACTIONS(110), 1,
      aux_sym__x_token1,
    STATE(106), 1,
      sym_x,
    ACTIONS(184), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [785] = 4,
    ACTIONS(190), 1,
      aux_sym_font_token1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      sym_font,
    ACTIONS(250), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [804] = 4,
    ACTIONS(92), 1,
      aux_sym_font_token1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_name,
    ACTIONS(254), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [823] = 1,
    ACTIONS(256), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [835] = 2,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [849] = 2,
    ACTIONS(264), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(262), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [863] = 2,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [877] = 2,
    ACTIONS(272), 1,
      anon_sym_timestamp,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [891] = 1,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [903] = 2,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [917] = 2,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [931] = 1,
    ACTIONS(284), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [943] = 2,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [957] = 2,
    ACTIONS(292), 1,
      sym_width,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [971] = 2,
    ACTIONS(296), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(294), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [985] = 3,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(300), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1001] = 3,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(306), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1017] = 3,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(312), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1033] = 3,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(318), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1049] = 2,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1063] = 1,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1075] = 1,
    ACTIONS(326), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1087] = 2,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1101] = 2,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1115] = 2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1129] = 3,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(340), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1145] = 1,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1157] = 1,
    ACTIONS(346), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1169] = 1,
    ACTIONS(348), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1181] = 1,
    ACTIONS(350), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1193] = 1,
    ACTIONS(352), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1205] = 2,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1219] = 3,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(358), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1235] = 1,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1246] = 1,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1257] = 1,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1268] = 1,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1279] = 1,
    ACTIONS(370), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1290] = 1,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1301] = 1,
    ACTIONS(374), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1312] = 1,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1323] = 1,
    ACTIONS(376), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1334] = 1,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1345] = 1,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1356] = 1,
    ACTIONS(378), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1367] = 1,
    ACTIONS(380), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1378] = 1,
    ACTIONS(382), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1389] = 1,
    ACTIONS(384), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1400] = 1,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1411] = 1,
    ACTIONS(388), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1422] = 1,
    ACTIONS(390), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1433] = 1,
    ACTIONS(392), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1444] = 1,
    ACTIONS(394), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1455] = 1,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1466] = 1,
    ACTIONS(398), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1477] = 1,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1488] = 1,
    ACTIONS(402), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1499] = 1,
    ACTIONS(404), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1510] = 1,
    ACTIONS(406), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1521] = 1,
    ACTIONS(408), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1532] = 1,
    ACTIONS(410), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1543] = 1,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1554] = 1,
    ACTIONS(414), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1565] = 1,
    ACTIONS(416), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1576] = 1,
    ACTIONS(418), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1587] = 1,
    ACTIONS(420), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1598] = 1,
    ACTIONS(422), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1609] = 1,
    ACTIONS(424), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1620] = 1,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1631] = 1,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1642] = 1,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1653] = 1,
    ACTIONS(432), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1664] = 1,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1675] = 1,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1686] = 1,
    ACTIONS(438), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1697] = 1,
    ACTIONS(440), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1708] = 1,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1719] = 1,
    ACTIONS(444), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1730] = 2,
    STATE(82), 1,
      sym_valign,
    ACTIONS(446), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1740] = 1,
    ACTIONS(448), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [1748] = 3,
    ACTIONS(450), 1,
      aux_sym__rgb_token1,
    ACTIONS(452), 1,
      aux_sym__rgba_token1,
    STATE(72), 2,
      sym__rgb,
      sym__rgba,
  [1759] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      aux_sym__offset_token1,
    STATE(140), 1,
      sym__offset,
  [1769] = 2,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 1,
      sym_identifier,
  [1776] = 2,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      sym_identifier,
  [1783] = 2,
    ACTIONS(462), 1,
      aux_sym_font_token1,
    STATE(70), 1,
      sym_name,
  [1790] = 2,
    ACTIONS(464), 1,
      aux_sym__y_token1,
    STATE(37), 1,
      sym__y,
  [1797] = 2,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      sym_identifier,
  [1804] = 2,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(468), 1,
      sym_identifier,
  [1811] = 2,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    ACTIONS(470), 1,
      sym_identifier,
  [1818] = 2,
    ACTIONS(96), 1,
      aux_sym__rgba_token1,
    STATE(107), 1,
      sym_rgba,
  [1825] = 2,
    ACTIONS(472), 1,
      aux_sym__rgb_token1,
    STATE(107), 1,
      sym_rgb,
  [1832] = 2,
    ACTIONS(462), 1,
      aux_sym_font_token1,
    STATE(85), 1,
      sym_name,
  [1839] = 1,
    ACTIONS(474), 1,
      anon_sym_COMMA,
  [1843] = 1,
    ACTIONS(476), 1,
      sym_width,
  [1847] = 1,
    ACTIONS(476), 1,
      sym_height,
  [1851] = 1,
    ACTIONS(478), 1,
      anon_sym_COMMA,
  [1855] = 1,
    ACTIONS(480), 1,
      aux_sym__label_absolute_token1,
  [1859] = 1,
    ACTIONS(482), 1,
      anon_sym_COMMA,
  [1863] = 1,
    ACTIONS(484), 1,
      aux_sym__label_absolute_token1,
  [1867] = 1,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
  [1871] = 1,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [1875] = 1,
    ACTIONS(490), 1,
      anon_sym_gzip,
  [1879] = 1,
    ACTIONS(490), 1,
      anon_sym_timestamp,
  [1883] = 1,
    ACTIONS(492), 1,
      aux_sym__label_relative_token1,
  [1887] = 1,
    ACTIONS(494), 1,
      anon_sym_COMMA,
  [1891] = 1,
    ACTIONS(496), 1,
      anon_sym_with,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 273,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 317,
  [SMALL_STATE(13)] = 338,
  [SMALL_STATE(14)] = 361,
  [SMALL_STATE(15)] = 382,
  [SMALL_STATE(16)] = 400,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 434,
  [SMALL_STATE(19)] = 454,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 496,
  [SMALL_STATE(22)] = 516,
  [SMALL_STATE(23)] = 533,
  [SMALL_STATE(24)] = 550,
  [SMALL_STATE(25)] = 569,
  [SMALL_STATE(26)] = 588,
  [SMALL_STATE(27)] = 611,
  [SMALL_STATE(28)] = 630,
  [SMALL_STATE(29)] = 647,
  [SMALL_STATE(30)] = 664,
  [SMALL_STATE(31)] = 681,
  [SMALL_STATE(32)] = 698,
  [SMALL_STATE(33)] = 715,
  [SMALL_STATE(34)] = 734,
  [SMALL_STATE(35)] = 751,
  [SMALL_STATE(36)] = 768,
  [SMALL_STATE(37)] = 785,
  [SMALL_STATE(38)] = 804,
  [SMALL_STATE(39)] = 823,
  [SMALL_STATE(40)] = 835,
  [SMALL_STATE(41)] = 849,
  [SMALL_STATE(42)] = 863,
  [SMALL_STATE(43)] = 877,
  [SMALL_STATE(44)] = 891,
  [SMALL_STATE(45)] = 903,
  [SMALL_STATE(46)] = 917,
  [SMALL_STATE(47)] = 931,
  [SMALL_STATE(48)] = 943,
  [SMALL_STATE(49)] = 957,
  [SMALL_STATE(50)] = 971,
  [SMALL_STATE(51)] = 985,
  [SMALL_STATE(52)] = 1001,
  [SMALL_STATE(53)] = 1017,
  [SMALL_STATE(54)] = 1033,
  [SMALL_STATE(55)] = 1049,
  [SMALL_STATE(56)] = 1063,
  [SMALL_STATE(57)] = 1075,
  [SMALL_STATE(58)] = 1087,
  [SMALL_STATE(59)] = 1101,
  [SMALL_STATE(60)] = 1115,
  [SMALL_STATE(61)] = 1129,
  [SMALL_STATE(62)] = 1145,
  [SMALL_STATE(63)] = 1157,
  [SMALL_STATE(64)] = 1169,
  [SMALL_STATE(65)] = 1181,
  [SMALL_STATE(66)] = 1193,
  [SMALL_STATE(67)] = 1205,
  [SMALL_STATE(68)] = 1219,
  [SMALL_STATE(69)] = 1235,
  [SMALL_STATE(70)] = 1246,
  [SMALL_STATE(71)] = 1257,
  [SMALL_STATE(72)] = 1268,
  [SMALL_STATE(73)] = 1279,
  [SMALL_STATE(74)] = 1290,
  [SMALL_STATE(75)] = 1301,
  [SMALL_STATE(76)] = 1312,
  [SMALL_STATE(77)] = 1323,
  [SMALL_STATE(78)] = 1334,
  [SMALL_STATE(79)] = 1345,
  [SMALL_STATE(80)] = 1356,
  [SMALL_STATE(81)] = 1367,
  [SMALL_STATE(82)] = 1378,
  [SMALL_STATE(83)] = 1389,
  [SMALL_STATE(84)] = 1400,
  [SMALL_STATE(85)] = 1411,
  [SMALL_STATE(86)] = 1422,
  [SMALL_STATE(87)] = 1433,
  [SMALL_STATE(88)] = 1444,
  [SMALL_STATE(89)] = 1455,
  [SMALL_STATE(90)] = 1466,
  [SMALL_STATE(91)] = 1477,
  [SMALL_STATE(92)] = 1488,
  [SMALL_STATE(93)] = 1499,
  [SMALL_STATE(94)] = 1510,
  [SMALL_STATE(95)] = 1521,
  [SMALL_STATE(96)] = 1532,
  [SMALL_STATE(97)] = 1543,
  [SMALL_STATE(98)] = 1554,
  [SMALL_STATE(99)] = 1565,
  [SMALL_STATE(100)] = 1576,
  [SMALL_STATE(101)] = 1587,
  [SMALL_STATE(102)] = 1598,
  [SMALL_STATE(103)] = 1609,
  [SMALL_STATE(104)] = 1620,
  [SMALL_STATE(105)] = 1631,
  [SMALL_STATE(106)] = 1642,
  [SMALL_STATE(107)] = 1653,
  [SMALL_STATE(108)] = 1664,
  [SMALL_STATE(109)] = 1675,
  [SMALL_STATE(110)] = 1686,
  [SMALL_STATE(111)] = 1697,
  [SMALL_STATE(112)] = 1708,
  [SMALL_STATE(113)] = 1719,
  [SMALL_STATE(114)] = 1730,
  [SMALL_STATE(115)] = 1740,
  [SMALL_STATE(116)] = 1748,
  [SMALL_STATE(117)] = 1759,
  [SMALL_STATE(118)] = 1769,
  [SMALL_STATE(119)] = 1776,
  [SMALL_STATE(120)] = 1783,
  [SMALL_STATE(121)] = 1790,
  [SMALL_STATE(122)] = 1797,
  [SMALL_STATE(123)] = 1804,
  [SMALL_STATE(124)] = 1811,
  [SMALL_STATE(125)] = 1818,
  [SMALL_STATE(126)] = 1825,
  [SMALL_STATE(127)] = 1832,
  [SMALL_STATE(128)] = 1839,
  [SMALL_STATE(129)] = 1843,
  [SMALL_STATE(130)] = 1847,
  [SMALL_STATE(131)] = 1851,
  [SMALL_STATE(132)] = 1855,
  [SMALL_STATE(133)] = 1859,
  [SMALL_STATE(134)] = 1863,
  [SMALL_STATE(135)] = 1867,
  [SMALL_STATE(136)] = 1871,
  [SMALL_STATE(137)] = 1875,
  [SMALL_STATE(138)] = 1879,
  [SMALL_STATE(139)] = 1883,
  [SMALL_STATE(140)] = 1887,
  [SMALL_STATE(141)] = 1891,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [488] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
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
