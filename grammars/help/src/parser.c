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
#define STATE_COUNT 198
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
  anon_sym_parameter = 5,
  anon_sym_light = 6,
  anon_sym_widget = 7,
  sym_height = 8,
  sym_width = 9,
  anon_sym_set = 10,
  anon_sym_name = 11,
  anon_sym_height = 12,
  anon_sym_width = 13,
  anon_sym_x = 14,
  anon_sym_y = 15,
  anon_sym_xy = 16,
  anon_sym_part = 17,
  anon_sym_AT = 18,
  aux_sym__x_attr_token1 = 19,
  anon_sym_left = 20,
  anon_sym_centre = 21,
  anon_sym_center = 22,
  anon_sym_right = 23,
  aux_sym__x_attr_token2 = 24,
  aux_sym__x_attr_token3 = 25,
  anon_sym_top = 26,
  anon_sym_middle = 27,
  anon_sym_bottom = 28,
  anon_sym_COMMA = 29,
  anon_sym_decorate = 30,
  anon_sym_LPAREN = 31,
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
  sym__widget_entity = 76,
  sym__component_entity = 77,
  sym_set = 78,
  sym__module_attr = 79,
  sym__component_attr = 80,
  sym__x_attr = 81,
  sym__y_attr = 82,
  sym__xy_attr = 83,
  sym_decorate = 84,
  sym__component = 85,
  sym_decoration = 86,
  sym_delete = 87,
  sym__guideline_id = 88,
  sym__input_id = 89,
  sym__output_id = 90,
  sym__parameter_id = 91,
  sym__light_id = 92,
  sym__widget_id = 93,
  sym__label_id = 94,
  sym__decoration_id = 95,
  sym__component_id = 96,
  sym_load = 97,
  sym_save = 98,
  sym_project = 99,
  sym__save_options = 100,
  sym_script = 101,
  sym_export = 102,
  sym_panel = 103,
  sym_svg = 104,
  sym_header = 105,
  sym_origin = 106,
  sym_background = 107,
  sym_guide = 108,
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
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
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
  [sym__widget_entity] = "widget",
  [sym__component_entity] = "_component_entity",
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
  [anon_sym_widget] = anon_sym_widget,
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
  [sym__widget_entity] = sym__widget_entity,
  [sym__component_entity] = sym__component_entity,
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
  [sym__widget_id] = sym__widget_entity,
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
  [anon_sym_widget] = {
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
  [sym__widget_entity] = {
    .visible = true,
    .named = true,
  },
  [sym__component_entity] = {
    .visible = false,
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
  [31] = 6,
  [32] = 32,
  [33] = 33,
  [34] = 7,
  [35] = 8,
  [36] = 9,
  [37] = 37,
  [38] = 5,
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
  [50] = 44,
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
  [155] = 5,
  [156] = 9,
  [157] = 8,
  [158] = 7,
  [159] = 6,
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
      if (lookahead == '(') ADVANCE(370);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '0') ADVANCE(286);
      if (lookahead == '@') ADVANCE(284);
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
      if (lookahead == 'x') ADVANCE(276);
      if (lookahead == 'y') ADVANCE(278);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(287);
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
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == 'U') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(144);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(284);
      if (lookahead == 'b') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(331);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(266);
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
      if (lookahead == 'H') ADVANCE(267);
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
      if (lookahead == 't') ADVANCE(282);
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
      if (lookahead == 'e') ADVANCE(272);
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
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(366);
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
      if (lookahead == 'h') ADVANCE(275);
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
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(266);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(363);
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
      if (lookahead == 'm') ADVANCE(265);
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
      if (lookahead == 'p') ADVANCE(359);
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
      if (lookahead == 'r') ADVANCE(300);
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
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(264);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
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
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == 'x') ADVANCE(277);
      if (lookahead == 'y') ADVANCE(279);
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
      if (lookahead == '(') ADVANCE(370);
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
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '@') ADVANCE(284);
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
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '@') ADVANCE(284);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 's') ADVANCE(309);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 251:
      if (eof) ADVANCE(254);
      if (lookahead == '@') ADVANCE(284);
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
      if (lookahead == '@') ADVANCE(284);
      if (lookahead == 'b') ADVANCE(340);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(144);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'H') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'H') ADVANCE(285);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(285);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'f') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'g') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'h') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'l') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'm') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'n') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'v') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'w') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'x') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_LPAREN);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
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
      if (lookahead == 'e') ADVANCE(369);
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
      if (lookahead == 't') ADVANCE(271);
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
      if (lookahead == 'e') ADVANCE(273);
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
      if (lookahead == 'e') ADVANCE(368);
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
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(283);
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
  [9] = {.lex_state = 245},
  [10] = {.lex_state = 247},
  [11] = {.lex_state = 250},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 250},
  [15] = {.lex_state = 244},
  [16] = {.lex_state = 252},
  [17] = {.lex_state = 251},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 248},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 247},
  [26] = {.lex_state = 246},
  [27] = {.lex_state = 249},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 246},
  [32] = {.lex_state = 246},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 246},
  [35] = {.lex_state = 246},
  [36] = {.lex_state = 246},
  [37] = {.lex_state = 247},
  [38] = {.lex_state = 246},
  [39] = {.lex_state = 248},
  [40] = {.lex_state = 247},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 247},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 249},
  [45] = {.lex_state = 248},
  [46] = {.lex_state = 248},
  [47] = {.lex_state = 248},
  [48] = {.lex_state = 248},
  [49] = {.lex_state = 248},
  [50] = {.lex_state = 247},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 248},
  [53] = {.lex_state = 248},
  [54] = {.lex_state = 247},
  [55] = {.lex_state = 248},
  [56] = {.lex_state = 247},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 248},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 249},
  [61] = {.lex_state = 247},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 248},
  [66] = {.lex_state = 248},
  [67] = {.lex_state = 248},
  [68] = {.lex_state = 248},
  [69] = {.lex_state = 248},
  [70] = {.lex_state = 253},
  [71] = {.lex_state = 251},
  [72] = {.lex_state = 248},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 248},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 253},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 251},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 251},
  [88] = {.lex_state = 251},
  [89] = {.lex_state = 248},
  [90] = {.lex_state = 248},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 249},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 248},
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
  [153] = {.lex_state = 25},
  [154] = {.lex_state = 25},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 251},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 245},
  [164] = {.lex_state = 250},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 247},
  [168] = {.lex_state = 245},
  [169] = {.lex_state = 247},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 245},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 245},
  [176] = {.lex_state = 244},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 250},
  [179] = {.lex_state = 250},
  [180] = {.lex_state = 245},
  [181] = {.lex_state = 250},
  [182] = {.lex_state = 250},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 251},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 244},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 250},
  [196] = {.lex_state = 248},
  [197] = {.lex_state = 248},
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
    [anon_sym_widget] = ACTIONS(1),
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
    [sym_command] = STATE(187),
    [sym_new] = STATE(12),
    [sym_set] = STATE(12),
    [sym_decorate] = STATE(12),
    [sym_delete] = STATE(12),
    [sym_load] = STATE(12),
    [sym_save] = STATE(12),
    [sym_export] = STATE(12),
    [aux_sym_command_repeat1] = STATE(12),
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
  [0] = 11,
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
      anon_sym_origin,
    ACTIONS(35), 1,
      anon_sym_background,
    STATE(101), 4,
      sym__module_attr,
      sym__component_attr,
      sym_origin,
      sym_background,
    STATE(29), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [48] = 10,
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
    STATE(100), 8,
      sym_module,
      sym__input_entity,
      sym__output_entity,
      sym__parameter_entity,
      sym__light_entity,
      sym__widget_entity,
      sym_guide,
      sym_label,
  [93] = 10,
    ACTIONS(57), 1,
      anon_sym_input,
    ACTIONS(59), 1,
      anon_sym_output,
    ACTIONS(61), 1,
      anon_sym_parameter,
    ACTIONS(63), 1,
      anon_sym_light,
    ACTIONS(65), 1,
      anon_sym_widget,
    ACTIONS(67), 1,
      anon_sym_guide,
    ACTIONS(69), 1,
      anon_sym_label,
    ACTIONS(71), 1,
      anon_sym_decoration,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(105), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [138] = 5,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(79), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(75), 12,
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
  [166] = 5,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(79), 2,
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
  [194] = 5,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_identifier,
    ACTIONS(79), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(87), 12,
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
  [222] = 5,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_identifier,
    ACTIONS(79), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(91), 12,
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
  [250] = 5,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(79), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(95), 12,
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
  [278] = 7,
    ACTIONS(99), 1,
      anon_sym_AT,
    ACTIONS(101), 1,
      aux_sym__absolute_token1,
    ACTIONS(103), 1,
      aux_sym__x_token1,
    STATE(53), 1,
      sym_xy,
    STATE(192), 1,
      sym__x,
    STATE(90), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [309] = 6,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      aux_sym__x_attr_token1,
    STATE(113), 1,
      sym__xy_attr,
    ACTIONS(113), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(107), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [338] = 9,
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
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(13), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [373] = 9,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      anon_sym_new,
    ACTIONS(122), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      anon_sym_decorate,
    ACTIONS(128), 1,
      anon_sym_delete,
    ACTIONS(131), 1,
      anon_sym_load,
    ACTIONS(134), 1,
      anon_sym_save,
    ACTIONS(137), 1,
      anon_sym_export,
    STATE(13), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [408] = 6,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      aux_sym__x_attr_token1,
    STATE(113), 1,
      sym__x_attr,
    ACTIONS(144), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(107), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [437] = 5,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(139), 2,
      sym_string,
      sym_identifier,
    ACTIONS(77), 3,
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
  [463] = 6,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_AT,
    ACTIONS(154), 1,
      aux_sym__x_attr_token1,
    STATE(113), 1,
      sym__y_attr,
    ACTIONS(156), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(107), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [491] = 6,
    ACTIONS(103), 1,
      aux_sym__x_token1,
    ACTIONS(160), 1,
      anon_sym_AT,
    ACTIONS(162), 1,
      aux_sym__label_relative_token1,
    STATE(188), 1,
      sym__x,
    STATE(102), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [519] = 2,
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
  [538] = 2,
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
  [557] = 2,
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
  [576] = 2,
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
  [595] = 8,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      aux_sym_font_token1,
    ACTIONS(186), 1,
      aux_sym__rgb_token1,
    ACTIONS(188), 1,
      aux_sym__rgba_token1,
    STATE(73), 1,
      sym_rgb,
    STATE(74), 1,
      sym_rgba,
    STATE(152), 1,
      sym_name,
    ACTIONS(182), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [626] = 2,
    ACTIONS(192), 1,
      anon_sym_x,
    ACTIONS(190), 13,
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
    ACTIONS(196), 1,
      anon_sym_x,
    ACTIONS(194), 13,
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
  [664] = 7,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      aux_sym__x_token1,
    ACTIONS(204), 1,
      aux_sym__y_token1,
    STATE(78), 1,
      sym_y,
    STATE(79), 1,
      sym_x,
    STATE(150), 1,
      sym_absolute,
    ACTIONS(198), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [693] = 6,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    STATE(124), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(208), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [720] = 3,
    STATE(117), 1,
      sym_halign,
    ACTIONS(214), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [740] = 5,
    ACTIONS(218), 1,
      aux_sym__rgb_token1,
    ACTIONS(220), 1,
      aux_sym__rgba_token1,
    STATE(111), 1,
      sym_colour,
    STATE(75), 2,
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
  [764] = 6,
    ACTIONS(224), 1,
      anon_sym_name,
    ACTIONS(226), 1,
      anon_sym_x,
    ACTIONS(228), 1,
      anon_sym_y,
    ACTIONS(230), 1,
      anon_sym_xy,
    ACTIONS(232), 1,
      anon_sym_part,
    ACTIONS(222), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [790] = 4,
    ACTIONS(236), 1,
      anon_sym_svg,
    ACTIONS(238), 1,
      anon_sym_DOTh,
    STATE(109), 2,
      sym_svg,
      sym_header,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [811] = 5,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(79), 2,
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
  [834] = 5,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_identifier,
    ACTIONS(79), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(242), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [857] = 4,
    ACTIONS(246), 1,
      anon_sym_project,
    ACTIONS(248), 1,
      anon_sym_script,
    STATE(120), 2,
      sym_project,
      sym_script,
    ACTIONS(244), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [878] = 5,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_identifier,
    ACTIONS(79), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(87), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [901] = 5,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_identifier,
    ACTIONS(79), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(91), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [924] = 5,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(79), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(95), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [947] = 4,
    STATE(17), 1,
      sym__string,
    STATE(144), 1,
      sym__label_string,
    ACTIONS(252), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [968] = 5,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_identifier_token1,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(79), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(75), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [991] = 4,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      aux_sym__offset_token1,
    STATE(76), 1,
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
  [1011] = 3,
    ACTIONS(262), 1,
      aux_sym__offset_token1,
    STATE(91), 1,
      sym_offset,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1029] = 4,
    ACTIONS(266), 1,
      anon_sym_timestamp,
    ACTIONS(268), 1,
      anon_sym_gzip,
    STATE(119), 1,
      sym__save_options,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1049] = 3,
    ACTIONS(262), 1,
      aux_sym__offset_token1,
    STATE(93), 1,
      sym_offset,
    ACTIONS(270), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1067] = 4,
    ACTIONS(274), 1,
      anon_sym_name,
    ACTIONS(276), 1,
      anon_sym_height,
    ACTIONS(278), 1,
      anon_sym_width,
    ACTIONS(272), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1087] = 2,
    ACTIONS(282), 1,
      sym_width,
    ACTIONS(280), 10,
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
  [1103] = 5,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      aux_sym_font_token1,
    STATE(10), 1,
      sym_name,
    STATE(138), 1,
      sym__component_entity,
    ACTIONS(286), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1125] = 5,
    ACTIONS(288), 1,
      aux_sym_font_token1,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_name,
    STATE(137), 1,
      sym__component_entity,
    ACTIONS(292), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1147] = 5,
    ACTIONS(288), 1,
      aux_sym_font_token1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_name,
    STATE(97), 1,
      sym__component_entity,
    ACTIONS(296), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1169] = 5,
    ACTIONS(288), 1,
      aux_sym_font_token1,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_name,
    STATE(136), 1,
      sym__component_entity,
    ACTIONS(300), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1191] = 5,
    ACTIONS(288), 1,
      aux_sym_font_token1,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_name,
    STATE(131), 1,
      sym__component_entity,
    ACTIONS(304), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1213] = 1,
    ACTIONS(280), 11,
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
  [1227] = 3,
    ACTIONS(308), 1,
      anon_sym_project,
    ACTIONS(310), 1,
      anon_sym_script,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1244] = 4,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      aux_sym_font_token1,
    STATE(113), 1,
      sym_name,
    ACTIONS(107), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1263] = 4,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      aux_sym_font_token1,
    STATE(135), 1,
      sym_part,
    ACTIONS(314), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1282] = 3,
    ACTIONS(320), 1,
      aux_sym_fontsize_token1,
    STATE(122), 1,
      sym_fontsize,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1299] = 4,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 1,
      aux_sym_font_token1,
    STATE(134), 1,
      sym_font,
    ACTIONS(324), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1318] = 3,
    ACTIONS(204), 1,
      aux_sym__y_token1,
    STATE(140), 1,
      sym_y,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1335] = 3,
    ACTIONS(332), 1,
      anon_sym_light,
    ACTIONS(334), 1,
      anon_sym_dark,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1352] = 4,
    ACTIONS(326), 1,
      aux_sym_font_token1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_font,
    ACTIONS(338), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1371] = 3,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym__component,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1388] = 3,
    ACTIONS(346), 1,
      sym_height,
    ACTIONS(348), 1,
      sym_width,
    ACTIONS(344), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1405] = 3,
    ACTIONS(202), 1,
      aux_sym__x_token1,
    STATE(140), 1,
      sym_x,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1422] = 3,
    ACTIONS(352), 1,
      anon_sym_panel,
    STATE(125), 1,
      sym_panel,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1439] = 6,
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
    STATE(171), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1462] = 3,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      sym_decoration,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1479] = 4,
    ACTIONS(184), 1,
      aux_sym_font_token1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    STATE(145), 1,
      sym_name,
    ACTIONS(370), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1498] = 4,
    ACTIONS(184), 1,
      aux_sym_font_token1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_name,
    ACTIONS(374), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1517] = 4,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      aux_sym_font_token1,
    STATE(113), 1,
      sym_part,
    ACTIONS(107), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1536] = 4,
    ACTIONS(184), 1,
      aux_sym_font_token1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_name,
    ACTIONS(378), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1555] = 4,
    ACTIONS(326), 1,
      aux_sym_font_token1,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_font,
    ACTIONS(382), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1574] = 2,
    ACTIONS(386), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(384), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1588] = 2,
    ACTIONS(390), 1,
      aux_sym__x_attr_token2,
    ACTIONS(388), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1602] = 2,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1616] = 2,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1630] = 2,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1644] = 2,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(402), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1658] = 2,
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
  [1672] = 1,
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
  [1684] = 2,
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
  [1698] = 2,
    ACTIONS(416), 1,
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
  [1712] = 2,
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
  [1726] = 2,
    ACTIONS(424), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(422), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1740] = 2,
    ACTIONS(428), 1,
      anon_sym_timestamp,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1754] = 1,
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
  [1766] = 2,
    ACTIONS(434), 1,
      aux_sym__x_attr_token2,
    ACTIONS(432), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1780] = 2,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1794] = 2,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1808] = 2,
    ACTIONS(444), 1,
      aux_sym__x_attr_token2,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1822] = 2,
    ACTIONS(448), 1,
      aux_sym__x_attr_token2,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1836] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1850] = 2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1864] = 1,
    ACTIONS(458), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1876] = 2,
    ACTIONS(462), 1,
      sym_width,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1890] = 1,
    ACTIONS(464), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1902] = 1,
    ACTIONS(466), 9,
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
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(468), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1928] = 2,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    ACTIONS(474), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1942] = 1,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1953] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1964] = 1,
    ACTIONS(480), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1975] = 1,
    ACTIONS(482), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1986] = 1,
    ACTIONS(484), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1997] = 1,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2008] = 1,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2019] = 1,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2030] = 1,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2041] = 1,
    ACTIONS(494), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2052] = 1,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2063] = 1,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2074] = 1,
    ACTIONS(498), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2085] = 1,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2096] = 1,
    ACTIONS(502), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2107] = 1,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2118] = 1,
    ACTIONS(506), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2129] = 1,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2140] = 1,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2151] = 1,
    ACTIONS(510), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2162] = 1,
    ACTIONS(512), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2173] = 1,
    ACTIONS(432), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2184] = 1,
    ACTIONS(514), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2195] = 1,
    ACTIONS(516), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2206] = 1,
    ACTIONS(518), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2217] = 1,
    ACTIONS(520), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2228] = 1,
    ACTIONS(522), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2239] = 1,
    ACTIONS(524), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2250] = 1,
    ACTIONS(526), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2261] = 1,
    ACTIONS(528), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2272] = 1,
    ACTIONS(530), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2283] = 1,
    ACTIONS(532), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2294] = 1,
    ACTIONS(534), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2305] = 1,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2316] = 1,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2327] = 1,
    ACTIONS(388), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2338] = 1,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2349] = 1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2360] = 1,
    ACTIONS(544), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2371] = 1,
    ACTIONS(546), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2382] = 1,
    ACTIONS(548), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2393] = 1,
    ACTIONS(550), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2404] = 1,
    ACTIONS(552), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2415] = 1,
    ACTIONS(554), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2426] = 1,
    ACTIONS(556), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2437] = 1,
    ACTIONS(558), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2448] = 1,
    ACTIONS(560), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2459] = 1,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2470] = 1,
    ACTIONS(564), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2481] = 1,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2492] = 1,
    ACTIONS(566), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2503] = 1,
    ACTIONS(568), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2514] = 1,
    ACTIONS(570), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2525] = 1,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2536] = 1,
    ACTIONS(572), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2547] = 1,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2558] = 3,
    ACTIONS(448), 1,
      aux_sym__x_attr_token1,
    ACTIONS(574), 1,
      anon_sym_AT,
    ACTIONS(576), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2571] = 3,
    ACTIONS(578), 1,
      anon_sym_AT,
    ACTIONS(580), 1,
      aux_sym__x_attr_token1,
    ACTIONS(582), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2584] = 3,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(79), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2596] = 3,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(79), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2608] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_identifier,
    ACTIONS(79), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2620] = 3,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_identifier,
    ACTIONS(79), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2632] = 3,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(79), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2644] = 1,
    ACTIONS(584), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [2652] = 2,
    STATE(112), 1,
      sym_valign,
    ACTIONS(586), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2662] = 3,
    ACTIONS(588), 1,
      aux_sym__rgb_token1,
    ACTIONS(590), 1,
      aux_sym__rgba_token1,
    STATE(106), 2,
      sym__rgb,
      sym__rgba,
  [2673] = 3,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      aux_sym__offset_token1,
    STATE(183), 1,
      sym__offset,
  [2683] = 2,
    ACTIONS(596), 1,
      aux_sym__x_attr_token2,
    ACTIONS(598), 1,
      anon_sym_COMMA,
  [2690] = 2,
    ACTIONS(600), 1,
      aux_sym_font_token1,
    STATE(104), 1,
      sym_name,
  [2697] = 2,
    ACTIONS(600), 1,
      aux_sym_font_token1,
    STATE(127), 1,
      sym_name,
  [2704] = 2,
    ACTIONS(602), 1,
      aux_sym__y_token1,
    STATE(69), 1,
      sym__y,
  [2711] = 2,
    ACTIONS(604), 1,
      aux_sym__rgb_token1,
    STATE(141), 1,
      sym_rgb,
  [2718] = 2,
    ACTIONS(602), 1,
      aux_sym__y_token1,
    STATE(96), 1,
      sym__y,
  [2725] = 2,
    ACTIONS(188), 1,
      aux_sym__rgba_token1,
    STATE(141), 1,
      sym_rgba,
  [2732] = 1,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
  [2736] = 1,
    ACTIONS(608), 1,
      aux_sym__absolute_token1,
  [2740] = 1,
    ACTIONS(610), 1,
      anon_sym_timestamp,
  [2744] = 1,
    ACTIONS(610), 1,
      anon_sym_gzip,
  [2748] = 1,
    ACTIONS(612), 1,
      aux_sym__absolute_token1,
  [2752] = 1,
    ACTIONS(614), 1,
      aux_sym__label_absolute_token1,
  [2756] = 1,
    ACTIONS(598), 1,
      anon_sym_COMMA,
  [2760] = 1,
    ACTIONS(596), 1,
      aux_sym__x_attr_token1,
  [2764] = 1,
    ACTIONS(434), 1,
      aux_sym__x_attr_token1,
  [2768] = 1,
    ACTIONS(616), 1,
      aux_sym__absolute_token1,
  [2772] = 1,
    ACTIONS(444), 1,
      aux_sym__x_attr_token1,
  [2776] = 1,
    ACTIONS(390), 1,
      aux_sym__x_attr_token1,
  [2780] = 1,
    ACTIONS(618), 1,
      anon_sym_COMMA,
  [2784] = 1,
    ACTIONS(620), 1,
      anon_sym_COMMA,
  [2788] = 1,
    ACTIONS(622), 1,
      anon_sym_COMMA,
  [2792] = 1,
    ACTIONS(624), 1,
      anon_sym_COMMA,
  [2796] = 1,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
  [2800] = 1,
    ACTIONS(628), 1,
      anon_sym_COMMA,
  [2804] = 1,
    ACTIONS(630), 1,
      aux_sym__label_relative_token1,
  [2808] = 1,
    ACTIONS(632), 1,
      anon_sym_COMMA,
  [2812] = 1,
    ACTIONS(634), 1,
      aux_sym__label_absolute_token1,
  [2816] = 1,
    ACTIONS(636), 1,
      anon_sym_COMMA,
  [2820] = 1,
    ACTIONS(638), 1,
      anon_sym_COMMA,
  [2824] = 1,
    ACTIONS(640), 1,
      anon_sym_with,
  [2828] = 1,
    ACTIONS(448), 1,
      aux_sym__x_attr_token1,
  [2832] = 1,
    ACTIONS(642), 1,
      sym_height,
  [2836] = 1,
    ACTIONS(642), 1,
      sym_width,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 250,
  [SMALL_STATE(10)] = 278,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 373,
  [SMALL_STATE(14)] = 408,
  [SMALL_STATE(15)] = 437,
  [SMALL_STATE(16)] = 463,
  [SMALL_STATE(17)] = 491,
  [SMALL_STATE(18)] = 519,
  [SMALL_STATE(19)] = 538,
  [SMALL_STATE(20)] = 557,
  [SMALL_STATE(21)] = 576,
  [SMALL_STATE(22)] = 595,
  [SMALL_STATE(23)] = 626,
  [SMALL_STATE(24)] = 645,
  [SMALL_STATE(25)] = 664,
  [SMALL_STATE(26)] = 693,
  [SMALL_STATE(27)] = 720,
  [SMALL_STATE(28)] = 740,
  [SMALL_STATE(29)] = 764,
  [SMALL_STATE(30)] = 790,
  [SMALL_STATE(31)] = 811,
  [SMALL_STATE(32)] = 834,
  [SMALL_STATE(33)] = 857,
  [SMALL_STATE(34)] = 878,
  [SMALL_STATE(35)] = 901,
  [SMALL_STATE(36)] = 924,
  [SMALL_STATE(37)] = 947,
  [SMALL_STATE(38)] = 968,
  [SMALL_STATE(39)] = 991,
  [SMALL_STATE(40)] = 1011,
  [SMALL_STATE(41)] = 1029,
  [SMALL_STATE(42)] = 1049,
  [SMALL_STATE(43)] = 1067,
  [SMALL_STATE(44)] = 1087,
  [SMALL_STATE(45)] = 1103,
  [SMALL_STATE(46)] = 1125,
  [SMALL_STATE(47)] = 1147,
  [SMALL_STATE(48)] = 1169,
  [SMALL_STATE(49)] = 1191,
  [SMALL_STATE(50)] = 1213,
  [SMALL_STATE(51)] = 1227,
  [SMALL_STATE(52)] = 1244,
  [SMALL_STATE(53)] = 1263,
  [SMALL_STATE(54)] = 1282,
  [SMALL_STATE(55)] = 1299,
  [SMALL_STATE(56)] = 1318,
  [SMALL_STATE(57)] = 1335,
  [SMALL_STATE(58)] = 1352,
  [SMALL_STATE(59)] = 1371,
  [SMALL_STATE(60)] = 1388,
  [SMALL_STATE(61)] = 1405,
  [SMALL_STATE(62)] = 1422,
  [SMALL_STATE(63)] = 1439,
  [SMALL_STATE(64)] = 1462,
  [SMALL_STATE(65)] = 1479,
  [SMALL_STATE(66)] = 1498,
  [SMALL_STATE(67)] = 1517,
  [SMALL_STATE(68)] = 1536,
  [SMALL_STATE(69)] = 1555,
  [SMALL_STATE(70)] = 1574,
  [SMALL_STATE(71)] = 1588,
  [SMALL_STATE(72)] = 1602,
  [SMALL_STATE(73)] = 1616,
  [SMALL_STATE(74)] = 1630,
  [SMALL_STATE(75)] = 1644,
  [SMALL_STATE(76)] = 1658,
  [SMALL_STATE(77)] = 1672,
  [SMALL_STATE(78)] = 1684,
  [SMALL_STATE(79)] = 1698,
  [SMALL_STATE(80)] = 1712,
  [SMALL_STATE(81)] = 1726,
  [SMALL_STATE(82)] = 1740,
  [SMALL_STATE(83)] = 1754,
  [SMALL_STATE(84)] = 1766,
  [SMALL_STATE(85)] = 1780,
  [SMALL_STATE(86)] = 1794,
  [SMALL_STATE(87)] = 1808,
  [SMALL_STATE(88)] = 1822,
  [SMALL_STATE(89)] = 1836,
  [SMALL_STATE(90)] = 1850,
  [SMALL_STATE(91)] = 1864,
  [SMALL_STATE(92)] = 1876,
  [SMALL_STATE(93)] = 1890,
  [SMALL_STATE(94)] = 1902,
  [SMALL_STATE(95)] = 1914,
  [SMALL_STATE(96)] = 1928,
  [SMALL_STATE(97)] = 1942,
  [SMALL_STATE(98)] = 1953,
  [SMALL_STATE(99)] = 1964,
  [SMALL_STATE(100)] = 1975,
  [SMALL_STATE(101)] = 1986,
  [SMALL_STATE(102)] = 1997,
  [SMALL_STATE(103)] = 2008,
  [SMALL_STATE(104)] = 2019,
  [SMALL_STATE(105)] = 2030,
  [SMALL_STATE(106)] = 2041,
  [SMALL_STATE(107)] = 2052,
  [SMALL_STATE(108)] = 2063,
  [SMALL_STATE(109)] = 2074,
  [SMALL_STATE(110)] = 2085,
  [SMALL_STATE(111)] = 2096,
  [SMALL_STATE(112)] = 2107,
  [SMALL_STATE(113)] = 2118,
  [SMALL_STATE(114)] = 2129,
  [SMALL_STATE(115)] = 2140,
  [SMALL_STATE(116)] = 2151,
  [SMALL_STATE(117)] = 2162,
  [SMALL_STATE(118)] = 2173,
  [SMALL_STATE(119)] = 2184,
  [SMALL_STATE(120)] = 2195,
  [SMALL_STATE(121)] = 2206,
  [SMALL_STATE(122)] = 2217,
  [SMALL_STATE(123)] = 2228,
  [SMALL_STATE(124)] = 2239,
  [SMALL_STATE(125)] = 2250,
  [SMALL_STATE(126)] = 2261,
  [SMALL_STATE(127)] = 2272,
  [SMALL_STATE(128)] = 2283,
  [SMALL_STATE(129)] = 2294,
  [SMALL_STATE(130)] = 2305,
  [SMALL_STATE(131)] = 2316,
  [SMALL_STATE(132)] = 2327,
  [SMALL_STATE(133)] = 2338,
  [SMALL_STATE(134)] = 2349,
  [SMALL_STATE(135)] = 2360,
  [SMALL_STATE(136)] = 2371,
  [SMALL_STATE(137)] = 2382,
  [SMALL_STATE(138)] = 2393,
  [SMALL_STATE(139)] = 2404,
  [SMALL_STATE(140)] = 2415,
  [SMALL_STATE(141)] = 2426,
  [SMALL_STATE(142)] = 2437,
  [SMALL_STATE(143)] = 2448,
  [SMALL_STATE(144)] = 2459,
  [SMALL_STATE(145)] = 2470,
  [SMALL_STATE(146)] = 2481,
  [SMALL_STATE(147)] = 2492,
  [SMALL_STATE(148)] = 2503,
  [SMALL_STATE(149)] = 2514,
  [SMALL_STATE(150)] = 2525,
  [SMALL_STATE(151)] = 2536,
  [SMALL_STATE(152)] = 2547,
  [SMALL_STATE(153)] = 2558,
  [SMALL_STATE(154)] = 2571,
  [SMALL_STATE(155)] = 2584,
  [SMALL_STATE(156)] = 2596,
  [SMALL_STATE(157)] = 2608,
  [SMALL_STATE(158)] = 2620,
  [SMALL_STATE(159)] = 2632,
  [SMALL_STATE(160)] = 2644,
  [SMALL_STATE(161)] = 2652,
  [SMALL_STATE(162)] = 2662,
  [SMALL_STATE(163)] = 2673,
  [SMALL_STATE(164)] = 2683,
  [SMALL_STATE(165)] = 2690,
  [SMALL_STATE(166)] = 2697,
  [SMALL_STATE(167)] = 2704,
  [SMALL_STATE(168)] = 2711,
  [SMALL_STATE(169)] = 2718,
  [SMALL_STATE(170)] = 2725,
  [SMALL_STATE(171)] = 2732,
  [SMALL_STATE(172)] = 2736,
  [SMALL_STATE(173)] = 2740,
  [SMALL_STATE(174)] = 2744,
  [SMALL_STATE(175)] = 2748,
  [SMALL_STATE(176)] = 2752,
  [SMALL_STATE(177)] = 2756,
  [SMALL_STATE(178)] = 2760,
  [SMALL_STATE(179)] = 2764,
  [SMALL_STATE(180)] = 2768,
  [SMALL_STATE(181)] = 2772,
  [SMALL_STATE(182)] = 2776,
  [SMALL_STATE(183)] = 2780,
  [SMALL_STATE(184)] = 2784,
  [SMALL_STATE(185)] = 2788,
  [SMALL_STATE(186)] = 2792,
  [SMALL_STATE(187)] = 2796,
  [SMALL_STATE(188)] = 2800,
  [SMALL_STATE(189)] = 2804,
  [SMALL_STATE(190)] = 2808,
  [SMALL_STATE(191)] = 2812,
  [SMALL_STATE(192)] = 2816,
  [SMALL_STATE(193)] = 2820,
  [SMALL_STATE(194)] = 2824,
  [SMALL_STATE(195)] = 2828,
  [SMALL_STATE(196)] = 2832,
  [SMALL_STATE(197)] = 2836,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_attr, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(59),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(51),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(33),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(62),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_entity, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_entity, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_entity, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [626] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
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
