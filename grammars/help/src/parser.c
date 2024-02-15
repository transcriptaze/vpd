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
#define STATE_COUNT 219
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 155
#define ALIAS_COUNT 1
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

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
  anon_sym_text = 18,
  anon_sym_font = 19,
  anon_sym_size = 20,
  anon_sym_halign = 21,
  anon_sym_valign = 22,
  anon_sym_align = 23,
  anon_sym_colour = 24,
  anon_sym_color = 25,
  anon_sym_AT = 26,
  aux_sym__x_attr_token1 = 27,
  anon_sym_left = 28,
  anon_sym_centre = 29,
  anon_sym_center = 30,
  anon_sym_right = 31,
  aux_sym__x_attr_token2 = 32,
  aux_sym__x_attr_token3 = 33,
  anon_sym_top = 34,
  anon_sym_middle = 35,
  anon_sym_bottom = 36,
  anon_sym_COMMA = 37,
  anon_sym_decorate = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_with = 41,
  anon_sym_delete = 42,
  anon_sym_guide = 43,
  anon_sym_label = 44,
  aux_sym__label_id_token1 = 45,
  anon_sym_DQUOTE = 46,
  aux_sym__label_id_token2 = 47,
  anon_sym_SQUOTE = 48,
  aux_sym__label_id_token3 = 49,
  anon_sym_decoration = 50,
  anon_sym_load = 51,
  anon_sym_project = 52,
  anon_sym_script = 53,
  anon_sym_save = 54,
  anon_sym_timestamp = 55,
  anon_sym_gzip = 56,
  anon_sym_export = 57,
  anon_sym_panel = 58,
  anon_sym_svg = 59,
  anon_sym_dark = 60,
  anon_sym_DOTh = 61,
  anon_sym_origin = 62,
  anon_sym_background = 63,
  aux_sym__label_absolute_token1 = 64,
  aux_sym__label_relative_token1 = 65,
  aux_sym_font_token1 = 66,
  aux_sym_fontsize_token1 = 67,
  anon_sym_baseline = 68,
  aux_sym__rgb_token1 = 69,
  aux_sym__rgba_token1 = 70,
  aux_sym__absolute_token1 = 71,
  aux_sym__x_token1 = 72,
  aux_sym__y_token1 = 73,
  aux_sym__offset_token1 = 74,
  aux_sym_string_token1 = 75,
  aux_sym_string_token2 = 76,
  aux_sym__string_token1 = 77,
  aux_sym__string_token2 = 78,
  aux_sym_identifier_token1 = 79,
  aux_sym_identifier_token2 = 80,
  aux_sym_identifier_token3 = 81,
  sym_command = 82,
  sym_new = 83,
  sym_module = 84,
  sym__input_entity = 85,
  sym__output_entity = 86,
  sym__parameter_entity = 87,
  sym__light_entity = 88,
  sym__widget_entity = 89,
  sym__component_entity = 90,
  sym_set = 91,
  sym__module_attr = 92,
  sym__component_attr = 93,
  sym__label_attr = 94,
  sym__x_attr = 95,
  sym__y_attr = 96,
  sym__xy_attr = 97,
  sym_decorate = 98,
  sym__component = 99,
  sym_decoration = 100,
  sym_delete = 101,
  sym__guideline_id = 102,
  sym__input_id = 103,
  sym__output_id = 104,
  sym__parameter_id = 105,
  sym__light_id = 106,
  sym__widget_id = 107,
  sym__label_id = 108,
  sym__decoration_id = 109,
  sym__component_id = 110,
  sym_load = 111,
  sym_save = 112,
  sym_project = 113,
  sym__save_options = 114,
  sym_script = 115,
  sym_export = 116,
  sym_panel = 117,
  sym_svg = 118,
  sym_header = 119,
  sym_origin = 120,
  sym_background = 121,
  sym_guide = 122,
  sym_label = 123,
  sym__label_string = 124,
  sym__label_absolute = 125,
  sym__label_relative = 126,
  sym__label_geometry = 127,
  sym_font = 128,
  sym_fontsize = 129,
  sym_halign = 130,
  sym_valign = 131,
  sym__align = 132,
  sym_colour = 133,
  sym__rgb = 134,
  sym__rgba = 135,
  sym_name = 136,
  sym_part = 137,
  sym_rgb = 138,
  sym_rgba = 139,
  sym_absolute = 140,
  sym__absolute = 141,
  sym__relative = 142,
  sym__x = 143,
  sym__y = 144,
  sym_x = 145,
  sym_y = 146,
  sym_xy = 147,
  sym__xy = 148,
  sym__offset = 149,
  sym_offset = 150,
  sym_string = 151,
  sym__string = 152,
  sym_identifier = 153,
  aux_sym_command_repeat1 = 154,
  alias_sym_reference = 155,
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
  [anon_sym_text] = "text",
  [anon_sym_font] = "font",
  [anon_sym_size] = "size",
  [anon_sym_halign] = "halign",
  [anon_sym_valign] = "valign",
  [anon_sym_align] = "align",
  [anon_sym_colour] = "colour",
  [anon_sym_color] = "color",
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
  [aux_sym__label_id_token1] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__label_id_token2] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__label_id_token3] = "identifier",
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
  [sym__label_attr] = "_label_attr",
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
  [sym__align] = "_align",
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
  [anon_sym_text] = anon_sym_text,
  [anon_sym_font] = anon_sym_font,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_halign] = anon_sym_halign,
  [anon_sym_valign] = anon_sym_valign,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_colour] = anon_sym_colour,
  [anon_sym_color] = anon_sym_color,
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
  [aux_sym__label_id_token1] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__label_id_token2] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__label_id_token3] = sym_identifier,
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
  [sym__label_attr] = sym__label_attr,
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
  [sym__align] = sym__align,
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
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_halign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_colour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
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
  [aux_sym__label_id_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_id_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_id_token3] = {
    .visible = true,
    .named = true,
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
  [sym__label_attr] = {
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
  [sym__align] = {
    .visible = false,
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
  [7] = {
    [0] = sym_halign,
    [2] = sym_valign,
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
  [40] = 9,
  [41] = 10,
  [42] = 42,
  [43] = 11,
  [44] = 44,
  [45] = 45,
  [46] = 13,
  [47] = 12,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 50,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 5,
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
  [168] = 168,
  [169] = 169,
  [170] = 13,
  [171] = 12,
  [172] = 172,
  [173] = 9,
  [174] = 10,
  [175] = 11,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(276);
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '0') ADVANCE(329);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'g') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'v') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(300);
      if (lookahead == 'y') ADVANCE(303);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(552);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(550);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(515);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'm') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'U') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(153);
      END_STATE();
    case 21:
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(374);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'm') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'm') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(207);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(219);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(508);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(83);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(510);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(416);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(213);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 125:
      if (lookahead == 'j') ADVANCE(64);
      END_STATE();
    case 126:
      if (lookahead == 'k') ADVANCE(509);
      END_STATE();
    case 127:
      if (lookahead == 'k') ADVANCE(96);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(328);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(513);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(347);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(406);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(546);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(548);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(511);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(501);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(500);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(548);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(113);
      if (lookahead == 'z') ADVANCE(114);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 235:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 236:
      if (lookahead == 'w') ADVANCE(277);
      END_STATE();
    case 237:
      if (lookahead == 'x') ADVANCE(186);
      END_STATE();
    case 238:
      if (lookahead == 'x') ADVANCE(208);
      END_STATE();
    case 239:
      if (lookahead == 'z') ADVANCE(61);
      END_STATE();
    case 240:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 260:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 261:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 262:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 263:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 264:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 265:
      if (eof) ADVANCE(276);
      if (lookahead == ' ') SKIP(265)
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'v') ADVANCE(431);
      if (lookahead == 'x') ADVANCE(301);
      if (lookahead == 'y') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(424);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 266:
      if (eof) ADVANCE(276);
      if (lookahead == ' ') SKIP(266)
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(425);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 267:
      if (eof) ADVANCE(276);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == 'd') ADVANCE(561);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(555);
      if (lookahead == 's') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(302);
      if (lookahead == 'y') ADVANCE(304);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 268:
      if (eof) ADVANCE(276);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(561);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == 's') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 269:
      if (eof) ADVANCE(276);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 270:
      if (eof) ADVANCE(276);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(175);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 271:
      if (eof) ADVANCE(276);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == 'd') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(539);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == 's') ADVANCE(516);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 272:
      if (eof) ADVANCE(276);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 273:
      if (eof) ADVANCE(276);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'c') ADVANCE(359);
      if (lookahead == 'd') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 's') ADVANCE(352);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 274:
      if (eof) ADVANCE(276);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 'm') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 275:
      if (eof) ADVANCE(276);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(153);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_halign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_valign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == 'h') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == 'h') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'f') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'g') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'h') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'l') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'm') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'n') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'v') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'w') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'x') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'v') ADVANCE(431);
      if (lookahead == 'x') ADVANCE(301);
      if (lookahead == 'y') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'c') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'p') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'v') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'w') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'z') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(478);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead == 'l') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 586:
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
  [5] = {.lex_state = 265},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 267},
  [10] = {.lex_state = 267},
  [11] = {.lex_state = 267},
  [12] = {.lex_state = 267},
  [13] = {.lex_state = 267},
  [14] = {.lex_state = 273},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 273},
  [17] = {.lex_state = 270},
  [18] = {.lex_state = 273},
  [19] = {.lex_state = 273},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 274},
  [22] = {.lex_state = 269},
  [23] = {.lex_state = 274},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 270},
  [31] = {.lex_state = 271},
  [32] = {.lex_state = 268},
  [33] = {.lex_state = 269},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 272},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 272},
  [39] = {.lex_state = 272},
  [40] = {.lex_state = 268},
  [41] = {.lex_state = 268},
  [42] = {.lex_state = 268},
  [43] = {.lex_state = 268},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 270},
  [46] = {.lex_state = 268},
  [47] = {.lex_state = 268},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 270},
  [51] = {.lex_state = 270},
  [52] = {.lex_state = 271},
  [53] = {.lex_state = 271},
  [54] = {.lex_state = 272},
  [55] = {.lex_state = 270},
  [56] = {.lex_state = 271},
  [57] = {.lex_state = 271},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 271},
  [60] = {.lex_state = 269},
  [61] = {.lex_state = 266},
  [62] = {.lex_state = 271},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 270},
  [66] = {.lex_state = 271},
  [67] = {.lex_state = 270},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 270},
  [70] = {.lex_state = 271},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 271},
  [73] = {.lex_state = 272},
  [74] = {.lex_state = 270},
  [75] = {.lex_state = 271},
  [76] = {.lex_state = 271},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 271},
  [79] = {.lex_state = 271},
  [80] = {.lex_state = 271},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 271},
  [83] = {.lex_state = 271},
  [84] = {.lex_state = 269},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 271},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 271},
  [91] = {.lex_state = 271},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 275},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 269},
  [101] = {.lex_state = 271},
  [102] = {.lex_state = 269},
  [103] = {.lex_state = 269},
  [104] = {.lex_state = 272},
  [105] = {.lex_state = 275},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 271},
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
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 21},
  [169] = {.lex_state = 21},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 269},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 269},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 267},
  [180] = {.lex_state = 270},
  [181] = {.lex_state = 267},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 273},
  [185] = {.lex_state = 270},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 267},
  [189] = {.lex_state = 273},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 273},
  [198] = {.lex_state = 273},
  [199] = {.lex_state = 273},
  [200] = {.lex_state = 271},
  [201] = {.lex_state = 273},
  [202] = {.lex_state = 267},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 271},
  [212] = {.lex_state = 268},
  [213] = {.lex_state = 267},
  [214] = {.lex_state = 269},
  [215] = {.lex_state = 268},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 485},
  [218] = {.lex_state = 481},
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
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_halign] = ACTIONS(1),
    [anon_sym_valign] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_colour] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
  },
  [1] = {
    [sym_command] = STATE(205),
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
  [0] = 13,
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
      anon_sym_label,
    ACTIONS(35), 1,
      anon_sym_origin,
    ACTIONS(37), 1,
      anon_sym_background,
    STATE(7), 1,
      sym__label_id,
    STATE(37), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(117), 5,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym_origin,
      sym_background,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [55] = 10,
    ACTIONS(41), 1,
      anon_sym_module,
    ACTIONS(43), 1,
      anon_sym_input,
    ACTIONS(45), 1,
      anon_sym_output,
    ACTIONS(47), 1,
      anon_sym_parameter,
    ACTIONS(49), 1,
      anon_sym_light,
    ACTIONS(51), 1,
      anon_sym_widget,
    ACTIONS(53), 1,
      anon_sym_guide,
    ACTIONS(55), 1,
      anon_sym_label,
    ACTIONS(39), 8,
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
      sym__light_entity,
      sym__widget_entity,
      sym_guide,
      sym_label,
  [100] = 10,
    ACTIONS(59), 1,
      anon_sym_input,
    ACTIONS(61), 1,
      anon_sym_output,
    ACTIONS(63), 1,
      anon_sym_parameter,
    ACTIONS(65), 1,
      anon_sym_light,
    ACTIONS(67), 1,
      anon_sym_widget,
    ACTIONS(69), 1,
      anon_sym_guide,
    ACTIONS(71), 1,
      anon_sym_label,
    ACTIONS(73), 1,
      anon_sym_decoration,
    ACTIONS(57), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(119), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [145] = 5,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym__label_id_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 18,
      anon_sym_new,
      anon_sym_set,
      anon_sym_x,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_text,
      anon_sym_font,
      anon_sym_size,
      anon_sym_halign,
      anon_sym_valign,
      anon_sym_align,
      anon_sym_colour,
      anon_sym_color,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [178] = 2,
    ACTIONS(87), 1,
      anon_sym_x,
    ACTIONS(85), 18,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_text,
      anon_sym_font,
      anon_sym_size,
      anon_sym_halign,
      anon_sym_valign,
      anon_sym_align,
      anon_sym_colour,
      anon_sym_color,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [202] = 11,
    ACTIONS(91), 1,
      anon_sym_x,
    ACTIONS(93), 1,
      anon_sym_y,
    ACTIONS(95), 1,
      anon_sym_xy,
    ACTIONS(97), 1,
      anon_sym_text,
    ACTIONS(99), 1,
      anon_sym_font,
    ACTIONS(101), 1,
      anon_sym_size,
    ACTIONS(103), 1,
      anon_sym_halign,
    ACTIONS(105), 1,
      anon_sym_valign,
    ACTIONS(107), 1,
      anon_sym_align,
    ACTIONS(109), 2,
      anon_sym_colour,
      anon_sym_color,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [244] = 2,
    ACTIONS(113), 1,
      anon_sym_x,
    ACTIONS(111), 18,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_text,
      anon_sym_font,
      anon_sym_size,
      anon_sym_halign,
      anon_sym_valign,
      anon_sym_align,
      anon_sym_colour,
      anon_sym_color,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [268] = 5,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(117), 12,
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
  [296] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(125), 12,
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
  [324] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(129), 12,
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
  [352] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(133), 12,
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
  [380] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(137), 12,
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
  [408] = 6,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      anon_sym_AT,
    ACTIONS(145), 1,
      aux_sym__x_attr_token1,
    STATE(127), 1,
      sym__x_attr,
    ACTIONS(147), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(141), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [437] = 9,
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
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(20), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [472] = 6,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      aux_sym__x_attr_token1,
    STATE(138), 1,
      sym__xy_attr,
    ACTIONS(159), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(153), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [501] = 7,
    ACTIONS(163), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      aux_sym__absolute_token1,
    ACTIONS(167), 1,
      aux_sym__x_token1,
    STATE(80), 1,
      sym_xy,
    STATE(204), 1,
      sym__x,
    STATE(109), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [532] = 6,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      aux_sym__x_attr_token1,
    STATE(127), 1,
      sym__xy_attr,
    ACTIONS(159), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(141), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [561] = 6,
    ACTIONS(143), 1,
      anon_sym_AT,
    ACTIONS(145), 1,
      aux_sym__x_attr_token1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym__x_attr,
    ACTIONS(147), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token3,
    ACTIONS(153), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [590] = 9,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(174), 1,
      anon_sym_set,
    ACTIONS(177), 1,
      anon_sym_decorate,
    ACTIONS(180), 1,
      anon_sym_delete,
    ACTIONS(183), 1,
      anon_sym_load,
    ACTIONS(186), 1,
      anon_sym_save,
    ACTIONS(189), 1,
      anon_sym_export,
    STATE(20), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [625] = 6,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      anon_sym_AT,
    ACTIONS(194), 1,
      aux_sym__x_attr_token1,
    STATE(127), 1,
      sym__y_attr,
    ACTIONS(196), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(141), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [653] = 6,
    ACTIONS(167), 1,
      aux_sym__x_token1,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      aux_sym__label_relative_token1,
    STATE(208), 1,
      sym__x,
    STATE(164), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(198), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [681] = 6,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      anon_sym_AT,
    ACTIONS(194), 1,
      aux_sym__x_attr_token1,
    STATE(138), 1,
      sym__y_attr,
    ACTIONS(196), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(153), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [709] = 2,
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
  [728] = 2,
    ACTIONS(210), 1,
      anon_sym_x,
    ACTIONS(208), 13,
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
  [747] = 2,
    ACTIONS(214), 1,
      anon_sym_x,
    ACTIONS(212), 13,
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
  [766] = 2,
    ACTIONS(218), 1,
      anon_sym_x,
    ACTIONS(216), 13,
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
  [785] = 2,
    ACTIONS(222), 1,
      anon_sym_x,
    ACTIONS(220), 13,
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
  [804] = 2,
    ACTIONS(226), 1,
      anon_sym_x,
    ACTIONS(224), 13,
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
  [823] = 7,
    ACTIONS(230), 1,
      anon_sym_AT,
    ACTIONS(232), 1,
      aux_sym__x_token1,
    ACTIONS(234), 1,
      aux_sym__y_token1,
    STATE(95), 1,
      sym_y,
    STATE(96), 1,
      sym_x,
    STATE(146), 1,
      sym_absolute,
    ACTIONS(228), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [852] = 8,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      aux_sym_font_token1,
    ACTIONS(242), 1,
      aux_sym__rgb_token1,
    ACTIONS(244), 1,
      aux_sym__rgba_token1,
    STATE(86), 1,
      sym_rgba,
    STATE(87), 1,
      sym_rgb,
    STATE(145), 1,
      sym_name,
    ACTIONS(238), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [883] = 6,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    STATE(142), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(248), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [910] = 3,
    STATE(138), 1,
      sym_valign,
    ACTIONS(252), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [930] = 5,
    ACTIONS(256), 1,
      aux_sym__rgb_token1,
    ACTIONS(258), 1,
      aux_sym__rgba_token1,
    STATE(161), 1,
      sym_colour,
    STATE(99), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [954] = 3,
    STATE(162), 1,
      sym_halign,
    ACTIONS(262), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(260), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [974] = 5,
    ACTIONS(256), 1,
      aux_sym__rgb_token1,
    ACTIONS(258), 1,
      aux_sym__rgba_token1,
    STATE(138), 1,
      sym_colour,
    STATE(99), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [998] = 6,
    ACTIONS(266), 1,
      anon_sym_name,
    ACTIONS(268), 1,
      anon_sym_x,
    ACTIONS(270), 1,
      anon_sym_y,
    ACTIONS(272), 1,
      anon_sym_xy,
    ACTIONS(274), 1,
      anon_sym_part,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1024] = 3,
    STATE(138), 1,
      sym__align,
    ACTIONS(276), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1044] = 3,
    STATE(138), 1,
      sym_halign,
    ACTIONS(262), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1064] = 5,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(117), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1087] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(125), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1110] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(280), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1133] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(129), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1156] = 4,
    ACTIONS(284), 1,
      anon_sym_svg,
    ACTIONS(286), 1,
      anon_sym_DOTh,
    STATE(130), 2,
      sym_svg,
      sym_header,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1177] = 4,
    STATE(22), 1,
      sym__string,
    STATE(111), 1,
      sym__label_string,
    ACTIONS(290), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1198] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(137), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1221] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(133), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1244] = 4,
    ACTIONS(294), 1,
      anon_sym_project,
    ACTIONS(296), 1,
      anon_sym_script,
    STATE(131), 2,
      sym_project,
      sym_script,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1265] = 4,
    ACTIONS(300), 1,
      anon_sym_timestamp,
    ACTIONS(302), 1,
      anon_sym_gzip,
    STATE(141), 1,
      sym__save_options,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1285] = 1,
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
  [1299] = 3,
    ACTIONS(308), 1,
      aux_sym__offset_token1,
    STATE(106), 1,
      sym_offset,
    ACTIONS(306), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1317] = 4,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      aux_sym__offset_token1,
    STATE(91), 1,
      sym__offset,
    ACTIONS(312), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1337] = 5,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      aux_sym_font_token1,
    STATE(17), 1,
      sym_name,
    STATE(149), 1,
      sym__component_entity,
    ACTIONS(318), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1359] = 2,
    ACTIONS(322), 1,
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
  [1375] = 3,
    ACTIONS(308), 1,
      aux_sym__offset_token1,
    STATE(107), 1,
      sym_offset,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1393] = 5,
    ACTIONS(320), 1,
      aux_sym_font_token1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_name,
    STATE(135), 1,
      sym__component_entity,
    ACTIONS(328), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1415] = 5,
    ACTIONS(320), 1,
      aux_sym_font_token1,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_name,
    STATE(155), 1,
      sym__component_entity,
    ACTIONS(332), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1437] = 4,
    ACTIONS(336), 1,
      anon_sym_name,
    ACTIONS(338), 1,
      anon_sym_height,
    ACTIONS(340), 1,
      anon_sym_width,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1457] = 5,
    ACTIONS(320), 1,
      aux_sym_font_token1,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_name,
    STATE(156), 1,
      sym__component_entity,
    ACTIONS(344), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1479] = 3,
    STATE(138), 1,
      sym_string,
    ACTIONS(346), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1497] = 5,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym__label_id_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1519] = 5,
    ACTIONS(320), 1,
      aux_sym_font_token1,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_name,
    STATE(158), 1,
      sym__component_entity,
    ACTIONS(350), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1541] = 3,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1558] = 3,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym__component,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1575] = 3,
    ACTIONS(234), 1,
      aux_sym__y_token1,
    STATE(163), 1,
      sym_y,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1592] = 4,
    ACTIONS(240), 1,
      aux_sym_font_token1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_name,
    ACTIONS(364), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1611] = 3,
    ACTIONS(232), 1,
      aux_sym__x_token1,
    STATE(163), 1,
      sym_x,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1628] = 3,
    ACTIONS(368), 1,
      anon_sym_light,
    ACTIONS(370), 1,
      anon_sym_dark,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1645] = 3,
    ACTIONS(374), 1,
      aux_sym_fontsize_token1,
    STATE(167), 1,
      sym_fontsize,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1662] = 4,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 1,
      aux_sym_font_token1,
    STATE(122), 1,
      sym_font,
    ACTIONS(378), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1681] = 6,
    ACTIONS(382), 1,
      anon_sym_input,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(386), 1,
      anon_sym_parameter,
    ACTIONS(388), 1,
      anon_sym_light,
    ACTIONS(390), 1,
      anon_sym_widget,
    STATE(187), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1704] = 4,
    ACTIONS(240), 1,
      aux_sym_font_token1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_name,
    ACTIONS(394), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1723] = 3,
    ACTIONS(398), 1,
      sym_height,
    ACTIONS(400), 1,
      sym_width,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1740] = 3,
    ACTIONS(374), 1,
      aux_sym_fontsize_token1,
    STATE(138), 1,
      sym_fontsize,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1757] = 4,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 1,
      aux_sym_font_token1,
    STATE(138), 1,
      sym_font,
    ACTIONS(153), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1776] = 4,
    ACTIONS(240), 1,
      aux_sym_font_token1,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_name,
    ACTIONS(404), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1795] = 3,
    ACTIONS(408), 1,
      anon_sym_project,
    ACTIONS(410), 1,
      anon_sym_script,
    ACTIONS(406), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1812] = 4,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      aux_sym_font_token1,
    STATE(127), 1,
      sym_name,
    ACTIONS(141), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1831] = 4,
    ACTIONS(380), 1,
      aux_sym_font_token1,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym_font,
    ACTIONS(414), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1850] = 4,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      aux_sym_font_token1,
    STATE(157), 1,
      sym_part,
    ACTIONS(418), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1869] = 3,
    ACTIONS(424), 1,
      anon_sym_panel,
    STATE(134), 1,
      sym_panel,
    ACTIONS(422), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1886] = 4,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      aux_sym_font_token1,
    STATE(127), 1,
      sym_part,
    ACTIONS(141), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1905] = 4,
    ACTIONS(380), 1,
      aux_sym_font_token1,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_font,
    ACTIONS(428), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1924] = 2,
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
  [1938] = 2,
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
  [1952] = 2,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(438), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1966] = 2,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(438), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1980] = 2,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1994] = 1,
    ACTIONS(448), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2006] = 2,
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
  [2020] = 2,
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
  [2034] = 2,
    ACTIONS(460), 1,
      anon_sym_timestamp,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2048] = 1,
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
  [2060] = 2,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(464), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2074] = 2,
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
  [2088] = 2,
    ACTIONS(472), 1,
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
  [2102] = 2,
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
  [2116] = 2,
    ACTIONS(478), 1,
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
  [2130] = 2,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(480), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2144] = 2,
    ACTIONS(486), 1,
      aux_sym__x_attr_token2,
    ACTIONS(484), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2158] = 2,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(490), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2172] = 2,
    ACTIONS(494), 1,
      aux_sym__x_attr_token2,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2186] = 2,
    ACTIONS(498), 1,
      aux_sym__x_attr_token2,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2200] = 2,
    ACTIONS(502), 1,
      sym_width,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2214] = 2,
    ACTIONS(506), 1,
      aux_sym__label_absolute_token1,
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
    ACTIONS(508), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2240] = 1,
    ACTIONS(510), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2252] = 1,
    ACTIONS(512), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2264] = 2,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    ACTIONS(516), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2278] = 2,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(518), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2292] = 1,
    ACTIONS(522), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2303] = 1,
    ACTIONS(524), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2314] = 1,
    ACTIONS(526), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2325] = 1,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2336] = 1,
    ACTIONS(528), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2347] = 1,
    ACTIONS(530), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2358] = 1,
    ACTIONS(532), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2369] = 1,
    ACTIONS(534), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2380] = 1,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2391] = 1,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2402] = 1,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2413] = 1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2424] = 1,
    ACTIONS(544), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2435] = 1,
    ACTIONS(546), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2446] = 1,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2457] = 1,
    ACTIONS(548), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2468] = 1,
    ACTIONS(550), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2479] = 1,
    ACTIONS(552), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2490] = 1,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2501] = 1,
    ACTIONS(554), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2512] = 1,
    ACTIONS(556), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2523] = 1,
    ACTIONS(484), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2534] = 1,
    ACTIONS(558), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2545] = 1,
    ACTIONS(560), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2556] = 1,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2567] = 1,
    ACTIONS(564), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2578] = 1,
    ACTIONS(566), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2589] = 1,
    ACTIONS(568), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2600] = 1,
    ACTIONS(570), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2611] = 1,
    ACTIONS(572), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2622] = 1,
    ACTIONS(574), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2633] = 1,
    ACTIONS(576), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2644] = 1,
    ACTIONS(578), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2655] = 1,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2666] = 1,
    ACTIONS(438), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2677] = 1,
    ACTIONS(468), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2688] = 1,
    ACTIONS(582), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2699] = 1,
    ACTIONS(584), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2710] = 1,
    ACTIONS(586), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2721] = 1,
    ACTIONS(588), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2732] = 1,
    ACTIONS(590), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2743] = 1,
    ACTIONS(592), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2754] = 1,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2765] = 1,
    ACTIONS(594), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2776] = 1,
    ACTIONS(596), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2787] = 1,
    ACTIONS(598), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2798] = 1,
    ACTIONS(600), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2809] = 1,
    ACTIONS(602), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2820] = 1,
    ACTIONS(604), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2831] = 1,
    ACTIONS(606), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2842] = 1,
    ACTIONS(608), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2853] = 1,
    ACTIONS(610), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2864] = 1,
    ACTIONS(612), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2875] = 1,
    ACTIONS(614), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2886] = 1,
    ACTIONS(616), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2897] = 1,
    ACTIONS(618), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2908] = 1,
    ACTIONS(620), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2919] = 3,
    ACTIONS(432), 1,
      aux_sym__x_attr_token1,
    ACTIONS(622), 1,
      anon_sym_AT,
    ACTIONS(624), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2932] = 3,
    ACTIONS(626), 1,
      anon_sym_AT,
    ACTIONS(628), 1,
      aux_sym__x_attr_token1,
    ACTIONS(630), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2945] = 3,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(121), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2957] = 3,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_identifier,
    ACTIONS(121), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2969] = 2,
    STATE(148), 1,
      sym_valign,
    ACTIONS(252), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2979] = 3,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(121), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2991] = 3,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(121), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [3003] = 3,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(121), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [3015] = 1,
    ACTIONS(632), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [3023] = 1,
    ACTIONS(634), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3030] = 3,
    ACTIONS(636), 1,
      aux_sym__rgb_token1,
    ACTIONS(638), 1,
      aux_sym__rgba_token1,
    STATE(144), 2,
      sym__rgb,
      sym__rgba,
  [3041] = 3,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      aux_sym__offset_token1,
    STATE(195), 1,
      sym__offset,
  [3051] = 2,
    ACTIONS(644), 1,
      aux_sym__y_token1,
    STATE(83), 1,
      sym__y,
  [3058] = 2,
    ACTIONS(646), 1,
      aux_sym__rgb_token1,
    STATE(112), 1,
      sym_rgb,
  [3065] = 2,
    ACTIONS(648), 1,
      aux_sym_font_token1,
    STATE(113), 1,
      sym_name,
  [3072] = 2,
    ACTIONS(244), 1,
      aux_sym__rgba_token1,
    STATE(112), 1,
      sym_rgba,
  [3079] = 2,
    ACTIONS(650), 1,
      aux_sym__x_attr_token2,
    ACTIONS(652), 1,
      anon_sym_COMMA,
  [3086] = 2,
    ACTIONS(644), 1,
      aux_sym__y_token1,
    STATE(88), 1,
      sym__y,
  [3093] = 2,
    ACTIONS(648), 1,
      aux_sym_font_token1,
    STATE(123), 1,
      sym_name,
  [3100] = 1,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
  [3104] = 1,
    ACTIONS(656), 1,
      aux_sym__absolute_token1,
  [3108] = 1,
    ACTIONS(432), 1,
      aux_sym__x_attr_token1,
  [3112] = 1,
    ACTIONS(658), 1,
      anon_sym_COMMA,
  [3116] = 1,
    ACTIONS(660), 1,
      anon_sym_timestamp,
  [3120] = 1,
    ACTIONS(660), 1,
      anon_sym_gzip,
  [3124] = 1,
    ACTIONS(662), 1,
      anon_sym_COMMA,
  [3128] = 1,
    ACTIONS(664), 1,
      anon_sym_COMMA,
  [3132] = 1,
    ACTIONS(666), 1,
      anon_sym_COMMA,
  [3136] = 1,
    ACTIONS(652), 1,
      anon_sym_COMMA,
  [3140] = 1,
    ACTIONS(650), 1,
      aux_sym__x_attr_token1,
  [3144] = 1,
    ACTIONS(486), 1,
      aux_sym__x_attr_token1,
  [3148] = 1,
    ACTIONS(494), 1,
      aux_sym__x_attr_token1,
  [3152] = 1,
    ACTIONS(668), 1,
      aux_sym__label_absolute_token1,
  [3156] = 1,
    ACTIONS(498), 1,
      aux_sym__x_attr_token1,
  [3160] = 1,
    ACTIONS(670), 1,
      aux_sym__absolute_token1,
  [3164] = 1,
    ACTIONS(672), 1,
      anon_sym_COMMA,
  [3168] = 1,
    ACTIONS(674), 1,
      anon_sym_COMMA,
  [3172] = 1,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
  [3176] = 1,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
  [3180] = 1,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
  [3184] = 1,
    ACTIONS(680), 1,
      anon_sym_COMMA,
  [3188] = 1,
    ACTIONS(682), 1,
      anon_sym_COMMA,
  [3192] = 1,
    ACTIONS(684), 1,
      anon_sym_COMMA,
  [3196] = 1,
    ACTIONS(686), 1,
      aux_sym__label_absolute_token1,
  [3200] = 1,
    ACTIONS(688), 1,
      sym_height,
  [3204] = 1,
    ACTIONS(690), 1,
      aux_sym__absolute_token1,
  [3208] = 1,
    ACTIONS(692), 1,
      aux_sym__label_relative_token1,
  [3212] = 1,
    ACTIONS(688), 1,
      sym_width,
  [3216] = 1,
    ACTIONS(694), 1,
      anon_sym_with,
  [3220] = 1,
    ACTIONS(696), 1,
      aux_sym__label_id_token3,
  [3224] = 1,
    ACTIONS(698), 1,
      aux_sym__label_id_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 202,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 268,
  [SMALL_STATE(10)] = 296,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 352,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 408,
  [SMALL_STATE(15)] = 437,
  [SMALL_STATE(16)] = 472,
  [SMALL_STATE(17)] = 501,
  [SMALL_STATE(18)] = 532,
  [SMALL_STATE(19)] = 561,
  [SMALL_STATE(20)] = 590,
  [SMALL_STATE(21)] = 625,
  [SMALL_STATE(22)] = 653,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 709,
  [SMALL_STATE(25)] = 728,
  [SMALL_STATE(26)] = 747,
  [SMALL_STATE(27)] = 766,
  [SMALL_STATE(28)] = 785,
  [SMALL_STATE(29)] = 804,
  [SMALL_STATE(30)] = 823,
  [SMALL_STATE(31)] = 852,
  [SMALL_STATE(32)] = 883,
  [SMALL_STATE(33)] = 910,
  [SMALL_STATE(34)] = 930,
  [SMALL_STATE(35)] = 954,
  [SMALL_STATE(36)] = 974,
  [SMALL_STATE(37)] = 998,
  [SMALL_STATE(38)] = 1024,
  [SMALL_STATE(39)] = 1044,
  [SMALL_STATE(40)] = 1064,
  [SMALL_STATE(41)] = 1087,
  [SMALL_STATE(42)] = 1110,
  [SMALL_STATE(43)] = 1133,
  [SMALL_STATE(44)] = 1156,
  [SMALL_STATE(45)] = 1177,
  [SMALL_STATE(46)] = 1198,
  [SMALL_STATE(47)] = 1221,
  [SMALL_STATE(48)] = 1244,
  [SMALL_STATE(49)] = 1265,
  [SMALL_STATE(50)] = 1285,
  [SMALL_STATE(51)] = 1299,
  [SMALL_STATE(52)] = 1317,
  [SMALL_STATE(53)] = 1337,
  [SMALL_STATE(54)] = 1359,
  [SMALL_STATE(55)] = 1375,
  [SMALL_STATE(56)] = 1393,
  [SMALL_STATE(57)] = 1415,
  [SMALL_STATE(58)] = 1437,
  [SMALL_STATE(59)] = 1457,
  [SMALL_STATE(60)] = 1479,
  [SMALL_STATE(61)] = 1497,
  [SMALL_STATE(62)] = 1519,
  [SMALL_STATE(63)] = 1541,
  [SMALL_STATE(64)] = 1558,
  [SMALL_STATE(65)] = 1575,
  [SMALL_STATE(66)] = 1592,
  [SMALL_STATE(67)] = 1611,
  [SMALL_STATE(68)] = 1628,
  [SMALL_STATE(69)] = 1645,
  [SMALL_STATE(70)] = 1662,
  [SMALL_STATE(71)] = 1681,
  [SMALL_STATE(72)] = 1704,
  [SMALL_STATE(73)] = 1723,
  [SMALL_STATE(74)] = 1740,
  [SMALL_STATE(75)] = 1757,
  [SMALL_STATE(76)] = 1776,
  [SMALL_STATE(77)] = 1795,
  [SMALL_STATE(78)] = 1812,
  [SMALL_STATE(79)] = 1831,
  [SMALL_STATE(80)] = 1850,
  [SMALL_STATE(81)] = 1869,
  [SMALL_STATE(82)] = 1886,
  [SMALL_STATE(83)] = 1905,
  [SMALL_STATE(84)] = 1924,
  [SMALL_STATE(85)] = 1938,
  [SMALL_STATE(86)] = 1952,
  [SMALL_STATE(87)] = 1966,
  [SMALL_STATE(88)] = 1980,
  [SMALL_STATE(89)] = 1994,
  [SMALL_STATE(90)] = 2006,
  [SMALL_STATE(91)] = 2020,
  [SMALL_STATE(92)] = 2034,
  [SMALL_STATE(93)] = 2048,
  [SMALL_STATE(94)] = 2060,
  [SMALL_STATE(95)] = 2074,
  [SMALL_STATE(96)] = 2088,
  [SMALL_STATE(97)] = 2102,
  [SMALL_STATE(98)] = 2116,
  [SMALL_STATE(99)] = 2130,
  [SMALL_STATE(100)] = 2144,
  [SMALL_STATE(101)] = 2158,
  [SMALL_STATE(102)] = 2172,
  [SMALL_STATE(103)] = 2186,
  [SMALL_STATE(104)] = 2200,
  [SMALL_STATE(105)] = 2214,
  [SMALL_STATE(106)] = 2228,
  [SMALL_STATE(107)] = 2240,
  [SMALL_STATE(108)] = 2252,
  [SMALL_STATE(109)] = 2264,
  [SMALL_STATE(110)] = 2278,
  [SMALL_STATE(111)] = 2292,
  [SMALL_STATE(112)] = 2303,
  [SMALL_STATE(113)] = 2314,
  [SMALL_STATE(114)] = 2325,
  [SMALL_STATE(115)] = 2336,
  [SMALL_STATE(116)] = 2347,
  [SMALL_STATE(117)] = 2358,
  [SMALL_STATE(118)] = 2369,
  [SMALL_STATE(119)] = 2380,
  [SMALL_STATE(120)] = 2391,
  [SMALL_STATE(121)] = 2402,
  [SMALL_STATE(122)] = 2413,
  [SMALL_STATE(123)] = 2424,
  [SMALL_STATE(124)] = 2435,
  [SMALL_STATE(125)] = 2446,
  [SMALL_STATE(126)] = 2457,
  [SMALL_STATE(127)] = 2468,
  [SMALL_STATE(128)] = 2479,
  [SMALL_STATE(129)] = 2490,
  [SMALL_STATE(130)] = 2501,
  [SMALL_STATE(131)] = 2512,
  [SMALL_STATE(132)] = 2523,
  [SMALL_STATE(133)] = 2534,
  [SMALL_STATE(134)] = 2545,
  [SMALL_STATE(135)] = 2556,
  [SMALL_STATE(136)] = 2567,
  [SMALL_STATE(137)] = 2578,
  [SMALL_STATE(138)] = 2589,
  [SMALL_STATE(139)] = 2600,
  [SMALL_STATE(140)] = 2611,
  [SMALL_STATE(141)] = 2622,
  [SMALL_STATE(142)] = 2633,
  [SMALL_STATE(143)] = 2644,
  [SMALL_STATE(144)] = 2655,
  [SMALL_STATE(145)] = 2666,
  [SMALL_STATE(146)] = 2677,
  [SMALL_STATE(147)] = 2688,
  [SMALL_STATE(148)] = 2699,
  [SMALL_STATE(149)] = 2710,
  [SMALL_STATE(150)] = 2721,
  [SMALL_STATE(151)] = 2732,
  [SMALL_STATE(152)] = 2743,
  [SMALL_STATE(153)] = 2754,
  [SMALL_STATE(154)] = 2765,
  [SMALL_STATE(155)] = 2776,
  [SMALL_STATE(156)] = 2787,
  [SMALL_STATE(157)] = 2798,
  [SMALL_STATE(158)] = 2809,
  [SMALL_STATE(159)] = 2820,
  [SMALL_STATE(160)] = 2831,
  [SMALL_STATE(161)] = 2842,
  [SMALL_STATE(162)] = 2853,
  [SMALL_STATE(163)] = 2864,
  [SMALL_STATE(164)] = 2875,
  [SMALL_STATE(165)] = 2886,
  [SMALL_STATE(166)] = 2897,
  [SMALL_STATE(167)] = 2908,
  [SMALL_STATE(168)] = 2919,
  [SMALL_STATE(169)] = 2932,
  [SMALL_STATE(170)] = 2945,
  [SMALL_STATE(171)] = 2957,
  [SMALL_STATE(172)] = 2969,
  [SMALL_STATE(173)] = 2979,
  [SMALL_STATE(174)] = 2991,
  [SMALL_STATE(175)] = 3003,
  [SMALL_STATE(176)] = 3015,
  [SMALL_STATE(177)] = 3023,
  [SMALL_STATE(178)] = 3030,
  [SMALL_STATE(179)] = 3041,
  [SMALL_STATE(180)] = 3051,
  [SMALL_STATE(181)] = 3058,
  [SMALL_STATE(182)] = 3065,
  [SMALL_STATE(183)] = 3072,
  [SMALL_STATE(184)] = 3079,
  [SMALL_STATE(185)] = 3086,
  [SMALL_STATE(186)] = 3093,
  [SMALL_STATE(187)] = 3100,
  [SMALL_STATE(188)] = 3104,
  [SMALL_STATE(189)] = 3108,
  [SMALL_STATE(190)] = 3112,
  [SMALL_STATE(191)] = 3116,
  [SMALL_STATE(192)] = 3120,
  [SMALL_STATE(193)] = 3124,
  [SMALL_STATE(194)] = 3128,
  [SMALL_STATE(195)] = 3132,
  [SMALL_STATE(196)] = 3136,
  [SMALL_STATE(197)] = 3140,
  [SMALL_STATE(198)] = 3144,
  [SMALL_STATE(199)] = 3148,
  [SMALL_STATE(200)] = 3152,
  [SMALL_STATE(201)] = 3156,
  [SMALL_STATE(202)] = 3160,
  [SMALL_STATE(203)] = 3164,
  [SMALL_STATE(204)] = 3168,
  [SMALL_STATE(205)] = 3172,
  [SMALL_STATE(206)] = 3176,
  [SMALL_STATE(207)] = 3180,
  [SMALL_STATE(208)] = 3184,
  [SMALL_STATE(209)] = 3188,
  [SMALL_STATE(210)] = 3192,
  [SMALL_STATE(211)] = 3196,
  [SMALL_STATE(212)] = 3200,
  [SMALL_STATE(213)] = 3204,
  [SMALL_STATE(214)] = 3208,
  [SMALL_STATE(215)] = 3212,
  [SMALL_STATE(216)] = 3216,
  [SMALL_STATE(217)] = 3220,
  [SMALL_STATE(218)] = 3224,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_attr, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_attr, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(64),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(77),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(48),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(81),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_entity, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_entity, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_entity, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3, .production_id = 7),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [676] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
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
