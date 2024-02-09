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
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
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
  anon_sym_xy = 12,
  anon_sym_part = 13,
  anon_sym_AT = 14,
  aux_sym__x_attr_token1 = 15,
  anon_sym_left = 16,
  anon_sym_centre = 17,
  anon_sym_center = 18,
  anon_sym_right = 19,
  aux_sym__x_attr_token2 = 20,
  aux_sym__x_attr_token3 = 21,
  anon_sym_top = 22,
  anon_sym_middle = 23,
  anon_sym_bottom = 24,
  anon_sym_COMMA = 25,
  anon_sym_decorate = 26,
  anon_sym_LPAREN = 27,
  anon_sym_output = 28,
  anon_sym_parameter = 29,
  anon_sym_light = 30,
  anon_sym_widget = 31,
  anon_sym_RPAREN = 32,
  anon_sym_with = 33,
  anon_sym_delete = 34,
  anon_sym_guide = 35,
  anon_sym_label = 36,
  anon_sym_decoration = 37,
  anon_sym_load = 38,
  anon_sym_project = 39,
  anon_sym_script = 40,
  anon_sym_save = 41,
  anon_sym_timestamp = 42,
  anon_sym_gzip = 43,
  anon_sym_export = 44,
  anon_sym_panel = 45,
  anon_sym_svg = 46,
  anon_sym_dark = 47,
  anon_sym_origin = 48,
  anon_sym_background = 49,
  aux_sym__label_absolute_token1 = 50,
  aux_sym__label_relative_token1 = 51,
  aux_sym_font_token1 = 52,
  aux_sym_fontsize_token1 = 53,
  anon_sym_baseline = 54,
  aux_sym__rgb_token1 = 55,
  aux_sym__rgba_token1 = 56,
  aux_sym__absolute_token1 = 57,
  aux_sym__x_token1 = 58,
  aux_sym__y_token1 = 59,
  aux_sym__offset_token1 = 60,
  aux_sym_string_token1 = 61,
  aux_sym_string_token2 = 62,
  aux_sym__string_token1 = 63,
  aux_sym__string_token2 = 64,
  sym_identifier = 65,
  sym_command = 66,
  sym_new = 67,
  sym_module = 68,
  sym__input_entity = 69,
  sym_set = 70,
  sym__module_attr = 71,
  sym__input_attr = 72,
  sym__x_attr = 73,
  sym__y_attr = 74,
  sym__xy_attr = 75,
  sym_decorate = 76,
  sym__component = 77,
  sym_decoration = 78,
  sym_delete = 79,
  sym__guideline_id = 80,
  sym__input_id = 81,
  sym__output_id = 82,
  sym__parameter_id = 83,
  sym__light_id = 84,
  sym__widget_id = 85,
  sym__label_id = 86,
  sym__decoration_id = 87,
  sym__component_id = 88,
  sym_load = 89,
  sym_save = 90,
  sym_project = 91,
  sym__save_options = 92,
  sym_script = 93,
  sym_export = 94,
  sym_panel = 95,
  sym_svg = 96,
  sym_origin = 97,
  sym_background = 98,
  sym_guide = 99,
  sym_output = 100,
  sym_parameter = 101,
  sym_light = 102,
  sym_widget = 103,
  sym_label = 104,
  sym__label_string = 105,
  sym__label_absolute = 106,
  sym__label_relative = 107,
  sym__label_geometry = 108,
  sym_font = 109,
  sym_fontsize = 110,
  sym_halign = 111,
  sym_valign = 112,
  sym_colour = 113,
  sym__rgb = 114,
  sym__rgba = 115,
  sym_name = 116,
  sym_part = 117,
  sym_rgb = 118,
  sym_rgba = 119,
  sym_absolute = 120,
  sym__absolute = 121,
  sym__relative = 122,
  sym__x = 123,
  sym__y = 124,
  sym_x = 125,
  sym_y = 126,
  sym_xy = 127,
  sym__xy = 128,
  sym__offset = 129,
  sym_offset = 130,
  sym_string = 131,
  sym__string = 132,
  aux_sym_command_repeat1 = 133,
  alias_sym_reference = 134,
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
  [anon_sym_xy] = "xy",
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
  [anon_sym_COMMA] = ",",
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
  [sym__xy_attr] = "xy",
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
  [anon_sym_xy] = anon_sym_xy,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym__xy_attr] = sym_xy,
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
  [anon_sym_xy] = {
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
  [anon_sym_COMMA] = {
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
  [sym__xy_attr] = {
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
  [24] = 24,
  [25] = 25,
  [26] = 25,
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
  [83] = 15,
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
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 80,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 87,
  [157] = 86,
  [158] = 81,
  [159] = 15,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(246);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == ')') ADVANCE(363);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '0') ADVANCE(274);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'g') ADVANCE(206);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(264);
      if (lookahead == 'y') ADVANCE(266);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(430);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(432);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(429);
      if (lookahead == 'm') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'H') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(254);
      if (lookahead == 'U') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(139);
      END_STATE();
    case 21:
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == 'b') ADVANCE(328);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(195);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(389);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(79);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(263);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(189);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 115:
      if (lookahead == 'j') ADVANCE(62);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(390);
      END_STATE();
    case 117:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(393);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(429);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(394);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == 'z') ADVANCE(108);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 212:
      if (lookahead == 'w') ADVANCE(247);
      END_STATE();
    case 213:
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(429);
      if (lookahead == 'm') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(424);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 233:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 234:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 235:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 236:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 237:
      if (eof) ADVANCE(246);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == 's') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 238:
      if (eof) ADVANCE(246);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(157);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 239:
      if (eof) ADVANCE(246);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 240:
      if (eof) ADVANCE(246);
      if (lookahead == ')') ADVANCE(363);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(240)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 241:
      if (eof) ADVANCE(246);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == 's') ADVANCE(297);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(241)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 242:
      if (eof) ADVANCE(246);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'p') ADVANCE(435);
      if (lookahead == 's') ADVANCE(436);
      if (lookahead == 'x') ADVANCE(265);
      if (lookahead == 'y') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(242)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 243:
      if (eof) ADVANCE(246);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 244:
      if (eof) ADVANCE(246);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == 'b') ADVANCE(328);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 245:
      if (eof) ADVANCE(246);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(139);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'H') ADVANCE(273);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'H') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'H') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == 'H') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'H') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(273);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(273);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(273);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(273);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'H') ADVANCE(292);
      if (lookahead == 'h') ADVANCE(429);
      if (lookahead == 'm') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == 'H') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(292);
      if (lookahead == 'h') ADVANCE(429);
      if (lookahead == 'm') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'c') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'f') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'g') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'h') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'l') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'm') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'n') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'v') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'w') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'x') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'e') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
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
  [6] = {.lex_state = 238},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 241},
  [9] = {.lex_state = 241},
  [10] = {.lex_state = 243},
  [11] = {.lex_state = 244},
  [12] = {.lex_state = 238},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 239},
  [15] = {.lex_state = 242},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 240},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 237},
  [21] = {.lex_state = 238},
  [22] = {.lex_state = 238},
  [23] = {.lex_state = 239},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 238},
  [26] = {.lex_state = 240},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 238},
  [29] = {.lex_state = 237},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 238},
  [32] = {.lex_state = 239},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 239},
  [35] = {.lex_state = 239},
  [36] = {.lex_state = 239},
  [37] = {.lex_state = 239},
  [38] = {.lex_state = 239},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 239},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 239},
  [43] = {.lex_state = 238},
  [44] = {.lex_state = 238},
  [45] = {.lex_state = 240},
  [46] = {.lex_state = 239},
  [47] = {.lex_state = 239},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 243},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 239},
  [58] = {.lex_state = 239},
  [59] = {.lex_state = 243},
  [60] = {.lex_state = 239},
  [61] = {.lex_state = 239},
  [62] = {.lex_state = 245},
  [63] = {.lex_state = 245},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 243},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 243},
  [76] = {.lex_state = 237},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 239},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 237},
  [81] = {.lex_state = 237},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 237},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 240},
  [86] = {.lex_state = 237},
  [87] = {.lex_state = 237},
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
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 21},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 243},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 238},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 238},
  [152] = {.lex_state = 238},
  [153] = {.lex_state = 241},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 238},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 243},
  [163] = {.lex_state = 241},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 239},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 241},
  [169] = {.lex_state = 241},
  [170] = {.lex_state = 241},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 238},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 241},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 238},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 239},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 238},
  [185] = {.lex_state = 242},
  [186] = {.lex_state = 242},
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
    [anon_sym_xy] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_command] = STATE(179),
    [sym_new] = STATE(5),
    [sym_set] = STATE(5),
    [sym_decorate] = STATE(5),
    [sym_delete] = STATE(5),
    [sym_load] = STATE(5),
    [sym_save] = STATE(5),
    [sym_export] = STATE(5),
    [aux_sym_command_repeat1] = STATE(5),
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
    STATE(107), 8,
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
    STATE(132), 8,
      sym_module,
      sym__input_entity,
      sym_guide,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
  [90] = 7,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(59), 1,
      anon_sym_input,
    ACTIONS(61), 1,
      anon_sym_origin,
    ACTIONS(63), 1,
      anon_sym_background,
    STATE(18), 1,
      sym__input_id,
    STATE(130), 4,
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
  [122] = 9,
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
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(7), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [157] = 7,
    ACTIONS(69), 1,
      anon_sym_AT,
    ACTIONS(71), 1,
      aux_sym__absolute_token1,
    ACTIONS(73), 1,
      aux_sym__x_token1,
    STATE(32), 1,
      sym_xy,
    STATE(160), 1,
      sym__x,
    STATE(78), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [188] = 9,
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
    STATE(7), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [223] = 6,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(104), 1,
      aux_sym__x_attr_token1,
    STATE(106), 1,
      sym__x_attr,
    ACTIONS(106), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(100), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [252] = 6,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      aux_sym__x_attr_token1,
    STATE(106), 1,
      sym__xy_attr,
    ACTIONS(112), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(100), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [281] = 6,
    ACTIONS(73), 1,
      aux_sym__x_token1,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      aux_sym__label_relative_token1,
    STATE(180), 1,
      sym__x,
    STATE(101), 3,
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
  [309] = 6,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      aux_sym__x_attr_token1,
    STATE(106), 1,
      sym__y_attr,
    ACTIONS(124), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(100), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [337] = 7,
    ACTIONS(128), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      aux_sym__x_token1,
    ACTIONS(132), 1,
      aux_sym__y_token1,
    STATE(64), 1,
      sym_x,
    STATE(65), 1,
      sym_y,
    STATE(129), 1,
      sym_absolute,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [366] = 2,
    ACTIONS(136), 1,
      anon_sym_x,
    ACTIONS(134), 13,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [385] = 8,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      aux_sym_font_token1,
    ACTIONS(144), 1,
      aux_sym__rgb_token1,
    ACTIONS(146), 1,
      aux_sym__rgba_token1,
    STATE(69), 1,
      sym_rgb,
    STATE(70), 1,
      sym_rgba,
    STATE(120), 1,
      sym_name,
    ACTIONS(140), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [416] = 3,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(150), 12,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_x,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [437] = 5,
    ACTIONS(156), 1,
      aux_sym__rgb_token1,
    ACTIONS(158), 1,
      aux_sym__rgba_token1,
    STATE(94), 1,
      sym_colour,
    STATE(53), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(154), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [461] = 3,
    STATE(99), 1,
      sym_halign,
    ACTIONS(162), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(160), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [481] = 6,
    ACTIONS(166), 1,
      anon_sym_name,
    ACTIONS(168), 1,
      anon_sym_x,
    ACTIONS(170), 1,
      anon_sym_y,
    ACTIONS(172), 1,
      anon_sym_xy,
    ACTIONS(174), 1,
      anon_sym_part,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [507] = 4,
    ACTIONS(178), 1,
      anon_sym_project,
    ACTIONS(180), 1,
      anon_sym_script,
    STATE(125), 2,
      sym_project,
      sym_script,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [528] = 5,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(123), 1,
      sym_string,
    ACTIONS(186), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(184), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [551] = 4,
    STATE(10), 1,
      sym__string,
    STATE(140), 1,
      sym__label_string,
    ACTIONS(192), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [572] = 3,
    ACTIONS(196), 1,
      aux_sym__offset_token1,
    STATE(84), 1,
      sym_offset,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [590] = 4,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      aux_sym__offset_token1,
    STATE(57), 1,
      sym__offset,
    ACTIONS(200), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [610] = 4,
    ACTIONS(206), 1,
      anon_sym_name,
    ACTIONS(208), 1,
      anon_sym_height,
    ACTIONS(210), 1,
      anon_sym_width,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [630] = 1,
    ACTIONS(212), 11,
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
  [644] = 2,
    ACTIONS(214), 1,
      sym_width,
    ACTIONS(212), 10,
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
  [660] = 4,
    ACTIONS(218), 1,
      anon_sym_timestamp,
    ACTIONS(220), 1,
      anon_sym_gzip,
    STATE(92), 1,
      sym__save_options,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [680] = 3,
    ACTIONS(196), 1,
      aux_sym__offset_token1,
    STATE(82), 1,
      sym_offset,
    ACTIONS(222), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [698] = 5,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(90), 1,
      sym__component_id,
    ACTIONS(226), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [720] = 3,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym__component,
    ACTIONS(232), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [737] = 3,
    ACTIONS(132), 1,
      aux_sym__y_token1,
    STATE(121), 1,
      sym_y,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [754] = 4,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      aux_sym_font_token1,
    STATE(118), 1,
      sym_part,
    ACTIONS(240), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [773] = 3,
    ACTIONS(246), 1,
      anon_sym_light,
    ACTIONS(248), 1,
      anon_sym_dark,
    ACTIONS(244), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [790] = 4,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 1,
      aux_sym_font_token1,
    STATE(135), 1,
      sym_font,
    ACTIONS(252), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [809] = 4,
    ACTIONS(254), 1,
      aux_sym_font_token1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      sym_font,
    ACTIONS(258), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [828] = 4,
    ACTIONS(142), 1,
      aux_sym_font_token1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_name,
    ACTIONS(262), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [847] = 4,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      aux_sym_font_token1,
    STATE(106), 1,
      sym_part,
    ACTIONS(100), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [866] = 4,
    ACTIONS(142), 1,
      aux_sym_font_token1,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      sym_name,
    ACTIONS(266), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [885] = 6,
    ACTIONS(268), 1,
      anon_sym_input,
    ACTIONS(270), 1,
      anon_sym_output,
    ACTIONS(272), 1,
      anon_sym_parameter,
    ACTIONS(274), 1,
      anon_sym_light,
    ACTIONS(276), 1,
      anon_sym_widget,
    STATE(177), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [908] = 4,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      aux_sym_font_token1,
    STATE(106), 1,
      sym_name,
    ACTIONS(100), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [927] = 3,
    ACTIONS(280), 1,
      anon_sym_svg,
    STATE(95), 1,
      sym_svg,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [944] = 4,
    ACTIONS(254), 1,
      aux_sym_font_token1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym_font,
    ACTIONS(284), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [963] = 3,
    ACTIONS(288), 1,
      aux_sym_fontsize_token1,
    STATE(105), 1,
      sym_fontsize,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [980] = 3,
    ACTIONS(130), 1,
      aux_sym__x_token1,
    STATE(121), 1,
      sym_x,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [997] = 3,
    ACTIONS(292), 1,
      sym_height,
    ACTIONS(294), 1,
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
  [1014] = 4,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      aux_sym_font_token1,
    STATE(6), 1,
      sym_name,
    ACTIONS(298), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1033] = 4,
    ACTIONS(142), 1,
      aux_sym_font_token1,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_name,
    ACTIONS(304), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1052] = 3,
    ACTIONS(308), 1,
      anon_sym_panel,
    STATE(141), 1,
      sym_panel,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1069] = 3,
    ACTIONS(312), 1,
      anon_sym_project,
    ACTIONS(314), 1,
      anon_sym_script,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1086] = 3,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_decoration,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1103] = 2,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1117] = 2,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1131] = 2,
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
  [1145] = 2,
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
  [1159] = 2,
    ACTIONS(338), 1,
      aux_sym__x_attr_token2,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1173] = 2,
    ACTIONS(342), 1,
      anon_sym_timestamp,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1187] = 2,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1201] = 2,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1215] = 2,
    ACTIONS(354), 1,
      aux_sym__x_attr_token2,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1229] = 2,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1243] = 2,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1257] = 2,
    ACTIONS(366), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1271] = 2,
    ACTIONS(370), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1285] = 2,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1299] = 2,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1313] = 1,
    ACTIONS(378), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1325] = 1,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1337] = 2,
    ACTIONS(384), 1,
      aux_sym__x_attr_token2,
    ACTIONS(382), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1351] = 2,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1365] = 2,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1379] = 1,
    ACTIONS(392), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1391] = 1,
    ACTIONS(394), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1403] = 1,
    ACTIONS(396), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1415] = 1,
    ACTIONS(398), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1427] = 2,
    ACTIONS(402), 1,
      aux_sym__x_attr_token2,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1441] = 3,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(406), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1457] = 1,
    ACTIONS(410), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1469] = 2,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1483] = 2,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1497] = 3,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 1,
      sym_identifier,
    ACTIONS(420), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1513] = 3,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(426), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1529] = 1,
    ACTIONS(430), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1541] = 3,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(150), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1557] = 1,
    ACTIONS(432), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1569] = 2,
    ACTIONS(436), 1,
      sym_width,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1583] = 3,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(440), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1599] = 3,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(446), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1615] = 1,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1626] = 1,
    ACTIONS(450), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1637] = 1,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1648] = 1,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1659] = 1,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1670] = 1,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1681] = 1,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1692] = 1,
    ACTIONS(462), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1703] = 1,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1714] = 1,
    ACTIONS(464), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1725] = 1,
    ACTIONS(466), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1736] = 1,
    ACTIONS(468), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1747] = 1,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1758] = 1,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1769] = 1,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1780] = 1,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1791] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1802] = 1,
    ACTIONS(480), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1813] = 1,
    ACTIONS(482), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1824] = 1,
    ACTIONS(484), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1835] = 1,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1846] = 1,
    ACTIONS(382), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1857] = 1,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1868] = 1,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1879] = 1,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1890] = 1,
    ACTIONS(494), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1901] = 1,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1912] = 1,
    ACTIONS(498), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1923] = 1,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1934] = 1,
    ACTIONS(502), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1945] = 1,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1956] = 1,
    ACTIONS(506), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1967] = 1,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1978] = 1,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1989] = 1,
    ACTIONS(510), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2000] = 1,
    ACTIONS(512), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2011] = 1,
    ACTIONS(514), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2022] = 1,
    ACTIONS(516), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2033] = 1,
    ACTIONS(518), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2044] = 1,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2055] = 1,
    ACTIONS(520), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2066] = 1,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2077] = 1,
    ACTIONS(522), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2088] = 1,
    ACTIONS(524), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2099] = 1,
    ACTIONS(526), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2110] = 1,
    ACTIONS(528), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2121] = 1,
    ACTIONS(530), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2132] = 1,
    ACTIONS(532), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2143] = 1,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2154] = 1,
    ACTIONS(534), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2165] = 1,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2176] = 1,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2187] = 1,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2198] = 1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2209] = 3,
    ACTIONS(354), 1,
      aux_sym__x_attr_token1,
    ACTIONS(544), 1,
      anon_sym_AT,
    ACTIONS(546), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2222] = 3,
    ACTIONS(548), 1,
      anon_sym_AT,
    ACTIONS(550), 1,
      aux_sym__x_attr_token1,
    ACTIONS(552), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2235] = 1,
    ACTIONS(554), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [2243] = 2,
    STATE(97), 1,
      sym_valign,
    ACTIONS(556), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2253] = 3,
    ACTIONS(558), 1,
      aux_sym__rgb_token1,
    ACTIONS(560), 1,
      aux_sym__rgba_token1,
    STATE(102), 2,
      sym__rgb,
      sym__rgba,
  [2264] = 3,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      aux_sym__offset_token1,
    STATE(175), 1,
      sym__offset,
  [2274] = 2,
    ACTIONS(566), 1,
      aux_sym_font_token1,
    STATE(119), 1,
      sym_name,
  [2281] = 2,
    ACTIONS(566), 1,
      aux_sym_font_token1,
    STATE(103), 1,
      sym_name,
  [2288] = 2,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(568), 1,
      sym_identifier,
  [2295] = 2,
    ACTIONS(570), 1,
      aux_sym__y_token1,
    STATE(35), 1,
      sym__y,
  [2302] = 2,
    ACTIONS(570), 1,
      aux_sym__y_token1,
    STATE(60), 1,
      sym__y,
  [2309] = 2,
    ACTIONS(572), 1,
      aux_sym__x_attr_token2,
    ACTIONS(574), 1,
      anon_sym_COMMA,
  [2316] = 2,
    ACTIONS(146), 1,
      aux_sym__rgba_token1,
    STATE(122), 1,
      sym_rgba,
  [2323] = 2,
    ACTIONS(576), 1,
      aux_sym__rgb_token1,
    STATE(122), 1,
      sym_rgb,
  [2330] = 2,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(578), 1,
      sym_identifier,
  [2337] = 2,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(580), 1,
      sym_identifier,
  [2344] = 2,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(582), 1,
      sym_identifier,
  [2351] = 2,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      sym_identifier,
  [2358] = 1,
    ACTIONS(586), 1,
      anon_sym_COMMA,
  [2362] = 1,
    ACTIONS(588), 1,
      anon_sym_COMMA,
  [2366] = 1,
    ACTIONS(590), 1,
      aux_sym__label_relative_token1,
  [2370] = 1,
    ACTIONS(338), 1,
      aux_sym__x_attr_token1,
  [2374] = 1,
    ACTIONS(592), 1,
      anon_sym_gzip,
  [2378] = 1,
    ACTIONS(594), 1,
      aux_sym__label_absolute_token1,
  [2382] = 1,
    ACTIONS(592), 1,
      anon_sym_timestamp,
  [2386] = 1,
    ACTIONS(574), 1,
      anon_sym_COMMA,
  [2390] = 1,
    ACTIONS(402), 1,
      aux_sym__x_attr_token1,
  [2394] = 1,
    ACTIONS(384), 1,
      aux_sym__x_attr_token1,
  [2398] = 1,
    ACTIONS(354), 1,
      aux_sym__x_attr_token1,
  [2402] = 1,
    ACTIONS(596), 1,
      anon_sym_COMMA,
  [2406] = 1,
    ACTIONS(598), 1,
      anon_sym_COMMA,
  [2410] = 1,
    ACTIONS(600), 1,
      aux_sym__absolute_token1,
  [2414] = 1,
    ACTIONS(602), 1,
      anon_sym_with,
  [2418] = 1,
    ACTIONS(604), 1,
      anon_sym_COMMA,
  [2422] = 1,
    ACTIONS(572), 1,
      aux_sym__x_attr_token1,
  [2426] = 1,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
  [2430] = 1,
    ACTIONS(608), 1,
      aux_sym__absolute_token1,
  [2434] = 1,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
  [2438] = 1,
    ACTIONS(612), 1,
      anon_sym_COMMA,
  [2442] = 1,
    ACTIONS(614), 1,
      anon_sym_COMMA,
  [2446] = 1,
    ACTIONS(616), 1,
      aux_sym__label_absolute_token1,
  [2450] = 1,
    ACTIONS(618), 1,
      anon_sym_COMMA,
  [2454] = 1,
    ACTIONS(620), 1,
      aux_sym__absolute_token1,
  [2458] = 1,
    ACTIONS(622), 1,
      sym_width,
  [2462] = 1,
    ACTIONS(622), 1,
      sym_height,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 337,
  [SMALL_STATE(13)] = 366,
  [SMALL_STATE(14)] = 385,
  [SMALL_STATE(15)] = 416,
  [SMALL_STATE(16)] = 437,
  [SMALL_STATE(17)] = 461,
  [SMALL_STATE(18)] = 481,
  [SMALL_STATE(19)] = 507,
  [SMALL_STATE(20)] = 528,
  [SMALL_STATE(21)] = 551,
  [SMALL_STATE(22)] = 572,
  [SMALL_STATE(23)] = 590,
  [SMALL_STATE(24)] = 610,
  [SMALL_STATE(25)] = 630,
  [SMALL_STATE(26)] = 644,
  [SMALL_STATE(27)] = 660,
  [SMALL_STATE(28)] = 680,
  [SMALL_STATE(29)] = 698,
  [SMALL_STATE(30)] = 720,
  [SMALL_STATE(31)] = 737,
  [SMALL_STATE(32)] = 754,
  [SMALL_STATE(33)] = 773,
  [SMALL_STATE(34)] = 790,
  [SMALL_STATE(35)] = 809,
  [SMALL_STATE(36)] = 828,
  [SMALL_STATE(37)] = 847,
  [SMALL_STATE(38)] = 866,
  [SMALL_STATE(39)] = 885,
  [SMALL_STATE(40)] = 908,
  [SMALL_STATE(41)] = 927,
  [SMALL_STATE(42)] = 944,
  [SMALL_STATE(43)] = 963,
  [SMALL_STATE(44)] = 980,
  [SMALL_STATE(45)] = 997,
  [SMALL_STATE(46)] = 1014,
  [SMALL_STATE(47)] = 1033,
  [SMALL_STATE(48)] = 1052,
  [SMALL_STATE(49)] = 1069,
  [SMALL_STATE(50)] = 1086,
  [SMALL_STATE(51)] = 1103,
  [SMALL_STATE(52)] = 1117,
  [SMALL_STATE(53)] = 1131,
  [SMALL_STATE(54)] = 1145,
  [SMALL_STATE(55)] = 1159,
  [SMALL_STATE(56)] = 1173,
  [SMALL_STATE(57)] = 1187,
  [SMALL_STATE(58)] = 1201,
  [SMALL_STATE(59)] = 1215,
  [SMALL_STATE(60)] = 1229,
  [SMALL_STATE(61)] = 1243,
  [SMALL_STATE(62)] = 1257,
  [SMALL_STATE(63)] = 1271,
  [SMALL_STATE(64)] = 1285,
  [SMALL_STATE(65)] = 1299,
  [SMALL_STATE(66)] = 1313,
  [SMALL_STATE(67)] = 1325,
  [SMALL_STATE(68)] = 1337,
  [SMALL_STATE(69)] = 1351,
  [SMALL_STATE(70)] = 1365,
  [SMALL_STATE(71)] = 1379,
  [SMALL_STATE(72)] = 1391,
  [SMALL_STATE(73)] = 1403,
  [SMALL_STATE(74)] = 1415,
  [SMALL_STATE(75)] = 1427,
  [SMALL_STATE(76)] = 1441,
  [SMALL_STATE(77)] = 1457,
  [SMALL_STATE(78)] = 1469,
  [SMALL_STATE(79)] = 1483,
  [SMALL_STATE(80)] = 1497,
  [SMALL_STATE(81)] = 1513,
  [SMALL_STATE(82)] = 1529,
  [SMALL_STATE(83)] = 1541,
  [SMALL_STATE(84)] = 1557,
  [SMALL_STATE(85)] = 1569,
  [SMALL_STATE(86)] = 1583,
  [SMALL_STATE(87)] = 1599,
  [SMALL_STATE(88)] = 1615,
  [SMALL_STATE(89)] = 1626,
  [SMALL_STATE(90)] = 1637,
  [SMALL_STATE(91)] = 1648,
  [SMALL_STATE(92)] = 1659,
  [SMALL_STATE(93)] = 1670,
  [SMALL_STATE(94)] = 1681,
  [SMALL_STATE(95)] = 1692,
  [SMALL_STATE(96)] = 1703,
  [SMALL_STATE(97)] = 1714,
  [SMALL_STATE(98)] = 1725,
  [SMALL_STATE(99)] = 1736,
  [SMALL_STATE(100)] = 1747,
  [SMALL_STATE(101)] = 1758,
  [SMALL_STATE(102)] = 1769,
  [SMALL_STATE(103)] = 1780,
  [SMALL_STATE(104)] = 1791,
  [SMALL_STATE(105)] = 1802,
  [SMALL_STATE(106)] = 1813,
  [SMALL_STATE(107)] = 1824,
  [SMALL_STATE(108)] = 1835,
  [SMALL_STATE(109)] = 1846,
  [SMALL_STATE(110)] = 1857,
  [SMALL_STATE(111)] = 1868,
  [SMALL_STATE(112)] = 1879,
  [SMALL_STATE(113)] = 1890,
  [SMALL_STATE(114)] = 1901,
  [SMALL_STATE(115)] = 1912,
  [SMALL_STATE(116)] = 1923,
  [SMALL_STATE(117)] = 1934,
  [SMALL_STATE(118)] = 1945,
  [SMALL_STATE(119)] = 1956,
  [SMALL_STATE(120)] = 1967,
  [SMALL_STATE(121)] = 1978,
  [SMALL_STATE(122)] = 1989,
  [SMALL_STATE(123)] = 2000,
  [SMALL_STATE(124)] = 2011,
  [SMALL_STATE(125)] = 2022,
  [SMALL_STATE(126)] = 2033,
  [SMALL_STATE(127)] = 2044,
  [SMALL_STATE(128)] = 2055,
  [SMALL_STATE(129)] = 2066,
  [SMALL_STATE(130)] = 2077,
  [SMALL_STATE(131)] = 2088,
  [SMALL_STATE(132)] = 2099,
  [SMALL_STATE(133)] = 2110,
  [SMALL_STATE(134)] = 2121,
  [SMALL_STATE(135)] = 2132,
  [SMALL_STATE(136)] = 2143,
  [SMALL_STATE(137)] = 2154,
  [SMALL_STATE(138)] = 2165,
  [SMALL_STATE(139)] = 2176,
  [SMALL_STATE(140)] = 2187,
  [SMALL_STATE(141)] = 2198,
  [SMALL_STATE(142)] = 2209,
  [SMALL_STATE(143)] = 2222,
  [SMALL_STATE(144)] = 2235,
  [SMALL_STATE(145)] = 2243,
  [SMALL_STATE(146)] = 2253,
  [SMALL_STATE(147)] = 2264,
  [SMALL_STATE(148)] = 2274,
  [SMALL_STATE(149)] = 2281,
  [SMALL_STATE(150)] = 2288,
  [SMALL_STATE(151)] = 2295,
  [SMALL_STATE(152)] = 2302,
  [SMALL_STATE(153)] = 2309,
  [SMALL_STATE(154)] = 2316,
  [SMALL_STATE(155)] = 2323,
  [SMALL_STATE(156)] = 2330,
  [SMALL_STATE(157)] = 2337,
  [SMALL_STATE(158)] = 2344,
  [SMALL_STATE(159)] = 2351,
  [SMALL_STATE(160)] = 2358,
  [SMALL_STATE(161)] = 2362,
  [SMALL_STATE(162)] = 2366,
  [SMALL_STATE(163)] = 2370,
  [SMALL_STATE(164)] = 2374,
  [SMALL_STATE(165)] = 2378,
  [SMALL_STATE(166)] = 2382,
  [SMALL_STATE(167)] = 2386,
  [SMALL_STATE(168)] = 2390,
  [SMALL_STATE(169)] = 2394,
  [SMALL_STATE(170)] = 2398,
  [SMALL_STATE(171)] = 2402,
  [SMALL_STATE(172)] = 2406,
  [SMALL_STATE(173)] = 2410,
  [SMALL_STATE(174)] = 2414,
  [SMALL_STATE(175)] = 2418,
  [SMALL_STATE(176)] = 2422,
  [SMALL_STATE(177)] = 2426,
  [SMALL_STATE(178)] = 2430,
  [SMALL_STATE(179)] = 2434,
  [SMALL_STATE(180)] = 2438,
  [SMALL_STATE(181)] = 2442,
  [SMALL_STATE(182)] = 2446,
  [SMALL_STATE(183)] = 2450,
  [SMALL_STATE(184)] = 2454,
  [SMALL_STATE(185)] = 2458,
  [SMALL_STATE(186)] = 2462,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(49),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(19),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(48),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_attr, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [610] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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
