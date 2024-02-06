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
#define STATE_COUNT 168
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 1
#define TOKEN_COUNT 64
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
  anon_sym_part = 11,
  anon_sym_AT = 12,
  aux_sym__x_attr_token1 = 13,
  anon_sym_left = 14,
  anon_sym_centre = 15,
  anon_sym_center = 16,
  anon_sym_right = 17,
  aux_sym__x_attr_token2 = 18,
  aux_sym__x_attr_token3 = 19,
  anon_sym_decorate = 20,
  anon_sym_LPAREN = 21,
  anon_sym_output = 22,
  anon_sym_parameter = 23,
  anon_sym_light = 24,
  anon_sym_widget = 25,
  anon_sym_RPAREN = 26,
  anon_sym_with = 27,
  anon_sym_delete = 28,
  anon_sym_guide = 29,
  anon_sym_label = 30,
  anon_sym_decoration = 31,
  anon_sym_load = 32,
  anon_sym_project = 33,
  anon_sym_script = 34,
  anon_sym_save = 35,
  anon_sym_timestamp = 36,
  anon_sym_COMMA = 37,
  anon_sym_gzip = 38,
  anon_sym_export = 39,
  anon_sym_panel = 40,
  anon_sym_svg = 41,
  anon_sym_dark = 42,
  anon_sym_origin = 43,
  anon_sym_background = 44,
  aux_sym__label_absolute_token1 = 45,
  aux_sym__label_relative_token1 = 46,
  aux_sym_font_token1 = 47,
  aux_sym_fontsize_token1 = 48,
  anon_sym_top = 49,
  anon_sym_middle = 50,
  anon_sym_baseline = 51,
  anon_sym_bottom = 52,
  aux_sym__rgb_token1 = 53,
  aux_sym__rgba_token1 = 54,
  aux_sym__absolute_token1 = 55,
  aux_sym__x_token1 = 56,
  aux_sym__y_token1 = 57,
  aux_sym__offset_token1 = 58,
  aux_sym_string_token1 = 59,
  aux_sym_string_token2 = 60,
  aux_sym__string_token1 = 61,
  aux_sym__string_token2 = 62,
  sym_identifier = 63,
  sym_command = 64,
  sym_new = 65,
  sym_module = 66,
  sym__input_entity = 67,
  sym_set = 68,
  sym__module_attr = 69,
  sym__input_attr = 70,
  sym__x_attr = 71,
  sym_decorate = 72,
  sym__component = 73,
  sym_decoration = 74,
  sym_delete = 75,
  sym__guideline_id = 76,
  sym__input_id = 77,
  sym__output_id = 78,
  sym__parameter_id = 79,
  sym__light_id = 80,
  sym__widget_id = 81,
  sym__label_id = 82,
  sym__decoration_id = 83,
  sym__component_id = 84,
  sym_load = 85,
  sym_save = 86,
  sym_project = 87,
  sym__save_options = 88,
  sym_script = 89,
  sym_export = 90,
  sym_panel = 91,
  sym_svg = 92,
  sym_origin = 93,
  sym_background = 94,
  sym_guide = 95,
  sym_output = 96,
  sym_parameter = 97,
  sym_light = 98,
  sym_widget = 99,
  sym_label = 100,
  sym__label_string = 101,
  sym__label_absolute = 102,
  sym__label_relative = 103,
  sym__label_geometry = 104,
  sym_font = 105,
  sym_fontsize = 106,
  sym_halign = 107,
  sym_valign = 108,
  sym_colour = 109,
  sym__rgb = 110,
  sym__rgba = 111,
  sym_name = 112,
  sym_part = 113,
  sym_rgb = 114,
  sym_rgba = 115,
  sym_absolute = 116,
  sym__absolute = 117,
  sym__relative = 118,
  sym__x = 119,
  sym__y = 120,
  sym_x = 121,
  sym_y = 122,
  sym_xy = 123,
  sym__xy = 124,
  sym__offset = 125,
  sym_offset = 126,
  sym_string = 127,
  sym__string = 128,
  aux_sym_command_repeat1 = 129,
  alias_sym_reference = 130,
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
  [anon_sym_part] = "part",
  [anon_sym_AT] = "@",
  [aux_sym__x_attr_token1] = "_x_attr_token1",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [aux_sym__x_attr_token2] = "_x_attr_token2",
  [aux_sym__x_attr_token3] = "_x_attr_token3",
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
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_baseline] = "baseline",
  [anon_sym_bottom] = "bottom",
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
  [anon_sym_part] = anon_sym_part,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__x_attr_token1] = aux_sym__x_attr_token1,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [aux_sym__x_attr_token2] = aux_sym__x_attr_token2,
  [aux_sym__x_attr_token3] = aux_sym__x_attr_token3,
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
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_baseline] = anon_sym_baseline,
  [anon_sym_bottom] = anon_sym_bottom,
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
  [23] = 20,
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
  [54] = 17,
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
  [139] = 17,
  [140] = 67,
  [141] = 141,
  [142] = 75,
  [143] = 79,
  [144] = 81,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(244);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == '@') ADVANCE(266);
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
      if (lookahead == 'x') ADVANCE(262);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(408);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(410);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(404);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(404);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(407);
      if (lookahead == 'm') ADVANCE(127);
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
          lookahead == 'h') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '8') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'U') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(138);
      END_STATE();
    case 21:
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(404);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(404);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(253);
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
      if (lookahead == 't') ADVANCE(264);
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
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(367);
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
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(405);
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
      if (lookahead == 'g') ADVANCE(364);
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
      if (lookahead == 'h') ADVANCE(338);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(261);
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
      if (lookahead == 'k') ADVANCE(365);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(363);
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
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(368);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(407);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(400);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(406);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(251);
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
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(345);
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
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(406);
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
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(405);
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
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(405);
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
      if (lookahead == 'w') ADVANCE(245);
      END_STATE();
    case 212:
      if (lookahead == 'x') ADVANCE(167);
      END_STATE();
    case 213:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(407);
      if (lookahead == 'm') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
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
      if (eof) ADVANCE(244);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 237:
      if (eof) ADVANCE(244);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '@') ADVANCE(266);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 238:
      if (eof) ADVANCE(244);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(376);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 239:
      if (eof) ADVANCE(244);
      if (lookahead == ')') ADVANCE(337);
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
          lookahead == ' ') SKIP(239)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 240:
      if (eof) ADVANCE(244);
      if (lookahead == '@') ADVANCE(266);
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
          lookahead == ' ') SKIP(240)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 241:
      if (eof) ADVANCE(244);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(241)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 242:
      if (eof) ADVANCE(244);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 'p') ADVANCE(413);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead == 'x') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(242)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 243:
      if (eof) ADVANCE(244);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(138);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(275);
      if (lookahead == 'H') ADVANCE(267);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == 'H') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(267);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(267);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(267);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(267);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'H') ADVANCE(286);
      if (lookahead == 'h') ADVANCE(407);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'H') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(286);
      if (lookahead == 'h') ADVANCE(407);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'c') ADVANCE(311);
      if (lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'f') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'g') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'h') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'n') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'v') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'w') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'x') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'e') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(428);
      if (lookahead == 'l') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
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
  [5] = {.lex_state = 237},
  [6] = {.lex_state = 241},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 240},
  [10] = {.lex_state = 238},
  [11] = {.lex_state = 237},
  [12] = {.lex_state = 239},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 237},
  [17] = {.lex_state = 242},
  [18] = {.lex_state = 236},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 239},
  [21] = {.lex_state = 237},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 237},
  [24] = {.lex_state = 237},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 236},
  [27] = {.lex_state = 238},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 238},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 238},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 238},
  [35] = {.lex_state = 238},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 238},
  [38] = {.lex_state = 238},
  [39] = {.lex_state = 238},
  [40] = {.lex_state = 237},
  [41] = {.lex_state = 238},
  [42] = {.lex_state = 237},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 237},
  [45] = {.lex_state = 239},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 238},
  [48] = {.lex_state = 238},
  [49] = {.lex_state = 239},
  [50] = {.lex_state = 236},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 243},
  [53] = {.lex_state = 240},
  [54] = {.lex_state = 236},
  [55] = {.lex_state = 243},
  [56] = {.lex_state = 238},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 238},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 238},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 236},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 236},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 236},
  [80] = {.lex_state = 238},
  [81] = {.lex_state = 236},
  [82] = {.lex_state = 238},
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
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 240},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 237},
  [136] = {.lex_state = 237},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 237},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 237},
  [147] = {.lex_state = 237},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 238},
  [152] = {.lex_state = 241},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 240},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 242},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 238},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 242},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 237},
  [166] = {.lex_state = 237},
  [167] = {.lex_state = 0},
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
    [anon_sym_part] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__x_attr_token1] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [aux_sym__x_attr_token2] = ACTIONS(1),
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
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_baseline] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
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
    [sym_command] = STATE(158),
    [sym_new] = STATE(8),
    [sym_set] = STATE(8),
    [sym_decorate] = STATE(8),
    [sym_delete] = STATE(8),
    [sym_load] = STATE(8),
    [sym_save] = STATE(8),
    [sym_export] = STATE(8),
    [aux_sym_command_repeat1] = STATE(8),
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
    STATE(105), 8,
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
    STATE(118), 8,
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
    STATE(25), 1,
      sym__input_id,
    STATE(116), 4,
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
  [122] = 7,
    ACTIONS(67), 1,
      anon_sym_AT,
    ACTIONS(69), 1,
      aux_sym__absolute_token1,
    ACTIONS(71), 1,
      aux_sym__x_token1,
    STATE(32), 1,
      sym_xy,
    STATE(157), 1,
      sym__x,
    STATE(80), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(65), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [153] = 6,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      aux_sym__x_attr_token1,
    STATE(104), 1,
      sym__x_attr,
    ACTIONS(81), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(75), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [182] = 9,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_new,
    ACTIONS(88), 1,
      anon_sym_set,
    ACTIONS(91), 1,
      anon_sym_decorate,
    ACTIONS(94), 1,
      anon_sym_delete,
    ACTIONS(97), 1,
      anon_sym_load,
    ACTIONS(100), 1,
      anon_sym_save,
    ACTIONS(103), 1,
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
  [217] = 9,
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
    ACTIONS(106), 1,
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
  [252] = 6,
    ACTIONS(71), 1,
      aux_sym__x_token1,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(112), 1,
      aux_sym__label_relative_token1,
    STATE(153), 1,
      sym__x,
    STATE(93), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [280] = 8,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      aux_sym_font_token1,
    ACTIONS(120), 1,
      aux_sym__rgb_token1,
    ACTIONS(122), 1,
      aux_sym__rgba_token1,
    STATE(62), 1,
      sym_rgb,
    STATE(63), 1,
      sym_rgba,
    STATE(101), 1,
      sym_name,
    ACTIONS(116), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [311] = 7,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      aux_sym__x_token1,
    ACTIONS(130), 1,
      aux_sym__y_token1,
    STATE(57), 1,
      sym_x,
    STATE(58), 1,
      sym_y,
    STATE(107), 1,
      sym_absolute,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [340] = 3,
    STATE(94), 1,
      sym_halign,
    ACTIONS(134), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [360] = 5,
    ACTIONS(138), 1,
      aux_sym__rgb_token1,
    ACTIONS(140), 1,
      aux_sym__rgba_token1,
    STATE(89), 1,
      sym_colour,
    STATE(51), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [384] = 4,
    ACTIONS(144), 1,
      anon_sym_project,
    ACTIONS(146), 1,
      anon_sym_script,
    STATE(124), 2,
      sym_project,
      sym_script,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [405] = 1,
    ACTIONS(148), 12,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_x,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [420] = 4,
    STATE(9), 1,
      sym__string,
    STATE(130), 1,
      sym__label_string,
    ACTIONS(152), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [441] = 3,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(156), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_x,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [460] = 5,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(98), 1,
      sym_string,
    ACTIONS(164), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(162), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [483] = 4,
    ACTIONS(170), 1,
      anon_sym_timestamp,
    ACTIONS(172), 1,
      anon_sym_gzip,
    STATE(96), 1,
      sym__save_options,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [503] = 2,
    ACTIONS(176), 1,
      sym_width,
    ACTIONS(174), 10,
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
  [519] = 3,
    ACTIONS(180), 1,
      aux_sym__offset_token1,
    STATE(73), 1,
      sym_offset,
    ACTIONS(178), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [537] = 4,
    ACTIONS(184), 1,
      anon_sym_name,
    ACTIONS(186), 1,
      anon_sym_height,
    ACTIONS(188), 1,
      anon_sym_width,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [557] = 1,
    ACTIONS(174), 11,
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
  [571] = 3,
    ACTIONS(180), 1,
      aux_sym__offset_token1,
    STATE(72), 1,
      sym_offset,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [589] = 4,
    ACTIONS(194), 1,
      anon_sym_name,
    ACTIONS(196), 1,
      anon_sym_x,
    ACTIONS(198), 1,
      anon_sym_part,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [609] = 5,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_identifier,
    STATE(97), 1,
      sym__component_id,
    ACTIONS(202), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [631] = 4,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      aux_sym__offset_token1,
    STATE(56), 1,
      sym__offset,
    ACTIONS(210), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [651] = 3,
    ACTIONS(216), 1,
      anon_sym_svg,
    STATE(126), 1,
      sym_svg,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [668] = 4,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      aux_sym_font_token1,
    STATE(5), 1,
      sym_name,
    ACTIONS(220), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [687] = 3,
    ACTIONS(226), 1,
      anon_sym_project,
    ACTIONS(228), 1,
      anon_sym_script,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [704] = 3,
    ACTIONS(232), 1,
      anon_sym_light,
    ACTIONS(234), 1,
      anon_sym_dark,
    ACTIONS(230), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [721] = 4,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      aux_sym_font_token1,
    STATE(120), 1,
      sym_part,
    ACTIONS(238), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [740] = 6,
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
    STATE(150), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [763] = 4,
    ACTIONS(118), 1,
      aux_sym_font_token1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_name,
    ACTIONS(254), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [782] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      aux_sym_font_token1,
    STATE(104), 1,
      sym_part,
    ACTIONS(75), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [801] = 3,
    ACTIONS(258), 1,
      anon_sym_panel,
    STATE(128), 1,
      sym_panel,
    ACTIONS(256), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [818] = 4,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 1,
      aux_sym_font_token1,
    STATE(111), 1,
      sym_font,
    ACTIONS(262), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [837] = 4,
    ACTIONS(264), 1,
      aux_sym_font_token1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_font,
    ACTIONS(268), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [856] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      aux_sym_font_token1,
    STATE(104), 1,
      sym_name,
    ACTIONS(75), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [875] = 3,
    ACTIONS(130), 1,
      aux_sym__y_token1,
    STATE(125), 1,
      sym_y,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [892] = 4,
    ACTIONS(264), 1,
      aux_sym_font_token1,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_font,
    ACTIONS(274), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [911] = 3,
    ACTIONS(128), 1,
      aux_sym__x_token1,
    STATE(125), 1,
      sym_x,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [928] = 3,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym__component,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [945] = 3,
    ACTIONS(282), 1,
      aux_sym_fontsize_token1,
    STATE(103), 1,
      sym_fontsize,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [962] = 3,
    ACTIONS(286), 1,
      sym_height,
    ACTIONS(288), 1,
      sym_width,
    ACTIONS(284), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [979] = 3,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_decoration,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [996] = 4,
    ACTIONS(118), 1,
      aux_sym_font_token1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      sym_name,
    ACTIONS(296), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1015] = 4,
    ACTIONS(118), 1,
      aux_sym_font_token1,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_name,
    ACTIONS(300), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1034] = 2,
    ACTIONS(304), 1,
      sym_width,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1048] = 3,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(308), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1064] = 2,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1078] = 2,
    ACTIONS(318), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1092] = 2,
    ACTIONS(322), 1,
      aux_sym__x_attr_token2,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1106] = 3,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(156), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1122] = 2,
    ACTIONS(326), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1136] = 2,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1150] = 2,
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
  [1164] = 2,
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
  [1178] = 1,
    ACTIONS(338), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1190] = 1,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1202] = 2,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1216] = 2,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1230] = 2,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1244] = 2,
    ACTIONS(354), 1,
      anon_sym_timestamp,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1258] = 2,
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
  [1272] = 2,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1286] = 3,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(366), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1302] = 1,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1314] = 1,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1326] = 1,
    ACTIONS(374), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1338] = 1,
    ACTIONS(376), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1350] = 1,
    ACTIONS(378), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1362] = 1,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1374] = 1,
    ACTIONS(382), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1386] = 3,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      sym_identifier,
    ACTIONS(386), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1402] = 2,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(390), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1416] = 2,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(394), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1430] = 2,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(394), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1444] = 3,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(402), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1460] = 2,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    ACTIONS(408), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1474] = 3,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(412), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1490] = 2,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1504] = 1,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1515] = 1,
    ACTIONS(420), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1526] = 1,
    ACTIONS(422), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1537] = 1,
    ACTIONS(424), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1548] = 1,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1559] = 1,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1570] = 1,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1581] = 1,
    ACTIONS(432), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1592] = 1,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1603] = 1,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1614] = 1,
    ACTIONS(438), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1625] = 1,
    ACTIONS(440), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1636] = 1,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1647] = 1,
    ACTIONS(444), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1658] = 1,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1669] = 1,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1680] = 1,
    ACTIONS(450), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1691] = 1,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1702] = 1,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1713] = 1,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1724] = 1,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1735] = 1,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1746] = 1,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1757] = 1,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1768] = 1,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1779] = 1,
    ACTIONS(462), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1790] = 1,
    ACTIONS(464), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1801] = 1,
    ACTIONS(466), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1812] = 1,
    ACTIONS(468), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1823] = 1,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1834] = 1,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1845] = 1,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1856] = 1,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1867] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1878] = 1,
    ACTIONS(480), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1889] = 1,
    ACTIONS(482), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1900] = 1,
    ACTIONS(484), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1911] = 1,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1922] = 1,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1933] = 1,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1944] = 1,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1955] = 1,
    ACTIONS(494), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1966] = 1,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1977] = 1,
    ACTIONS(498), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1988] = 1,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1999] = 1,
    ACTIONS(502), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2010] = 1,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2021] = 1,
    ACTIONS(506), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2032] = 1,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2043] = 1,
    ACTIONS(510), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [2051] = 2,
    STATE(91), 1,
      sym_valign,
    ACTIONS(512), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [2061] = 3,
    ACTIONS(514), 1,
      aux_sym__rgb_token1,
    ACTIONS(516), 1,
      aux_sym__rgba_token1,
    STATE(87), 2,
      sym__rgb,
      sym__rgba,
  [2072] = 3,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      aux_sym__offset_token1,
    STATE(164), 1,
      sym__offset,
  [2082] = 2,
    ACTIONS(522), 1,
      aux_sym__y_token1,
    STATE(65), 1,
      sym__y,
  [2089] = 2,
    ACTIONS(122), 1,
      aux_sym__rgba_token1,
    STATE(84), 1,
      sym_rgba,
  [2096] = 2,
    ACTIONS(522), 1,
      aux_sym__y_token1,
    STATE(37), 1,
      sym__y,
  [2103] = 2,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      sym_identifier,
  [2110] = 2,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(526), 1,
      sym_identifier,
  [2117] = 2,
    ACTIONS(528), 1,
      aux_sym_font_token1,
    STATE(110), 1,
      sym_name,
  [2124] = 2,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      sym_identifier,
  [2131] = 2,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      sym_identifier,
  [2138] = 2,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      sym_identifier,
  [2145] = 2,
    ACTIONS(528), 1,
      aux_sym_font_token1,
    STATE(95), 1,
      sym_name,
  [2152] = 2,
    ACTIONS(536), 1,
      aux_sym__rgb_token1,
    STATE(84), 1,
      sym_rgb,
  [2159] = 1,
    ACTIONS(538), 1,
      aux_sym__absolute_token1,
  [2163] = 1,
    ACTIONS(540), 1,
      anon_sym_timestamp,
  [2167] = 1,
    ACTIONS(540), 1,
      anon_sym_gzip,
  [2171] = 1,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
  [2175] = 1,
    ACTIONS(544), 1,
      sym_width,
  [2179] = 1,
    ACTIONS(322), 1,
      aux_sym__x_attr_token1,
  [2183] = 1,
    ACTIONS(546), 1,
      anon_sym_COMMA,
  [2187] = 1,
    ACTIONS(548), 1,
      aux_sym__label_relative_token1,
  [2191] = 1,
    ACTIONS(550), 1,
      anon_sym_COMMA,
  [2195] = 1,
    ACTIONS(552), 1,
      aux_sym__label_absolute_token1,
  [2199] = 1,
    ACTIONS(554), 1,
      anon_sym_COMMA,
  [2203] = 1,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
  [2207] = 1,
    ACTIONS(544), 1,
      sym_height,
  [2211] = 1,
    ACTIONS(558), 1,
      anon_sym_with,
  [2215] = 1,
    ACTIONS(560), 1,
      anon_sym_COMMA,
  [2219] = 1,
    ACTIONS(562), 1,
      anon_sym_COMMA,
  [2223] = 1,
    ACTIONS(564), 1,
      aux_sym__label_absolute_token1,
  [2227] = 1,
    ACTIONS(566), 1,
      anon_sym_COMMA,
  [2231] = 1,
    ACTIONS(568), 1,
      aux_sym__absolute_token1,
  [2235] = 1,
    ACTIONS(570), 1,
      aux_sym__absolute_token1,
  [2239] = 1,
    ACTIONS(572), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 217,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 280,
  [SMALL_STATE(11)] = 311,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 384,
  [SMALL_STATE(15)] = 405,
  [SMALL_STATE(16)] = 420,
  [SMALL_STATE(17)] = 441,
  [SMALL_STATE(18)] = 460,
  [SMALL_STATE(19)] = 483,
  [SMALL_STATE(20)] = 503,
  [SMALL_STATE(21)] = 519,
  [SMALL_STATE(22)] = 537,
  [SMALL_STATE(23)] = 557,
  [SMALL_STATE(24)] = 571,
  [SMALL_STATE(25)] = 589,
  [SMALL_STATE(26)] = 609,
  [SMALL_STATE(27)] = 631,
  [SMALL_STATE(28)] = 651,
  [SMALL_STATE(29)] = 668,
  [SMALL_STATE(30)] = 687,
  [SMALL_STATE(31)] = 704,
  [SMALL_STATE(32)] = 721,
  [SMALL_STATE(33)] = 740,
  [SMALL_STATE(34)] = 763,
  [SMALL_STATE(35)] = 782,
  [SMALL_STATE(36)] = 801,
  [SMALL_STATE(37)] = 818,
  [SMALL_STATE(38)] = 837,
  [SMALL_STATE(39)] = 856,
  [SMALL_STATE(40)] = 875,
  [SMALL_STATE(41)] = 892,
  [SMALL_STATE(42)] = 911,
  [SMALL_STATE(43)] = 928,
  [SMALL_STATE(44)] = 945,
  [SMALL_STATE(45)] = 962,
  [SMALL_STATE(46)] = 979,
  [SMALL_STATE(47)] = 996,
  [SMALL_STATE(48)] = 1015,
  [SMALL_STATE(49)] = 1034,
  [SMALL_STATE(50)] = 1048,
  [SMALL_STATE(51)] = 1064,
  [SMALL_STATE(52)] = 1078,
  [SMALL_STATE(53)] = 1092,
  [SMALL_STATE(54)] = 1106,
  [SMALL_STATE(55)] = 1122,
  [SMALL_STATE(56)] = 1136,
  [SMALL_STATE(57)] = 1150,
  [SMALL_STATE(58)] = 1164,
  [SMALL_STATE(59)] = 1178,
  [SMALL_STATE(60)] = 1190,
  [SMALL_STATE(61)] = 1202,
  [SMALL_STATE(62)] = 1216,
  [SMALL_STATE(63)] = 1230,
  [SMALL_STATE(64)] = 1244,
  [SMALL_STATE(65)] = 1258,
  [SMALL_STATE(66)] = 1272,
  [SMALL_STATE(67)] = 1286,
  [SMALL_STATE(68)] = 1302,
  [SMALL_STATE(69)] = 1314,
  [SMALL_STATE(70)] = 1326,
  [SMALL_STATE(71)] = 1338,
  [SMALL_STATE(72)] = 1350,
  [SMALL_STATE(73)] = 1362,
  [SMALL_STATE(74)] = 1374,
  [SMALL_STATE(75)] = 1386,
  [SMALL_STATE(76)] = 1402,
  [SMALL_STATE(77)] = 1416,
  [SMALL_STATE(78)] = 1430,
  [SMALL_STATE(79)] = 1444,
  [SMALL_STATE(80)] = 1460,
  [SMALL_STATE(81)] = 1474,
  [SMALL_STATE(82)] = 1490,
  [SMALL_STATE(83)] = 1504,
  [SMALL_STATE(84)] = 1515,
  [SMALL_STATE(85)] = 1526,
  [SMALL_STATE(86)] = 1537,
  [SMALL_STATE(87)] = 1548,
  [SMALL_STATE(88)] = 1559,
  [SMALL_STATE(89)] = 1570,
  [SMALL_STATE(90)] = 1581,
  [SMALL_STATE(91)] = 1592,
  [SMALL_STATE(92)] = 1603,
  [SMALL_STATE(93)] = 1614,
  [SMALL_STATE(94)] = 1625,
  [SMALL_STATE(95)] = 1636,
  [SMALL_STATE(96)] = 1647,
  [SMALL_STATE(97)] = 1658,
  [SMALL_STATE(98)] = 1669,
  [SMALL_STATE(99)] = 1680,
  [SMALL_STATE(100)] = 1691,
  [SMALL_STATE(101)] = 1702,
  [SMALL_STATE(102)] = 1713,
  [SMALL_STATE(103)] = 1724,
  [SMALL_STATE(104)] = 1735,
  [SMALL_STATE(105)] = 1746,
  [SMALL_STATE(106)] = 1757,
  [SMALL_STATE(107)] = 1768,
  [SMALL_STATE(108)] = 1779,
  [SMALL_STATE(109)] = 1790,
  [SMALL_STATE(110)] = 1801,
  [SMALL_STATE(111)] = 1812,
  [SMALL_STATE(112)] = 1823,
  [SMALL_STATE(113)] = 1834,
  [SMALL_STATE(114)] = 1845,
  [SMALL_STATE(115)] = 1856,
  [SMALL_STATE(116)] = 1867,
  [SMALL_STATE(117)] = 1878,
  [SMALL_STATE(118)] = 1889,
  [SMALL_STATE(119)] = 1900,
  [SMALL_STATE(120)] = 1911,
  [SMALL_STATE(121)] = 1922,
  [SMALL_STATE(122)] = 1933,
  [SMALL_STATE(123)] = 1944,
  [SMALL_STATE(124)] = 1955,
  [SMALL_STATE(125)] = 1966,
  [SMALL_STATE(126)] = 1977,
  [SMALL_STATE(127)] = 1988,
  [SMALL_STATE(128)] = 1999,
  [SMALL_STATE(129)] = 2010,
  [SMALL_STATE(130)] = 2021,
  [SMALL_STATE(131)] = 2032,
  [SMALL_STATE(132)] = 2043,
  [SMALL_STATE(133)] = 2051,
  [SMALL_STATE(134)] = 2061,
  [SMALL_STATE(135)] = 2072,
  [SMALL_STATE(136)] = 2082,
  [SMALL_STATE(137)] = 2089,
  [SMALL_STATE(138)] = 2096,
  [SMALL_STATE(139)] = 2103,
  [SMALL_STATE(140)] = 2110,
  [SMALL_STATE(141)] = 2117,
  [SMALL_STATE(142)] = 2124,
  [SMALL_STATE(143)] = 2131,
  [SMALL_STATE(144)] = 2138,
  [SMALL_STATE(145)] = 2145,
  [SMALL_STATE(146)] = 2152,
  [SMALL_STATE(147)] = 2159,
  [SMALL_STATE(148)] = 2163,
  [SMALL_STATE(149)] = 2167,
  [SMALL_STATE(150)] = 2171,
  [SMALL_STATE(151)] = 2175,
  [SMALL_STATE(152)] = 2179,
  [SMALL_STATE(153)] = 2183,
  [SMALL_STATE(154)] = 2187,
  [SMALL_STATE(155)] = 2191,
  [SMALL_STATE(156)] = 2195,
  [SMALL_STATE(157)] = 2199,
  [SMALL_STATE(158)] = 2203,
  [SMALL_STATE(159)] = 2207,
  [SMALL_STATE(160)] = 2211,
  [SMALL_STATE(161)] = 2215,
  [SMALL_STATE(162)] = 2219,
  [SMALL_STATE(163)] = 2223,
  [SMALL_STATE(164)] = 2227,
  [SMALL_STATE(165)] = 2231,
  [SMALL_STATE(166)] = 2235,
  [SMALL_STATE(167)] = 2239,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_attr, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [556] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
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
