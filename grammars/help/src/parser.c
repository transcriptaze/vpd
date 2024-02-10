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
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 140
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
  sym_height = 5,
  sym_width = 6,
  anon_sym_set = 7,
  anon_sym_name = 8,
  anon_sym_height = 9,
  anon_sym_width = 10,
  anon_sym_x = 11,
  anon_sym_y = 12,
  anon_sym_xy = 13,
  anon_sym_part = 14,
  anon_sym_AT = 15,
  aux_sym__x_attr_token1 = 16,
  anon_sym_left = 17,
  anon_sym_centre = 18,
  anon_sym_center = 19,
  anon_sym_right = 20,
  aux_sym__x_attr_token2 = 21,
  aux_sym__x_attr_token3 = 22,
  anon_sym_top = 23,
  anon_sym_middle = 24,
  anon_sym_bottom = 25,
  anon_sym_COMMA = 26,
  anon_sym_decorate = 27,
  anon_sym_LPAREN = 28,
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
  sym_set = 74,
  sym__module_attr = 75,
  sym__input_attr = 76,
  sym__output_attr = 77,
  sym__x_attr = 78,
  sym__y_attr = 79,
  sym__xy_attr = 80,
  sym_decorate = 81,
  sym__component = 82,
  sym_decoration = 83,
  sym_delete = 84,
  sym__guideline_id = 85,
  sym__input_id = 86,
  sym__output_id = 87,
  sym__parameter_id = 88,
  sym__light_id = 89,
  sym__widget_id = 90,
  sym__label_id = 91,
  sym__decoration_id = 92,
  sym__component_id = 93,
  sym_load = 94,
  sym_save = 95,
  sym_project = 96,
  sym__save_options = 97,
  sym_script = 98,
  sym_export = 99,
  sym_panel = 100,
  sym_svg = 101,
  sym_header = 102,
  sym_origin = 103,
  sym_background = 104,
  sym_guide = 105,
  sym_parameter = 106,
  sym_light = 107,
  sym_widget = 108,
  sym_label = 109,
  sym__label_string = 110,
  sym__label_absolute = 111,
  sym__label_relative = 112,
  sym__label_geometry = 113,
  sym_font = 114,
  sym_fontsize = 115,
  sym_halign = 116,
  sym_valign = 117,
  sym_colour = 118,
  sym__rgb = 119,
  sym__rgba = 120,
  sym_name = 121,
  sym_part = 122,
  sym_rgb = 123,
  sym_rgba = 124,
  sym_absolute = 125,
  sym__absolute = 126,
  sym__relative = 127,
  sym__x = 128,
  sym__y = 129,
  sym_x = 130,
  sym_y = 131,
  sym_xy = 132,
  sym__xy = 133,
  sym__offset = 134,
  sym_offset = 135,
  sym_string = 136,
  sym__string = 137,
  sym_identifier = 138,
  aux_sym_command_repeat1 = 139,
  alias_sym_reference = 140,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
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
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__input_attr] = "_input_attr",
  [sym__output_attr] = "_output_attr",
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
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym__input_attr] = sym__input_attr,
  [sym__output_attr] = sym__output_attr,
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
  [sym_header] = sym_header,
  [sym_origin] = sym_origin,
  [sym_background] = sym_background,
  [sym_guide] = sym_guide,
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
  [36] = 6,
  [37] = 5,
  [38] = 38,
  [39] = 38,
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
  [159] = 29,
  [160] = 30,
  [161] = 31,
  [162] = 6,
  [163] = 5,
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
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '0') ADVANCE(283);
      if (lookahead == '@') ADVANCE(281);
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
      if (lookahead == 'x') ADVANCE(273);
      if (lookahead == 'y') ADVANCE(275);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
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
      if (lookahead == 'H') ADVANCE(263);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(263);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(263);
      if (lookahead == 'U') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(144);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(281);
      if (lookahead == 'b') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(263);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(263);
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
      if (lookahead == 'H') ADVANCE(264);
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
      if (lookahead == 't') ADVANCE(279);
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
      if (lookahead == 'e') ADVANCE(269);
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
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(363);
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
      if (lookahead == 'h') ADVANCE(272);
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
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(360);
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
      if (lookahead == 'm') ADVANCE(262);
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
      if (lookahead == 'p') ADVANCE(356);
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
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(368);
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
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(271);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
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
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == 'x') ADVANCE(274);
      if (lookahead == 'y') ADVANCE(276);
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
      if (lookahead == '(') ADVANCE(367);
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
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '@') ADVANCE(281);
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
      if (lookahead == '1') ADVANCE(22);
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
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(27);
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
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == '@') ADVANCE(281);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == 's') ADVANCE(306);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 251:
      if (eof) ADVANCE(254);
      if (lookahead == '@') ADVANCE(281);
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
      if (lookahead == '@') ADVANCE(281);
      if (lookahead == 'b') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
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
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(144);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'H') ADVANCE(263);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'H') ADVANCE(263);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'H') ADVANCE(263);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'f') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'g') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'h') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'm') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'n') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'v') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'w') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'x') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_parameter);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
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
      if (lookahead == 'e') ADVANCE(366);
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
      if (lookahead == 't') ADVANCE(268);
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
      if (lookahead == 'e') ADVANCE(270);
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
      if (lookahead == 'e') ADVANCE(365);
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
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(280);
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
  [7] = {.lex_state = 250},
  [8] = {.lex_state = 250},
  [9] = {.lex_state = 250},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 250},
  [12] = {.lex_state = 247},
  [13] = {.lex_state = 247},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 252},
  [16] = {.lex_state = 252},
  [17] = {.lex_state = 251},
  [18] = {.lex_state = 244},
  [19] = {.lex_state = 248},
  [20] = {.lex_state = 246},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 247},
  [25] = {.lex_state = 249},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 246},
  [30] = {.lex_state = 246},
  [31] = {.lex_state = 246},
  [32] = {.lex_state = 246},
  [33] = {.lex_state = 247},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 246},
  [37] = {.lex_state = 246},
  [38] = {.lex_state = 249},
  [39] = {.lex_state = 247},
  [40] = {.lex_state = 247},
  [41] = {.lex_state = 247},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 248},
  [45] = {.lex_state = 248},
  [46] = {.lex_state = 248},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 249},
  [49] = {.lex_state = 248},
  [50] = {.lex_state = 248},
  [51] = {.lex_state = 248},
  [52] = {.lex_state = 248},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 247},
  [55] = {.lex_state = 247},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 248},
  [59] = {.lex_state = 248},
  [60] = {.lex_state = 248},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 248},
  [64] = {.lex_state = 247},
  [65] = {.lex_state = 248},
  [66] = {.lex_state = 248},
  [67] = {.lex_state = 248},
  [68] = {.lex_state = 248},
  [69] = {.lex_state = 248},
  [70] = {.lex_state = 251},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 251},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 248},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 253},
  [83] = {.lex_state = 248},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 253},
  [86] = {.lex_state = 251},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 248},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 251},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 249},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 248},
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
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 25},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 251},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 245},
  [166] = {.lex_state = 250},
  [167] = {.lex_state = 247},
  [168] = {.lex_state = 245},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 247},
  [173] = {.lex_state = 245},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 244},
  [176] = {.lex_state = 250},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 251},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 248},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 250},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 248},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 250},
  [191] = {.lex_state = 250},
  [192] = {.lex_state = 250},
  [193] = {.lex_state = 245},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 245},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 244},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
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
    [sym_command] = STATE(196),
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
    STATE(129), 8,
      sym_module,
      sym__input_entity,
      sym__output_entity,
      sym_guide,
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
    STATE(102), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [90] = 9,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(59), 1,
      anon_sym_input,
    ACTIONS(61), 1,
      anon_sym_output,
    ACTIONS(63), 1,
      anon_sym_origin,
    ACTIONS(65), 1,
      anon_sym_background,
    STATE(26), 1,
      sym__input_id,
    STATE(27), 1,
      sym__output_id,
    STATE(135), 5,
      sym__module_attr,
      sym__input_attr,
      sym__output_attr,
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
  [129] = 5,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(73), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(69), 12,
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
  [157] = 5,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(73), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(77), 12,
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
  [185] = 6,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      aux_sym__x_attr_token1,
    STATE(127), 1,
      sym__xy_attr,
    ACTIONS(87), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(81), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [214] = 6,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      aux_sym__x_attr_token1,
    STATE(127), 1,
      sym__x_attr,
    ACTIONS(93), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(81), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [243] = 6,
    ACTIONS(83), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      aux_sym__x_attr_token1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym__xy_attr,
    ACTIONS(87), 5,
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
  [272] = 9,
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
    STATE(14), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [307] = 6,
    ACTIONS(89), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      aux_sym__x_attr_token1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
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
  [336] = 7,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(105), 1,
      aux_sym__absolute_token1,
    ACTIONS(107), 1,
      aux_sym__x_token1,
    STATE(52), 1,
      sym_xy,
    STATE(177), 1,
      sym__x,
    STATE(77), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [367] = 7,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(105), 1,
      aux_sym__absolute_token1,
    ACTIONS(107), 1,
      aux_sym__x_token1,
    STATE(49), 1,
      sym_xy,
    STATE(177), 1,
      sym__x,
    STATE(77), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [398] = 9,
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
    STATE(14), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [433] = 6,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_AT,
    ACTIONS(136), 1,
      aux_sym__x_attr_token1,
    STATE(127), 1,
      sym__y_attr,
    ACTIONS(138), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(81), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [461] = 6,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_AT,
    ACTIONS(136), 1,
      aux_sym__x_attr_token1,
    STATE(116), 1,
      sym__y_attr,
    ACTIONS(138), 4,
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
  [489] = 6,
    ACTIONS(107), 1,
      aux_sym__x_token1,
    ACTIONS(142), 1,
      anon_sym_AT,
    ACTIONS(144), 1,
      aux_sym__label_relative_token1,
    STATE(197), 1,
      sym__x,
    STATE(105), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [517] = 5,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(128), 2,
      sym_string,
      sym_identifier,
    ACTIONS(71), 3,
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
  [543] = 8,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      aux_sym_font_token1,
    ACTIONS(158), 1,
      aux_sym__rgb_token1,
    ACTIONS(160), 1,
      aux_sym__rgba_token1,
    STATE(72), 1,
      sym_rgb,
    STATE(73), 1,
      sym_rgba,
    STATE(154), 1,
      sym_name,
    ACTIONS(154), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [574] = 6,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    STATE(122), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(164), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [601] = 2,
    ACTIONS(170), 1,
      anon_sym_x,
    ACTIONS(168), 13,
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
  [620] = 2,
    ACTIONS(174), 1,
      anon_sym_x,
    ACTIONS(172), 13,
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
  [639] = 2,
    ACTIONS(178), 1,
      anon_sym_x,
    ACTIONS(176), 13,
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
  [658] = 7,
    ACTIONS(182), 1,
      anon_sym_AT,
    ACTIONS(184), 1,
      aux_sym__x_token1,
    ACTIONS(186), 1,
      aux_sym__y_token1,
    STATE(76), 1,
      sym_y,
    STATE(78), 1,
      sym_x,
    STATE(150), 1,
      sym_absolute,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [687] = 3,
    STATE(131), 1,
      sym_halign,
    ACTIONS(190), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [707] = 6,
    ACTIONS(194), 1,
      anon_sym_name,
    ACTIONS(196), 1,
      anon_sym_x,
    ACTIONS(198), 1,
      anon_sym_y,
    ACTIONS(200), 1,
      anon_sym_xy,
    ACTIONS(202), 1,
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
  [733] = 6,
    ACTIONS(206), 1,
      anon_sym_name,
    ACTIONS(208), 1,
      anon_sym_x,
    ACTIONS(210), 1,
      anon_sym_y,
    ACTIONS(212), 1,
      anon_sym_xy,
    ACTIONS(214), 1,
      anon_sym_part,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [759] = 5,
    ACTIONS(218), 1,
      aux_sym__rgb_token1,
    ACTIONS(220), 1,
      aux_sym__rgba_token1,
    STATE(124), 1,
      sym_colour,
    STATE(74), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [783] = 5,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(73), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(224), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [806] = 5,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(73), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(228), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [829] = 5,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(73), 2,
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
  [852] = 5,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_identifier,
    ACTIONS(73), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(236), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [875] = 4,
    STATE(17), 1,
      sym__string,
    STATE(99), 1,
      sym__label_string,
    ACTIONS(240), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [896] = 4,
    ACTIONS(244), 1,
      anon_sym_project,
    ACTIONS(246), 1,
      anon_sym_script,
    STATE(108), 2,
      sym_project,
      sym_script,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [917] = 4,
    ACTIONS(250), 1,
      anon_sym_svg,
    ACTIONS(252), 1,
      anon_sym_DOTh,
    STATE(111), 2,
      sym_svg,
      sym_header,
    ACTIONS(248), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [938] = 5,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(73), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(77), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [961] = 5,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(73), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(69), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [984] = 2,
    ACTIONS(256), 1,
      sym_width,
    ACTIONS(254), 10,
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
  [1000] = 1,
    ACTIONS(254), 11,
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
  [1014] = 3,
    ACTIONS(260), 1,
      aux_sym__offset_token1,
    STATE(92), 1,
      sym_offset,
    ACTIONS(258), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1032] = 3,
    ACTIONS(260), 1,
      aux_sym__offset_token1,
    STATE(93), 1,
      sym_offset,
    ACTIONS(262), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1050] = 4,
    ACTIONS(266), 1,
      anon_sym_name,
    ACTIONS(268), 1,
      anon_sym_height,
    ACTIONS(270), 1,
      anon_sym_width,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1070] = 4,
    ACTIONS(274), 1,
      anon_sym_timestamp,
    ACTIONS(276), 1,
      anon_sym_gzip,
    STATE(119), 1,
      sym__save_options,
    ACTIONS(272), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1090] = 4,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      aux_sym__offset_token1,
    STATE(69), 1,
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
  [1110] = 4,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      aux_sym_font_token1,
    STATE(127), 1,
      sym_part,
    ACTIONS(81), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1129] = 4,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 1,
      aux_sym_font_token1,
    STATE(13), 1,
      sym_name,
    ACTIONS(288), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1148] = 3,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym__component,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1165] = 3,
    ACTIONS(298), 1,
      sym_height,
    ACTIONS(300), 1,
      sym_width,
    ACTIONS(296), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1182] = 4,
    ACTIONS(284), 1,
      aux_sym_font_token1,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      sym_part,
    ACTIONS(304), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1201] = 4,
    ACTIONS(290), 1,
      aux_sym_font_token1,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_name,
    ACTIONS(308), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1220] = 4,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      aux_sym_font_token1,
    STATE(101), 1,
      sym_font,
    ACTIONS(312), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1239] = 4,
    ACTIONS(284), 1,
      aux_sym_font_token1,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_part,
    ACTIONS(318), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1258] = 3,
    ACTIONS(322), 1,
      anon_sym_light,
    ACTIONS(324), 1,
      anon_sym_dark,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1275] = 3,
    ACTIONS(186), 1,
      aux_sym__y_token1,
    STATE(145), 1,
      sym_y,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1292] = 3,
    ACTIONS(184), 1,
      aux_sym__x_token1,
    STATE(145), 1,
      sym_x,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1309] = 6,
    ACTIONS(328), 1,
      anon_sym_input,
    ACTIONS(330), 1,
      anon_sym_output,
    ACTIONS(332), 1,
      anon_sym_parameter,
    ACTIONS(334), 1,
      anon_sym_light,
    ACTIONS(336), 1,
      anon_sym_widget,
    STATE(187), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1332] = 3,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_decoration,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1349] = 4,
    ACTIONS(314), 1,
      aux_sym_font_token1,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    STATE(132), 1,
      sym_font,
    ACTIONS(344), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1368] = 4,
    ACTIONS(314), 1,
      aux_sym_font_token1,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_font,
    ACTIONS(348), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1387] = 4,
    ACTIONS(156), 1,
      aux_sym_font_token1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_name,
    ACTIONS(352), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1406] = 3,
    ACTIONS(356), 1,
      anon_sym_project,
    ACTIONS(358), 1,
      anon_sym_script,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1423] = 3,
    ACTIONS(362), 1,
      anon_sym_panel,
    STATE(120), 1,
      sym_panel,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1440] = 4,
    ACTIONS(156), 1,
      aux_sym_font_token1,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_name,
    ACTIONS(366), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1459] = 3,
    ACTIONS(370), 1,
      aux_sym_fontsize_token1,
    STATE(137), 1,
      sym_fontsize,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1476] = 4,
    ACTIONS(156), 1,
      aux_sym_font_token1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_name,
    ACTIONS(374), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1495] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      aux_sym_font_token1,
    STATE(116), 1,
      sym_part,
    ACTIONS(97), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1514] = 4,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      aux_sym_font_token1,
    STATE(127), 1,
      sym_name,
    ACTIONS(81), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1533] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      aux_sym_font_token1,
    STATE(116), 1,
      sym_name,
    ACTIONS(97), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1552] = 2,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1566] = 2,
    ACTIONS(382), 1,
      aux_sym__x_attr_token2,
    ACTIONS(380), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1580] = 1,
    ACTIONS(384), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1592] = 2,
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
  [1606] = 2,
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
  [1620] = 2,
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
  [1634] = 2,
    ACTIONS(398), 1,
      aux_sym__x_attr_token2,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1648] = 2,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1662] = 2,
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
  [1676] = 2,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1690] = 1,
    ACTIONS(410), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1702] = 1,
    ACTIONS(412), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1714] = 1,
    ACTIONS(414), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1726] = 2,
    ACTIONS(418), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(416), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1740] = 2,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1754] = 1,
    ACTIONS(424), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1766] = 2,
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
  [1780] = 2,
    ACTIONS(432), 1,
      aux_sym__x_attr_token2,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1794] = 2,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1808] = 2,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1822] = 2,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    ACTIONS(442), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1836] = 2,
    ACTIONS(446), 1,
      anon_sym_timestamp,
    ACTIONS(444), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1850] = 2,
    ACTIONS(450), 1,
      aux_sym__x_attr_token2,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1864] = 1,
    ACTIONS(452), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1876] = 1,
    ACTIONS(454), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1888] = 2,
    ACTIONS(458), 1,
      sym_width,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1902] = 1,
    ACTIONS(460), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1914] = 2,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(462), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1928] = 2,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(466), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1942] = 2,
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
  [1956] = 1,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1967] = 1,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1978] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1989] = 1,
    ACTIONS(480), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2000] = 1,
    ACTIONS(482), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2011] = 1,
    ACTIONS(484), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2022] = 1,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2033] = 1,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2044] = 1,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2055] = 1,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2066] = 1,
    ACTIONS(494), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2077] = 1,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2088] = 1,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2099] = 1,
    ACTIONS(498), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2110] = 1,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2121] = 1,
    ACTIONS(502), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2132] = 1,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2143] = 1,
    ACTIONS(506), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2154] = 1,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2165] = 1,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2176] = 1,
    ACTIONS(510), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2187] = 1,
    ACTIONS(512), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2198] = 1,
    ACTIONS(380), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2209] = 1,
    ACTIONS(514), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2220] = 1,
    ACTIONS(516), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2231] = 1,
    ACTIONS(518), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2242] = 1,
    ACTIONS(520), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2253] = 1,
    ACTIONS(522), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2264] = 1,
    ACTIONS(524), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2275] = 1,
    ACTIONS(526), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2286] = 1,
    ACTIONS(528), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2297] = 1,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2308] = 1,
    ACTIONS(530), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2319] = 1,
    ACTIONS(532), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2330] = 1,
    ACTIONS(534), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2341] = 1,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2352] = 1,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2363] = 1,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2374] = 1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2385] = 1,
    ACTIONS(544), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2396] = 1,
    ACTIONS(546), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2407] = 1,
    ACTIONS(548), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2418] = 1,
    ACTIONS(550), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2429] = 1,
    ACTIONS(552), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2440] = 1,
    ACTIONS(554), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2451] = 1,
    ACTIONS(556), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2462] = 1,
    ACTIONS(558), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2473] = 1,
    ACTIONS(560), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2484] = 1,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2495] = 1,
    ACTIONS(564), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2506] = 1,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2517] = 1,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2528] = 1,
    ACTIONS(566), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2539] = 1,
    ACTIONS(568), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2550] = 1,
    ACTIONS(570), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2561] = 1,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2572] = 3,
    ACTIONS(572), 1,
      anon_sym_AT,
    ACTIONS(574), 1,
      aux_sym__x_attr_token1,
    ACTIONS(576), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2585] = 3,
    ACTIONS(450), 1,
      aux_sym__x_attr_token1,
    ACTIONS(578), 1,
      anon_sym_AT,
    ACTIONS(580), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2598] = 1,
    ACTIONS(582), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [2606] = 2,
    STATE(125), 1,
      sym_valign,
    ACTIONS(584), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2616] = 3,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(73), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2628] = 3,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_identifier,
    ACTIONS(73), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2640] = 3,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(73), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2652] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(73), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2664] = 3,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(73), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2676] = 3,
    ACTIONS(586), 1,
      aux_sym__rgb_token1,
    ACTIONS(588), 1,
      aux_sym__rgba_token1,
    STATE(117), 2,
      sym__rgb,
      sym__rgba,
  [2687] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      aux_sym__offset_token1,
    STATE(182), 1,
      sym__offset,
  [2697] = 2,
    ACTIONS(594), 1,
      aux_sym__x_attr_token2,
    ACTIONS(596), 1,
      anon_sym_COMMA,
  [2704] = 2,
    ACTIONS(598), 1,
      aux_sym__y_token1,
    STATE(58), 1,
      sym__y,
  [2711] = 2,
    ACTIONS(600), 1,
      aux_sym__rgb_token1,
    STATE(146), 1,
      sym_rgb,
  [2718] = 2,
    ACTIONS(602), 1,
      aux_sym_font_token1,
    STATE(107), 1,
      sym_name,
  [2725] = 2,
    ACTIONS(160), 1,
      aux_sym__rgba_token1,
    STATE(146), 1,
      sym_rgba,
  [2732] = 2,
    ACTIONS(602), 1,
      aux_sym_font_token1,
    STATE(142), 1,
      sym_name,
  [2739] = 2,
    ACTIONS(598), 1,
      aux_sym__y_token1,
    STATE(98), 1,
      sym__y,
  [2746] = 1,
    ACTIONS(604), 1,
      aux_sym__absolute_token1,
  [2750] = 1,
    ACTIONS(606), 1,
      anon_sym_gzip,
  [2754] = 1,
    ACTIONS(608), 1,
      aux_sym__label_absolute_token1,
  [2758] = 1,
    ACTIONS(398), 1,
      aux_sym__x_attr_token1,
  [2762] = 1,
    ACTIONS(610), 1,
      anon_sym_COMMA,
  [2766] = 1,
    ACTIONS(612), 1,
      anon_sym_COMMA,
  [2770] = 1,
    ACTIONS(614), 1,
      aux_sym__label_relative_token1,
  [2774] = 1,
    ACTIONS(616), 1,
      anon_sym_COMMA,
  [2778] = 1,
    ACTIONS(618), 1,
      sym_height,
  [2782] = 1,
    ACTIONS(620), 1,
      anon_sym_COMMA,
  [2786] = 1,
    ACTIONS(450), 1,
      aux_sym__x_attr_token1,
  [2790] = 1,
    ACTIONS(622), 1,
      anon_sym_COMMA,
  [2794] = 1,
    ACTIONS(606), 1,
      anon_sym_timestamp,
  [2798] = 1,
    ACTIONS(618), 1,
      sym_width,
  [2802] = 1,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
  [2806] = 1,
    ACTIONS(626), 1,
      anon_sym_COMMA,
  [2810] = 1,
    ACTIONS(596), 1,
      anon_sym_COMMA,
  [2814] = 1,
    ACTIONS(594), 1,
      aux_sym__x_attr_token1,
  [2818] = 1,
    ACTIONS(382), 1,
      aux_sym__x_attr_token1,
  [2822] = 1,
    ACTIONS(432), 1,
      aux_sym__x_attr_token1,
  [2826] = 1,
    ACTIONS(628), 1,
      aux_sym__absolute_token1,
  [2830] = 1,
    ACTIONS(630), 1,
      anon_sym_with,
  [2834] = 1,
    ACTIONS(632), 1,
      aux_sym__absolute_token1,
  [2838] = 1,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
  [2842] = 1,
    ACTIONS(636), 1,
      anon_sym_COMMA,
  [2846] = 1,
    ACTIONS(638), 1,
      anon_sym_COMMA,
  [2850] = 1,
    ACTIONS(640), 1,
      aux_sym__label_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 243,
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 307,
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 367,
  [SMALL_STATE(14)] = 398,
  [SMALL_STATE(15)] = 433,
  [SMALL_STATE(16)] = 461,
  [SMALL_STATE(17)] = 489,
  [SMALL_STATE(18)] = 517,
  [SMALL_STATE(19)] = 543,
  [SMALL_STATE(20)] = 574,
  [SMALL_STATE(21)] = 601,
  [SMALL_STATE(22)] = 620,
  [SMALL_STATE(23)] = 639,
  [SMALL_STATE(24)] = 658,
  [SMALL_STATE(25)] = 687,
  [SMALL_STATE(26)] = 707,
  [SMALL_STATE(27)] = 733,
  [SMALL_STATE(28)] = 759,
  [SMALL_STATE(29)] = 783,
  [SMALL_STATE(30)] = 806,
  [SMALL_STATE(31)] = 829,
  [SMALL_STATE(32)] = 852,
  [SMALL_STATE(33)] = 875,
  [SMALL_STATE(34)] = 896,
  [SMALL_STATE(35)] = 917,
  [SMALL_STATE(36)] = 938,
  [SMALL_STATE(37)] = 961,
  [SMALL_STATE(38)] = 984,
  [SMALL_STATE(39)] = 1000,
  [SMALL_STATE(40)] = 1014,
  [SMALL_STATE(41)] = 1032,
  [SMALL_STATE(42)] = 1050,
  [SMALL_STATE(43)] = 1070,
  [SMALL_STATE(44)] = 1090,
  [SMALL_STATE(45)] = 1110,
  [SMALL_STATE(46)] = 1129,
  [SMALL_STATE(47)] = 1148,
  [SMALL_STATE(48)] = 1165,
  [SMALL_STATE(49)] = 1182,
  [SMALL_STATE(50)] = 1201,
  [SMALL_STATE(51)] = 1220,
  [SMALL_STATE(52)] = 1239,
  [SMALL_STATE(53)] = 1258,
  [SMALL_STATE(54)] = 1275,
  [SMALL_STATE(55)] = 1292,
  [SMALL_STATE(56)] = 1309,
  [SMALL_STATE(57)] = 1332,
  [SMALL_STATE(58)] = 1349,
  [SMALL_STATE(59)] = 1368,
  [SMALL_STATE(60)] = 1387,
  [SMALL_STATE(61)] = 1406,
  [SMALL_STATE(62)] = 1423,
  [SMALL_STATE(63)] = 1440,
  [SMALL_STATE(64)] = 1459,
  [SMALL_STATE(65)] = 1476,
  [SMALL_STATE(66)] = 1495,
  [SMALL_STATE(67)] = 1514,
  [SMALL_STATE(68)] = 1533,
  [SMALL_STATE(69)] = 1552,
  [SMALL_STATE(70)] = 1566,
  [SMALL_STATE(71)] = 1580,
  [SMALL_STATE(72)] = 1592,
  [SMALL_STATE(73)] = 1606,
  [SMALL_STATE(74)] = 1620,
  [SMALL_STATE(75)] = 1634,
  [SMALL_STATE(76)] = 1648,
  [SMALL_STATE(77)] = 1662,
  [SMALL_STATE(78)] = 1676,
  [SMALL_STATE(79)] = 1690,
  [SMALL_STATE(80)] = 1702,
  [SMALL_STATE(81)] = 1714,
  [SMALL_STATE(82)] = 1726,
  [SMALL_STATE(83)] = 1740,
  [SMALL_STATE(84)] = 1754,
  [SMALL_STATE(85)] = 1766,
  [SMALL_STATE(86)] = 1780,
  [SMALL_STATE(87)] = 1794,
  [SMALL_STATE(88)] = 1808,
  [SMALL_STATE(89)] = 1822,
  [SMALL_STATE(90)] = 1836,
  [SMALL_STATE(91)] = 1850,
  [SMALL_STATE(92)] = 1864,
  [SMALL_STATE(93)] = 1876,
  [SMALL_STATE(94)] = 1888,
  [SMALL_STATE(95)] = 1902,
  [SMALL_STATE(96)] = 1914,
  [SMALL_STATE(97)] = 1928,
  [SMALL_STATE(98)] = 1942,
  [SMALL_STATE(99)] = 1956,
  [SMALL_STATE(100)] = 1967,
  [SMALL_STATE(101)] = 1978,
  [SMALL_STATE(102)] = 1989,
  [SMALL_STATE(103)] = 2000,
  [SMALL_STATE(104)] = 2011,
  [SMALL_STATE(105)] = 2022,
  [SMALL_STATE(106)] = 2033,
  [SMALL_STATE(107)] = 2044,
  [SMALL_STATE(108)] = 2055,
  [SMALL_STATE(109)] = 2066,
  [SMALL_STATE(110)] = 2077,
  [SMALL_STATE(111)] = 2088,
  [SMALL_STATE(112)] = 2099,
  [SMALL_STATE(113)] = 2110,
  [SMALL_STATE(114)] = 2121,
  [SMALL_STATE(115)] = 2132,
  [SMALL_STATE(116)] = 2143,
  [SMALL_STATE(117)] = 2154,
  [SMALL_STATE(118)] = 2165,
  [SMALL_STATE(119)] = 2176,
  [SMALL_STATE(120)] = 2187,
  [SMALL_STATE(121)] = 2198,
  [SMALL_STATE(122)] = 2209,
  [SMALL_STATE(123)] = 2220,
  [SMALL_STATE(124)] = 2231,
  [SMALL_STATE(125)] = 2242,
  [SMALL_STATE(126)] = 2253,
  [SMALL_STATE(127)] = 2264,
  [SMALL_STATE(128)] = 2275,
  [SMALL_STATE(129)] = 2286,
  [SMALL_STATE(130)] = 2297,
  [SMALL_STATE(131)] = 2308,
  [SMALL_STATE(132)] = 2319,
  [SMALL_STATE(133)] = 2330,
  [SMALL_STATE(134)] = 2341,
  [SMALL_STATE(135)] = 2352,
  [SMALL_STATE(136)] = 2363,
  [SMALL_STATE(137)] = 2374,
  [SMALL_STATE(138)] = 2385,
  [SMALL_STATE(139)] = 2396,
  [SMALL_STATE(140)] = 2407,
  [SMALL_STATE(141)] = 2418,
  [SMALL_STATE(142)] = 2429,
  [SMALL_STATE(143)] = 2440,
  [SMALL_STATE(144)] = 2451,
  [SMALL_STATE(145)] = 2462,
  [SMALL_STATE(146)] = 2473,
  [SMALL_STATE(147)] = 2484,
  [SMALL_STATE(148)] = 2495,
  [SMALL_STATE(149)] = 2506,
  [SMALL_STATE(150)] = 2517,
  [SMALL_STATE(151)] = 2528,
  [SMALL_STATE(152)] = 2539,
  [SMALL_STATE(153)] = 2550,
  [SMALL_STATE(154)] = 2561,
  [SMALL_STATE(155)] = 2572,
  [SMALL_STATE(156)] = 2585,
  [SMALL_STATE(157)] = 2598,
  [SMALL_STATE(158)] = 2606,
  [SMALL_STATE(159)] = 2616,
  [SMALL_STATE(160)] = 2628,
  [SMALL_STATE(161)] = 2640,
  [SMALL_STATE(162)] = 2652,
  [SMALL_STATE(163)] = 2664,
  [SMALL_STATE(164)] = 2676,
  [SMALL_STATE(165)] = 2687,
  [SMALL_STATE(166)] = 2697,
  [SMALL_STATE(167)] = 2704,
  [SMALL_STATE(168)] = 2711,
  [SMALL_STATE(169)] = 2718,
  [SMALL_STATE(170)] = 2725,
  [SMALL_STATE(171)] = 2732,
  [SMALL_STATE(172)] = 2739,
  [SMALL_STATE(173)] = 2746,
  [SMALL_STATE(174)] = 2750,
  [SMALL_STATE(175)] = 2754,
  [SMALL_STATE(176)] = 2758,
  [SMALL_STATE(177)] = 2762,
  [SMALL_STATE(178)] = 2766,
  [SMALL_STATE(179)] = 2770,
  [SMALL_STATE(180)] = 2774,
  [SMALL_STATE(181)] = 2778,
  [SMALL_STATE(182)] = 2782,
  [SMALL_STATE(183)] = 2786,
  [SMALL_STATE(184)] = 2790,
  [SMALL_STATE(185)] = 2794,
  [SMALL_STATE(186)] = 2798,
  [SMALL_STATE(187)] = 2802,
  [SMALL_STATE(188)] = 2806,
  [SMALL_STATE(189)] = 2810,
  [SMALL_STATE(190)] = 2814,
  [SMALL_STATE(191)] = 2818,
  [SMALL_STATE(192)] = 2822,
  [SMALL_STATE(193)] = 2826,
  [SMALL_STATE(194)] = 2830,
  [SMALL_STATE(195)] = 2834,
  [SMALL_STATE(196)] = 2838,
  [SMALL_STATE(197)] = 2842,
  [SMALL_STATE(198)] = 2846,
  [SMALL_STATE(199)] = 2850,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_attr, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_attr, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_attr, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(47),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(61),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(34),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(62),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_attr, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_attr, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [634] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
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
