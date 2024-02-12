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
#define STATE_COUNT 211
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 141
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
  sym_height = 6,
  sym_width = 7,
  anon_sym_set = 8,
  anon_sym_name = 9,
  anon_sym_height = 10,
  anon_sym_width = 11,
  anon_sym_x = 12,
  anon_sym_y = 13,
  anon_sym_xy = 14,
  anon_sym_part = 15,
  anon_sym_AT = 16,
  aux_sym__x_attr_token1 = 17,
  anon_sym_left = 18,
  anon_sym_centre = 19,
  anon_sym_center = 20,
  anon_sym_right = 21,
  aux_sym__x_attr_token2 = 22,
  aux_sym__x_attr_token3 = 23,
  anon_sym_top = 24,
  anon_sym_middle = 25,
  anon_sym_bottom = 26,
  anon_sym_COMMA = 27,
  anon_sym_decorate = 28,
  anon_sym_LPAREN = 29,
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
  sym_set = 75,
  sym__module_attr = 76,
  sym__input_attr = 77,
  sym__output_attr = 78,
  sym__parameter_attr = 79,
  sym__x_attr = 80,
  sym__y_attr = 81,
  sym__xy_attr = 82,
  sym_decorate = 83,
  sym__component = 84,
  sym_decoration = 85,
  sym_delete = 86,
  sym__guideline_id = 87,
  sym__input_id = 88,
  sym__output_id = 89,
  sym__parameter_id = 90,
  sym__light_id = 91,
  sym__widget_id = 92,
  sym__label_id = 93,
  sym__decoration_id = 94,
  sym__component_id = 95,
  sym_load = 96,
  sym_save = 97,
  sym_project = 98,
  sym__save_options = 99,
  sym_script = 100,
  sym_export = 101,
  sym_panel = 102,
  sym_svg = 103,
  sym_header = 104,
  sym_origin = 105,
  sym_background = 106,
  sym_guide = 107,
  sym_light = 108,
  sym_widget = 109,
  sym_label = 110,
  sym__label_string = 111,
  sym__label_absolute = 112,
  sym__label_relative = 113,
  sym__label_geometry = 114,
  sym_font = 115,
  sym_fontsize = 116,
  sym_halign = 117,
  sym_valign = 118,
  sym_colour = 119,
  sym__rgb = 120,
  sym__rgba = 121,
  sym_name = 122,
  sym_part = 123,
  sym_rgb = 124,
  sym_rgba = 125,
  sym_absolute = 126,
  sym__absolute = 127,
  sym__relative = 128,
  sym__x = 129,
  sym__y = 130,
  sym_x = 131,
  sym_y = 132,
  sym_xy = 133,
  sym__xy = 134,
  sym__offset = 135,
  sym_offset = 136,
  sym_string = 137,
  sym__string = 138,
  sym_identifier = 139,
  aux_sym_command_repeat1 = 140,
  alias_sym_reference = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
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
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__input_attr] = "_input_attr",
  [sym__output_attr] = "_output_attr",
  [sym__parameter_attr] = "_parameter_attr",
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
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym__input_attr] = sym__input_attr,
  [sym__output_attr] = sym__output_attr,
  [sym__parameter_attr] = sym__parameter_attr,
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
  [sym_header] = sym_header,
  [sym_origin] = sym_origin,
  [sym_background] = sym_background,
  [sym_guide] = sym_guide,
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
  [sym__output_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter_attr] = {
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
  [42] = 5,
  [43] = 7,
  [44] = 6,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
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
  [168] = 6,
  [169] = 7,
  [170] = 5,
  [171] = 37,
  [172] = 36,
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
      if (lookahead == '(') ADVANCE(368);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '0') ADVANCE(284);
      if (lookahead == '@') ADVANCE(282);
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
      if (lookahead == 'x') ADVANCE(274);
      if (lookahead == 'y') ADVANCE(276);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(285);
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
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'm') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '8') ADVANCE(31);
      if (lookahead == 'H') ADVANCE(264);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(264);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(264);
      if (lookahead == 'U') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(144);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'm') ADVANCE(329);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(264);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'H') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
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
      if (lookahead == 't') ADVANCE(280);
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
      if (lookahead == 'e') ADVANCE(270);
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
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(364);
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
      if (lookahead == 'h') ADVANCE(273);
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
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(435);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(263);
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
      if (lookahead == 'm') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(138);
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
      if (lookahead == 'o') ADVANCE(136);
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
      if (lookahead == 'p') ADVANCE(357);
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
      if (lookahead == 'r') ADVANCE(298);
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
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(272);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 245:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == 'x') ADVANCE(275);
      if (lookahead == 'y') ADVANCE(277);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 246:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(368);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 247:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '@') ADVANCE(282);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
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
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'c') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == 's') ADVANCE(307);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 251:
      if (eof) ADVANCE(254);
      if (lookahead == '@') ADVANCE(282);
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
          lookahead == '-') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 252:
      if (eof) ADVANCE(254);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
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
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(144);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'H') ADVANCE(283);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'H') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'H') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'H') ADVANCE(283);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'H') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(283);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(283);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(283);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(283);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(283);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'H') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == 'H') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 'l') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'f') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'g') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'h') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'l') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'm') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'n') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'v') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'w') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'x') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_light);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
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
      if (lookahead == 'e') ADVANCE(367);
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
      if (lookahead == 't') ADVANCE(269);
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
      if (lookahead == 'e') ADVANCE(271);
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
      if (lookahead == 'e') ADVANCE(366);
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
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(281);
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
  [8] = {.lex_state = 250},
  [9] = {.lex_state = 250},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 250},
  [12] = {.lex_state = 250},
  [13] = {.lex_state = 247},
  [14] = {.lex_state = 247},
  [15] = {.lex_state = 247},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 250},
  [18] = {.lex_state = 250},
  [19] = {.lex_state = 252},
  [20] = {.lex_state = 251},
  [21] = {.lex_state = 244},
  [22] = {.lex_state = 252},
  [23] = {.lex_state = 252},
  [24] = {.lex_state = 246},
  [25] = {.lex_state = 248},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 247},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 249},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 246},
  [37] = {.lex_state = 246},
  [38] = {.lex_state = 246},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 247},
  [42] = {.lex_state = 246},
  [43] = {.lex_state = 246},
  [44] = {.lex_state = 246},
  [45] = {.lex_state = 248},
  [46] = {.lex_state = 247},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 247},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 249},
  [51] = {.lex_state = 247},
  [52] = {.lex_state = 248},
  [53] = {.lex_state = 248},
  [54] = {.lex_state = 248},
  [55] = {.lex_state = 248},
  [56] = {.lex_state = 248},
  [57] = {.lex_state = 249},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 247},
  [60] = {.lex_state = 247},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 248},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 248},
  [67] = {.lex_state = 248},
  [68] = {.lex_state = 248},
  [69] = {.lex_state = 248},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 248},
  [72] = {.lex_state = 247},
  [73] = {.lex_state = 248},
  [74] = {.lex_state = 248},
  [75] = {.lex_state = 248},
  [76] = {.lex_state = 248},
  [77] = {.lex_state = 248},
  [78] = {.lex_state = 248},
  [79] = {.lex_state = 248},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 248},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 251},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 248},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 253},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 251},
  [97] = {.lex_state = 251},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 248},
  [100] = {.lex_state = 253},
  [101] = {.lex_state = 249},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 248},
  [107] = {.lex_state = 248},
  [108] = {.lex_state = 251},
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
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 25},
  [167] = {.lex_state = 25},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 251},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 245},
  [177] = {.lex_state = 250},
  [178] = {.lex_state = 247},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 245},
  [182] = {.lex_state = 247},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 245},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 250},
  [192] = {.lex_state = 250},
  [193] = {.lex_state = 250},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 245},
  [197] = {.lex_state = 250},
  [198] = {.lex_state = 245},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 251},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 250},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 244},
  [208] = {.lex_state = 246},
  [209] = {.lex_state = 246},
  [210] = {.lex_state = 244},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
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
    [sym_command] = STATE(186),
    [sym_new] = STATE(10),
    [sym_set] = STATE(10),
    [sym_decorate] = STATE(10),
    [sym_delete] = STATE(10),
    [sym_load] = STATE(10),
    [sym_save] = STATE(10),
    [sym_export] = STATE(10),
    [aux_sym_command_repeat1] = STATE(10),
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
    STATE(116), 8,
      sym_module,
      sym__input_entity,
      sym__output_entity,
      sym__parameter_entity,
      sym_guide,
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
    STATE(132), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [90] = 11,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(59), 1,
      anon_sym_input,
    ACTIONS(61), 1,
      anon_sym_output,
    ACTIONS(63), 1,
      anon_sym_parameter,
    ACTIONS(65), 1,
      anon_sym_origin,
    ACTIONS(67), 1,
      anon_sym_background,
    STATE(32), 1,
      sym__parameter_id,
    STATE(34), 1,
      sym__output_id,
    STATE(35), 1,
      sym__input_id,
    STATE(118), 6,
      sym__module_attr,
      sym__input_attr,
      sym__output_attr,
      sym__parameter_attr,
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
  [136] = 5,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(75), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(71), 12,
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
  [164] = 5,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(75), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(79), 12,
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
  [192] = 5,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(75), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(83), 12,
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
  [220] = 6,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      aux_sym__x_attr_token1,
    STATE(135), 1,
      sym__x_attr,
    ACTIONS(93), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(87), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [249] = 6,
    ACTIONS(89), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      aux_sym__x_attr_token1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym__x_attr,
    ACTIONS(93), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(97), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [278] = 9,
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
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(16), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [313] = 6,
    ACTIONS(89), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      aux_sym__x_attr_token1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym__x_attr,
    ACTIONS(93), 5,
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
  [342] = 6,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_AT,
    ACTIONS(107), 1,
      aux_sym__x_attr_token1,
    STATE(135), 1,
      sym__xy_attr,
    ACTIONS(109), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(87), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [371] = 7,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      aux_sym__absolute_token1,
    ACTIONS(117), 1,
      aux_sym__x_token1,
    STATE(56), 1,
      sym_xy,
    STATE(202), 1,
      sym__x,
    STATE(106), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(111), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [402] = 7,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      aux_sym__absolute_token1,
    ACTIONS(117), 1,
      aux_sym__x_token1,
    STATE(54), 1,
      sym_xy,
    STATE(202), 1,
      sym__x,
    STATE(106), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [433] = 7,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      aux_sym__absolute_token1,
    ACTIONS(117), 1,
      aux_sym__x_token1,
    STATE(55), 1,
      sym_xy,
    STATE(202), 1,
      sym__x,
    STATE(106), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [464] = 9,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      anon_sym_new,
    ACTIONS(128), 1,
      anon_sym_set,
    ACTIONS(131), 1,
      anon_sym_decorate,
    ACTIONS(134), 1,
      anon_sym_delete,
    ACTIONS(137), 1,
      anon_sym_load,
    ACTIONS(140), 1,
      anon_sym_save,
    ACTIONS(143), 1,
      anon_sym_export,
    STATE(16), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [499] = 6,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_AT,
    ACTIONS(107), 1,
      aux_sym__x_attr_token1,
    STATE(124), 1,
      sym__xy_attr,
    ACTIONS(109), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(97), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [528] = 6,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_AT,
    ACTIONS(107), 1,
      aux_sym__x_attr_token1,
    STATE(136), 1,
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
  [557] = 6,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(148), 1,
      aux_sym__x_attr_token1,
    STATE(135), 1,
      sym__y_attr,
    ACTIONS(150), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(87), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [585] = 6,
    ACTIONS(117), 1,
      aux_sym__x_token1,
    ACTIONS(154), 1,
      anon_sym_AT,
    ACTIONS(156), 1,
      aux_sym__label_relative_token1,
    STATE(203), 1,
      sym__x,
    STATE(113), 3,
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
  [613] = 5,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(156), 2,
      sym_string,
      sym_identifier,
    ACTIONS(73), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(160), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [639] = 6,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(148), 1,
      aux_sym__x_attr_token1,
    STATE(136), 1,
      sym__y_attr,
    ACTIONS(150), 4,
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
  [667] = 6,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(148), 1,
      aux_sym__x_attr_token1,
    STATE(124), 1,
      sym__y_attr,
    ACTIONS(150), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(97), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [695] = 6,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    STATE(154), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(166), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [722] = 8,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      aux_sym_font_token1,
    ACTIONS(176), 1,
      aux_sym__rgb_token1,
    ACTIONS(178), 1,
      aux_sym__rgba_token1,
    STATE(85), 1,
      sym_rgba,
    STATE(86), 1,
      sym_rgb,
    STATE(161), 1,
      sym_name,
    ACTIONS(172), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [753] = 2,
    ACTIONS(182), 1,
      anon_sym_x,
    ACTIONS(180), 13,
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
  [772] = 2,
    ACTIONS(186), 1,
      anon_sym_x,
    ACTIONS(184), 13,
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
  [791] = 2,
    ACTIONS(190), 1,
      anon_sym_x,
    ACTIONS(188), 13,
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
  [810] = 7,
    ACTIONS(194), 1,
      anon_sym_AT,
    ACTIONS(196), 1,
      aux_sym__x_token1,
    ACTIONS(198), 1,
      aux_sym__y_token1,
    STATE(92), 1,
      sym_y,
    STATE(93), 1,
      sym_x,
    STATE(160), 1,
      sym_absolute,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [839] = 2,
    ACTIONS(202), 1,
      anon_sym_x,
    ACTIONS(200), 13,
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
  [858] = 5,
    ACTIONS(206), 1,
      aux_sym__rgb_token1,
    ACTIONS(208), 1,
      aux_sym__rgba_token1,
    STATE(119), 1,
      sym_colour,
    STATE(95), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [882] = 6,
    ACTIONS(212), 1,
      anon_sym_name,
    ACTIONS(214), 1,
      anon_sym_x,
    ACTIONS(216), 1,
      anon_sym_y,
    ACTIONS(218), 1,
      anon_sym_xy,
    ACTIONS(220), 1,
      anon_sym_part,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [908] = 3,
    STATE(123), 1,
      sym_halign,
    ACTIONS(224), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(222), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [928] = 6,
    ACTIONS(228), 1,
      anon_sym_name,
    ACTIONS(230), 1,
      anon_sym_x,
    ACTIONS(232), 1,
      anon_sym_y,
    ACTIONS(234), 1,
      anon_sym_xy,
    ACTIONS(236), 1,
      anon_sym_part,
    ACTIONS(226), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [954] = 6,
    ACTIONS(240), 1,
      anon_sym_name,
    ACTIONS(242), 1,
      anon_sym_x,
    ACTIONS(244), 1,
      anon_sym_y,
    ACTIONS(246), 1,
      anon_sym_xy,
    ACTIONS(248), 1,
      anon_sym_part,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [980] = 5,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(75), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(252), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1003] = 5,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(75), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(256), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1026] = 5,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(75), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(260), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1049] = 4,
    ACTIONS(264), 1,
      anon_sym_project,
    ACTIONS(266), 1,
      anon_sym_script,
    STATE(146), 2,
      sym_project,
      sym_script,
    ACTIONS(262), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1070] = 4,
    ACTIONS(270), 1,
      anon_sym_svg,
    ACTIONS(272), 1,
      anon_sym_DOTh,
    STATE(121), 2,
      sym_svg,
      sym_header,
    ACTIONS(268), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1091] = 4,
    STATE(20), 1,
      sym__string,
    STATE(151), 1,
      sym__label_string,
    ACTIONS(276), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1112] = 5,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(75), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(71), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1135] = 5,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(75), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(83), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1158] = 5,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(75), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(79), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1181] = 4,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      aux_sym__offset_token1,
    STATE(99), 1,
      sym__offset,
    ACTIONS(280), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1201] = 3,
    ACTIONS(286), 1,
      aux_sym__offset_token1,
    STATE(102), 1,
      sym_offset,
    ACTIONS(284), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1219] = 4,
    ACTIONS(290), 1,
      anon_sym_timestamp,
    ACTIONS(292), 1,
      anon_sym_gzip,
    STATE(137), 1,
      sym__save_options,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1239] = 3,
    ACTIONS(286), 1,
      aux_sym__offset_token1,
    STATE(103), 1,
      sym_offset,
    ACTIONS(294), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1257] = 4,
    ACTIONS(298), 1,
      anon_sym_name,
    ACTIONS(300), 1,
      anon_sym_height,
    ACTIONS(302), 1,
      anon_sym_width,
    ACTIONS(296), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1277] = 2,
    ACTIONS(306), 1,
      sym_width,
    ACTIONS(304), 10,
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
  [1293] = 1,
    ACTIONS(304), 11,
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
  [1307] = 4,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      aux_sym_font_token1,
    STATE(144), 1,
      sym_font,
    ACTIONS(310), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1326] = 4,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      aux_sym_font_token1,
    STATE(135), 1,
      sym_part,
    ACTIONS(87), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1345] = 4,
    ACTIONS(314), 1,
      aux_sym_font_token1,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      sym_part,
    ACTIONS(318), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1364] = 4,
    ACTIONS(314), 1,
      aux_sym_font_token1,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_part,
    ACTIONS(322), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1383] = 4,
    ACTIONS(314), 1,
      aux_sym_font_token1,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      sym_part,
    ACTIONS(326), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1402] = 3,
    ACTIONS(330), 1,
      sym_height,
    ACTIONS(332), 1,
      sym_width,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1419] = 3,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym__component,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1436] = 3,
    ACTIONS(198), 1,
      aux_sym__y_token1,
    STATE(155), 1,
      sym_y,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1453] = 3,
    ACTIONS(196), 1,
      aux_sym__x_token1,
    STATE(155), 1,
      sym_x,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1470] = 3,
    ACTIONS(342), 1,
      anon_sym_light,
    ACTIONS(344), 1,
      anon_sym_dark,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1487] = 3,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      sym_decoration,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1504] = 4,
    ACTIONS(312), 1,
      aux_sym_font_token1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_font,
    ACTIONS(352), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1523] = 6,
    ACTIONS(354), 1,
      anon_sym_input,
    ACTIONS(356), 1,
      anon_sym_output,
    ACTIONS(358), 1,
      anon_sym_parameter,
    ACTIONS(360), 1,
      anon_sym_light,
    ACTIONS(362), 1,
      anon_sym_widget,
    STATE(184), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1546] = 3,
    ACTIONS(366), 1,
      anon_sym_project,
    ACTIONS(368), 1,
      anon_sym_script,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1563] = 4,
    ACTIONS(174), 1,
      aux_sym_font_token1,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_name,
    ACTIONS(372), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1582] = 4,
    ACTIONS(312), 1,
      aux_sym_font_token1,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_font,
    ACTIONS(376), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1601] = 4,
    ACTIONS(174), 1,
      aux_sym_font_token1,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_name,
    ACTIONS(380), 7,
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
    ACTIONS(314), 1,
      aux_sym_font_token1,
    STATE(136), 1,
      sym_part,
    ACTIONS(103), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1639] = 3,
    ACTIONS(384), 1,
      anon_sym_panel,
    STATE(147), 1,
      sym_panel,
    ACTIONS(382), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1656] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      aux_sym_font_token1,
    STATE(124), 1,
      sym_name,
    ACTIONS(97), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1675] = 3,
    ACTIONS(388), 1,
      aux_sym_fontsize_token1,
    STATE(131), 1,
      sym_fontsize,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1692] = 4,
    ACTIONS(174), 1,
      aux_sym_font_token1,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_name,
    ACTIONS(392), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1711] = 4,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      aux_sym_font_token1,
    STATE(15), 1,
      sym_name,
    ACTIONS(396), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1730] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      aux_sym_font_token1,
    STATE(124), 1,
      sym_part,
    ACTIONS(97), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1749] = 4,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      aux_sym_font_token1,
    STATE(135), 1,
      sym_name,
    ACTIONS(87), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1768] = 4,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      aux_sym_font_token1,
    STATE(136), 1,
      sym_name,
    ACTIONS(103), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1787] = 4,
    ACTIONS(398), 1,
      aux_sym_font_token1,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_name,
    ACTIONS(402), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1806] = 4,
    ACTIONS(398), 1,
      aux_sym_font_token1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_name,
    ACTIONS(406), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1825] = 1,
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
  [1837] = 2,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(410), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1851] = 2,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1865] = 2,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(418), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1879] = 2,
    ACTIONS(424), 1,
      aux_sym__x_attr_token2,
    ACTIONS(422), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1893] = 2,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1907] = 2,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1921] = 1,
    ACTIONS(432), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1933] = 1,
    ACTIONS(434), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1945] = 2,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
    ACTIONS(438), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1959] = 1,
    ACTIONS(440), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1971] = 2,
    ACTIONS(444), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1985] = 2,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1999] = 2,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2013] = 2,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(410), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2027] = 2,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2041] = 2,
    ACTIONS(460), 1,
      aux_sym__x_attr_token2,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2055] = 2,
    ACTIONS(464), 1,
      aux_sym__x_attr_token2,
    ACTIONS(462), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2069] = 2,
    ACTIONS(468), 1,
      anon_sym_timestamp,
    ACTIONS(466), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2083] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2097] = 2,
    ACTIONS(476), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2111] = 2,
    ACTIONS(480), 1,
      sym_width,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2125] = 1,
    ACTIONS(482), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2137] = 1,
    ACTIONS(484), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2149] = 1,
    ACTIONS(486), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2161] = 2,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2175] = 2,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    ACTIONS(494), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2189] = 2,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    ACTIONS(498), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2203] = 2,
    ACTIONS(502), 1,
      aux_sym__x_attr_token2,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2217] = 1,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2228] = 1,
    ACTIONS(422), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2239] = 1,
    ACTIONS(506), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2250] = 1,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2261] = 1,
    ACTIONS(510), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2272] = 1,
    ACTIONS(512), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2283] = 1,
    ACTIONS(514), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2294] = 1,
    ACTIONS(516), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2305] = 1,
    ACTIONS(518), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2316] = 1,
    ACTIONS(520), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2327] = 1,
    ACTIONS(522), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2338] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2349] = 1,
    ACTIONS(524), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2360] = 1,
    ACTIONS(526), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2371] = 1,
    ACTIONS(528), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2382] = 1,
    ACTIONS(530), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2393] = 1,
    ACTIONS(532), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2404] = 1,
    ACTIONS(462), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2415] = 1,
    ACTIONS(534), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2426] = 1,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2437] = 1,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2448] = 1,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2459] = 1,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2470] = 1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2481] = 1,
    ACTIONS(544), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2492] = 1,
    ACTIONS(546), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2503] = 1,
    ACTIONS(548), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2514] = 1,
    ACTIONS(550), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2525] = 1,
    ACTIONS(552), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2536] = 1,
    ACTIONS(554), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2547] = 1,
    ACTIONS(556), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2558] = 1,
    ACTIONS(558), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2569] = 1,
    ACTIONS(560), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2580] = 1,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2591] = 1,
    ACTIONS(564), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2602] = 1,
    ACTIONS(566), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2613] = 1,
    ACTIONS(568), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2624] = 1,
    ACTIONS(570), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2635] = 1,
    ACTIONS(572), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2646] = 1,
    ACTIONS(574), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2657] = 1,
    ACTIONS(576), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2668] = 1,
    ACTIONS(578), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2679] = 1,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2690] = 1,
    ACTIONS(582), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2701] = 1,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2712] = 1,
    ACTIONS(584), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2723] = 1,
    ACTIONS(586), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2734] = 1,
    ACTIONS(588), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2745] = 1,
    ACTIONS(590), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2756] = 1,
    ACTIONS(592), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2767] = 1,
    ACTIONS(594), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2778] = 1,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2789] = 1,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2800] = 1,
    ACTIONS(596), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2811] = 1,
    ACTIONS(598), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2822] = 1,
    ACTIONS(600), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2833] = 1,
    ACTIONS(602), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2844] = 3,
    ACTIONS(604), 1,
      anon_sym_AT,
    ACTIONS(606), 1,
      aux_sym__x_attr_token1,
    ACTIONS(608), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2857] = 3,
    ACTIONS(502), 1,
      aux_sym__x_attr_token1,
    ACTIONS(610), 1,
      anon_sym_AT,
    ACTIONS(612), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2870] = 3,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(75), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2882] = 3,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(75), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2894] = 3,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(75), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2906] = 3,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(75), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2918] = 3,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(75), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2930] = 1,
    ACTIONS(614), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [2938] = 2,
    STATE(122), 1,
      sym_valign,
    ACTIONS(616), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2948] = 3,
    ACTIONS(618), 1,
      aux_sym__rgb_token1,
    ACTIONS(620), 1,
      aux_sym__rgba_token1,
    STATE(117), 2,
      sym__rgb,
      sym__rgba,
  [2959] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      aux_sym__offset_token1,
    STATE(185), 1,
      sym__offset,
  [2969] = 2,
    ACTIONS(626), 1,
      aux_sym__x_attr_token2,
    ACTIONS(628), 1,
      anon_sym_COMMA,
  [2976] = 2,
    ACTIONS(630), 1,
      aux_sym__y_token1,
    STATE(67), 1,
      sym__y,
  [2983] = 2,
    ACTIONS(632), 1,
      aux_sym_font_token1,
    STATE(115), 1,
      sym_name,
  [2990] = 2,
    ACTIONS(632), 1,
      aux_sym_font_token1,
    STATE(138), 1,
      sym_name,
  [2997] = 2,
    ACTIONS(634), 1,
      aux_sym__rgb_token1,
    STATE(109), 1,
      sym_rgb,
  [3004] = 2,
    ACTIONS(630), 1,
      aux_sym__y_token1,
    STATE(82), 1,
      sym__y,
  [3011] = 2,
    ACTIONS(178), 1,
      aux_sym__rgba_token1,
    STATE(109), 1,
      sym_rgba,
  [3018] = 1,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [3022] = 1,
    ACTIONS(638), 1,
      anon_sym_COMMA,
  [3026] = 1,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
  [3030] = 1,
    ACTIONS(642), 1,
      anon_sym_gzip,
  [3034] = 1,
    ACTIONS(644), 1,
      aux_sym__absolute_token1,
  [3038] = 1,
    ACTIONS(646), 1,
      anon_sym_with,
  [3042] = 1,
    ACTIONS(628), 1,
      anon_sym_COMMA,
  [3046] = 1,
    ACTIONS(626), 1,
      aux_sym__x_attr_token1,
  [3050] = 1,
    ACTIONS(460), 1,
      aux_sym__x_attr_token1,
  [3054] = 1,
    ACTIONS(464), 1,
      aux_sym__x_attr_token1,
  [3058] = 1,
    ACTIONS(642), 1,
      anon_sym_timestamp,
  [3062] = 1,
    ACTIONS(648), 1,
      anon_sym_COMMA,
  [3066] = 1,
    ACTIONS(650), 1,
      aux_sym__absolute_token1,
  [3070] = 1,
    ACTIONS(424), 1,
      aux_sym__x_attr_token1,
  [3074] = 1,
    ACTIONS(652), 1,
      aux_sym__absolute_token1,
  [3078] = 1,
    ACTIONS(654), 1,
      anon_sym_COMMA,
  [3082] = 1,
    ACTIONS(656), 1,
      anon_sym_COMMA,
  [3086] = 1,
    ACTIONS(658), 1,
      aux_sym__label_relative_token1,
  [3090] = 1,
    ACTIONS(660), 1,
      anon_sym_COMMA,
  [3094] = 1,
    ACTIONS(662), 1,
      anon_sym_COMMA,
  [3098] = 1,
    ACTIONS(664), 1,
      anon_sym_COMMA,
  [3102] = 1,
    ACTIONS(502), 1,
      aux_sym__x_attr_token1,
  [3106] = 1,
    ACTIONS(666), 1,
      anon_sym_COMMA,
  [3110] = 1,
    ACTIONS(668), 1,
      aux_sym__label_absolute_token1,
  [3114] = 1,
    ACTIONS(670), 1,
      sym_height,
  [3118] = 1,
    ACTIONS(670), 1,
      sym_width,
  [3122] = 1,
    ACTIONS(672), 1,
      aux_sym__label_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 278,
  [SMALL_STATE(11)] = 313,
  [SMALL_STATE(12)] = 342,
  [SMALL_STATE(13)] = 371,
  [SMALL_STATE(14)] = 402,
  [SMALL_STATE(15)] = 433,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 499,
  [SMALL_STATE(18)] = 528,
  [SMALL_STATE(19)] = 557,
  [SMALL_STATE(20)] = 585,
  [SMALL_STATE(21)] = 613,
  [SMALL_STATE(22)] = 639,
  [SMALL_STATE(23)] = 667,
  [SMALL_STATE(24)] = 695,
  [SMALL_STATE(25)] = 722,
  [SMALL_STATE(26)] = 753,
  [SMALL_STATE(27)] = 772,
  [SMALL_STATE(28)] = 791,
  [SMALL_STATE(29)] = 810,
  [SMALL_STATE(30)] = 839,
  [SMALL_STATE(31)] = 858,
  [SMALL_STATE(32)] = 882,
  [SMALL_STATE(33)] = 908,
  [SMALL_STATE(34)] = 928,
  [SMALL_STATE(35)] = 954,
  [SMALL_STATE(36)] = 980,
  [SMALL_STATE(37)] = 1003,
  [SMALL_STATE(38)] = 1026,
  [SMALL_STATE(39)] = 1049,
  [SMALL_STATE(40)] = 1070,
  [SMALL_STATE(41)] = 1091,
  [SMALL_STATE(42)] = 1112,
  [SMALL_STATE(43)] = 1135,
  [SMALL_STATE(44)] = 1158,
  [SMALL_STATE(45)] = 1181,
  [SMALL_STATE(46)] = 1201,
  [SMALL_STATE(47)] = 1219,
  [SMALL_STATE(48)] = 1239,
  [SMALL_STATE(49)] = 1257,
  [SMALL_STATE(50)] = 1277,
  [SMALL_STATE(51)] = 1293,
  [SMALL_STATE(52)] = 1307,
  [SMALL_STATE(53)] = 1326,
  [SMALL_STATE(54)] = 1345,
  [SMALL_STATE(55)] = 1364,
  [SMALL_STATE(56)] = 1383,
  [SMALL_STATE(57)] = 1402,
  [SMALL_STATE(58)] = 1419,
  [SMALL_STATE(59)] = 1436,
  [SMALL_STATE(60)] = 1453,
  [SMALL_STATE(61)] = 1470,
  [SMALL_STATE(62)] = 1487,
  [SMALL_STATE(63)] = 1504,
  [SMALL_STATE(64)] = 1523,
  [SMALL_STATE(65)] = 1546,
  [SMALL_STATE(66)] = 1563,
  [SMALL_STATE(67)] = 1582,
  [SMALL_STATE(68)] = 1601,
  [SMALL_STATE(69)] = 1620,
  [SMALL_STATE(70)] = 1639,
  [SMALL_STATE(71)] = 1656,
  [SMALL_STATE(72)] = 1675,
  [SMALL_STATE(73)] = 1692,
  [SMALL_STATE(74)] = 1711,
  [SMALL_STATE(75)] = 1730,
  [SMALL_STATE(76)] = 1749,
  [SMALL_STATE(77)] = 1768,
  [SMALL_STATE(78)] = 1787,
  [SMALL_STATE(79)] = 1806,
  [SMALL_STATE(80)] = 1825,
  [SMALL_STATE(81)] = 1837,
  [SMALL_STATE(82)] = 1851,
  [SMALL_STATE(83)] = 1865,
  [SMALL_STATE(84)] = 1879,
  [SMALL_STATE(85)] = 1893,
  [SMALL_STATE(86)] = 1907,
  [SMALL_STATE(87)] = 1921,
  [SMALL_STATE(88)] = 1933,
  [SMALL_STATE(89)] = 1945,
  [SMALL_STATE(90)] = 1959,
  [SMALL_STATE(91)] = 1971,
  [SMALL_STATE(92)] = 1985,
  [SMALL_STATE(93)] = 1999,
  [SMALL_STATE(94)] = 2013,
  [SMALL_STATE(95)] = 2027,
  [SMALL_STATE(96)] = 2041,
  [SMALL_STATE(97)] = 2055,
  [SMALL_STATE(98)] = 2069,
  [SMALL_STATE(99)] = 2083,
  [SMALL_STATE(100)] = 2097,
  [SMALL_STATE(101)] = 2111,
  [SMALL_STATE(102)] = 2125,
  [SMALL_STATE(103)] = 2137,
  [SMALL_STATE(104)] = 2149,
  [SMALL_STATE(105)] = 2161,
  [SMALL_STATE(106)] = 2175,
  [SMALL_STATE(107)] = 2189,
  [SMALL_STATE(108)] = 2203,
  [SMALL_STATE(109)] = 2217,
  [SMALL_STATE(110)] = 2228,
  [SMALL_STATE(111)] = 2239,
  [SMALL_STATE(112)] = 2250,
  [SMALL_STATE(113)] = 2261,
  [SMALL_STATE(114)] = 2272,
  [SMALL_STATE(115)] = 2283,
  [SMALL_STATE(116)] = 2294,
  [SMALL_STATE(117)] = 2305,
  [SMALL_STATE(118)] = 2316,
  [SMALL_STATE(119)] = 2327,
  [SMALL_STATE(120)] = 2338,
  [SMALL_STATE(121)] = 2349,
  [SMALL_STATE(122)] = 2360,
  [SMALL_STATE(123)] = 2371,
  [SMALL_STATE(124)] = 2382,
  [SMALL_STATE(125)] = 2393,
  [SMALL_STATE(126)] = 2404,
  [SMALL_STATE(127)] = 2415,
  [SMALL_STATE(128)] = 2426,
  [SMALL_STATE(129)] = 2437,
  [SMALL_STATE(130)] = 2448,
  [SMALL_STATE(131)] = 2459,
  [SMALL_STATE(132)] = 2470,
  [SMALL_STATE(133)] = 2481,
  [SMALL_STATE(134)] = 2492,
  [SMALL_STATE(135)] = 2503,
  [SMALL_STATE(136)] = 2514,
  [SMALL_STATE(137)] = 2525,
  [SMALL_STATE(138)] = 2536,
  [SMALL_STATE(139)] = 2547,
  [SMALL_STATE(140)] = 2558,
  [SMALL_STATE(141)] = 2569,
  [SMALL_STATE(142)] = 2580,
  [SMALL_STATE(143)] = 2591,
  [SMALL_STATE(144)] = 2602,
  [SMALL_STATE(145)] = 2613,
  [SMALL_STATE(146)] = 2624,
  [SMALL_STATE(147)] = 2635,
  [SMALL_STATE(148)] = 2646,
  [SMALL_STATE(149)] = 2657,
  [SMALL_STATE(150)] = 2668,
  [SMALL_STATE(151)] = 2679,
  [SMALL_STATE(152)] = 2690,
  [SMALL_STATE(153)] = 2701,
  [SMALL_STATE(154)] = 2712,
  [SMALL_STATE(155)] = 2723,
  [SMALL_STATE(156)] = 2734,
  [SMALL_STATE(157)] = 2745,
  [SMALL_STATE(158)] = 2756,
  [SMALL_STATE(159)] = 2767,
  [SMALL_STATE(160)] = 2778,
  [SMALL_STATE(161)] = 2789,
  [SMALL_STATE(162)] = 2800,
  [SMALL_STATE(163)] = 2811,
  [SMALL_STATE(164)] = 2822,
  [SMALL_STATE(165)] = 2833,
  [SMALL_STATE(166)] = 2844,
  [SMALL_STATE(167)] = 2857,
  [SMALL_STATE(168)] = 2870,
  [SMALL_STATE(169)] = 2882,
  [SMALL_STATE(170)] = 2894,
  [SMALL_STATE(171)] = 2906,
  [SMALL_STATE(172)] = 2918,
  [SMALL_STATE(173)] = 2930,
  [SMALL_STATE(174)] = 2938,
  [SMALL_STATE(175)] = 2948,
  [SMALL_STATE(176)] = 2959,
  [SMALL_STATE(177)] = 2969,
  [SMALL_STATE(178)] = 2976,
  [SMALL_STATE(179)] = 2983,
  [SMALL_STATE(180)] = 2990,
  [SMALL_STATE(181)] = 2997,
  [SMALL_STATE(182)] = 3004,
  [SMALL_STATE(183)] = 3011,
  [SMALL_STATE(184)] = 3018,
  [SMALL_STATE(185)] = 3022,
  [SMALL_STATE(186)] = 3026,
  [SMALL_STATE(187)] = 3030,
  [SMALL_STATE(188)] = 3034,
  [SMALL_STATE(189)] = 3038,
  [SMALL_STATE(190)] = 3042,
  [SMALL_STATE(191)] = 3046,
  [SMALL_STATE(192)] = 3050,
  [SMALL_STATE(193)] = 3054,
  [SMALL_STATE(194)] = 3058,
  [SMALL_STATE(195)] = 3062,
  [SMALL_STATE(196)] = 3066,
  [SMALL_STATE(197)] = 3070,
  [SMALL_STATE(198)] = 3074,
  [SMALL_STATE(199)] = 3078,
  [SMALL_STATE(200)] = 3082,
  [SMALL_STATE(201)] = 3086,
  [SMALL_STATE(202)] = 3090,
  [SMALL_STATE(203)] = 3094,
  [SMALL_STATE(204)] = 3098,
  [SMALL_STATE(205)] = 3102,
  [SMALL_STATE(206)] = 3106,
  [SMALL_STATE(207)] = 3110,
  [SMALL_STATE(208)] = 3114,
  [SMALL_STATE(209)] = 3118,
  [SMALL_STATE(210)] = 3122,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_attr, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_attr, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_attr, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_attr, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_attr, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(58),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(65),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(39),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(70),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_attr, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_attr, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_attr, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_attr, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [640] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
