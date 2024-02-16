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
#define STATE_COUNT 220
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 1
#define TOKEN_COUNT 83
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
  anon_sym_DOTh = 58,
  anon_sym_GT_GT = 59,
  anon_sym_panel = 60,
  anon_sym_svg = 61,
  anon_sym_dark = 62,
  anon_sym_origin = 63,
  anon_sym_background = 64,
  aux_sym__label_absolute_token1 = 65,
  aux_sym__label_relative_token1 = 66,
  aux_sym_font_token1 = 67,
  aux_sym_fontsize_token1 = 68,
  anon_sym_baseline = 69,
  aux_sym__rgb_token1 = 70,
  aux_sym__rgba_token1 = 71,
  aux_sym__absolute_token1 = 72,
  aux_sym__x_token1 = 73,
  aux_sym__y_token1 = 74,
  aux_sym__offset_token1 = 75,
  aux_sym_string_token1 = 76,
  aux_sym_string_token2 = 77,
  aux_sym__string_token1 = 78,
  aux_sym__string_token2 = 79,
  aux_sym_identifier_token1 = 80,
  aux_sym_identifier_token2 = 81,
  aux_sym_identifier_token3 = 82,
  sym_command = 83,
  sym_new = 84,
  sym_module = 85,
  sym__input_entity = 86,
  sym__output_entity = 87,
  sym__parameter_entity = 88,
  sym__light_entity = 89,
  sym__widget_entity = 90,
  sym__component_entity = 91,
  sym_set = 92,
  sym__module_attr = 93,
  sym__component_attr = 94,
  sym__label_attr = 95,
  sym__x_attr = 96,
  sym__y_attr = 97,
  sym__xy_attr = 98,
  sym_decorate = 99,
  sym__component = 100,
  sym_decoration = 101,
  sym_delete = 102,
  sym__guideline_id = 103,
  sym__input_id = 104,
  sym__output_id = 105,
  sym__parameter_id = 106,
  sym__light_id = 107,
  sym__widget_id = 108,
  sym__label_id = 109,
  sym__decoration_id = 110,
  sym__component_id = 111,
  sym_load = 112,
  sym_save = 113,
  sym_project = 114,
  sym__save_options = 115,
  sym_script = 116,
  sym_export = 117,
  sym__module_export = 118,
  sym_panel = 119,
  sym_svg = 120,
  sym_origin = 121,
  sym_background = 122,
  sym_guide = 123,
  sym_label = 124,
  sym__label_string = 125,
  sym__label_absolute = 126,
  sym__label_relative = 127,
  sym__label_geometry = 128,
  sym_font = 129,
  sym_fontsize = 130,
  sym_halign = 131,
  sym_valign = 132,
  sym__align = 133,
  sym_colour = 134,
  sym__rgb = 135,
  sym__rgba = 136,
  sym_name = 137,
  sym_part = 138,
  sym_rgb = 139,
  sym_rgba = 140,
  sym_absolute = 141,
  sym__absolute = 142,
  sym__relative = 143,
  sym__x = 144,
  sym__y = 145,
  sym_x = 146,
  sym_y = 147,
  sym_xy = 148,
  sym__xy = 149,
  sym__offset = 150,
  sym_offset = 151,
  sym_string = 152,
  sym__string = 153,
  sym_identifier = 154,
  aux_sym_command_repeat1 = 155,
  alias_sym_reference = 156,
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
  [anon_sym_DOTh] = "header",
  [anon_sym_GT_GT] = "helper",
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
  [sym__module_export] = "module",
  [sym_panel] = "panel",
  [sym_svg] = "svg",
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
  [anon_sym_DOTh] = anon_sym_DOTh,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
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
  [sym__module_export] = sym_module,
  [sym_panel] = sym_panel,
  [sym_svg] = sym_svg,
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
  [anon_sym_DOTh] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT] = {
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
  [sym__module_export] = {
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
  [40] = 11,
  [41] = 10,
  [42] = 42,
  [43] = 13,
  [44] = 44,
  [45] = 45,
  [46] = 12,
  [47] = 9,
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
  [60] = 50,
  [61] = 61,
  [62] = 5,
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
  [170] = 170,
  [171] = 13,
  [172] = 12,
  [173] = 173,
  [174] = 11,
  [175] = 9,
  [176] = 10,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(277);
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == '>') ADVANCE(21);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(231);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == 'v') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(301);
      if (lookahead == 'y') ADVANCE(304);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(554);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(552);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '8') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'H') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(290);
      if (lookahead == 'U') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(154);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(509);
      END_STATE();
    case 22:
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == 'b') ADVANCE(384);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(489);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(220);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(511);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(197);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(84);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(508);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(417);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(300);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 126:
      if (lookahead == 'j') ADVANCE(65);
      END_STATE();
    case 127:
      if (lookahead == 'k') ADVANCE(512);
      END_STATE();
    case 128:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(515);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(290);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(348);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(551);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(407);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(548);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(550);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(516);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(502);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(501);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(550);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == 'z') ADVANCE(115);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 236:
      if (lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 237:
      if (lookahead == 'w') ADVANCE(278);
      END_STATE();
    case 238:
      if (lookahead == 'x') ADVANCE(187);
      END_STATE();
    case 239:
      if (lookahead == 'x') ADVANCE(209);
      END_STATE();
    case 240:
      if (lookahead == 'z') ADVANCE(62);
      END_STATE();
    case 241:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(546);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(547);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 260:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 261:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 262:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 263:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 264:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 265:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 266:
      if (eof) ADVANCE(277);
      if (lookahead == ' ') SKIP(266)
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 'c') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'f') ADVANCE(457);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead == 'v') ADVANCE(432);
      if (lookahead == 'x') ADVANCE(302);
      if (lookahead == 'y') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(425);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 267:
      if (eof) ADVANCE(277);
      if (lookahead == ' ') SKIP(267)
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(426);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 268:
      if (eof) ADVANCE(277);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == 'd') ADVANCE(563);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == 'l') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(557);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead == 'x') ADVANCE(303);
      if (lookahead == 'y') ADVANCE(305);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 269:
      if (eof) ADVANCE(277);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == 'd') ADVANCE(563);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == 'l') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 270:
      if (eof) ADVANCE(277);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 271:
      if (eof) ADVANCE(277);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(176);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 272:
      if (eof) ADVANCE(277);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(523);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 273:
      if (eof) ADVANCE(277);
      if (lookahead == ')') ADVANCE(416);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 274:
      if (eof) ADVANCE(277);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 'd') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(374);
      if (lookahead == 's') ADVANCE(353);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 275:
      if (eof) ADVANCE(277);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == 'b') ADVANCE(384);
      if (lookahead == 'd') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 276:
      if (eof) ADVANCE(277);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(276)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(154);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_halign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_valign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == 'H') ADVANCE(329);
      if (lookahead == 'h') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'H') ADVANCE(290);
      if (lookahead == 'h') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'H') ADVANCE(290);
      if (lookahead == 'h') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'H') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == 'H') ADVANCE(290);
      if (lookahead == 'h') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(329);
      if (lookahead == 'h') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(329);
      if (lookahead == 'h') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(329);
      if (lookahead == 'h') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(329);
      if (lookahead == 'h') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'H') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'H') ADVANCE(348);
      if (lookahead == 'h') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == 'H') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(348);
      if (lookahead == 'h') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__x_attr_token2);
      if (lookahead == 'H') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'a') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'd') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'f') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'g') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'h') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'l') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'm') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'n') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'o') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'p') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'v') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'w') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (lookahead == 'x') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__x_attr_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 'c') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'f') ADVANCE(457);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead == 'v') ADVANCE(432);
      if (lookahead == 'x') ADVANCE(302);
      if (lookahead == 'y') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'p') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == 'u') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'v') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'w') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'z') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(483);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(479);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(530);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead == 'e') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'e') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(572);
      if (lookahead == 'l') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 588:
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
  [5] = {.lex_state = 266},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 268},
  [10] = {.lex_state = 268},
  [11] = {.lex_state = 268},
  [12] = {.lex_state = 268},
  [13] = {.lex_state = 268},
  [14] = {.lex_state = 274},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 274},
  [17] = {.lex_state = 271},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 274},
  [20] = {.lex_state = 274},
  [21] = {.lex_state = 275},
  [22] = {.lex_state = 270},
  [23] = {.lex_state = 275},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 271},
  [29] = {.lex_state = 272},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 269},
  [33] = {.lex_state = 273},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 270},
  [37] = {.lex_state = 273},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 273},
  [40] = {.lex_state = 269},
  [41] = {.lex_state = 269},
  [42] = {.lex_state = 271},
  [43] = {.lex_state = 269},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 269},
  [47] = {.lex_state = 269},
  [48] = {.lex_state = 269},
  [49] = {.lex_state = 271},
  [50] = {.lex_state = 271},
  [51] = {.lex_state = 272},
  [52] = {.lex_state = 271},
  [53] = {.lex_state = 272},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 272},
  [56] = {.lex_state = 272},
  [57] = {.lex_state = 272},
  [58] = {.lex_state = 272},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 273},
  [61] = {.lex_state = 270},
  [62] = {.lex_state = 267},
  [63] = {.lex_state = 272},
  [64] = {.lex_state = 272},
  [65] = {.lex_state = 272},
  [66] = {.lex_state = 271},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 271},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 271},
  [71] = {.lex_state = 272},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 272},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 272},
  [77] = {.lex_state = 271},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 272},
  [80] = {.lex_state = 272},
  [81] = {.lex_state = 272},
  [82] = {.lex_state = 273},
  [83] = {.lex_state = 272},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 272},
  [88] = {.lex_state = 272},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 272},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 270},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 272},
  [101] = {.lex_state = 270},
  [102] = {.lex_state = 270},
  [103] = {.lex_state = 270},
  [104] = {.lex_state = 276},
  [105] = {.lex_state = 273},
  [106] = {.lex_state = 276},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 272},
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
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 22},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 270},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 270},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 268},
  [181] = {.lex_state = 268},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 271},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 274},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 271},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 268},
  [190] = {.lex_state = 274},
  [191] = {.lex_state = 271},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 274},
  [200] = {.lex_state = 274},
  [201] = {.lex_state = 274},
  [202] = {.lex_state = 274},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 270},
  [205] = {.lex_state = 271},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 271},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 486},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 272},
  [216] = {.lex_state = 482},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 272},
  [219] = {.lex_state = 268},
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
    [anon_sym_DOTh] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
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
  },
  [1] = {
    [sym_command] = STATE(209),
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
    STATE(34), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(118), 5,
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
    STATE(120), 8,
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
    STATE(25), 1,
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
    STATE(26), 1,
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
    STATE(24), 1,
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
    STATE(31), 1,
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
    STATE(30), 1,
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
    STATE(128), 1,
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
    STATE(18), 8,
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
    STATE(139), 1,
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
    STATE(81), 1,
      sym_xy,
    STATE(208), 1,
      sym__x,
    STATE(110), 3,
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
  [532] = 9,
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
    STATE(18), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [567] = 6,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      aux_sym__x_attr_token1,
    STATE(128), 1,
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
  [596] = 6,
    ACTIONS(143), 1,
      anon_sym_AT,
    ACTIONS(145), 1,
      aux_sym__x_attr_token1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
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
  [625] = 6,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      anon_sym_AT,
    ACTIONS(194), 1,
      aux_sym__x_attr_token1,
    STATE(139), 1,
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
  [653] = 6,
    ACTIONS(167), 1,
      aux_sym__x_token1,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      aux_sym__label_relative_token1,
    STATE(213), 1,
      sym__x,
    STATE(115), 3,
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
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      anon_sym_AT,
    ACTIONS(194), 1,
      aux_sym__x_attr_token1,
    STATE(128), 1,
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
  [785] = 7,
    ACTIONS(222), 1,
      anon_sym_AT,
    ACTIONS(224), 1,
      aux_sym__x_token1,
    ACTIONS(226), 1,
      aux_sym__y_token1,
    STATE(94), 1,
      sym_y,
    STATE(99), 1,
      sym_x,
    STATE(147), 1,
      sym_absolute,
    ACTIONS(220), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [814] = 8,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      aux_sym_font_token1,
    ACTIONS(234), 1,
      aux_sym__rgb_token1,
    ACTIONS(236), 1,
      aux_sym__rgba_token1,
    STATE(89), 1,
      sym_rgb,
    STATE(97), 1,
      sym_rgba,
    STATE(146), 1,
      sym_name,
    ACTIONS(230), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [845] = 2,
    ACTIONS(240), 1,
      anon_sym_x,
    ACTIONS(238), 13,
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
  [864] = 2,
    ACTIONS(244), 1,
      anon_sym_x,
    ACTIONS(242), 13,
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
    STATE(143), 2,
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
    STATE(139), 1,
      sym__align,
    ACTIONS(252), 4,
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
  [930] = 6,
    ACTIONS(256), 1,
      anon_sym_name,
    ACTIONS(258), 1,
      anon_sym_x,
    ACTIONS(260), 1,
      anon_sym_y,
    ACTIONS(262), 1,
      anon_sym_xy,
    ACTIONS(264), 1,
      anon_sym_part,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [956] = 5,
    ACTIONS(268), 1,
      aux_sym__rgb_token1,
    ACTIONS(270), 1,
      aux_sym__rgba_token1,
    STATE(165), 1,
      sym_colour,
    STATE(85), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(266), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [980] = 3,
    STATE(139), 1,
      sym_valign,
    ACTIONS(272), 4,
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
  [1000] = 3,
    STATE(166), 1,
      sym_halign,
    ACTIONS(276), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1020] = 5,
    ACTIONS(268), 1,
      aux_sym__rgb_token1,
    ACTIONS(270), 1,
      aux_sym__rgba_token1,
    STATE(139), 1,
      sym_colour,
    STATE(85), 2,
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
  [1044] = 3,
    STATE(139), 1,
      sym_halign,
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
  [1064] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
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
  [1087] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
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
  [1110] = 4,
    STATE(22), 1,
      sym__string,
    STATE(161), 1,
      sym__label_string,
    ACTIONS(280), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1131] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
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
  [1154] = 4,
    ACTIONS(284), 1,
      anon_sym_project,
    ACTIONS(286), 1,
      anon_sym_script,
    STATE(135), 2,
      sym_project,
      sym_script,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1175] = 4,
    ACTIONS(290), 1,
      anon_sym_module,
    ACTIONS(292), 1,
      anon_sym_panel,
    STATE(136), 2,
      sym__module_export,
      sym_panel,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1196] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
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
  [1219] = 5,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
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
  [1242] = 5,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(121), 2,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
    ACTIONS(296), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1265] = 3,
    ACTIONS(300), 1,
      aux_sym__offset_token1,
    STATE(107), 1,
      sym_offset,
    ACTIONS(298), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1283] = 1,
    ACTIONS(302), 11,
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
  [1297] = 5,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    STATE(17), 1,
      sym_name,
    STATE(157), 1,
      sym__component_entity,
    ACTIONS(306), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1319] = 3,
    ACTIONS(300), 1,
      aux_sym__offset_token1,
    STATE(108), 1,
      sym_offset,
    ACTIONS(310), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1337] = 4,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      aux_sym__offset_token1,
    STATE(92), 1,
      sym__offset,
    ACTIONS(314), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1357] = 4,
    ACTIONS(320), 1,
      anon_sym_timestamp,
    ACTIONS(322), 1,
      anon_sym_gzip,
    STATE(142), 1,
      sym__save_options,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1377] = 5,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_name,
    STATE(160), 1,
      sym__component_entity,
    ACTIONS(326), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1399] = 5,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_name,
    STATE(137), 1,
      sym__component_entity,
    ACTIONS(330), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1421] = 5,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_name,
    STATE(154), 1,
      sym__component_entity,
    ACTIONS(334), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1443] = 5,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_name,
    STATE(159), 1,
      sym__component_entity,
    ACTIONS(338), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1465] = 4,
    ACTIONS(342), 1,
      anon_sym_name,
    ACTIONS(344), 1,
      anon_sym_height,
    ACTIONS(346), 1,
      anon_sym_width,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1485] = 2,
    ACTIONS(348), 1,
      sym_width,
    ACTIONS(302), 10,
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
  [1501] = 3,
    STATE(139), 1,
      sym_string,
    ACTIONS(350), 2,
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
  [1519] = 5,
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
  [1541] = 4,
    ACTIONS(232), 1,
      aux_sym_font_token1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_name,
    ACTIONS(354), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1560] = 4,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      aux_sym_font_token1,
    STATE(139), 1,
      sym_font,
    ACTIONS(153), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1579] = 4,
    ACTIONS(232), 1,
      aux_sym_font_token1,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    STATE(145), 1,
      sym_name,
    ACTIONS(360), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1598] = 3,
    ACTIONS(226), 1,
      aux_sym__y_token1,
    STATE(164), 1,
      sym_y,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1615] = 3,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
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
  [1632] = 3,
    ACTIONS(224), 1,
      aux_sym__x_token1,
    STATE(164), 1,
      sym_x,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1649] = 3,
    ACTIONS(370), 1,
      anon_sym_light,
    ACTIONS(372), 1,
      anon_sym_dark,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1666] = 3,
    ACTIONS(376), 1,
      aux_sym_fontsize_token1,
    STATE(168), 1,
      sym_fontsize,
    ACTIONS(374), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1683] = 4,
    ACTIONS(356), 1,
      aux_sym_font_token1,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_font,
    ACTIONS(380), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1702] = 6,
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
    STATE(194), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1725] = 4,
    ACTIONS(232), 1,
      aux_sym_font_token1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_name,
    ACTIONS(394), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1744] = 2,
    ACTIONS(398), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1759] = 3,
    ACTIONS(402), 1,
      anon_sym_svg,
    STATE(131), 1,
      sym_svg,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1776] = 4,
    ACTIONS(356), 1,
      aux_sym_font_token1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    STATE(132), 1,
      sym_font,
    ACTIONS(406), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1795] = 3,
    ACTIONS(376), 1,
      aux_sym_fontsize_token1,
    STATE(139), 1,
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
  [1812] = 3,
    ACTIONS(410), 1,
      anon_sym_project,
    ACTIONS(412), 1,
      anon_sym_script,
    ACTIONS(408), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1829] = 4,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      aux_sym_font_token1,
    STATE(128), 1,
      sym_name,
    ACTIONS(141), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1848] = 4,
    ACTIONS(356), 1,
      aux_sym_font_token1,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_font,
    ACTIONS(416), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1867] = 4,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 1,
      aux_sym_font_token1,
    STATE(158), 1,
      sym_part,
    ACTIONS(420), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1886] = 3,
    ACTIONS(426), 1,
      sym_height,
    ACTIONS(428), 1,
      sym_width,
    ACTIONS(424), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1903] = 4,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 1,
      aux_sym_font_token1,
    STATE(128), 1,
      sym_part,
    ACTIONS(141), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1922] = 3,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym__component,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1939] = 2,
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
  [1953] = 1,
    ACTIONS(438), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1965] = 2,
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
  [1979] = 2,
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
  [1993] = 2,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2007] = 1,
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
  [2019] = 1,
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
  [2031] = 2,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2045] = 2,
    ACTIONS(462), 1,
      anon_sym_timestamp,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2059] = 2,
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
  [2073] = 2,
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
  [2087] = 2,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2101] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2115] = 2,
    ACTIONS(480), 1,
      aux_sym__x_attr_token2,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2129] = 2,
    ACTIONS(482), 1,
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
  [2143] = 2,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    ACTIONS(486), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2157] = 2,
    ACTIONS(490), 1,
      aux_sym__x_attr_token2,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2171] = 2,
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
  [2185] = 2,
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
  [2199] = 2,
    ACTIONS(502), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2213] = 2,
    ACTIONS(506), 1,
      sym_width,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2227] = 2,
    ACTIONS(510), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2241] = 1,
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
  [2253] = 1,
    ACTIONS(514), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2265] = 2,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2279] = 2,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    ACTIONS(520), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2293] = 2,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(522), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2307] = 1,
    ACTIONS(526), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2318] = 1,
    ACTIONS(528), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2329] = 1,
    ACTIONS(530), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2340] = 1,
    ACTIONS(532), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2351] = 1,
    ACTIONS(534), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2362] = 1,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2373] = 1,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2384] = 1,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2395] = 1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2406] = 1,
    ACTIONS(544), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2417] = 1,
    ACTIONS(546), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2428] = 1,
    ACTIONS(548), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2439] = 1,
    ACTIONS(550), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2450] = 1,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2461] = 1,
    ACTIONS(552), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2472] = 1,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2483] = 1,
    ACTIONS(554), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2494] = 1,
    ACTIONS(556), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2505] = 1,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2516] = 1,
    ACTIONS(558), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2527] = 1,
    ACTIONS(560), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2538] = 1,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2549] = 1,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2560] = 1,
    ACTIONS(564), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2571] = 1,
    ACTIONS(566), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2582] = 1,
    ACTIONS(568), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2593] = 1,
    ACTIONS(570), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2604] = 1,
    ACTIONS(572), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2615] = 1,
    ACTIONS(574), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2626] = 1,
    ACTIONS(576), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2637] = 1,
    ACTIONS(578), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2648] = 1,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2659] = 1,
    ACTIONS(582), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2670] = 1,
    ACTIONS(584), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2681] = 1,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2692] = 1,
    ACTIONS(464), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2703] = 1,
    ACTIONS(586), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2714] = 1,
    ACTIONS(588), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2725] = 1,
    ACTIONS(590), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2736] = 1,
    ACTIONS(592), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2747] = 1,
    ACTIONS(594), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2758] = 1,
    ACTIONS(596), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2769] = 1,
    ACTIONS(598), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2780] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2791] = 1,
    ACTIONS(600), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2802] = 1,
    ACTIONS(602), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2813] = 1,
    ACTIONS(604), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2824] = 1,
    ACTIONS(606), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2835] = 1,
    ACTIONS(608), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2846] = 1,
    ACTIONS(610), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2857] = 1,
    ACTIONS(612), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2868] = 1,
    ACTIONS(614), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2879] = 1,
    ACTIONS(616), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2890] = 1,
    ACTIONS(618), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2901] = 1,
    ACTIONS(620), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2912] = 1,
    ACTIONS(622), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2923] = 1,
    ACTIONS(624), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2934] = 3,
    ACTIONS(480), 1,
      aux_sym__x_attr_token1,
    ACTIONS(626), 1,
      anon_sym_AT,
    ACTIONS(628), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2947] = 3,
    ACTIONS(630), 1,
      anon_sym_AT,
    ACTIONS(632), 1,
      aux_sym__x_attr_token1,
    ACTIONS(634), 4,
      aux_sym__x_attr_token3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2960] = 3,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym_identifier,
    ACTIONS(121), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2972] = 3,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(121), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [2984] = 2,
    STATE(150), 1,
      sym_valign,
    ACTIONS(272), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2994] = 3,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(121), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [3006] = 3,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_identifier,
    ACTIONS(121), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [3018] = 3,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(121), 3,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
  [3030] = 1,
    ACTIONS(636), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [3038] = 1,
    ACTIONS(638), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3045] = 3,
    ACTIONS(640), 1,
      aux_sym__rgb_token1,
    ACTIONS(642), 1,
      aux_sym__rgba_token1,
    STATE(148), 2,
      sym__rgb,
      sym__rgba,
  [3056] = 3,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      aux_sym__offset_token1,
    STATE(203), 1,
      sym__offset,
  [3066] = 2,
    ACTIONS(648), 1,
      aux_sym__rgb_token1,
    STATE(112), 1,
      sym_rgb,
  [3073] = 2,
    ACTIONS(650), 1,
      aux_sym_font_token1,
    STATE(117), 1,
      sym_name,
  [3080] = 2,
    ACTIONS(652), 1,
      aux_sym__y_token1,
    STATE(80), 1,
      sym__y,
  [3087] = 2,
    ACTIONS(236), 1,
      aux_sym__rgba_token1,
    STATE(112), 1,
      sym_rgba,
  [3094] = 2,
    ACTIONS(654), 1,
      aux_sym__x_attr_token2,
    ACTIONS(656), 1,
      anon_sym_COMMA,
  [3101] = 2,
    ACTIONS(650), 1,
      aux_sym_font_token1,
    STATE(124), 1,
      sym_name,
  [3108] = 2,
    ACTIONS(652), 1,
      aux_sym__y_token1,
    STATE(100), 1,
      sym__y,
  [3115] = 1,
    ACTIONS(658), 1,
      anon_sym_gzip,
  [3119] = 1,
    ACTIONS(660), 1,
      aux_sym__label_absolute_token1,
  [3123] = 1,
    ACTIONS(480), 1,
      aux_sym__x_attr_token1,
  [3127] = 1,
    ACTIONS(662), 1,
      aux_sym__absolute_token1,
  [3131] = 1,
    ACTIONS(664), 1,
      anon_sym_COMMA,
  [3135] = 1,
    ACTIONS(658), 1,
      anon_sym_timestamp,
  [3139] = 1,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
  [3143] = 1,
    ACTIONS(668), 1,
      anon_sym_COMMA,
  [3147] = 1,
    ACTIONS(670), 1,
      anon_sym_COMMA,
  [3151] = 1,
    ACTIONS(672), 1,
      anon_sym_COMMA,
  [3155] = 1,
    ACTIONS(656), 1,
      anon_sym_COMMA,
  [3159] = 1,
    ACTIONS(654), 1,
      aux_sym__x_attr_token1,
  [3163] = 1,
    ACTIONS(490), 1,
      aux_sym__x_attr_token1,
  [3167] = 1,
    ACTIONS(494), 1,
      aux_sym__x_attr_token1,
  [3171] = 1,
    ACTIONS(498), 1,
      aux_sym__x_attr_token1,
  [3175] = 1,
    ACTIONS(674), 1,
      anon_sym_COMMA,
  [3179] = 1,
    ACTIONS(676), 1,
      aux_sym__label_relative_token1,
  [3183] = 1,
    ACTIONS(678), 1,
      aux_sym__absolute_token1,
  [3187] = 1,
    ACTIONS(680), 1,
      anon_sym_COMMA,
  [3191] = 1,
    ACTIONS(682), 1,
      aux_sym__absolute_token1,
  [3195] = 1,
    ACTIONS(684), 1,
      anon_sym_COMMA,
  [3199] = 1,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
  [3203] = 1,
    ACTIONS(688), 1,
      anon_sym_SQUOTE,
  [3207] = 1,
    ACTIONS(690), 1,
      aux_sym__label_id_token3,
  [3211] = 1,
    ACTIONS(688), 1,
      anon_sym_DQUOTE,
  [3215] = 1,
    ACTIONS(692), 1,
      anon_sym_COMMA,
  [3219] = 1,
    ACTIONS(694), 1,
      anon_sym_COMMA,
  [3223] = 1,
    ACTIONS(696), 1,
      sym_height,
  [3227] = 1,
    ACTIONS(698), 1,
      aux_sym__label_id_token2,
  [3231] = 1,
    ACTIONS(700), 1,
      anon_sym_with,
  [3235] = 1,
    ACTIONS(696), 1,
      sym_width,
  [3239] = 1,
    ACTIONS(702), 1,
      aux_sym__label_absolute_token1,
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
  [SMALL_STATE(19)] = 567,
  [SMALL_STATE(20)] = 596,
  [SMALL_STATE(21)] = 625,
  [SMALL_STATE(22)] = 653,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 709,
  [SMALL_STATE(25)] = 728,
  [SMALL_STATE(26)] = 747,
  [SMALL_STATE(27)] = 766,
  [SMALL_STATE(28)] = 785,
  [SMALL_STATE(29)] = 814,
  [SMALL_STATE(30)] = 845,
  [SMALL_STATE(31)] = 864,
  [SMALL_STATE(32)] = 883,
  [SMALL_STATE(33)] = 910,
  [SMALL_STATE(34)] = 930,
  [SMALL_STATE(35)] = 956,
  [SMALL_STATE(36)] = 980,
  [SMALL_STATE(37)] = 1000,
  [SMALL_STATE(38)] = 1020,
  [SMALL_STATE(39)] = 1044,
  [SMALL_STATE(40)] = 1064,
  [SMALL_STATE(41)] = 1087,
  [SMALL_STATE(42)] = 1110,
  [SMALL_STATE(43)] = 1131,
  [SMALL_STATE(44)] = 1154,
  [SMALL_STATE(45)] = 1175,
  [SMALL_STATE(46)] = 1196,
  [SMALL_STATE(47)] = 1219,
  [SMALL_STATE(48)] = 1242,
  [SMALL_STATE(49)] = 1265,
  [SMALL_STATE(50)] = 1283,
  [SMALL_STATE(51)] = 1297,
  [SMALL_STATE(52)] = 1319,
  [SMALL_STATE(53)] = 1337,
  [SMALL_STATE(54)] = 1357,
  [SMALL_STATE(55)] = 1377,
  [SMALL_STATE(56)] = 1399,
  [SMALL_STATE(57)] = 1421,
  [SMALL_STATE(58)] = 1443,
  [SMALL_STATE(59)] = 1465,
  [SMALL_STATE(60)] = 1485,
  [SMALL_STATE(61)] = 1501,
  [SMALL_STATE(62)] = 1519,
  [SMALL_STATE(63)] = 1541,
  [SMALL_STATE(64)] = 1560,
  [SMALL_STATE(65)] = 1579,
  [SMALL_STATE(66)] = 1598,
  [SMALL_STATE(67)] = 1615,
  [SMALL_STATE(68)] = 1632,
  [SMALL_STATE(69)] = 1649,
  [SMALL_STATE(70)] = 1666,
  [SMALL_STATE(71)] = 1683,
  [SMALL_STATE(72)] = 1702,
  [SMALL_STATE(73)] = 1725,
  [SMALL_STATE(74)] = 1744,
  [SMALL_STATE(75)] = 1759,
  [SMALL_STATE(76)] = 1776,
  [SMALL_STATE(77)] = 1795,
  [SMALL_STATE(78)] = 1812,
  [SMALL_STATE(79)] = 1829,
  [SMALL_STATE(80)] = 1848,
  [SMALL_STATE(81)] = 1867,
  [SMALL_STATE(82)] = 1886,
  [SMALL_STATE(83)] = 1903,
  [SMALL_STATE(84)] = 1922,
  [SMALL_STATE(85)] = 1939,
  [SMALL_STATE(86)] = 1953,
  [SMALL_STATE(87)] = 1965,
  [SMALL_STATE(88)] = 1979,
  [SMALL_STATE(89)] = 1993,
  [SMALL_STATE(90)] = 2007,
  [SMALL_STATE(91)] = 2019,
  [SMALL_STATE(92)] = 2031,
  [SMALL_STATE(93)] = 2045,
  [SMALL_STATE(94)] = 2059,
  [SMALL_STATE(95)] = 2073,
  [SMALL_STATE(96)] = 2087,
  [SMALL_STATE(97)] = 2101,
  [SMALL_STATE(98)] = 2115,
  [SMALL_STATE(99)] = 2129,
  [SMALL_STATE(100)] = 2143,
  [SMALL_STATE(101)] = 2157,
  [SMALL_STATE(102)] = 2171,
  [SMALL_STATE(103)] = 2185,
  [SMALL_STATE(104)] = 2199,
  [SMALL_STATE(105)] = 2213,
  [SMALL_STATE(106)] = 2227,
  [SMALL_STATE(107)] = 2241,
  [SMALL_STATE(108)] = 2253,
  [SMALL_STATE(109)] = 2265,
  [SMALL_STATE(110)] = 2279,
  [SMALL_STATE(111)] = 2293,
  [SMALL_STATE(112)] = 2307,
  [SMALL_STATE(113)] = 2318,
  [SMALL_STATE(114)] = 2329,
  [SMALL_STATE(115)] = 2340,
  [SMALL_STATE(116)] = 2351,
  [SMALL_STATE(117)] = 2362,
  [SMALL_STATE(118)] = 2373,
  [SMALL_STATE(119)] = 2384,
  [SMALL_STATE(120)] = 2395,
  [SMALL_STATE(121)] = 2406,
  [SMALL_STATE(122)] = 2417,
  [SMALL_STATE(123)] = 2428,
  [SMALL_STATE(124)] = 2439,
  [SMALL_STATE(125)] = 2450,
  [SMALL_STATE(126)] = 2461,
  [SMALL_STATE(127)] = 2472,
  [SMALL_STATE(128)] = 2483,
  [SMALL_STATE(129)] = 2494,
  [SMALL_STATE(130)] = 2505,
  [SMALL_STATE(131)] = 2516,
  [SMALL_STATE(132)] = 2527,
  [SMALL_STATE(133)] = 2538,
  [SMALL_STATE(134)] = 2549,
  [SMALL_STATE(135)] = 2560,
  [SMALL_STATE(136)] = 2571,
  [SMALL_STATE(137)] = 2582,
  [SMALL_STATE(138)] = 2593,
  [SMALL_STATE(139)] = 2604,
  [SMALL_STATE(140)] = 2615,
  [SMALL_STATE(141)] = 2626,
  [SMALL_STATE(142)] = 2637,
  [SMALL_STATE(143)] = 2648,
  [SMALL_STATE(144)] = 2659,
  [SMALL_STATE(145)] = 2670,
  [SMALL_STATE(146)] = 2681,
  [SMALL_STATE(147)] = 2692,
  [SMALL_STATE(148)] = 2703,
  [SMALL_STATE(149)] = 2714,
  [SMALL_STATE(150)] = 2725,
  [SMALL_STATE(151)] = 2736,
  [SMALL_STATE(152)] = 2747,
  [SMALL_STATE(153)] = 2758,
  [SMALL_STATE(154)] = 2769,
  [SMALL_STATE(155)] = 2780,
  [SMALL_STATE(156)] = 2791,
  [SMALL_STATE(157)] = 2802,
  [SMALL_STATE(158)] = 2813,
  [SMALL_STATE(159)] = 2824,
  [SMALL_STATE(160)] = 2835,
  [SMALL_STATE(161)] = 2846,
  [SMALL_STATE(162)] = 2857,
  [SMALL_STATE(163)] = 2868,
  [SMALL_STATE(164)] = 2879,
  [SMALL_STATE(165)] = 2890,
  [SMALL_STATE(166)] = 2901,
  [SMALL_STATE(167)] = 2912,
  [SMALL_STATE(168)] = 2923,
  [SMALL_STATE(169)] = 2934,
  [SMALL_STATE(170)] = 2947,
  [SMALL_STATE(171)] = 2960,
  [SMALL_STATE(172)] = 2972,
  [SMALL_STATE(173)] = 2984,
  [SMALL_STATE(174)] = 2994,
  [SMALL_STATE(175)] = 3006,
  [SMALL_STATE(176)] = 3018,
  [SMALL_STATE(177)] = 3030,
  [SMALL_STATE(178)] = 3038,
  [SMALL_STATE(179)] = 3045,
  [SMALL_STATE(180)] = 3056,
  [SMALL_STATE(181)] = 3066,
  [SMALL_STATE(182)] = 3073,
  [SMALL_STATE(183)] = 3080,
  [SMALL_STATE(184)] = 3087,
  [SMALL_STATE(185)] = 3094,
  [SMALL_STATE(186)] = 3101,
  [SMALL_STATE(187)] = 3108,
  [SMALL_STATE(188)] = 3115,
  [SMALL_STATE(189)] = 3119,
  [SMALL_STATE(190)] = 3123,
  [SMALL_STATE(191)] = 3127,
  [SMALL_STATE(192)] = 3131,
  [SMALL_STATE(193)] = 3135,
  [SMALL_STATE(194)] = 3139,
  [SMALL_STATE(195)] = 3143,
  [SMALL_STATE(196)] = 3147,
  [SMALL_STATE(197)] = 3151,
  [SMALL_STATE(198)] = 3155,
  [SMALL_STATE(199)] = 3159,
  [SMALL_STATE(200)] = 3163,
  [SMALL_STATE(201)] = 3167,
  [SMALL_STATE(202)] = 3171,
  [SMALL_STATE(203)] = 3175,
  [SMALL_STATE(204)] = 3179,
  [SMALL_STATE(205)] = 3183,
  [SMALL_STATE(206)] = 3187,
  [SMALL_STATE(207)] = 3191,
  [SMALL_STATE(208)] = 3195,
  [SMALL_STATE(209)] = 3199,
  [SMALL_STATE(210)] = 3203,
  [SMALL_STATE(211)] = 3207,
  [SMALL_STATE(212)] = 3211,
  [SMALL_STATE(213)] = 3215,
  [SMALL_STATE(214)] = 3219,
  [SMALL_STATE(215)] = 3223,
  [SMALL_STATE(216)] = 3227,
  [SMALL_STATE(217)] = 3231,
  [SMALL_STATE(218)] = 3235,
  [SMALL_STATE(219)] = 3239,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_attr, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_attr, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(84),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(78),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(44),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(45),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_entity, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_entity, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_entity, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3, .production_id = 7),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [686] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
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
