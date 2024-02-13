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
#define STATE_COUNT 201
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 1
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  anon_sym_input = 3,
  anon_sym_output = 4,
  anon_sym_parameter = 5,
  anon_sym_light = 6,
  sym_height = 7,
  sym_width = 8,
  anon_sym_set = 9,
  anon_sym_name = 10,
  anon_sym_height = 11,
  anon_sym_width = 12,
  anon_sym_x = 13,
  anon_sym_y = 14,
  anon_sym_xy = 15,
  anon_sym_part = 16,
  anon_sym_AT = 17,
  aux_sym__x_attr_token1 = 18,
  anon_sym_left = 19,
  anon_sym_centre = 20,
  anon_sym_center = 21,
  anon_sym_right = 22,
  aux_sym__x_attr_token2 = 23,
  aux_sym__x_attr_token3 = 24,
  anon_sym_top = 25,
  anon_sym_middle = 26,
  anon_sym_bottom = 27,
  anon_sym_COMMA = 28,
  anon_sym_decorate = 29,
  anon_sym_LPAREN = 30,
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
  anon_sym_DOTh = 48,
  anon_sym_origin = 49,
  anon_sym_background = 50,
  aux_sym__label_absolute_token1 = 51,
  aux_sym__label_relative_token1 = 52,
  aux_sym_font_token1 = 53,
  aux_sym_fontsize_token1 = 54,
  anon_sym_baseline = 55,
  aux_sym__rgb_token1 = 56,
  aux_sym__rgba_token1 = 57,
  aux_sym__absolute_token1 = 58,
  aux_sym__x_token1 = 59,
  aux_sym__y_token1 = 60,
  aux_sym__offset_token1 = 61,
  aux_sym_string_token1 = 62,
  aux_sym_string_token2 = 63,
  aux_sym__string_token1 = 64,
  aux_sym__string_token2 = 65,
  aux_sym_identifier_token1 = 66,
  aux_sym_identifier_token2 = 67,
  aux_sym_identifier_token3 = 68,
  sym_command = 69,
  sym_new = 70,
  sym_module = 71,
  sym__input_entity = 72,
  sym__output_entity = 73,
  sym__parameter_entity = 74,
  sym__light_entity = 75,
  sym_set = 76,
  sym__module_attr = 77,
  sym__component_attr = 78,
  sym__x_attr = 79,
  sym__y_attr = 80,
  sym__xy_attr = 81,
  sym_decorate = 82,
  sym__component = 83,
  sym_decoration = 84,
  sym_delete = 85,
  sym__guideline_id = 86,
  sym__input_id = 87,
  sym__output_id = 88,
  sym__parameter_id = 89,
  sym__light_id = 90,
  sym__widget_id = 91,
  sym__label_id = 92,
  sym__decoration_id = 93,
  sym__component_id = 94,
  sym_load = 95,
  sym_save = 96,
  sym_project = 97,
  sym__save_options = 98,
  sym_script = 99,
  sym_export = 100,
  sym_panel = 101,
  sym_svg = 102,
  sym_header = 103,
  sym_origin = 104,
  sym_background = 105,
  sym_guide = 106,
  sym_widget = 107,
  sym_label = 108,
  sym__label_string = 109,
  sym__label_absolute = 110,
  sym__label_relative = 111,
  sym__label_geometry = 112,
  sym_font = 113,
  sym_fontsize = 114,
  sym_halign = 115,
  sym_valign = 116,
  sym_colour = 117,
  sym__rgb = 118,
  sym__rgba = 119,
  sym_name = 120,
  sym_part = 121,
  sym_rgb = 122,
  sym_rgba = 123,
  sym_absolute = 124,
  sym__absolute = 125,
  sym__relative = 126,
  sym__x = 127,
  sym__y = 128,
  sym_x = 129,
  sym_y = 130,
  sym_xy = 131,
  sym__xy = 132,
  sym__offset = 133,
  sym_offset = 134,
  sym_string = 135,
  sym__string = 136,
  sym_identifier = 137,
  aux_sym_command_repeat1 = 138,
  alias_sym_reference = 139,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
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
  [anon_sym_DOTh] = ".h",
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
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [aux_sym_identifier_token3] = "identifier_token3",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_module] = "module",
  [sym__input_entity] = "input",
  [sym__output_entity] = "output",
  [sym__parameter_entity] = "parameter",
  [sym__light_entity] = "light",
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__component_attr] = "_component_attr",
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
  [sym_header] = "header",
  [sym_origin] = "origin",
  [sym_background] = "background",
  [sym_guide] = "guide",
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
  [sym_identifier] = "identifier",
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_reference] = "reference",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
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
  [anon_sym_DOTh] = anon_sym_DOTh,
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
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [aux_sym_identifier_token3] = aux_sym_identifier_token3,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_module] = sym_module,
  [sym__input_entity] = sym__input_entity,
  [sym__output_entity] = sym__output_entity,
  [sym__parameter_entity] = sym__parameter_entity,
  [sym__light_entity] = sym__light_entity,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym__component_attr] = sym__component_attr,
  [sym__x_attr] = sym_x,
  [sym__y_attr] = sym_y,
  [sym__xy_attr] = sym_xy,
  [sym_decorate] = sym_decorate,
  [sym__component] = sym__component,
  [sym_decoration] = sym_decoration,
  [sym_delete] = sym_delete,
  [sym__guideline_id] = sym_guide,
  [sym__input_id] = sym__input_entity,
  [sym__output_id] = sym__output_entity,
  [sym__parameter_id] = sym__parameter_entity,
  [sym__light_id] = sym__light_entity,
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
  [sym_header] = sym_header,
  [sym_origin] = sym_origin,
  [sym_background] = sym_background,
  [sym_guide] = sym_guide,
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
  [sym_identifier] = sym_identifier,
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
  [anon_sym_DOTh] = {
    .visible = true,
    .named = false,
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token3] = {
    .visible = false,
    .named = false,
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
  [sym__output_entity] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_entity] = {
    .visible = true,
    .named = true,
  },
  [sym__light_entity] = {
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
  [sym__component_attr] = {
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
  [sym_header] = {
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
  [sym_identifier] = {
    .visible = true,
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
    [1] = sym__light_entity,
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
  [31] = 8,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 6,
  [37] = 5,
  [38] = 38,
  [39] = 7,
  [40] = 40,
  [41] = 41,
  [42] = 41,
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
  [158] = 7,
  [159] = 6,
  [160] = 5,
  [161] = 8,
  [162] = 32,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(369);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'g') ADVANCE(211);
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(275);
      if (lookahead == 'y') ADVANCE(277);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(441);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == 'H') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'H') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(265);
      if (lookahead == 'U') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(143);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(330);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(397);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(83);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(399);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(372);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(274);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(200);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 120:
      if (lookahead == 'j') ADVANCE(66);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(398);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(435);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(390);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(437);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == 'z') ADVANCE(113);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 216:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 217:
      if (lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 218:
      if (lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(433);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 239:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 240:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 241:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 242:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 243:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 244:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 245:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == 'x') ADVANCE(276);
      if (lookahead == 'y') ADVANCE(278);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 246:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 247:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(162);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 248:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == 'l') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 249:
      if (eof) ADVANCE(254);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 250:
      if (eof) ADVANCE(254);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == 's') ADVANCE(308);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 251:
      if (eof) ADVANCE(254);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 252:
      if (eof) ADVANCE(254);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(339);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 253:
      if (eof) ADVANCE(254);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(143);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'H') ADVANCE(265);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'H') ADVANCE(265);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'H') ADVANCE(265);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'l') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'f') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'g') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'h') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'm') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'v') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'w') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'x') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'e') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'e') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
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
  [5] = {.lex_state = 245},
  [6] = {.lex_state = 245},
  [7] = {.lex_state = 245},
  [8] = {.lex_state = 245},
  [9] = {.lex_state = 247},
  [10] = {.lex_state = 247},
  [11] = {.lex_state = 250},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 247},
  [14] = {.lex_state = 250},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 247},
  [17] = {.lex_state = 244},
  [18] = {.lex_state = 251},
  [19] = {.lex_state = 252},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 246},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 247},
  [26] = {.lex_state = 248},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 249},
  [31] = {.lex_state = 246},
  [32] = {.lex_state = 246},
  [33] = {.lex_state = 247},
  [34] = {.lex_state = 246},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 246},
  [37] = {.lex_state = 246},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 246},
  [40] = {.lex_state = 248},
  [41] = {.lex_state = 249},
  [42] = {.lex_state = 247},
  [43] = {.lex_state = 247},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 247},
  [47] = {.lex_state = 248},
  [48] = {.lex_state = 248},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 248},
  [52] = {.lex_state = 248},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 248},
  [55] = {.lex_state = 248},
  [56] = {.lex_state = 248},
  [57] = {.lex_state = 248},
  [58] = {.lex_state = 248},
  [59] = {.lex_state = 247},
  [60] = {.lex_state = 249},
  [61] = {.lex_state = 248},
  [62] = {.lex_state = 247},
  [63] = {.lex_state = 247},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 248},
  [67] = {.lex_state = 248},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 248},
  [70] = {.lex_state = 248},
  [71] = {.lex_state = 248},
  [72] = {.lex_state = 248},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 248},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 248},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 253},
  [86] = {.lex_state = 253},
  [87] = {.lex_state = 251},
  [88] = {.lex_state = 248},
  [89] = {.lex_state = 248},
  [90] = {.lex_state = 249},
  [91] = {.lex_state = 251},
  [92] = {.lex_state = 251},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 248},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 251},
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
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 25},
  [157] = {.lex_state = 25},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 251},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 245},
  [167] = {.lex_state = 250},
  [168] = {.lex_state = 247},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 245},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 247},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 245},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 244},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 250},
  [182] = {.lex_state = 250},
  [183] = {.lex_state = 250},
  [184] = {.lex_state = 250},
  [185] = {.lex_state = 247},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 245},
  [190] = {.lex_state = 244},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 247},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 251},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 250},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 247},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
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
    [anon_sym_DOTh] = ACTIONS(1),
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
    [aux_sym_identifier_token2] = ACTIONS(1),
    [aux_sym_identifier_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(193),
    [sym_new] = STATE(15),
    [sym_set] = STATE(15),
    [sym_decorate] = STATE(15),
    [sym_delete] = STATE(15),
    [sym_load] = STATE(15),
    [sym_save] = STATE(15),
    [sym_export] = STATE(15),
    [aux_sym_command_repeat1] = STATE(15),
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
      sym__output_entity,
      sym__parameter_entity,
      sym__light_entity,
      sym_guide,
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
    STATE(109), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [90] = 10,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(59), 1,
      anon_sym_input,
    ACTIONS(61), 1,
      anon_sym_output,
    ACTIONS(63), 1,
      anon_sym_parameter,
    ACTIONS(65), 1,
      anon_sym_light,
    ACTIONS(67), 1,
      anon_sym_origin,
    ACTIONS(69), 1,
      anon_sym_background,
    STATE(29), 4,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
    STATE(106), 4,
      sym__module_attr,
      sym__component_attr,
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
  [134] = 5,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(73), 12,
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
  [162] = 5,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(81), 12,
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
  [190] = 5,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(85), 12,
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
  [218] = 5,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(89), 12,
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
  [246] = 7,
    ACTIONS(93), 1,
      anon_sym_AT,
    ACTIONS(95), 1,
      aux_sym__absolute_token1,
    ACTIONS(97), 1,
      aux_sym__x_token1,
    STATE(47), 1,
      sym_xy,
    STATE(191), 1,
      sym__x,
    STATE(95), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [277] = 7,
    ACTIONS(93), 1,
      anon_sym_AT,
    ACTIONS(95), 1,
      aux_sym__absolute_token1,
    ACTIONS(97), 1,
      aux_sym__x_token1,
    STATE(58), 1,
      sym_xy,
    STATE(191), 1,
      sym__x,
    STATE(95), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [308] = 6,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_AT,
    ACTIONS(107), 1,
      aux_sym__x_attr_token1,
    STATE(116), 1,
      sym__xy_attr,
    ACTIONS(109), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(103), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [337] = 9,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      anon_sym_new,
    ACTIONS(116), 1,
      anon_sym_set,
    ACTIONS(119), 1,
      anon_sym_decorate,
    ACTIONS(122), 1,
      anon_sym_delete,
    ACTIONS(125), 1,
      anon_sym_load,
    ACTIONS(128), 1,
      anon_sym_save,
    ACTIONS(131), 1,
      anon_sym_export,
    STATE(12), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [372] = 7,
    ACTIONS(93), 1,
      anon_sym_AT,
    ACTIONS(95), 1,
      aux_sym__absolute_token1,
    ACTIONS(97), 1,
      aux_sym__x_token1,
    STATE(57), 1,
      sym_xy,
    STATE(191), 1,
      sym__x,
    STATE(95), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [403] = 6,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(138), 1,
      aux_sym__x_attr_token1,
    STATE(116), 1,
      sym__x_attr,
    ACTIONS(140), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(103), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [432] = 9,
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
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(12), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [467] = 7,
    ACTIONS(93), 1,
      anon_sym_AT,
    ACTIONS(95), 1,
      aux_sym__absolute_token1,
    ACTIONS(97), 1,
      aux_sym__x_token1,
    STATE(55), 1,
      sym_xy,
    STATE(191), 1,
      sym__x,
    STATE(95), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [498] = 5,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(155), 2,
      sym_string,
      sym_identifier,
    ACTIONS(75), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(148), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [524] = 6,
    ACTIONS(97), 1,
      aux_sym__x_token1,
    ACTIONS(154), 1,
      anon_sym_AT,
    ACTIONS(156), 1,
      aux_sym__label_relative_token1,
    STATE(175), 1,
      sym__x,
    STATE(111), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [552] = 6,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      anon_sym_AT,
    ACTIONS(160), 1,
      aux_sym__x_attr_token1,
    STATE(116), 1,
      sym__y_attr,
    ACTIONS(162), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(103), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [580] = 2,
    ACTIONS(166), 1,
      anon_sym_x,
    ACTIONS(164), 13,
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
  [599] = 6,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    STATE(154), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(170), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [626] = 2,
    ACTIONS(176), 1,
      anon_sym_x,
    ACTIONS(174), 13,
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
  [645] = 2,
    ACTIONS(180), 1,
      anon_sym_x,
    ACTIONS(178), 13,
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
  [664] = 2,
    ACTIONS(184), 1,
      anon_sym_x,
    ACTIONS(182), 13,
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
  [683] = 7,
    ACTIONS(188), 1,
      anon_sym_AT,
    ACTIONS(190), 1,
      aux_sym__x_token1,
    ACTIONS(192), 1,
      aux_sym__y_token1,
    STATE(81), 1,
      sym_y,
    STATE(82), 1,
      sym_x,
    STATE(140), 1,
      sym_absolute,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [712] = 8,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      aux_sym_font_token1,
    ACTIONS(200), 1,
      aux_sym__rgb_token1,
    ACTIONS(202), 1,
      aux_sym__rgba_token1,
    STATE(73), 1,
      sym_rgba,
    STATE(74), 1,
      sym_rgb,
    STATE(148), 1,
      sym_name,
    ACTIONS(196), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [743] = 2,
    ACTIONS(206), 1,
      anon_sym_x,
    ACTIONS(204), 13,
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
  [762] = 5,
    ACTIONS(210), 1,
      aux_sym__rgb_token1,
    ACTIONS(212), 1,
      aux_sym__rgba_token1,
    STATE(110), 1,
      sym_colour,
    STATE(100), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [786] = 6,
    ACTIONS(216), 1,
      anon_sym_name,
    ACTIONS(218), 1,
      anon_sym_x,
    ACTIONS(220), 1,
      anon_sym_y,
    ACTIONS(222), 1,
      anon_sym_xy,
    ACTIONS(224), 1,
      anon_sym_part,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [812] = 3,
    STATE(115), 1,
      sym_halign,
    ACTIONS(228), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(226), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [832] = 5,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(89), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [855] = 5,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_identifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(232), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [878] = 4,
    STATE(18), 1,
      sym__string,
    STATE(134), 1,
      sym__label_string,
    ACTIONS(236), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [899] = 5,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      sym_identifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(240), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [922] = 4,
    ACTIONS(244), 1,
      anon_sym_svg,
    ACTIONS(246), 1,
      anon_sym_DOTh,
    STATE(103), 2,
      sym_svg,
      sym_header,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [943] = 5,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(81), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [966] = 5,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(73), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [989] = 4,
    ACTIONS(250), 1,
      anon_sym_project,
    ACTIONS(252), 1,
      anon_sym_script,
    STATE(122), 2,
      sym_project,
      sym_script,
    ACTIONS(248), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1010] = 5,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(85), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1033] = 4,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      aux_sym__offset_token1,
    STATE(89), 1,
      sym__offset,
    ACTIONS(256), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1053] = 2,
    ACTIONS(262), 1,
      sym_width,
    ACTIONS(260), 10,
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
  [1069] = 1,
    ACTIONS(260), 11,
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
  [1083] = 3,
    ACTIONS(266), 1,
      aux_sym__offset_token1,
    STATE(75), 1,
      sym_offset,
    ACTIONS(264), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1101] = 4,
    ACTIONS(270), 1,
      anon_sym_timestamp,
    ACTIONS(272), 1,
      anon_sym_gzip,
    STATE(152), 1,
      sym__save_options,
    ACTIONS(268), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1121] = 4,
    ACTIONS(276), 1,
      anon_sym_name,
    ACTIONS(278), 1,
      anon_sym_height,
    ACTIONS(280), 1,
      anon_sym_width,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1141] = 3,
    ACTIONS(266), 1,
      aux_sym__offset_token1,
    STATE(96), 1,
      sym_offset,
    ACTIONS(282), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1159] = 4,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      aux_sym_font_token1,
    STATE(139), 1,
      sym_part,
    ACTIONS(286), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1178] = 4,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      aux_sym_font_token1,
    STATE(116), 1,
      sym_part,
    ACTIONS(103), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1197] = 3,
    ACTIONS(292), 1,
      anon_sym_project,
    ACTIONS(294), 1,
      anon_sym_script,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1214] = 3,
    ACTIONS(298), 1,
      anon_sym_panel,
    STATE(127), 1,
      sym_panel,
    ACTIONS(296), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1231] = 4,
    ACTIONS(198), 1,
      aux_sym_font_token1,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_name,
    ACTIONS(302), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1250] = 4,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    STATE(10), 1,
      sym_name,
    ACTIONS(306), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1269] = 3,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym__component,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1286] = 4,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_name,
    ACTIONS(316), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1305] = 4,
    ACTIONS(288), 1,
      aux_sym_font_token1,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_part,
    ACTIONS(320), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1324] = 4,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_name,
    ACTIONS(324), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1343] = 4,
    ACTIONS(288), 1,
      aux_sym_font_token1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_part,
    ACTIONS(328), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1362] = 4,
    ACTIONS(288), 1,
      aux_sym_font_token1,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_part,
    ACTIONS(332), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1381] = 3,
    ACTIONS(336), 1,
      aux_sym_fontsize_token1,
    STATE(121), 1,
      sym_fontsize,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1398] = 3,
    ACTIONS(340), 1,
      sym_height,
    ACTIONS(342), 1,
      sym_width,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1415] = 4,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      aux_sym_font_token1,
    STATE(123), 1,
      sym_font,
    ACTIONS(346), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1434] = 3,
    ACTIONS(190), 1,
      aux_sym__x_token1,
    STATE(144), 1,
      sym_x,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1451] = 3,
    ACTIONS(192), 1,
      aux_sym__y_token1,
    STATE(144), 1,
      sym_y,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1468] = 3,
    ACTIONS(354), 1,
      anon_sym_light,
    ACTIONS(356), 1,
      anon_sym_dark,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1485] = 3,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_decoration,
    ACTIONS(358), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1502] = 4,
    ACTIONS(348), 1,
      aux_sym_font_token1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(132), 1,
      sym_font,
    ACTIONS(364), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1521] = 4,
    ACTIONS(198), 1,
      aux_sym_font_token1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_name,
    ACTIONS(368), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1540] = 6,
    ACTIONS(370), 1,
      anon_sym_input,
    ACTIONS(372), 1,
      anon_sym_output,
    ACTIONS(374), 1,
      anon_sym_parameter,
    ACTIONS(376), 1,
      anon_sym_light,
    ACTIONS(378), 1,
      anon_sym_widget,
    STATE(178), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1563] = 4,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_name,
    ACTIONS(382), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1582] = 4,
    ACTIONS(198), 1,
      aux_sym_font_token1,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_name,
    ACTIONS(386), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1601] = 4,
    ACTIONS(348), 1,
      aux_sym_font_token1,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_font,
    ACTIONS(390), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1620] = 4,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      aux_sym_font_token1,
    STATE(116), 1,
      sym_name,
    ACTIONS(103), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1639] = 2,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(392), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1653] = 2,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(392), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1667] = 1,
    ACTIONS(398), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1679] = 1,
    ACTIONS(400), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1691] = 1,
    ACTIONS(402), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1703] = 2,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    ACTIONS(406), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1717] = 1,
    ACTIONS(408), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1729] = 2,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1743] = 2,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(414), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1757] = 2,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(414), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1771] = 2,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(420), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1785] = 2,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(420), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1799] = 2,
    ACTIONS(428), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1813] = 2,
    ACTIONS(432), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1827] = 2,
    ACTIONS(436), 1,
      aux_sym__x_attr_token2,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1841] = 2,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1855] = 2,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    ACTIONS(444), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1869] = 2,
    ACTIONS(448), 1,
      sym_width,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1883] = 2,
    ACTIONS(452), 1,
      aux_sym__x_attr_token2,
    ACTIONS(450), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1897] = 2,
    ACTIONS(456), 1,
      aux_sym__x_attr_token2,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1911] = 2,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1925] = 1,
    ACTIONS(462), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1937] = 2,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    ACTIONS(466), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1951] = 1,
    ACTIONS(468), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1963] = 2,
    ACTIONS(472), 1,
      aux_sym__x_attr_token2,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1977] = 2,
    ACTIONS(476), 1,
      anon_sym_timestamp,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1991] = 2,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2005] = 2,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    ACTIONS(482), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2019] = 1,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2030] = 1,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2041] = 1,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2052] = 1,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2063] = 1,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2074] = 1,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2085] = 1,
    ACTIONS(494), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2096] = 1,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2107] = 1,
    ACTIONS(498), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2118] = 1,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2129] = 1,
    ACTIONS(502), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2140] = 1,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2151] = 1,
    ACTIONS(506), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2162] = 1,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2173] = 1,
    ACTIONS(510), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2184] = 1,
    ACTIONS(512), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2195] = 1,
    ACTIONS(514), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2206] = 1,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2217] = 1,
    ACTIONS(516), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2228] = 1,
    ACTIONS(450), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2239] = 1,
    ACTIONS(518), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2250] = 1,
    ACTIONS(520), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2261] = 1,
    ACTIONS(522), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2272] = 1,
    ACTIONS(524), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2283] = 1,
    ACTIONS(526), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2294] = 1,
    ACTIONS(528), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2305] = 1,
    ACTIONS(530), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2316] = 1,
    ACTIONS(532), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2327] = 1,
    ACTIONS(534), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2338] = 1,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2349] = 1,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2360] = 1,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2371] = 1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2382] = 1,
    ACTIONS(544), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2393] = 1,
    ACTIONS(546), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2404] = 1,
    ACTIONS(548), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2415] = 1,
    ACTIONS(550), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2426] = 1,
    ACTIONS(552), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2437] = 1,
    ACTIONS(554), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2448] = 1,
    ACTIONS(414), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2459] = 1,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2470] = 1,
    ACTIONS(556), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2481] = 1,
    ACTIONS(558), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2492] = 1,
    ACTIONS(560), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2503] = 1,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2514] = 1,
    ACTIONS(564), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2525] = 1,
    ACTIONS(566), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2536] = 1,
    ACTIONS(392), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2547] = 1,
    ACTIONS(568), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2558] = 1,
    ACTIONS(570), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2569] = 1,
    ACTIONS(572), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2580] = 1,
    ACTIONS(574), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2591] = 1,
    ACTIONS(576), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2602] = 1,
    ACTIONS(578), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2613] = 1,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2624] = 3,
    ACTIONS(582), 1,
      anon_sym_AT,
    ACTIONS(584), 1,
      aux_sym__x_attr_token1,
    ACTIONS(586), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2637] = 3,
    ACTIONS(436), 1,
      aux_sym__x_attr_token1,
    ACTIONS(588), 1,
      anon_sym_AT,
    ACTIONS(590), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2650] = 3,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(77), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2662] = 3,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(77), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2674] = 3,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(77), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2686] = 3,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(77), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2698] = 3,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_identifier,
    ACTIONS(77), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2710] = 1,
    ACTIONS(592), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [2718] = 2,
    STATE(112), 1,
      sym_valign,
    ACTIONS(594), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2728] = 3,
    ACTIONS(596), 1,
      aux_sym__rgb_token1,
    ACTIONS(598), 1,
      aux_sym__rgba_token1,
    STATE(108), 2,
      sym__rgb,
      sym__rgba,
  [2739] = 3,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      aux_sym__offset_token1,
    STATE(186), 1,
      sym__offset,
  [2749] = 2,
    ACTIONS(604), 1,
      aux_sym__x_attr_token2,
    ACTIONS(606), 1,
      anon_sym_COMMA,
  [2756] = 2,
    ACTIONS(608), 1,
      aux_sym__y_token1,
    STATE(66), 1,
      sym__y,
  [2763] = 2,
    ACTIONS(610), 1,
      aux_sym_font_token1,
    STATE(126), 1,
      sym_name,
  [2770] = 2,
    ACTIONS(612), 1,
      aux_sym__rgb_token1,
    STATE(145), 1,
      sym_rgb,
  [2777] = 2,
    ACTIONS(610), 1,
      aux_sym_font_token1,
    STATE(113), 1,
      sym_name,
  [2784] = 2,
    ACTIONS(608), 1,
      aux_sym__y_token1,
    STATE(78), 1,
      sym__y,
  [2791] = 2,
    ACTIONS(202), 1,
      aux_sym__rgba_token1,
    STATE(145), 1,
      sym_rgba,
  [2798] = 1,
    ACTIONS(614), 1,
      sym_width,
  [2802] = 1,
    ACTIONS(616), 1,
      anon_sym_COMMA,
  [2806] = 1,
    ACTIONS(618), 1,
      anon_sym_timestamp,
  [2810] = 1,
    ACTIONS(618), 1,
      anon_sym_gzip,
  [2814] = 1,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
  [2818] = 1,
    ACTIONS(622), 1,
      aux_sym__label_absolute_token1,
  [2822] = 1,
    ACTIONS(606), 1,
      anon_sym_COMMA,
  [2826] = 1,
    ACTIONS(604), 1,
      aux_sym__x_attr_token1,
  [2830] = 1,
    ACTIONS(452), 1,
      aux_sym__x_attr_token1,
  [2834] = 1,
    ACTIONS(456), 1,
      aux_sym__x_attr_token1,
  [2838] = 1,
    ACTIONS(472), 1,
      aux_sym__x_attr_token1,
  [2842] = 1,
    ACTIONS(624), 1,
      aux_sym__absolute_token1,
  [2846] = 1,
    ACTIONS(626), 1,
      anon_sym_COMMA,
  [2850] = 1,
    ACTIONS(628), 1,
      anon_sym_COMMA,
  [2854] = 1,
    ACTIONS(630), 1,
      anon_sym_COMMA,
  [2858] = 1,
    ACTIONS(614), 1,
      sym_height,
  [2862] = 1,
    ACTIONS(632), 1,
      aux_sym__label_absolute_token1,
  [2866] = 1,
    ACTIONS(634), 1,
      anon_sym_COMMA,
  [2870] = 1,
    ACTIONS(636), 1,
      aux_sym__absolute_token1,
  [2874] = 1,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
  [2878] = 1,
    ACTIONS(640), 1,
      anon_sym_COMMA,
  [2882] = 1,
    ACTIONS(642), 1,
      aux_sym__label_relative_token1,
  [2886] = 1,
    ACTIONS(644), 1,
      anon_sym_COMMA,
  [2890] = 1,
    ACTIONS(436), 1,
      aux_sym__x_attr_token1,
  [2894] = 1,
    ACTIONS(646), 1,
      anon_sym_COMMA,
  [2898] = 1,
    ACTIONS(648), 1,
      anon_sym_with,
  [2902] = 1,
    ACTIONS(650), 1,
      aux_sym__absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 134,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 218,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 277,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 337,
  [SMALL_STATE(13)] = 372,
  [SMALL_STATE(14)] = 403,
  [SMALL_STATE(15)] = 432,
  [SMALL_STATE(16)] = 467,
  [SMALL_STATE(17)] = 498,
  [SMALL_STATE(18)] = 524,
  [SMALL_STATE(19)] = 552,
  [SMALL_STATE(20)] = 580,
  [SMALL_STATE(21)] = 599,
  [SMALL_STATE(22)] = 626,
  [SMALL_STATE(23)] = 645,
  [SMALL_STATE(24)] = 664,
  [SMALL_STATE(25)] = 683,
  [SMALL_STATE(26)] = 712,
  [SMALL_STATE(27)] = 743,
  [SMALL_STATE(28)] = 762,
  [SMALL_STATE(29)] = 786,
  [SMALL_STATE(30)] = 812,
  [SMALL_STATE(31)] = 832,
  [SMALL_STATE(32)] = 855,
  [SMALL_STATE(33)] = 878,
  [SMALL_STATE(34)] = 899,
  [SMALL_STATE(35)] = 922,
  [SMALL_STATE(36)] = 943,
  [SMALL_STATE(37)] = 966,
  [SMALL_STATE(38)] = 989,
  [SMALL_STATE(39)] = 1010,
  [SMALL_STATE(40)] = 1033,
  [SMALL_STATE(41)] = 1053,
  [SMALL_STATE(42)] = 1069,
  [SMALL_STATE(43)] = 1083,
  [SMALL_STATE(44)] = 1101,
  [SMALL_STATE(45)] = 1121,
  [SMALL_STATE(46)] = 1141,
  [SMALL_STATE(47)] = 1159,
  [SMALL_STATE(48)] = 1178,
  [SMALL_STATE(49)] = 1197,
  [SMALL_STATE(50)] = 1214,
  [SMALL_STATE(51)] = 1231,
  [SMALL_STATE(52)] = 1250,
  [SMALL_STATE(53)] = 1269,
  [SMALL_STATE(54)] = 1286,
  [SMALL_STATE(55)] = 1305,
  [SMALL_STATE(56)] = 1324,
  [SMALL_STATE(57)] = 1343,
  [SMALL_STATE(58)] = 1362,
  [SMALL_STATE(59)] = 1381,
  [SMALL_STATE(60)] = 1398,
  [SMALL_STATE(61)] = 1415,
  [SMALL_STATE(62)] = 1434,
  [SMALL_STATE(63)] = 1451,
  [SMALL_STATE(64)] = 1468,
  [SMALL_STATE(65)] = 1485,
  [SMALL_STATE(66)] = 1502,
  [SMALL_STATE(67)] = 1521,
  [SMALL_STATE(68)] = 1540,
  [SMALL_STATE(69)] = 1563,
  [SMALL_STATE(70)] = 1582,
  [SMALL_STATE(71)] = 1601,
  [SMALL_STATE(72)] = 1620,
  [SMALL_STATE(73)] = 1639,
  [SMALL_STATE(74)] = 1653,
  [SMALL_STATE(75)] = 1667,
  [SMALL_STATE(76)] = 1679,
  [SMALL_STATE(77)] = 1691,
  [SMALL_STATE(78)] = 1703,
  [SMALL_STATE(79)] = 1717,
  [SMALL_STATE(80)] = 1729,
  [SMALL_STATE(81)] = 1743,
  [SMALL_STATE(82)] = 1757,
  [SMALL_STATE(83)] = 1771,
  [SMALL_STATE(84)] = 1785,
  [SMALL_STATE(85)] = 1799,
  [SMALL_STATE(86)] = 1813,
  [SMALL_STATE(87)] = 1827,
  [SMALL_STATE(88)] = 1841,
  [SMALL_STATE(89)] = 1855,
  [SMALL_STATE(90)] = 1869,
  [SMALL_STATE(91)] = 1883,
  [SMALL_STATE(92)] = 1897,
  [SMALL_STATE(93)] = 1911,
  [SMALL_STATE(94)] = 1925,
  [SMALL_STATE(95)] = 1937,
  [SMALL_STATE(96)] = 1951,
  [SMALL_STATE(97)] = 1963,
  [SMALL_STATE(98)] = 1977,
  [SMALL_STATE(99)] = 1991,
  [SMALL_STATE(100)] = 2005,
  [SMALL_STATE(101)] = 2019,
  [SMALL_STATE(102)] = 2030,
  [SMALL_STATE(103)] = 2041,
  [SMALL_STATE(104)] = 2052,
  [SMALL_STATE(105)] = 2063,
  [SMALL_STATE(106)] = 2074,
  [SMALL_STATE(107)] = 2085,
  [SMALL_STATE(108)] = 2096,
  [SMALL_STATE(109)] = 2107,
  [SMALL_STATE(110)] = 2118,
  [SMALL_STATE(111)] = 2129,
  [SMALL_STATE(112)] = 2140,
  [SMALL_STATE(113)] = 2151,
  [SMALL_STATE(114)] = 2162,
  [SMALL_STATE(115)] = 2173,
  [SMALL_STATE(116)] = 2184,
  [SMALL_STATE(117)] = 2195,
  [SMALL_STATE(118)] = 2206,
  [SMALL_STATE(119)] = 2217,
  [SMALL_STATE(120)] = 2228,
  [SMALL_STATE(121)] = 2239,
  [SMALL_STATE(122)] = 2250,
  [SMALL_STATE(123)] = 2261,
  [SMALL_STATE(124)] = 2272,
  [SMALL_STATE(125)] = 2283,
  [SMALL_STATE(126)] = 2294,
  [SMALL_STATE(127)] = 2305,
  [SMALL_STATE(128)] = 2316,
  [SMALL_STATE(129)] = 2327,
  [SMALL_STATE(130)] = 2338,
  [SMALL_STATE(131)] = 2349,
  [SMALL_STATE(132)] = 2360,
  [SMALL_STATE(133)] = 2371,
  [SMALL_STATE(134)] = 2382,
  [SMALL_STATE(135)] = 2393,
  [SMALL_STATE(136)] = 2404,
  [SMALL_STATE(137)] = 2415,
  [SMALL_STATE(138)] = 2426,
  [SMALL_STATE(139)] = 2437,
  [SMALL_STATE(140)] = 2448,
  [SMALL_STATE(141)] = 2459,
  [SMALL_STATE(142)] = 2470,
  [SMALL_STATE(143)] = 2481,
  [SMALL_STATE(144)] = 2492,
  [SMALL_STATE(145)] = 2503,
  [SMALL_STATE(146)] = 2514,
  [SMALL_STATE(147)] = 2525,
  [SMALL_STATE(148)] = 2536,
  [SMALL_STATE(149)] = 2547,
  [SMALL_STATE(150)] = 2558,
  [SMALL_STATE(151)] = 2569,
  [SMALL_STATE(152)] = 2580,
  [SMALL_STATE(153)] = 2591,
  [SMALL_STATE(154)] = 2602,
  [SMALL_STATE(155)] = 2613,
  [SMALL_STATE(156)] = 2624,
  [SMALL_STATE(157)] = 2637,
  [SMALL_STATE(158)] = 2650,
  [SMALL_STATE(159)] = 2662,
  [SMALL_STATE(160)] = 2674,
  [SMALL_STATE(161)] = 2686,
  [SMALL_STATE(162)] = 2698,
  [SMALL_STATE(163)] = 2710,
  [SMALL_STATE(164)] = 2718,
  [SMALL_STATE(165)] = 2728,
  [SMALL_STATE(166)] = 2739,
  [SMALL_STATE(167)] = 2749,
  [SMALL_STATE(168)] = 2756,
  [SMALL_STATE(169)] = 2763,
  [SMALL_STATE(170)] = 2770,
  [SMALL_STATE(171)] = 2777,
  [SMALL_STATE(172)] = 2784,
  [SMALL_STATE(173)] = 2791,
  [SMALL_STATE(174)] = 2798,
  [SMALL_STATE(175)] = 2802,
  [SMALL_STATE(176)] = 2806,
  [SMALL_STATE(177)] = 2810,
  [SMALL_STATE(178)] = 2814,
  [SMALL_STATE(179)] = 2818,
  [SMALL_STATE(180)] = 2822,
  [SMALL_STATE(181)] = 2826,
  [SMALL_STATE(182)] = 2830,
  [SMALL_STATE(183)] = 2834,
  [SMALL_STATE(184)] = 2838,
  [SMALL_STATE(185)] = 2842,
  [SMALL_STATE(186)] = 2846,
  [SMALL_STATE(187)] = 2850,
  [SMALL_STATE(188)] = 2854,
  [SMALL_STATE(189)] = 2858,
  [SMALL_STATE(190)] = 2862,
  [SMALL_STATE(191)] = 2866,
  [SMALL_STATE(192)] = 2870,
  [SMALL_STATE(193)] = 2874,
  [SMALL_STATE(194)] = 2878,
  [SMALL_STATE(195)] = 2882,
  [SMALL_STATE(196)] = 2886,
  [SMALL_STATE(197)] = 2890,
  [SMALL_STATE(198)] = 2894,
  [SMALL_STATE(199)] = 2898,
  [SMALL_STATE(200)] = 2902,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_attr, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(53),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(49),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(38),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(50),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_entity, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_entity, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 4),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [638] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
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
