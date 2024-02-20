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
#define STATE_COUNT 239
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  anon_sym_input = 3,
  anon_sym_output = 4,
  anon_sym_parameter = 5,
  anon_sym_light = 6,
  anon_sym_widget = 7,
  anon_sym_guide = 8,
  anon_sym_vertical = 9,
  anon_sym_horizontal = 10,
  anon_sym_AT = 11,
  aux_sym__new_guideline_absolute_token1 = 12,
  anon_sym_left = 13,
  anon_sym_centre = 14,
  anon_sym_center = 15,
  anon_sym_right = 16,
  anon_sym_top = 17,
  anon_sym_middle = 18,
  anon_sym_bottom = 19,
  aux_sym__new_guideline_geometry_token1 = 20,
  aux_sym__new_guideline_guide_token1 = 21,
  sym_height = 22,
  sym_width = 23,
  anon_sym_set = 24,
  anon_sym_name = 25,
  anon_sym_height = 26,
  anon_sym_width = 27,
  anon_sym_x = 28,
  anon_sym_y = 29,
  anon_sym_xy = 30,
  anon_sym_part = 31,
  anon_sym_text = 32,
  anon_sym_font = 33,
  anon_sym_size = 34,
  anon_sym_halign = 35,
  anon_sym_valign = 36,
  anon_sym_align = 37,
  anon_sym_colour = 38,
  anon_sym_color = 39,
  aux_sym__guideline_xy_attr_token1 = 40,
  aux_sym__guideline_xy_attr_token2 = 41,
  aux_sym__guideline_xy_attr_token3 = 42,
  aux_sym__x_attr_token1 = 43,
  anon_sym_COMMA = 44,
  anon_sym_decorate = 45,
  anon_sym_LPAREN = 46,
  anon_sym_RPAREN = 47,
  anon_sym_with = 48,
  anon_sym_delete = 49,
  anon_sym_label = 50,
  aux_sym__label_id_token1 = 51,
  anon_sym_DQUOTE = 52,
  aux_sym__label_id_token2 = 53,
  anon_sym_SQUOTE = 54,
  aux_sym__label_id_token3 = 55,
  anon_sym_decoration = 56,
  anon_sym_load = 57,
  anon_sym_project = 58,
  anon_sym_script = 59,
  anon_sym_save = 60,
  anon_sym_timestamp = 61,
  anon_sym_gzip = 62,
  anon_sym_export = 63,
  anon_sym_DOTh = 64,
  anon_sym_GT_GT = 65,
  anon_sym_panel = 66,
  anon_sym_svg = 67,
  anon_sym_dark = 68,
  anon_sym_origin = 69,
  anon_sym_background = 70,
  aux_sym__label_relative_token1 = 71,
  aux_sym_font_token1 = 72,
  aux_sym_fontsize_token1 = 73,
  anon_sym_baseline = 74,
  aux_sym__rgb_token1 = 75,
  aux_sym__rgba_token1 = 76,
  aux_sym__absolute_token1 = 77,
  aux_sym__x_token1 = 78,
  aux_sym__y_token1 = 79,
  aux_sym__offset_token1 = 80,
  aux_sym_string_token1 = 81,
  aux_sym_string_token2 = 82,
  aux_sym__string_token1 = 83,
  aux_sym__string_token2 = 84,
  aux_sym_identifier_token1 = 85,
  aux_sym_identifier_token2 = 86,
  sym_command = 87,
  sym_new = 88,
  sym_module = 89,
  sym__input_entity = 90,
  sym__output_entity = 91,
  sym__parameter_entity = 92,
  sym__light_entity = 93,
  sym__widget_entity = 94,
  sym__component_entity = 95,
  sym__guide_entity = 96,
  sym__new_guide_orientation = 97,
  sym__new_guideline_absolute = 98,
  sym__new_guideline_relative = 99,
  sym__new_guideline_geometry = 100,
  sym__new_guideline_guide = 101,
  sym_set = 102,
  sym__module_attr = 103,
  sym__component_attr = 104,
  sym__label_attr = 105,
  sym__guideline_attr = 106,
  sym__guideline_xy_attr = 107,
  sym__x_attr = 108,
  sym__y_attr = 109,
  sym__xy_attr = 110,
  sym_decorate = 111,
  sym__component = 112,
  sym_decoration = 113,
  sym_delete = 114,
  sym__guideline_id = 115,
  sym__input_id = 116,
  sym__output_id = 117,
  sym__parameter_id = 118,
  sym__light_id = 119,
  sym__widget_id = 120,
  sym__label_id = 121,
  sym__decoration_id = 122,
  sym__component_id = 123,
  sym__guide_id = 124,
  sym_load = 125,
  sym_save = 126,
  sym_project = 127,
  sym__save_options = 128,
  sym_script = 129,
  sym_export = 130,
  sym__module_export = 131,
  sym_panel = 132,
  sym_svg = 133,
  sym_origin = 134,
  sym_background = 135,
  sym_label = 136,
  sym__label_string = 137,
  sym__label_absolute = 138,
  sym__label_relative = 139,
  sym__label_geometry = 140,
  sym_font = 141,
  sym_fontsize = 142,
  sym_halign = 143,
  sym_valign = 144,
  sym__align = 145,
  sym_colour = 146,
  sym__rgb = 147,
  sym__rgba = 148,
  sym_name = 149,
  sym_part = 150,
  sym_rgb = 151,
  sym_rgba = 152,
  sym_absolute = 153,
  sym__absolute = 154,
  sym__relative = 155,
  sym__x = 156,
  sym__y = 157,
  sym_x = 158,
  sym_y = 159,
  sym_xy = 160,
  sym__xy = 161,
  sym__offset = 162,
  sym_offset = 163,
  sym_string = 164,
  sym__string = 165,
  sym_identifier = 166,
  aux_sym_command_repeat1 = 167,
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
  [anon_sym_guide] = "guide",
  [anon_sym_vertical] = "orientation",
  [anon_sym_horizontal] = "orientation",
  [anon_sym_AT] = "@",
  [aux_sym__new_guideline_absolute_token1] = "_new_guideline_absolute_token1",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_bottom] = "bottom",
  [aux_sym__new_guideline_geometry_token1] = "offset",
  [aux_sym__new_guideline_guide_token1] = "_new_guideline_guide_token1",
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
  [aux_sym__guideline_xy_attr_token1] = "_guideline_xy_attr_token1",
  [aux_sym__guideline_xy_attr_token2] = "_guideline_xy_attr_token2",
  [aux_sym__guideline_xy_attr_token3] = "reference",
  [aux_sym__x_attr_token1] = "_x_attr_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_decorate] = "decorate",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_with] = "with",
  [anon_sym_delete] = "delete",
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
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_module] = "module",
  [sym__input_entity] = "input",
  [sym__output_entity] = "output",
  [sym__parameter_entity] = "parameter",
  [sym__light_entity] = "light",
  [sym__widget_entity] = "widget",
  [sym__component_entity] = "_component_entity",
  [sym__guide_entity] = "guide",
  [sym__new_guide_orientation] = "_new_guide_orientation",
  [sym__new_guideline_absolute] = "_new_guideline_absolute",
  [sym__new_guideline_relative] = "_new_guideline_relative",
  [sym__new_guideline_geometry] = "_new_guideline_geometry",
  [sym__new_guideline_guide] = "_new_guideline_guide",
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__component_attr] = "_component_attr",
  [sym__label_attr] = "_label_attr",
  [sym__guideline_attr] = "_guideline_attr",
  [sym__guideline_xy_attr] = "xy",
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
  [sym__guide_id] = "guide",
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
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_vertical,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__new_guideline_absolute_token1] = aux_sym__new_guideline_absolute_token1,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_bottom] = anon_sym_bottom,
  [aux_sym__new_guideline_geometry_token1] = sym_offset,
  [aux_sym__new_guideline_guide_token1] = aux_sym__new_guideline_guide_token1,
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
  [aux_sym__guideline_xy_attr_token1] = aux_sym__guideline_xy_attr_token1,
  [aux_sym__guideline_xy_attr_token2] = aux_sym__guideline_xy_attr_token2,
  [aux_sym__guideline_xy_attr_token3] = aux_sym__guideline_xy_attr_token3,
  [aux_sym__x_attr_token1] = aux_sym__x_attr_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_delete] = anon_sym_delete,
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
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_module] = sym_module,
  [sym__input_entity] = sym__input_entity,
  [sym__output_entity] = sym__output_entity,
  [sym__parameter_entity] = sym__parameter_entity,
  [sym__light_entity] = sym__light_entity,
  [sym__widget_entity] = sym__widget_entity,
  [sym__component_entity] = sym__component_entity,
  [sym__guide_entity] = sym__guide_entity,
  [sym__new_guide_orientation] = sym__new_guide_orientation,
  [sym__new_guideline_absolute] = sym__new_guideline_absolute,
  [sym__new_guideline_relative] = sym__new_guideline_relative,
  [sym__new_guideline_geometry] = sym__new_guideline_geometry,
  [sym__new_guideline_guide] = sym__new_guideline_guide,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym__component_attr] = sym__component_attr,
  [sym__label_attr] = sym__label_attr,
  [sym__guideline_attr] = sym__guideline_attr,
  [sym__guideline_xy_attr] = sym_xy,
  [sym__x_attr] = sym_x,
  [sym__y_attr] = sym_y,
  [sym__xy_attr] = sym_xy,
  [sym_decorate] = sym_decorate,
  [sym__component] = sym__component,
  [sym_decoration] = sym_decoration,
  [sym_delete] = sym_delete,
  [sym__guideline_id] = sym__guide_entity,
  [sym__input_id] = sym__input_entity,
  [sym__output_id] = sym__output_entity,
  [sym__parameter_id] = sym__parameter_entity,
  [sym__light_id] = sym__light_entity,
  [sym__widget_id] = sym__widget_entity,
  [sym__label_id] = sym_label,
  [sym__decoration_id] = sym_decoration,
  [sym__component_id] = sym__component_id,
  [sym__guide_id] = sym__guide_entity,
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
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__new_guideline_absolute_token1] = {
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
  [anon_sym_bottom] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__new_guideline_geometry_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__new_guideline_guide_token1] = {
    .visible = false,
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
  [aux_sym__guideline_xy_attr_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__guideline_xy_attr_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__guideline_xy_attr_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__x_attr_token1] = {
    .visible = false,
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
  [sym__guide_entity] = {
    .visible = true,
    .named = true,
  },
  [sym__new_guide_orientation] = {
    .visible = false,
    .named = true,
  },
  [sym__new_guideline_absolute] = {
    .visible = false,
    .named = true,
  },
  [sym__new_guideline_relative] = {
    .visible = false,
    .named = true,
  },
  [sym__new_guideline_geometry] = {
    .visible = false,
    .named = true,
  },
  [sym__new_guideline_guide] = {
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
  [sym__guideline_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__guideline_xy_attr] = {
    .visible = true,
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
  [sym__guide_id] = {
    .visible = true,
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
    [0] = aux_sym__guideline_xy_attr_token3,
  },
  [4] = {
    [1] = sym_identifier,
  },
  [5] = {
    [0] = sym_offset,
  },
  [6] = {
    [0] = sym_absolute,
  },
  [7] = {
    [1] = sym_x,
  },
  [8] = {
    [0] = sym_absolute,
    [1] = sym_offset,
  },
  [9] = {
    [0] = aux_sym__guideline_xy_attr_token3,
    [1] = sym_offset,
  },
  [10] = {
    [1] = sym__light_entity,
  },
  [11] = {
    [1] = sym_x,
    [3] = sym_y,
  },
  [12] = {
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 15,
  [45] = 14,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 13,
  [50] = 16,
  [51] = 51,
  [52] = 52,
  [53] = 17,
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
  [65] = 5,
  [66] = 57,
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
  [191] = 14,
  [192] = 15,
  [193] = 16,
  [194] = 17,
  [195] = 13,
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
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(704);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(708);
      if (lookahead == '(') ADVANCE(638);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead == ',') ADVANCE(630);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '0') ADVANCE(519);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'g') ADVANCE(246);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(491);
      if (lookahead == 'y') ADVANCE(494);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(783);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(781);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(746);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(784);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(782);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(746);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(780);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'H') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'U') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(162);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(739);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(611);
      if (lookahead == 'm') ADVANCE(602);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(713);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(744);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(221);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(741);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(88);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(738);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(640);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(490);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(224);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 132:
      if (lookahead == 'j') ADVANCE(69);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(742);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(100);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(648);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(477);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(780);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(518);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(525);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(777);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(779);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(745);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(712);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(730);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(729);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(779);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(772);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(720);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(778);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == 'z') ADVANCE(121);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 251:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 252:
      if (lookahead == 'w') ADVANCE(299);
      END_STATE();
    case 253:
      if (lookahead == 'x') ADVANCE(198);
      END_STATE();
    case 254:
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 255:
      if (lookahead == 'z') ADVANCE(66);
      END_STATE();
    case 256:
      if (lookahead == 'z') ADVANCE(191);
      END_STATE();
    case 257:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(780);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(775);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(776);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(774);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 278:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 279:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 280:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 281:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 282:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 283:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 284:
      if (eof) ADVANCE(298);
      if (lookahead == ' ') SKIP(284)
      if (lookahead == '"') ADVANCE(705);
      if (lookahead == '\'') ADVANCE(709);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == 'c') ADVANCE(684);
      if (lookahead == 'd') ADVANCE(659);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == 'f') ADVANCE(681);
      if (lookahead == 'h') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 't') ADVANCE(665);
      if (lookahead == 'v') ADVANCE(656);
      if (lookahead == 'x') ADVANCE(492);
      if (lookahead == 'y') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(649);
      if (lookahead != 0) ADVANCE(703);
      END_STATE();
    case 285:
      if (eof) ADVANCE(298);
      if (lookahead == ' ') SKIP(285)
      if (lookahead == '"') ADVANCE(705);
      if (lookahead == '\'') ADVANCE(709);
      if (lookahead == 'd') ADVANCE(659);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead == 's') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(650);
      if (lookahead != 0) ADVANCE(703);
      END_STATE();
    case 286:
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '(') ADVANCE(638);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 287:
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == 'x') ADVANCE(493);
      if (lookahead == 'y') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(287)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 288:
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(288)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 289:
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == ',') ADVANCE(630);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(185);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(289)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 290:
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == 'd') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead == 'l') ADVANCE(758);
      if (lookahead == 'n') ADVANCE(753);
      if (lookahead == 's') ADVANCE(747);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(290)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 291:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == ',') ADVANCE(630);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(420);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == 'v') ADVANCE(388);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(291)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 292:
      if (eof) ADVANCE(298);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(292)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 293:
      if (eof) ADVANCE(298);
      if (lookahead == ',') ADVANCE(630);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(556);
      if (lookahead == 'c') ADVANCE(537);
      if (lookahead == 'd') ADVANCE(538);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'l') ADVANCE(539);
      if (lookahead == 'm') ADVANCE(551);
      if (lookahead == 'n') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 't') ADVANCE(559);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(293)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 294:
      if (eof) ADVANCE(298);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 295:
      if (eof) ADVANCE(298);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead == 'l') ADVANCE(606);
      if (lookahead == 'm') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == 's') ADVANCE(580);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(295)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 296:
      if (eof) ADVANCE(298);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == 'd') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead == 'l') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == 'r') ADVANCE(601);
      if (lookahead == 's') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 297:
      if (eof) ADVANCE(298);
      if (lookahead == '@') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(297)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__new_guideline_absolute_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__new_guideline_geometry_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == 'e') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(430);
      if (lookahead == 'l') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'r') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'f') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'f') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'g') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'g') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'h') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'h') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'v') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'v') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'w') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'w') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'x') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'x') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'z') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(476);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(162);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(497);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_halign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_valign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(523);
      if (lookahead == 'H') ADVANCE(318);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == 'H') ADVANCE(318);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(524);
      if (lookahead == 'H') ADVANCE(518);
      if (lookahead == 'm') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(318);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(318);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(518);
      if (lookahead == 'm') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == '.') ADVANCE(528);
      if (lookahead == 'H') ADVANCE(354);
      if (lookahead == 'h') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == 'H') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == 'H') ADVANCE(354);
      if (lookahead == 'h') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == 'H') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'l') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead == 'r') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'f') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'g') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'h') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'i') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'i') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'l') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'm') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'n') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'p') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'p') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'v') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'w') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'x') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'e') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'c') ADVANCE(607);
      if (lookahead == 'l') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead == 'o') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(614);
      if (lookahead == 'r') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'f') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'g') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'h') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'l') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'm') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'n') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'p') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'p') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'v') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'w') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'x') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(705);
      if (lookahead == '\'') ADVANCE(709);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == 'c') ADVANCE(684);
      if (lookahead == 'd') ADVANCE(659);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == 'f') ADVANCE(681);
      if (lookahead == 'h') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 't') ADVANCE(665);
      if (lookahead == 'v') ADVANCE(656);
      if (lookahead == 'x') ADVANCE(492);
      if (lookahead == 'y') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(705);
      if (lookahead == '\'') ADVANCE(709);
      if (lookahead == 'd') ADVANCE(659);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead == 's') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == 'i') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'c') ADVANCE(683);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'd') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'p') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == 'u') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'v') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'w') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'z') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(711);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(759);
      if (lookahead == 'l') ADVANCE(757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
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
  [5] = {.lex_state = 284},
  [6] = {.lex_state = 291},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 293},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 294},
  [12] = {.lex_state = 293},
  [13] = {.lex_state = 287},
  [14] = {.lex_state = 287},
  [15] = {.lex_state = 287},
  [16] = {.lex_state = 287},
  [17] = {.lex_state = 287},
  [18] = {.lex_state = 296},
  [19] = {.lex_state = 289},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 296},
  [22] = {.lex_state = 296},
  [23] = {.lex_state = 296},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 295},
  [26] = {.lex_state = 295},
  [27] = {.lex_state = 288},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 289},
  [30] = {.lex_state = 290},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 286},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 297},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 297},
  [41] = {.lex_state = 288},
  [42] = {.lex_state = 297},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 286},
  [45] = {.lex_state = 286},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 289},
  [49] = {.lex_state = 286},
  [50] = {.lex_state = 286},
  [51] = {.lex_state = 297},
  [52] = {.lex_state = 286},
  [53] = {.lex_state = 286},
  [54] = {.lex_state = 289},
  [55] = {.lex_state = 290},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 289},
  [58] = {.lex_state = 290},
  [59] = {.lex_state = 289},
  [60] = {.lex_state = 288},
  [61] = {.lex_state = 290},
  [62] = {.lex_state = 290},
  [63] = {.lex_state = 290},
  [64] = {.lex_state = 290},
  [65] = {.lex_state = 285},
  [66] = {.lex_state = 292},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 289},
  [70] = {.lex_state = 290},
  [71] = {.lex_state = 292},
  [72] = {.lex_state = 289},
  [73] = {.lex_state = 290},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 290},
  [77] = {.lex_state = 290},
  [78] = {.lex_state = 289},
  [79] = {.lex_state = 290},
  [80] = {.lex_state = 290},
  [81] = {.lex_state = 290},
  [82] = {.lex_state = 290},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 290},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 290},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 289},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 288},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 297},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 297},
  [100] = {.lex_state = 290},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 297},
  [103] = {.lex_state = 297},
  [104] = {.lex_state = 290},
  [105] = {.lex_state = 288},
  [106] = {.lex_state = 297},
  [107] = {.lex_state = 290},
  [108] = {.lex_state = 297},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 297},
  [112] = {.lex_state = 290},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 290},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 292},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 297},
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
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 23},
  [188] = {.lex_state = 23},
  [189] = {.lex_state = 288},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 288},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 291},
  [199] = {.lex_state = 293},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 291},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 289},
  [205] = {.lex_state = 289},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 291},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 287},
  [211] = {.lex_state = 293},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 288},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 710},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 287},
  [218] = {.lex_state = 706},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 293},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 291},
  [224] = {.lex_state = 293},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 293},
  [228] = {.lex_state = 293},
  [229] = {.lex_state = 293},
  [230] = {.lex_state = 290},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 287},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 290},
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
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__new_guideline_absolute_token1] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [aux_sym__new_guideline_geometry_token1] = ACTIONS(1),
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
    [aux_sym__guideline_xy_attr_token1] = ACTIONS(1),
    [aux_sym__guideline_xy_attr_token2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
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
    [sym_command] = STATE(212),
    [sym_new] = STATE(20),
    [sym_set] = STATE(20),
    [sym_decorate] = STATE(20),
    [sym_delete] = STATE(20),
    [sym_load] = STATE(20),
    [sym_save] = STATE(20),
    [sym_export] = STATE(20),
    [aux_sym_command_repeat1] = STATE(20),
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
  [0] = 15,
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
    ACTIONS(37), 1,
      anon_sym_origin,
    ACTIONS(39), 1,
      anon_sym_background,
    STATE(9), 1,
      sym__guide_id,
    STATE(10), 1,
      sym__label_id,
    STATE(37), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(136), 6,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__guideline_attr,
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
  [62] = 10,
    ACTIONS(43), 1,
      anon_sym_module,
    ACTIONS(45), 1,
      anon_sym_input,
    ACTIONS(47), 1,
      anon_sym_output,
    ACTIONS(49), 1,
      anon_sym_parameter,
    ACTIONS(51), 1,
      anon_sym_light,
    ACTIONS(53), 1,
      anon_sym_widget,
    ACTIONS(55), 1,
      anon_sym_guide,
    ACTIONS(57), 1,
      anon_sym_label,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(135), 8,
      sym_module,
      sym__input_entity,
      sym__output_entity,
      sym__parameter_entity,
      sym__light_entity,
      sym__widget_entity,
      sym__guide_entity,
      sym_label,
  [107] = 10,
    ACTIONS(61), 1,
      anon_sym_input,
    ACTIONS(63), 1,
      anon_sym_output,
    ACTIONS(65), 1,
      anon_sym_parameter,
    ACTIONS(67), 1,
      anon_sym_light,
    ACTIONS(69), 1,
      anon_sym_widget,
    ACTIONS(71), 1,
      anon_sym_guide,
    ACTIONS(73), 1,
      anon_sym_label,
    ACTIONS(75), 1,
      anon_sym_decoration,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(143), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [152] = 5,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym__label_id_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 18,
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
  [185] = 6,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(91), 2,
      anon_sym_vertical,
      anon_sym_horizontal,
    STATE(130), 3,
      sym__new_guide_orientation,
      sym__new_guideline_geometry,
      sym__new_guideline_guide,
    ACTIONS(89), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    ACTIONS(93), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [219] = 2,
    ACTIONS(99), 1,
      anon_sym_x,
    ACTIONS(97), 18,
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
  [243] = 2,
    ACTIONS(103), 1,
      anon_sym_x,
    ACTIONS(101), 18,
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
  [267] = 6,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(113), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(158), 1,
      sym__guideline_xy_attr,
    ACTIONS(107), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    ACTIONS(111), 8,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guideline_xy_attr_token3,
  [299] = 11,
    ACTIONS(117), 1,
      anon_sym_x,
    ACTIONS(119), 1,
      anon_sym_y,
    ACTIONS(121), 1,
      anon_sym_xy,
    ACTIONS(123), 1,
      anon_sym_text,
    ACTIONS(125), 1,
      anon_sym_font,
    ACTIONS(127), 1,
      anon_sym_size,
    ACTIONS(129), 1,
      anon_sym_halign,
    ACTIONS(131), 1,
      anon_sym_valign,
    ACTIONS(133), 1,
      anon_sym_align,
    ACTIONS(135), 2,
      anon_sym_colour,
      anon_sym_color,
    ACTIONS(115), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [341] = 3,
    ACTIONS(141), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(139), 15,
      anon_sym_new,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_set,
      aux_sym__guideline_xy_attr_token3,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [367] = 2,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(145), 15,
      anon_sym_new,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_set,
      aux_sym__guideline_xy_attr_token3,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [390] = 5,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(149), 12,
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
  [418] = 5,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(157), 12,
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
  [446] = 5,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(161), 12,
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
  [474] = 5,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(165), 12,
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
  [502] = 5,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(169), 12,
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
  [530] = 6,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(179), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(144), 1,
      sym__xy_attr,
    ACTIONS(177), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(173), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [559] = 7,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      aux_sym__absolute_token1,
    ACTIONS(187), 1,
      aux_sym__x_token1,
    STATE(79), 1,
      sym_xy,
    STATE(226), 1,
      sym__x,
    STATE(100), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [590] = 9,
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
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(24), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [625] = 6,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      anon_sym_AT,
    ACTIONS(195), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(144), 1,
      sym__x_attr,
    ACTIONS(193), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(173), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [654] = 6,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(179), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      sym__xy_attr,
    ACTIONS(177), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(199), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [683] = 6,
    ACTIONS(191), 1,
      anon_sym_AT,
    ACTIONS(195), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      sym__x_attr,
    ACTIONS(193), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(199), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [712] = 9,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      anon_sym_new,
    ACTIONS(206), 1,
      anon_sym_set,
    ACTIONS(209), 1,
      anon_sym_decorate,
    ACTIONS(212), 1,
      anon_sym_delete,
    ACTIONS(215), 1,
      anon_sym_load,
    ACTIONS(218), 1,
      anon_sym_save,
    ACTIONS(221), 1,
      anon_sym_export,
    STATE(24), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [747] = 6,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      anon_sym_AT,
    ACTIONS(228), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(144), 1,
      sym__y_attr,
    ACTIONS(226), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
    ACTIONS(173), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [775] = 6,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      anon_sym_AT,
    ACTIONS(228), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(155), 1,
      sym__y_attr,
    ACTIONS(226), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
    ACTIONS(199), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [803] = 6,
    ACTIONS(187), 1,
      aux_sym__x_token1,
    ACTIONS(232), 1,
      anon_sym_AT,
    ACTIONS(234), 1,
      aux_sym__label_relative_token1,
    STATE(236), 1,
      sym__x,
    STATE(131), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(230), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [831] = 2,
    ACTIONS(238), 1,
      anon_sym_x,
    ACTIONS(236), 13,
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
  [850] = 7,
    ACTIONS(242), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      aux_sym__x_token1,
    ACTIONS(246), 1,
      aux_sym__y_token1,
    STATE(96), 1,
      sym_y,
    STATE(97), 1,
      sym_x,
    STATE(165), 1,
      sym_absolute,
    ACTIONS(240), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [879] = 8,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      aux_sym_font_token1,
    ACTIONS(254), 1,
      aux_sym__rgb_token1,
    ACTIONS(256), 1,
      aux_sym__rgba_token1,
    STATE(92), 1,
      sym_rgb,
    STATE(93), 1,
      sym_rgba,
    STATE(162), 1,
      sym_name,
    ACTIONS(250), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [910] = 2,
    ACTIONS(260), 1,
      anon_sym_x,
    ACTIONS(258), 13,
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
  [929] = 2,
    ACTIONS(264), 1,
      anon_sym_x,
    ACTIONS(262), 13,
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
  [948] = 2,
    ACTIONS(268), 1,
      anon_sym_x,
    ACTIONS(266), 13,
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
  [967] = 2,
    ACTIONS(272), 1,
      anon_sym_x,
    ACTIONS(270), 13,
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
  [986] = 2,
    ACTIONS(276), 1,
      anon_sym_x,
    ACTIONS(274), 13,
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
  [1005] = 6,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(149), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(280), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1032] = 6,
    ACTIONS(286), 1,
      anon_sym_name,
    ACTIONS(288), 1,
      anon_sym_x,
    ACTIONS(290), 1,
      anon_sym_y,
    ACTIONS(292), 1,
      anon_sym_xy,
    ACTIONS(294), 1,
      anon_sym_part,
    ACTIONS(284), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1058] = 3,
    STATE(185), 1,
      sym_halign,
    ACTIONS(298), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(296), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1078] = 5,
    ACTIONS(302), 1,
      aux_sym__rgb_token1,
    ACTIONS(304), 1,
      aux_sym__rgba_token1,
    STATE(160), 1,
      sym_colour,
    STATE(98), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(300), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1102] = 3,
    STATE(155), 1,
      sym_halign,
    ACTIONS(298), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1122] = 3,
    STATE(155), 1,
      sym_valign,
    ACTIONS(306), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1142] = 3,
    STATE(155), 1,
      sym__align,
    ACTIONS(308), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1162] = 5,
    ACTIONS(302), 1,
      aux_sym__rgb_token1,
    ACTIONS(304), 1,
      aux_sym__rgba_token1,
    STATE(155), 1,
      sym_colour,
    STATE(98), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1186] = 5,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(161), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1209] = 5,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(157), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1232] = 4,
    ACTIONS(312), 1,
      anon_sym_project,
    ACTIONS(314), 1,
      anon_sym_script,
    STATE(161), 2,
      sym_project,
      sym_script,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1253] = 4,
    ACTIONS(318), 1,
      anon_sym_module,
    ACTIONS(320), 1,
      anon_sym_panel,
    STATE(168), 2,
      sym__module_export,
      sym_panel,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1274] = 4,
    STATE(27), 1,
      sym__string,
    STATE(132), 1,
      sym__label_string,
    ACTIONS(324), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1295] = 5,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(149), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1318] = 5,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(165), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1341] = 4,
    ACTIONS(328), 1,
      anon_sym_AT,
    ACTIONS(330), 1,
      aux_sym__new_guideline_absolute_token1,
    STATE(126), 2,
      sym__new_guideline_absolute,
      sym__new_guideline_relative,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1362] = 5,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(334), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1385] = 5,
    ACTIONS(151), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(169), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1408] = 3,
    ACTIONS(338), 1,
      aux_sym__offset_token1,
    STATE(115), 1,
      sym_offset,
    ACTIONS(336), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1426] = 5,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 1,
      aux_sym_font_token1,
    STATE(19), 1,
      sym_name,
    STATE(124), 1,
      sym__component_entity,
    ACTIONS(342), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1448] = 4,
    ACTIONS(348), 1,
      anon_sym_timestamp,
    ACTIONS(350), 1,
      anon_sym_gzip,
    STATE(146), 1,
      sym__save_options,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1468] = 1,
    ACTIONS(352), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_AT,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym__absolute_token1,
      aux_sym__x_token1,
  [1482] = 5,
    ACTIONS(344), 1,
      aux_sym_font_token1,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_name,
    STATE(172), 1,
      sym__component_entity,
    ACTIONS(356), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1504] = 3,
    ACTIONS(338), 1,
      aux_sym__offset_token1,
    STATE(113), 1,
      sym_offset,
    ACTIONS(358), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1522] = 3,
    STATE(155), 1,
      sym_string,
    ACTIONS(360), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1540] = 5,
    ACTIONS(344), 1,
      aux_sym_font_token1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_name,
    STATE(173), 1,
      sym__component_entity,
    ACTIONS(364), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1562] = 5,
    ACTIONS(344), 1,
      aux_sym_font_token1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_name,
    STATE(180), 1,
      sym__component_entity,
    ACTIONS(368), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1584] = 4,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 1,
      aux_sym__offset_token1,
    STATE(114), 1,
      sym__offset,
    ACTIONS(372), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1604] = 5,
    ACTIONS(344), 1,
      aux_sym_font_token1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_name,
    STATE(129), 1,
      sym__component_entity,
    ACTIONS(378), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1626] = 5,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym__label_id_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1648] = 2,
    ACTIONS(380), 1,
      sym_width,
    ACTIONS(352), 10,
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
  [1664] = 4,
    ACTIONS(384), 1,
      anon_sym_name,
    ACTIONS(386), 1,
      anon_sym_height,
    ACTIONS(388), 1,
      anon_sym_width,
    ACTIONS(382), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1684] = 2,
    ACTIONS(392), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
    ACTIONS(390), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1699] = 3,
    ACTIONS(394), 1,
      aux_sym_fontsize_token1,
    STATE(155), 1,
      sym_fontsize,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1716] = 4,
    ACTIONS(252), 1,
      aux_sym_font_token1,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      sym_name,
    ACTIONS(398), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1735] = 3,
    ACTIONS(402), 1,
      sym_height,
    ACTIONS(404), 1,
      sym_width,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1752] = 3,
    ACTIONS(394), 1,
      aux_sym_fontsize_token1,
    STATE(186), 1,
      sym_fontsize,
    ACTIONS(406), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1769] = 4,
    ACTIONS(252), 1,
      aux_sym_font_token1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_name,
    ACTIONS(410), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1788] = 3,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_decoration,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1805] = 3,
    ACTIONS(418), 1,
      anon_sym_svg,
    STATE(139), 1,
      sym_svg,
    ACTIONS(416), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1822] = 4,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 1,
      aux_sym_font_token1,
    STATE(167), 1,
      sym_font,
    ACTIONS(422), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1841] = 4,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 1,
      aux_sym_font_token1,
    STATE(155), 1,
      sym_font,
    ACTIONS(199), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1860] = 3,
    ACTIONS(246), 1,
      aux_sym__y_token1,
    STATE(181), 1,
      sym_y,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1877] = 4,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 1,
      aux_sym_font_token1,
    STATE(176), 1,
      sym_part,
    ACTIONS(430), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1896] = 4,
    ACTIONS(424), 1,
      aux_sym_font_token1,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      sym_font,
    ACTIONS(436), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1915] = 4,
    ACTIONS(424), 1,
      aux_sym_font_token1,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_font,
    ACTIONS(440), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1934] = 4,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      aux_sym_font_token1,
    STATE(144), 1,
      sym_name,
    ACTIONS(173), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1953] = 6,
    ACTIONS(442), 1,
      anon_sym_input,
    ACTIONS(444), 1,
      anon_sym_output,
    ACTIONS(446), 1,
      anon_sym_parameter,
    ACTIONS(448), 1,
      anon_sym_light,
    ACTIONS(450), 1,
      anon_sym_widget,
    STATE(222), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1976] = 4,
    ACTIONS(252), 1,
      aux_sym_font_token1,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_name,
    ACTIONS(454), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1995] = 3,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym__component,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2012] = 4,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 1,
      aux_sym_font_token1,
    STATE(144), 1,
      sym_part,
    ACTIONS(173), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2031] = 3,
    ACTIONS(462), 1,
      anon_sym_light,
    ACTIONS(464), 1,
      anon_sym_dark,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2048] = 3,
    ACTIONS(244), 1,
      aux_sym__x_token1,
    STATE(181), 1,
      sym_x,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2065] = 3,
    ACTIONS(468), 1,
      anon_sym_project,
    ACTIONS(470), 1,
      anon_sym_script,
    ACTIONS(466), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2082] = 2,
    ACTIONS(474), 1,
      aux_sym__new_guideline_geometry_token1,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2096] = 1,
    ACTIONS(476), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2108] = 2,
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
  [2122] = 2,
    ACTIONS(482), 1,
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
  [2136] = 1,
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
  [2148] = 2,
    ACTIONS(488), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2162] = 2,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2176] = 2,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2190] = 2,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2204] = 2,
    ACTIONS(502), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2218] = 2,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    ACTIONS(506), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2232] = 2,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2246] = 2,
    ACTIONS(514), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(512), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2260] = 2,
    ACTIONS(518), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(516), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2274] = 2,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    ACTIONS(522), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2288] = 2,
    ACTIONS(526), 1,
      aux_sym__new_guideline_geometry_token1,
    ACTIONS(524), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2302] = 2,
    ACTIONS(530), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(528), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2316] = 2,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(534), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2330] = 2,
    ACTIONS(538), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2344] = 2,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2358] = 2,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2372] = 2,
    ACTIONS(548), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(546), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2386] = 2,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(552), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2400] = 1,
    ACTIONS(554), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2412] = 2,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
    ACTIONS(558), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2426] = 1,
    ACTIONS(560), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2438] = 2,
    ACTIONS(564), 1,
      sym_width,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2452] = 1,
    ACTIONS(566), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2464] = 2,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(568), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2478] = 2,
    ACTIONS(574), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(572), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2492] = 2,
    ACTIONS(578), 1,
      anon_sym_timestamp,
    ACTIONS(576), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2506] = 1,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2517] = 1,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2528] = 1,
    ACTIONS(582), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2539] = 1,
    ACTIONS(584), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2550] = 1,
    ACTIONS(586), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2561] = 1,
    ACTIONS(588), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2572] = 1,
    ACTIONS(590), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2583] = 1,
    ACTIONS(592), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2594] = 1,
    ACTIONS(594), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2605] = 1,
    ACTIONS(596), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2616] = 1,
    ACTIONS(598), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2627] = 1,
    ACTIONS(600), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2638] = 1,
    ACTIONS(602), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2649] = 1,
    ACTIONS(604), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2660] = 1,
    ACTIONS(606), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2671] = 1,
    ACTIONS(608), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2682] = 1,
    ACTIONS(610), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2693] = 1,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2704] = 1,
    ACTIONS(612), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2715] = 1,
    ACTIONS(614), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2726] = 1,
    ACTIONS(616), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2737] = 1,
    ACTIONS(618), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2748] = 1,
    ACTIONS(620), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2759] = 1,
    ACTIONS(622), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2770] = 1,
    ACTIONS(624), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2781] = 1,
    ACTIONS(626), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2792] = 1,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2803] = 1,
    ACTIONS(628), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2814] = 1,
    ACTIONS(630), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2825] = 1,
    ACTIONS(528), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2836] = 1,
    ACTIONS(632), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2847] = 1,
    ACTIONS(634), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2858] = 1,
    ACTIONS(636), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2869] = 1,
    ACTIONS(638), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2880] = 1,
    ACTIONS(640), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2891] = 1,
    ACTIONS(642), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2902] = 1,
    ACTIONS(644), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2913] = 1,
    ACTIONS(646), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2924] = 1,
    ACTIONS(648), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2935] = 1,
    ACTIONS(650), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2946] = 1,
    ACTIONS(652), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2957] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2968] = 1,
    ACTIONS(654), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2979] = 1,
    ACTIONS(656), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2990] = 1,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3001] = 1,
    ACTIONS(658), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3012] = 1,
    ACTIONS(660), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3023] = 1,
    ACTIONS(662), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3034] = 1,
    ACTIONS(664), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3045] = 1,
    ACTIONS(666), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3056] = 1,
    ACTIONS(668), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3067] = 1,
    ACTIONS(670), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3078] = 1,
    ACTIONS(672), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3089] = 1,
    ACTIONS(674), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3100] = 1,
    ACTIONS(676), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3111] = 1,
    ACTIONS(678), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3122] = 1,
    ACTIONS(680), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3133] = 1,
    ACTIONS(682), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3144] = 1,
    ACTIONS(546), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3155] = 1,
    ACTIONS(684), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3166] = 1,
    ACTIONS(686), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3177] = 1,
    ACTIONS(688), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3188] = 1,
    ACTIONS(690), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3199] = 1,
    ACTIONS(692), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3210] = 1,
    ACTIONS(694), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3221] = 1,
    ACTIONS(696), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3232] = 3,
    ACTIONS(698), 1,
      anon_sym_AT,
    ACTIONS(702), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(700), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
  [3245] = 3,
    ACTIONS(548), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(704), 1,
      anon_sym_AT,
    ACTIONS(706), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
  [3258] = 2,
    STATE(178), 1,
      sym_valign,
    ACTIONS(306), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3268] = 1,
    ACTIONS(708), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [3276] = 3,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(153), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3288] = 3,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(153), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3300] = 3,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(153), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3312] = 3,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(153), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3324] = 3,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(153), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3336] = 1,
    ACTIONS(710), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3343] = 3,
    ACTIONS(712), 1,
      aux_sym__rgb_token1,
    ACTIONS(714), 1,
      aux_sym__rgba_token1,
    STATE(175), 2,
      sym__rgb,
      sym__rgba,
  [3354] = 3,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      aux_sym__offset_token1,
    STATE(216), 1,
      sym__offset,
  [3364] = 2,
    ACTIONS(720), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(722), 1,
      anon_sym_COMMA,
  [3371] = 2,
    ACTIONS(724), 1,
      aux_sym_font_token1,
    STATE(153), 1,
      sym_name,
  [3378] = 2,
    ACTIONS(726), 1,
      aux_sym__rgb_token1,
    STATE(182), 1,
      sym_rgb,
  [3385] = 2,
    ACTIONS(256), 1,
      aux_sym__rgba_token1,
    STATE(182), 1,
      sym_rgba,
  [3392] = 2,
    ACTIONS(724), 1,
      aux_sym_font_token1,
    STATE(133), 1,
      sym_name,
  [3399] = 2,
    ACTIONS(728), 1,
      aux_sym__y_token1,
    STATE(80), 1,
      sym__y,
  [3406] = 2,
    ACTIONS(728), 1,
      aux_sym__y_token1,
    STATE(107), 1,
      sym__y,
  [3413] = 1,
    ACTIONS(730), 1,
      anon_sym_COMMA,
  [3417] = 1,
    ACTIONS(732), 1,
      anon_sym_COMMA,
  [3421] = 1,
    ACTIONS(734), 1,
      sym_height,
  [3425] = 1,
    ACTIONS(736), 1,
      anon_sym_COMMA,
  [3429] = 1,
    ACTIONS(738), 1,
      aux_sym__absolute_token1,
  [3433] = 1,
    ACTIONS(548), 1,
      aux_sym__guideline_xy_attr_token1,
  [3437] = 1,
    ACTIONS(740), 1,
      ts_builtin_sym_end,
  [3441] = 1,
    ACTIONS(742), 1,
      aux_sym__label_relative_token1,
  [3445] = 1,
    ACTIONS(744), 1,
      anon_sym_COMMA,
  [3449] = 1,
    ACTIONS(746), 1,
      aux_sym__label_id_token3,
  [3453] = 1,
    ACTIONS(748), 1,
      anon_sym_COMMA,
  [3457] = 1,
    ACTIONS(750), 1,
      aux_sym__absolute_token1,
  [3461] = 1,
    ACTIONS(752), 1,
      aux_sym__label_id_token2,
  [3465] = 1,
    ACTIONS(754), 1,
      anon_sym_timestamp,
  [3469] = 1,
    ACTIONS(754), 1,
      anon_sym_gzip,
  [3473] = 1,
    ACTIONS(488), 1,
      aux_sym__guideline_xy_attr_token1,
  [3477] = 1,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
  [3481] = 1,
    ACTIONS(734), 1,
      sym_width,
  [3485] = 1,
    ACTIONS(758), 1,
      aux_sym__guideline_xy_attr_token1,
  [3489] = 1,
    ACTIONS(722), 1,
      anon_sym_COMMA,
  [3493] = 1,
    ACTIONS(760), 1,
      anon_sym_COMMA,
  [3497] = 1,
    ACTIONS(720), 1,
      aux_sym__guideline_xy_attr_token1,
  [3501] = 1,
    ACTIONS(530), 1,
      aux_sym__guideline_xy_attr_token1,
  [3505] = 1,
    ACTIONS(538), 1,
      aux_sym__guideline_xy_attr_token1,
  [3509] = 1,
    ACTIONS(762), 1,
      aux_sym__new_guideline_absolute_token1,
  [3513] = 1,
    ACTIONS(764), 1,
      anon_sym_with,
  [3517] = 1,
    ACTIONS(766), 1,
      aux_sym__absolute_token1,
  [3521] = 1,
    ACTIONS(768), 1,
      anon_sym_COMMA,
  [3525] = 1,
    ACTIONS(770), 1,
      anon_sym_SQUOTE,
  [3529] = 1,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
  [3533] = 1,
    ACTIONS(772), 1,
      anon_sym_COMMA,
  [3537] = 1,
    ACTIONS(774), 1,
      anon_sym_COMMA,
  [3541] = 1,
    ACTIONS(776), 1,
      aux_sym__new_guideline_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 107,
  [SMALL_STATE(5)] = 152,
  [SMALL_STATE(6)] = 185,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 243,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 299,
  [SMALL_STATE(11)] = 341,
  [SMALL_STATE(12)] = 367,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 446,
  [SMALL_STATE(16)] = 474,
  [SMALL_STATE(17)] = 502,
  [SMALL_STATE(18)] = 530,
  [SMALL_STATE(19)] = 559,
  [SMALL_STATE(20)] = 590,
  [SMALL_STATE(21)] = 625,
  [SMALL_STATE(22)] = 654,
  [SMALL_STATE(23)] = 683,
  [SMALL_STATE(24)] = 712,
  [SMALL_STATE(25)] = 747,
  [SMALL_STATE(26)] = 775,
  [SMALL_STATE(27)] = 803,
  [SMALL_STATE(28)] = 831,
  [SMALL_STATE(29)] = 850,
  [SMALL_STATE(30)] = 879,
  [SMALL_STATE(31)] = 910,
  [SMALL_STATE(32)] = 929,
  [SMALL_STATE(33)] = 948,
  [SMALL_STATE(34)] = 967,
  [SMALL_STATE(35)] = 986,
  [SMALL_STATE(36)] = 1005,
  [SMALL_STATE(37)] = 1032,
  [SMALL_STATE(38)] = 1058,
  [SMALL_STATE(39)] = 1078,
  [SMALL_STATE(40)] = 1102,
  [SMALL_STATE(41)] = 1122,
  [SMALL_STATE(42)] = 1142,
  [SMALL_STATE(43)] = 1162,
  [SMALL_STATE(44)] = 1186,
  [SMALL_STATE(45)] = 1209,
  [SMALL_STATE(46)] = 1232,
  [SMALL_STATE(47)] = 1253,
  [SMALL_STATE(48)] = 1274,
  [SMALL_STATE(49)] = 1295,
  [SMALL_STATE(50)] = 1318,
  [SMALL_STATE(51)] = 1341,
  [SMALL_STATE(52)] = 1362,
  [SMALL_STATE(53)] = 1385,
  [SMALL_STATE(54)] = 1408,
  [SMALL_STATE(55)] = 1426,
  [SMALL_STATE(56)] = 1448,
  [SMALL_STATE(57)] = 1468,
  [SMALL_STATE(58)] = 1482,
  [SMALL_STATE(59)] = 1504,
  [SMALL_STATE(60)] = 1522,
  [SMALL_STATE(61)] = 1540,
  [SMALL_STATE(62)] = 1562,
  [SMALL_STATE(63)] = 1584,
  [SMALL_STATE(64)] = 1604,
  [SMALL_STATE(65)] = 1626,
  [SMALL_STATE(66)] = 1648,
  [SMALL_STATE(67)] = 1664,
  [SMALL_STATE(68)] = 1684,
  [SMALL_STATE(69)] = 1699,
  [SMALL_STATE(70)] = 1716,
  [SMALL_STATE(71)] = 1735,
  [SMALL_STATE(72)] = 1752,
  [SMALL_STATE(73)] = 1769,
  [SMALL_STATE(74)] = 1788,
  [SMALL_STATE(75)] = 1805,
  [SMALL_STATE(76)] = 1822,
  [SMALL_STATE(77)] = 1841,
  [SMALL_STATE(78)] = 1860,
  [SMALL_STATE(79)] = 1877,
  [SMALL_STATE(80)] = 1896,
  [SMALL_STATE(81)] = 1915,
  [SMALL_STATE(82)] = 1934,
  [SMALL_STATE(83)] = 1953,
  [SMALL_STATE(84)] = 1976,
  [SMALL_STATE(85)] = 1995,
  [SMALL_STATE(86)] = 2012,
  [SMALL_STATE(87)] = 2031,
  [SMALL_STATE(88)] = 2048,
  [SMALL_STATE(89)] = 2065,
  [SMALL_STATE(90)] = 2082,
  [SMALL_STATE(91)] = 2096,
  [SMALL_STATE(92)] = 2108,
  [SMALL_STATE(93)] = 2122,
  [SMALL_STATE(94)] = 2136,
  [SMALL_STATE(95)] = 2148,
  [SMALL_STATE(96)] = 2162,
  [SMALL_STATE(97)] = 2176,
  [SMALL_STATE(98)] = 2190,
  [SMALL_STATE(99)] = 2204,
  [SMALL_STATE(100)] = 2218,
  [SMALL_STATE(101)] = 2232,
  [SMALL_STATE(102)] = 2246,
  [SMALL_STATE(103)] = 2260,
  [SMALL_STATE(104)] = 2274,
  [SMALL_STATE(105)] = 2288,
  [SMALL_STATE(106)] = 2302,
  [SMALL_STATE(107)] = 2316,
  [SMALL_STATE(108)] = 2330,
  [SMALL_STATE(109)] = 2344,
  [SMALL_STATE(110)] = 2358,
  [SMALL_STATE(111)] = 2372,
  [SMALL_STATE(112)] = 2386,
  [SMALL_STATE(113)] = 2400,
  [SMALL_STATE(114)] = 2412,
  [SMALL_STATE(115)] = 2426,
  [SMALL_STATE(116)] = 2438,
  [SMALL_STATE(117)] = 2452,
  [SMALL_STATE(118)] = 2464,
  [SMALL_STATE(119)] = 2478,
  [SMALL_STATE(120)] = 2492,
  [SMALL_STATE(121)] = 2506,
  [SMALL_STATE(122)] = 2517,
  [SMALL_STATE(123)] = 2528,
  [SMALL_STATE(124)] = 2539,
  [SMALL_STATE(125)] = 2550,
  [SMALL_STATE(126)] = 2561,
  [SMALL_STATE(127)] = 2572,
  [SMALL_STATE(128)] = 2583,
  [SMALL_STATE(129)] = 2594,
  [SMALL_STATE(130)] = 2605,
  [SMALL_STATE(131)] = 2616,
  [SMALL_STATE(132)] = 2627,
  [SMALL_STATE(133)] = 2638,
  [SMALL_STATE(134)] = 2649,
  [SMALL_STATE(135)] = 2660,
  [SMALL_STATE(136)] = 2671,
  [SMALL_STATE(137)] = 2682,
  [SMALL_STATE(138)] = 2693,
  [SMALL_STATE(139)] = 2704,
  [SMALL_STATE(140)] = 2715,
  [SMALL_STATE(141)] = 2726,
  [SMALL_STATE(142)] = 2737,
  [SMALL_STATE(143)] = 2748,
  [SMALL_STATE(144)] = 2759,
  [SMALL_STATE(145)] = 2770,
  [SMALL_STATE(146)] = 2781,
  [SMALL_STATE(147)] = 2792,
  [SMALL_STATE(148)] = 2803,
  [SMALL_STATE(149)] = 2814,
  [SMALL_STATE(150)] = 2825,
  [SMALL_STATE(151)] = 2836,
  [SMALL_STATE(152)] = 2847,
  [SMALL_STATE(153)] = 2858,
  [SMALL_STATE(154)] = 2869,
  [SMALL_STATE(155)] = 2880,
  [SMALL_STATE(156)] = 2891,
  [SMALL_STATE(157)] = 2902,
  [SMALL_STATE(158)] = 2913,
  [SMALL_STATE(159)] = 2924,
  [SMALL_STATE(160)] = 2935,
  [SMALL_STATE(161)] = 2946,
  [SMALL_STATE(162)] = 2957,
  [SMALL_STATE(163)] = 2968,
  [SMALL_STATE(164)] = 2979,
  [SMALL_STATE(165)] = 2990,
  [SMALL_STATE(166)] = 3001,
  [SMALL_STATE(167)] = 3012,
  [SMALL_STATE(168)] = 3023,
  [SMALL_STATE(169)] = 3034,
  [SMALL_STATE(170)] = 3045,
  [SMALL_STATE(171)] = 3056,
  [SMALL_STATE(172)] = 3067,
  [SMALL_STATE(173)] = 3078,
  [SMALL_STATE(174)] = 3089,
  [SMALL_STATE(175)] = 3100,
  [SMALL_STATE(176)] = 3111,
  [SMALL_STATE(177)] = 3122,
  [SMALL_STATE(178)] = 3133,
  [SMALL_STATE(179)] = 3144,
  [SMALL_STATE(180)] = 3155,
  [SMALL_STATE(181)] = 3166,
  [SMALL_STATE(182)] = 3177,
  [SMALL_STATE(183)] = 3188,
  [SMALL_STATE(184)] = 3199,
  [SMALL_STATE(185)] = 3210,
  [SMALL_STATE(186)] = 3221,
  [SMALL_STATE(187)] = 3232,
  [SMALL_STATE(188)] = 3245,
  [SMALL_STATE(189)] = 3258,
  [SMALL_STATE(190)] = 3268,
  [SMALL_STATE(191)] = 3276,
  [SMALL_STATE(192)] = 3288,
  [SMALL_STATE(193)] = 3300,
  [SMALL_STATE(194)] = 3312,
  [SMALL_STATE(195)] = 3324,
  [SMALL_STATE(196)] = 3336,
  [SMALL_STATE(197)] = 3343,
  [SMALL_STATE(198)] = 3354,
  [SMALL_STATE(199)] = 3364,
  [SMALL_STATE(200)] = 3371,
  [SMALL_STATE(201)] = 3378,
  [SMALL_STATE(202)] = 3385,
  [SMALL_STATE(203)] = 3392,
  [SMALL_STATE(204)] = 3399,
  [SMALL_STATE(205)] = 3406,
  [SMALL_STATE(206)] = 3413,
  [SMALL_STATE(207)] = 3417,
  [SMALL_STATE(208)] = 3421,
  [SMALL_STATE(209)] = 3425,
  [SMALL_STATE(210)] = 3429,
  [SMALL_STATE(211)] = 3433,
  [SMALL_STATE(212)] = 3437,
  [SMALL_STATE(213)] = 3441,
  [SMALL_STATE(214)] = 3445,
  [SMALL_STATE(215)] = 3449,
  [SMALL_STATE(216)] = 3453,
  [SMALL_STATE(217)] = 3457,
  [SMALL_STATE(218)] = 3461,
  [SMALL_STATE(219)] = 3465,
  [SMALL_STATE(220)] = 3469,
  [SMALL_STATE(221)] = 3473,
  [SMALL_STATE(222)] = 3477,
  [SMALL_STATE(223)] = 3481,
  [SMALL_STATE(224)] = 3485,
  [SMALL_STATE(225)] = 3489,
  [SMALL_STATE(226)] = 3493,
  [SMALL_STATE(227)] = 3497,
  [SMALL_STATE(228)] = 3501,
  [SMALL_STATE(229)] = 3505,
  [SMALL_STATE(230)] = 3509,
  [SMALL_STATE(231)] = 3513,
  [SMALL_STATE(232)] = 3517,
  [SMALL_STATE(233)] = 3521,
  [SMALL_STATE(234)] = 3525,
  [SMALL_STATE(235)] = 3529,
  [SMALL_STATE(236)] = 3533,
  [SMALL_STATE(237)] = 3537,
  [SMALL_STATE(238)] = 3541,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_entity, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_entity, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_attr, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2, .production_id = 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_attr, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_attr, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(85),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(89),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(46),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(47),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guide_orientation, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_entity, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_entity, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_entity, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_geometry, 1, .production_id = 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 1, .production_id = 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 7),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_guide, 1, .production_id = 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 7),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_absolute, 1, .production_id = 6),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_absolute, 2, .production_id = 8),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 11),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_relative, 1, .production_id = 5),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guide_orientation, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_geometry, 2, .production_id = 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_guide, 2, .production_id = 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_entity, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 1, .production_id = 5),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 2, .production_id = 8),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 2, .production_id = 9),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 10),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3, .production_id = 12),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [740] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
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
