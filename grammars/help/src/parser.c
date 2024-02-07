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
#define STATE_COUNT 173
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 1
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  anon_sym_input = 3,
  sym_height = 4,
  sym_width = 5,
  anon_sym_set = 6,
  anon_sym_name = 7,
  anon_sym_height = 8,
  anon_sym_width = 9,
  anon_sym_x = 10,
  anon_sym_y = 11,
  anon_sym_part = 12,
  anon_sym_AT = 13,
  aux_sym__x_attr_token1 = 14,
  anon_sym_left = 15,
  anon_sym_centre = 16,
  anon_sym_center = 17,
  anon_sym_right = 18,
  aux_sym__x_attr_token2 = 19,
  aux_sym__x_attr_token3 = 20,
  anon_sym_top = 21,
  anon_sym_middle = 22,
  anon_sym_bottom = 23,
  anon_sym_decorate = 24,
  anon_sym_LPAREN = 25,
  anon_sym_output = 26,
  anon_sym_parameter = 27,
  anon_sym_light = 28,
  anon_sym_widget = 29,
  anon_sym_RPAREN = 30,
  anon_sym_with = 31,
  anon_sym_delete = 32,
  anon_sym_guide = 33,
  anon_sym_label = 34,
  anon_sym_decoration = 35,
  anon_sym_load = 36,
  anon_sym_project = 37,
  anon_sym_script = 38,
  anon_sym_save = 39,
  anon_sym_timestamp = 40,
  anon_sym_COMMA = 41,
  anon_sym_gzip = 42,
  anon_sym_export = 43,
  anon_sym_panel = 44,
  anon_sym_svg = 45,
  anon_sym_dark = 46,
  anon_sym_origin = 47,
  anon_sym_background = 48,
  aux_sym__label_absolute_token1 = 49,
  aux_sym__label_relative_token1 = 50,
  aux_sym_font_token1 = 51,
  aux_sym_fontsize_token1 = 52,
  anon_sym_baseline = 53,
  aux_sym__rgb_token1 = 54,
  aux_sym__rgba_token1 = 55,
  aux_sym__absolute_token1 = 56,
  aux_sym__x_token1 = 57,
  aux_sym__y_token1 = 58,
  aux_sym__offset_token1 = 59,
  aux_sym_string_token1 = 60,
  aux_sym_string_token2 = 61,
  aux_sym__string_token1 = 62,
  aux_sym__string_token2 = 63,
  sym_identifier = 64,
  sym_command = 65,
  sym_new = 66,
  sym_module = 67,
  sym__input_entity = 68,
  sym_set = 69,
  sym__module_attr = 70,
  sym__input_attr = 71,
  sym__x_attr = 72,
  sym__y_attr = 73,
  sym_decorate = 74,
  sym__component = 75,
  sym_decoration = 76,
  sym_delete = 77,
  sym__guideline_id = 78,
  sym__input_id = 79,
  sym__output_id = 80,
  sym__parameter_id = 81,
  sym__light_id = 82,
  sym__widget_id = 83,
  sym__label_id = 84,
  sym__decoration_id = 85,
  sym__component_id = 86,
  sym_load = 87,
  sym_save = 88,
  sym_project = 89,
  sym__save_options = 90,
  sym_script = 91,
  sym_export = 92,
  sym_panel = 93,
  sym_svg = 94,
  sym_origin = 95,
  sym_background = 96,
  sym_guide = 97,
  sym_output = 98,
  sym_parameter = 99,
  sym_light = 100,
  sym_widget = 101,
  sym_label = 102,
  sym__label_string = 103,
  sym__label_absolute = 104,
  sym__label_relative = 105,
  sym__label_geometry = 106,
  sym_font = 107,
  sym_fontsize = 108,
  sym_halign = 109,
  sym_valign = 110,
  sym_colour = 111,
  sym__rgb = 112,
  sym__rgba = 113,
  sym_name = 114,
  sym_part = 115,
  sym_rgb = 116,
  sym_rgba = 117,
  sym_absolute = 118,
  sym__absolute = 119,
  sym__relative = 120,
  sym__x = 121,
  sym__y = 122,
  sym_x = 123,
  sym_y = 124,
  sym_xy = 125,
  sym__xy = 126,
  sym__offset = 127,
  sym_offset = 128,
  sym_string = 129,
  sym__string = 130,
  aux_sym_command_repeat1 = 131,
  alias_sym_reference = 132,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_set] = "set",
  [anon_sym_name] = "name",
  [anon_sym_height] = "height",
  [anon_sym_width] = "width",
  [anon_sym_x] = "x",
  [anon_sym_y] = "y",
  [anon_sym_part] = "part",
  [anon_sym_AT] = "@",
  [aux_sym__x_attr_token1] = "_x_attr_token1",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [aux_sym__x_attr_token2] = "_x_attr_token2",
  [aux_sym__x_attr_token3] = "_x_attr_token3",
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_bottom] = "bottom",
  [anon_sym_decorate] = "decorate",
  [anon_sym_LPAREN] = "(",
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
  [aux_sym__label_absolute_token1] = "_label_absolute_token1",
  [aux_sym__label_relative_token1] = "_label_relative_token1",
  [aux_sym_font_token1] = "font_token1",
  [aux_sym_fontsize_token1] = "fontsize_token1",
  [anon_sym_baseline] = "baseline",
  [aux_sym__rgb_token1] = "_rgb_token1",
  [aux_sym__rgba_token1] = "_rgba_token1",
  [aux_sym__absolute_token1] = "_absolute_token1",
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
  [sym__input_entity] = "input",
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__input_attr] = "_input_attr",
  [sym__x_attr] = "x",
  [sym__y_attr] = "y",
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
  [sym_part] = "part",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [sym_absolute] = "absolute",
  [sym__absolute] = "_absolute",
  [sym__relative] = "_relative",
  [sym__x] = "_x",
  [sym__y] = "_y",
  [sym_x] = "x",
  [sym_y] = "y",
  [sym_xy] = "xy",
  [sym__xy] = "_xy",
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
  [anon_sym_input] = anon_sym_input,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_part] = anon_sym_part,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__x_attr_token1] = aux_sym__x_attr_token1,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [aux_sym__x_attr_token2] = aux_sym__x_attr_token2,
  [aux_sym__x_attr_token3] = aux_sym__x_attr_token3,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_bottom] = anon_sym_bottom,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
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
  [aux_sym__label_absolute_token1] = aux_sym__label_absolute_token1,
  [aux_sym__label_relative_token1] = aux_sym__label_relative_token1,
  [aux_sym_font_token1] = aux_sym_font_token1,
  [aux_sym_fontsize_token1] = aux_sym_fontsize_token1,
  [anon_sym_baseline] = anon_sym_baseline,
  [aux_sym__rgb_token1] = aux_sym__rgb_token1,
  [aux_sym__rgba_token1] = aux_sym__rgba_token1,
  [aux_sym__absolute_token1] = aux_sym__absolute_token1,
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
  [sym__input_entity] = sym__input_entity,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym__input_attr] = sym__input_attr,
  [sym__x_attr] = sym_x,
  [sym__y_attr] = sym_y,
  [sym_decorate] = sym_decorate,
  [sym__component] = sym__component,
  [sym_decoration] = sym_decoration,
  [sym_delete] = sym_delete,
  [sym__guideline_id] = sym_guide,
  [sym__input_id] = sym__input_entity,
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
  [sym_part] = sym_part,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [sym_absolute] = sym_absolute,
  [sym__absolute] = sym__absolute,
  [sym__relative] = sym__relative,
  [sym__x] = sym__x,
  [sym__y] = sym__y,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [sym_xy] = sym_xy,
  [sym__xy] = sym__xy,
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
  [anon_sym_input] = {
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
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_part] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__x_attr_token1] = {
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
  [aux_sym__x_attr_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__x_attr_token3] = {
    .visible = false,
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
  [anon_sym_bottom] = {
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
  [anon_sym_baseline] = {
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
  [aux_sym__absolute_token1] = {
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
  [sym__input_entity] = {
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
  [sym__input_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__x_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__y_attr] = {
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
  [sym_part] = {
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
  [sym__absolute] = {
    .visible = false,
    .named = true,
  },
  [sym__relative] = {
    .visible = false,
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
  [sym_xy] = {
    .visible = true,
    .named = true,
  },
  [sym__xy] = {
    .visible = false,
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
  [24] = 21,
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
  [54] = 13,
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
  [141] = 13,
  [142] = 82,
  [143] = 83,
  [144] = 64,
  [145] = 56,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(245);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == ')') ADVANCE(359);
      if (lookahead == ',') ADVANCE(379);
      if (lookahead == '0') ADVANCE(271);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'g') ADVANCE(205);
      if (lookahead == 'h') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(102);
      if (lookahead == 'x') ADVANCE(263);
      if (lookahead == 'y') ADVANCE(265);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(427);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(429);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(428);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(423);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(423);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '8') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'U') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(138);
      END_STATE();
    case 21:
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(423);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(423);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(389);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(386);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(78);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(360);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(262);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 114:
      if (lookahead == 'j') ADVANCE(61);
      END_STATE();
    case 115:
      if (lookahead == 'k') ADVANCE(387);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(348);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(423);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(425);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(391);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(425);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == 'z') ADVANCE(107);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 210:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 211:
      if (lookahead == 'w') ADVANCE(246);
      END_STATE();
    case 212:
      if (lookahead == 'x') ADVANCE(167);
      END_STATE();
    case 213:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 232:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 233:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 234:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 235:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 236:
      if (eof) ADVANCE(245);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'd') ADVANCE(438);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == 'n') ADVANCE(439);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 237:
      if (eof) ADVANCE(245);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ',') ADVANCE(379);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(156);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 238:
      if (eof) ADVANCE(245);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 239:
      if (eof) ADVANCE(245);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == ',') ADVANCE(379);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(294);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 240:
      if (eof) ADVANCE(245);
      if (lookahead == ')') ADVANCE(359);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(240)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 241:
      if (eof) ADVANCE(245);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(438);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == 'p') ADVANCE(432);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == 'x') ADVANCE(264);
      if (lookahead == 'y') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(241)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 242:
      if (eof) ADVANCE(245);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(242)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 243:
      if (eof) ADVANCE(245);
      if (lookahead == '@') ADVANCE(269);
      if (lookahead == 'b') ADVANCE(325);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 244:
      if (eof) ADVANCE(245);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(138);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'H') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'H') ADVANCE(270);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == 'H') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(270);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'h') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'h') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 'l') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == 'o') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'f') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'g') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'h') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'l') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'm') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'n') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'v') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'w') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'x') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 'l') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
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
  [5] = {.lex_state = 239},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 237},
  [9] = {.lex_state = 243},
  [10] = {.lex_state = 242},
  [11] = {.lex_state = 238},
  [12] = {.lex_state = 237},
  [13] = {.lex_state = 241},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 240},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 237},
  [19] = {.lex_state = 236},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 240},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 237},
  [24] = {.lex_state = 237},
  [25] = {.lex_state = 237},
  [26] = {.lex_state = 238},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 236},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 238},
  [31] = {.lex_state = 238},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 237},
  [35] = {.lex_state = 238},
  [36] = {.lex_state = 238},
  [37] = {.lex_state = 237},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 238},
  [40] = {.lex_state = 238},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 238},
  [44] = {.lex_state = 238},
  [45] = {.lex_state = 240},
  [46] = {.lex_state = 237},
  [47] = {.lex_state = 238},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 238},
  [50] = {.lex_state = 242},
  [51] = {.lex_state = 238},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 244},
  [54] = {.lex_state = 236},
  [55] = {.lex_state = 244},
  [56] = {.lex_state = 236},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 242},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 236},
  [65] = {.lex_state = 238},
  [66] = {.lex_state = 238},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 238},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 238},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 236},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 236},
  [83] = {.lex_state = 236},
  [84] = {.lex_state = 240},
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
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 242},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 239},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 237},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 237},
  [149] = {.lex_state = 239},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 239},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 239},
  [156] = {.lex_state = 237},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 237},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 238},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 242},
  [168] = {.lex_state = 238},
  [169] = {.lex_state = 241},
  [170] = {.lex_state = 241},
  [171] = {.lex_state = 237},
  [172] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_part] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__x_attr_token1] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [aux_sym__x_attr_token2] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
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
    [aux_sym__label_absolute_token1] = ACTIONS(1),
    [aux_sym__label_relative_token1] = ACTIONS(1),
    [aux_sym_fontsize_token1] = ACTIONS(1),
    [anon_sym_baseline] = ACTIONS(1),
    [aux_sym__rgb_token1] = ACTIONS(1),
    [aux_sym__rgba_token1] = ACTIONS(1),
    [aux_sym__absolute_token1] = ACTIONS(1),
    [aux_sym__x_token1] = ACTIONS(1),
    [aux_sym__y_token1] = ACTIONS(1),
    [aux_sym__offset_token1] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [aux_sym__string_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(152),
    [sym_new] = STATE(7),
    [sym_set] = STATE(7),
    [sym_decorate] = STATE(7),
    [sym_delete] = STATE(7),
    [sym_load] = STATE(7),
    [sym_save] = STATE(7),
    [sym_export] = STATE(7),
    [aux_sym_command_repeat1] = STATE(7),
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
      anon_sym_module,
    ACTIONS(23), 1,
      anon_sym_input,
    ACTIONS(25), 1,
      anon_sym_output,
    ACTIONS(27), 1,
      anon_sym_parameter,
    ACTIONS(29), 1,
      anon_sym_light,
    ACTIONS(31), 1,
      anon_sym_widget,
    ACTIONS(33), 1,
      anon_sym_guide,
    ACTIONS(35), 1,
      anon_sym_label,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(106), 8,
      sym_module,
      sym__input_entity,
      sym_guide,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
  [45] = 10,
    ACTIONS(39), 1,
      anon_sym_input,
    ACTIONS(41), 1,
      anon_sym_output,
    ACTIONS(43), 1,
      anon_sym_parameter,
    ACTIONS(45), 1,
      anon_sym_light,
    ACTIONS(47), 1,
      anon_sym_widget,
    ACTIONS(49), 1,
      anon_sym_guide,
    ACTIONS(51), 1,
      anon_sym_label,
    ACTIONS(53), 1,
      anon_sym_decoration,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(122), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [90] = 7,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(59), 1,
      anon_sym_input,
    ACTIONS(61), 1,
      anon_sym_origin,
    ACTIONS(63), 1,
      anon_sym_background,
    STATE(20), 1,
      sym__input_id,
    STATE(86), 4,
      sym__module_attr,
      sym__input_attr,
      sym_origin,
      sym_background,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [122] = 6,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_AT,
    ACTIONS(71), 1,
      aux_sym__x_attr_token1,
    STATE(105), 1,
      sym__x_attr,
    ACTIONS(73), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(67), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [151] = 9,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_new,
    ACTIONS(80), 1,
      anon_sym_set,
    ACTIONS(83), 1,
      anon_sym_decorate,
    ACTIONS(86), 1,
      anon_sym_delete,
    ACTIONS(89), 1,
      anon_sym_load,
    ACTIONS(92), 1,
      anon_sym_save,
    ACTIONS(95), 1,
      anon_sym_export,
    STATE(6), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [186] = 9,
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
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(6), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [221] = 7,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(104), 1,
      aux_sym__absolute_token1,
    ACTIONS(106), 1,
      aux_sym__x_token1,
    STATE(31), 1,
      sym_xy,
    STATE(163), 1,
      sym__x,
    STATE(51), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(100), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [252] = 6,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      aux_sym__x_attr_token1,
    STATE(105), 1,
      sym__y_attr,
    ACTIONS(112), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(67), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [280] = 6,
    ACTIONS(106), 1,
      aux_sym__x_token1,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      aux_sym__label_relative_token1,
    STATE(158), 1,
      sym__x,
    STATE(94), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [308] = 8,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      aux_sym_font_token1,
    ACTIONS(126), 1,
      aux_sym__rgb_token1,
    ACTIONS(128), 1,
      aux_sym__rgba_token1,
    STATE(62), 1,
      sym_rgb,
    STATE(63), 1,
      sym_rgba,
    STATE(111), 1,
      sym_name,
    ACTIONS(122), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [339] = 7,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      aux_sym__x_token1,
    ACTIONS(136), 1,
      aux_sym__y_token1,
    STATE(57), 1,
      sym_x,
    STATE(58), 1,
      sym_y,
    STATE(113), 1,
      sym_absolute,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [368] = 3,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(140), 11,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_x,
      anon_sym_y,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [388] = 1,
    ACTIONS(144), 13,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_x,
      anon_sym_y,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [404] = 5,
    ACTIONS(148), 1,
      aux_sym__rgb_token1,
    ACTIONS(150), 1,
      aux_sym__rgba_token1,
    STATE(91), 1,
      sym_colour,
    STATE(52), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [428] = 3,
    STATE(95), 1,
      sym_halign,
    ACTIONS(154), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [448] = 4,
    ACTIONS(158), 1,
      anon_sym_project,
    ACTIONS(160), 1,
      anon_sym_script,
    STATE(128), 2,
      sym_project,
      sym_script,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [469] = 4,
    STATE(10), 1,
      sym__string,
    STATE(133), 1,
      sym__label_string,
    ACTIONS(164), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [490] = 5,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(101), 1,
      sym_string,
    ACTIONS(170), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(168), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [513] = 5,
    ACTIONS(176), 1,
      anon_sym_name,
    ACTIONS(178), 1,
      anon_sym_x,
    ACTIONS(180), 1,
      anon_sym_y,
    ACTIONS(182), 1,
      anon_sym_part,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [536] = 2,
    ACTIONS(186), 1,
      sym_width,
    ACTIONS(184), 10,
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
  [552] = 4,
    ACTIONS(190), 1,
      anon_sym_name,
    ACTIONS(192), 1,
      anon_sym_height,
    ACTIONS(194), 1,
      anon_sym_width,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [572] = 3,
    ACTIONS(198), 1,
      aux_sym__offset_token1,
    STATE(77), 1,
      sym_offset,
    ACTIONS(196), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [590] = 1,
    ACTIONS(184), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_AT,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym__absolute_token1,
      aux_sym__x_token1,
  [604] = 3,
    ACTIONS(198), 1,
      aux_sym__offset_token1,
    STATE(75), 1,
      sym_offset,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [622] = 4,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      aux_sym__offset_token1,
    STATE(65), 1,
      sym__offset,
    ACTIONS(204), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [642] = 4,
    ACTIONS(210), 1,
      anon_sym_timestamp,
    ACTIONS(212), 1,
      anon_sym_gzip,
    STATE(99), 1,
      sym__save_options,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [662] = 5,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      sym_identifier,
    STATE(100), 1,
      sym__component_id,
    ACTIONS(216), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [684] = 3,
    ACTIONS(224), 1,
      anon_sym_svg,
    STATE(97), 1,
      sym_svg,
    ACTIONS(222), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [701] = 4,
    ACTIONS(124), 1,
      aux_sym_font_token1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_name,
    ACTIONS(228), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [720] = 4,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      aux_sym_font_token1,
    STATE(124), 1,
      sym_part,
    ACTIONS(232), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [739] = 3,
    ACTIONS(238), 1,
      anon_sym_light,
    ACTIONS(240), 1,
      anon_sym_dark,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [756] = 6,
    ACTIONS(242), 1,
      anon_sym_input,
    ACTIONS(244), 1,
      anon_sym_output,
    ACTIONS(246), 1,
      anon_sym_parameter,
    ACTIONS(248), 1,
      anon_sym_light,
    ACTIONS(250), 1,
      anon_sym_widget,
    STATE(154), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [779] = 3,
    ACTIONS(136), 1,
      aux_sym__y_token1,
    STATE(85), 1,
      sym_y,
    ACTIONS(252), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [796] = 4,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      aux_sym_font_token1,
    STATE(115), 1,
      sym_font,
    ACTIONS(256), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [815] = 4,
    ACTIONS(258), 1,
      aux_sym_font_token1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_font,
    ACTIONS(262), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [834] = 3,
    ACTIONS(134), 1,
      aux_sym__x_token1,
    STATE(85), 1,
      sym_x,
    ACTIONS(252), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [851] = 3,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym__component,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [868] = 4,
    ACTIONS(124), 1,
      aux_sym_font_token1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_name,
    ACTIONS(270), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [887] = 4,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      aux_sym_font_token1,
    STATE(105), 1,
      sym_part,
    ACTIONS(67), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [906] = 3,
    ACTIONS(274), 1,
      anon_sym_project,
    ACTIONS(276), 1,
      anon_sym_script,
    ACTIONS(272), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [923] = 3,
    ACTIONS(280), 1,
      anon_sym_panel,
    STATE(129), 1,
      sym_panel,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [940] = 4,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      aux_sym_font_token1,
    STATE(105), 1,
      sym_name,
    ACTIONS(67), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [959] = 4,
    ACTIONS(258), 1,
      aux_sym_font_token1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_font,
    ACTIONS(284), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [978] = 3,
    ACTIONS(288), 1,
      sym_height,
    ACTIONS(290), 1,
      sym_width,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [995] = 3,
    ACTIONS(294), 1,
      aux_sym_fontsize_token1,
    STATE(104), 1,
      sym_fontsize,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1012] = 4,
    ACTIONS(124), 1,
      aux_sym_font_token1,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_name,
    ACTIONS(298), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1031] = 3,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_decoration,
    ACTIONS(300), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1048] = 4,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    STATE(8), 1,
      sym_name,
    ACTIONS(306), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1067] = 2,
    ACTIONS(312), 1,
      aux_sym__x_attr_token2,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1081] = 2,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1095] = 2,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1109] = 2,
    ACTIONS(324), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1123] = 3,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(140), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1139] = 2,
    ACTIONS(328), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1153] = 3,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(332), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1169] = 2,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1183] = 2,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1197] = 1,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1209] = 1,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1221] = 2,
    ACTIONS(348), 1,
      aux_sym__x_attr_token2,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1235] = 2,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1249] = 2,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1263] = 3,
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
  [1279] = 2,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1293] = 2,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1307] = 2,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(370), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1321] = 2,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1335] = 1,
    ACTIONS(378), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1347] = 1,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1359] = 1,
    ACTIONS(382), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1371] = 1,
    ACTIONS(384), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1383] = 2,
    ACTIONS(388), 1,
      anon_sym_timestamp,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1397] = 2,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1411] = 1,
    ACTIONS(394), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1423] = 3,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(398), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1439] = 1,
    ACTIONS(402), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1451] = 2,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(404), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1465] = 2,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(404), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1479] = 1,
    ACTIONS(410), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1491] = 2,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1505] = 3,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(418), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1521] = 3,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(424), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1537] = 2,
    ACTIONS(430), 1,
      sym_width,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1551] = 1,
    ACTIONS(432), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1562] = 1,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1573] = 1,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1584] = 1,
    ACTIONS(438), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1595] = 1,
    ACTIONS(440), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1606] = 1,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1617] = 1,
    ACTIONS(444), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1628] = 1,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1639] = 1,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1650] = 1,
    ACTIONS(450), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1661] = 1,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1672] = 1,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1683] = 1,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1694] = 1,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1705] = 1,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1716] = 1,
    ACTIONS(462), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1727] = 1,
    ACTIONS(464), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1738] = 1,
    ACTIONS(466), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1749] = 1,
    ACTIONS(468), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1760] = 1,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1771] = 1,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1782] = 1,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1793] = 1,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1804] = 1,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1815] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1826] = 1,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1837] = 1,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1848] = 1,
    ACTIONS(480), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1859] = 1,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1870] = 1,
    ACTIONS(482), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1881] = 1,
    ACTIONS(484), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1892] = 1,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1903] = 1,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1914] = 1,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1925] = 1,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1936] = 1,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1947] = 1,
    ACTIONS(494), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1958] = 1,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1969] = 1,
    ACTIONS(498), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1980] = 1,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1991] = 1,
    ACTIONS(502), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2002] = 1,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2013] = 1,
    ACTIONS(506), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2024] = 1,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2035] = 1,
    ACTIONS(510), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2046] = 1,
    ACTIONS(512), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2057] = 1,
    ACTIONS(514), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2068] = 1,
    ACTIONS(516), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2079] = 1,
    ACTIONS(518), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2090] = 1,
    ACTIONS(520), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2101] = 1,
    ACTIONS(522), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2112] = 2,
    STATE(92), 1,
      sym_valign,
    ACTIONS(524), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2122] = 1,
    ACTIONS(526), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [2130] = 3,
    ACTIONS(528), 1,
      aux_sym__rgb_token1,
    ACTIONS(530), 1,
      aux_sym__rgba_token1,
    STATE(89), 2,
      sym__rgb,
      sym__rgba,
  [2141] = 3,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      aux_sym__offset_token1,
    STATE(164), 1,
      sym__offset,
  [2151] = 2,
    ACTIONS(536), 1,
      aux_sym_font_token1,
    STATE(96), 1,
      sym_name,
  [2158] = 2,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      sym_identifier,
  [2165] = 2,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      sym_identifier,
  [2172] = 2,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      sym_identifier,
  [2179] = 2,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      sym_identifier,
  [2186] = 2,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      sym_identifier,
  [2193] = 2,
    ACTIONS(548), 1,
      aux_sym__y_token1,
    STATE(35), 1,
      sym__y,
  [2200] = 2,
    ACTIONS(536), 1,
      aux_sym_font_token1,
    STATE(114), 1,
      sym_name,
  [2207] = 2,
    ACTIONS(548), 1,
      aux_sym__y_token1,
    STATE(74), 1,
      sym__y,
  [2214] = 2,
    ACTIONS(550), 1,
      aux_sym__rgb_token1,
    STATE(130), 1,
      sym_rgb,
  [2221] = 2,
    ACTIONS(128), 1,
      aux_sym__rgba_token1,
    STATE(130), 1,
      sym_rgba,
  [2228] = 1,
    ACTIONS(312), 1,
      aux_sym__x_attr_token1,
  [2232] = 1,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [2236] = 1,
    ACTIONS(554), 1,
      anon_sym_gzip,
  [2240] = 1,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
  [2244] = 1,
    ACTIONS(348), 1,
      aux_sym__x_attr_token1,
  [2248] = 1,
    ACTIONS(558), 1,
      aux_sym__absolute_token1,
  [2252] = 1,
    ACTIONS(560), 1,
      anon_sym_COMMA,
  [2256] = 1,
    ACTIONS(562), 1,
      anon_sym_COMMA,
  [2260] = 1,
    ACTIONS(564), 1,
      aux_sym__absolute_token1,
  [2264] = 1,
    ACTIONS(566), 1,
      anon_sym_COMMA,
  [2268] = 1,
    ACTIONS(568), 1,
      aux_sym__label_absolute_token1,
  [2272] = 1,
    ACTIONS(554), 1,
      anon_sym_timestamp,
  [2276] = 1,
    ACTIONS(570), 1,
      anon_sym_COMMA,
  [2280] = 1,
    ACTIONS(572), 1,
      anon_sym_COMMA,
  [2284] = 1,
    ACTIONS(574), 1,
      anon_sym_COMMA,
  [2288] = 1,
    ACTIONS(576), 1,
      anon_sym_COMMA,
  [2292] = 1,
    ACTIONS(578), 1,
      aux_sym__label_relative_token1,
  [2296] = 1,
    ACTIONS(580), 1,
      aux_sym__label_absolute_token1,
  [2300] = 1,
    ACTIONS(582), 1,
      sym_width,
  [2304] = 1,
    ACTIONS(582), 1,
      sym_height,
  [2308] = 1,
    ACTIONS(584), 1,
      aux_sym__absolute_token1,
  [2312] = 1,
    ACTIONS(586), 1,
      anon_sym_with,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 221,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 280,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 339,
  [SMALL_STATE(13)] = 368,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 404,
  [SMALL_STATE(16)] = 428,
  [SMALL_STATE(17)] = 448,
  [SMALL_STATE(18)] = 469,
  [SMALL_STATE(19)] = 490,
  [SMALL_STATE(20)] = 513,
  [SMALL_STATE(21)] = 536,
  [SMALL_STATE(22)] = 552,
  [SMALL_STATE(23)] = 572,
  [SMALL_STATE(24)] = 590,
  [SMALL_STATE(25)] = 604,
  [SMALL_STATE(26)] = 622,
  [SMALL_STATE(27)] = 642,
  [SMALL_STATE(28)] = 662,
  [SMALL_STATE(29)] = 684,
  [SMALL_STATE(30)] = 701,
  [SMALL_STATE(31)] = 720,
  [SMALL_STATE(32)] = 739,
  [SMALL_STATE(33)] = 756,
  [SMALL_STATE(34)] = 779,
  [SMALL_STATE(35)] = 796,
  [SMALL_STATE(36)] = 815,
  [SMALL_STATE(37)] = 834,
  [SMALL_STATE(38)] = 851,
  [SMALL_STATE(39)] = 868,
  [SMALL_STATE(40)] = 887,
  [SMALL_STATE(41)] = 906,
  [SMALL_STATE(42)] = 923,
  [SMALL_STATE(43)] = 940,
  [SMALL_STATE(44)] = 959,
  [SMALL_STATE(45)] = 978,
  [SMALL_STATE(46)] = 995,
  [SMALL_STATE(47)] = 1012,
  [SMALL_STATE(48)] = 1031,
  [SMALL_STATE(49)] = 1048,
  [SMALL_STATE(50)] = 1067,
  [SMALL_STATE(51)] = 1081,
  [SMALL_STATE(52)] = 1095,
  [SMALL_STATE(53)] = 1109,
  [SMALL_STATE(54)] = 1123,
  [SMALL_STATE(55)] = 1139,
  [SMALL_STATE(56)] = 1153,
  [SMALL_STATE(57)] = 1169,
  [SMALL_STATE(58)] = 1183,
  [SMALL_STATE(59)] = 1197,
  [SMALL_STATE(60)] = 1209,
  [SMALL_STATE(61)] = 1221,
  [SMALL_STATE(62)] = 1235,
  [SMALL_STATE(63)] = 1249,
  [SMALL_STATE(64)] = 1263,
  [SMALL_STATE(65)] = 1279,
  [SMALL_STATE(66)] = 1293,
  [SMALL_STATE(67)] = 1307,
  [SMALL_STATE(68)] = 1321,
  [SMALL_STATE(69)] = 1335,
  [SMALL_STATE(70)] = 1347,
  [SMALL_STATE(71)] = 1359,
  [SMALL_STATE(72)] = 1371,
  [SMALL_STATE(73)] = 1383,
  [SMALL_STATE(74)] = 1397,
  [SMALL_STATE(75)] = 1411,
  [SMALL_STATE(76)] = 1423,
  [SMALL_STATE(77)] = 1439,
  [SMALL_STATE(78)] = 1451,
  [SMALL_STATE(79)] = 1465,
  [SMALL_STATE(80)] = 1479,
  [SMALL_STATE(81)] = 1491,
  [SMALL_STATE(82)] = 1505,
  [SMALL_STATE(83)] = 1521,
  [SMALL_STATE(84)] = 1537,
  [SMALL_STATE(85)] = 1551,
  [SMALL_STATE(86)] = 1562,
  [SMALL_STATE(87)] = 1573,
  [SMALL_STATE(88)] = 1584,
  [SMALL_STATE(89)] = 1595,
  [SMALL_STATE(90)] = 1606,
  [SMALL_STATE(91)] = 1617,
  [SMALL_STATE(92)] = 1628,
  [SMALL_STATE(93)] = 1639,
  [SMALL_STATE(94)] = 1650,
  [SMALL_STATE(95)] = 1661,
  [SMALL_STATE(96)] = 1672,
  [SMALL_STATE(97)] = 1683,
  [SMALL_STATE(98)] = 1694,
  [SMALL_STATE(99)] = 1705,
  [SMALL_STATE(100)] = 1716,
  [SMALL_STATE(101)] = 1727,
  [SMALL_STATE(102)] = 1738,
  [SMALL_STATE(103)] = 1749,
  [SMALL_STATE(104)] = 1760,
  [SMALL_STATE(105)] = 1771,
  [SMALL_STATE(106)] = 1782,
  [SMALL_STATE(107)] = 1793,
  [SMALL_STATE(108)] = 1804,
  [SMALL_STATE(109)] = 1815,
  [SMALL_STATE(110)] = 1826,
  [SMALL_STATE(111)] = 1837,
  [SMALL_STATE(112)] = 1848,
  [SMALL_STATE(113)] = 1859,
  [SMALL_STATE(114)] = 1870,
  [SMALL_STATE(115)] = 1881,
  [SMALL_STATE(116)] = 1892,
  [SMALL_STATE(117)] = 1903,
  [SMALL_STATE(118)] = 1914,
  [SMALL_STATE(119)] = 1925,
  [SMALL_STATE(120)] = 1936,
  [SMALL_STATE(121)] = 1947,
  [SMALL_STATE(122)] = 1958,
  [SMALL_STATE(123)] = 1969,
  [SMALL_STATE(124)] = 1980,
  [SMALL_STATE(125)] = 1991,
  [SMALL_STATE(126)] = 2002,
  [SMALL_STATE(127)] = 2013,
  [SMALL_STATE(128)] = 2024,
  [SMALL_STATE(129)] = 2035,
  [SMALL_STATE(130)] = 2046,
  [SMALL_STATE(131)] = 2057,
  [SMALL_STATE(132)] = 2068,
  [SMALL_STATE(133)] = 2079,
  [SMALL_STATE(134)] = 2090,
  [SMALL_STATE(135)] = 2101,
  [SMALL_STATE(136)] = 2112,
  [SMALL_STATE(137)] = 2122,
  [SMALL_STATE(138)] = 2130,
  [SMALL_STATE(139)] = 2141,
  [SMALL_STATE(140)] = 2151,
  [SMALL_STATE(141)] = 2158,
  [SMALL_STATE(142)] = 2165,
  [SMALL_STATE(143)] = 2172,
  [SMALL_STATE(144)] = 2179,
  [SMALL_STATE(145)] = 2186,
  [SMALL_STATE(146)] = 2193,
  [SMALL_STATE(147)] = 2200,
  [SMALL_STATE(148)] = 2207,
  [SMALL_STATE(149)] = 2214,
  [SMALL_STATE(150)] = 2221,
  [SMALL_STATE(151)] = 2228,
  [SMALL_STATE(152)] = 2232,
  [SMALL_STATE(153)] = 2236,
  [SMALL_STATE(154)] = 2240,
  [SMALL_STATE(155)] = 2244,
  [SMALL_STATE(156)] = 2248,
  [SMALL_STATE(157)] = 2252,
  [SMALL_STATE(158)] = 2256,
  [SMALL_STATE(159)] = 2260,
  [SMALL_STATE(160)] = 2264,
  [SMALL_STATE(161)] = 2268,
  [SMALL_STATE(162)] = 2272,
  [SMALL_STATE(163)] = 2276,
  [SMALL_STATE(164)] = 2280,
  [SMALL_STATE(165)] = 2284,
  [SMALL_STATE(166)] = 2288,
  [SMALL_STATE(167)] = 2292,
  [SMALL_STATE(168)] = 2296,
  [SMALL_STATE(169)] = 2300,
  [SMALL_STATE(170)] = 2304,
  [SMALL_STATE(171)] = 2308,
  [SMALL_STATE(172)] = 2312,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_attr, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(38),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(41),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [552] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
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
