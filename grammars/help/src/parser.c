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
#define STATE_COUNT 262
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 176
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_COMMA = 40,
  anon_sym_id = 41,
  aux_sym__guideline_xy_attr_token1 = 42,
  aux_sym__guideline_xy_attr_token2 = 43,
  aux_sym__guideline_xy_attr_token3 = 44,
  aux_sym__x_attr_token1 = 45,
  anon_sym_decorate = 46,
  anon_sym_LPAREN = 47,
  anon_sym_RPAREN = 48,
  anon_sym_with = 49,
  anon_sym_delete = 50,
  anon_sym_label = 51,
  aux_sym__label_id_token1 = 52,
  anon_sym_DQUOTE = 53,
  aux_sym__label_id_token2 = 54,
  anon_sym_SQUOTE = 55,
  aux_sym__label_id_token3 = 56,
  anon_sym_decoration = 57,
  anon_sym_load = 58,
  anon_sym_project = 59,
  anon_sym_script = 60,
  anon_sym_save = 61,
  anon_sym_timestamp = 62,
  anon_sym_gzip = 63,
  anon_sym_export = 64,
  anon_sym_DOTh = 65,
  anon_sym_GT_GT = 66,
  anon_sym_panel = 67,
  anon_sym_svg = 68,
  anon_sym_dark = 69,
  anon_sym_origin = 70,
  anon_sym_background = 71,
  aux_sym__label_relative_token1 = 72,
  aux_sym_font_token1 = 73,
  aux_sym_fontsize_token1 = 74,
  anon_sym_baseline = 75,
  aux_sym__rgb_token1 = 76,
  aux_sym__rgba_token1 = 77,
  aux_sym__absolute_token1 = 78,
  aux_sym__x_token1 = 79,
  aux_sym__y_token1 = 80,
  aux_sym__offset_token1 = 81,
  aux_sym_string_token1 = 82,
  aux_sym_string_token2 = 83,
  aux_sym__string_token1 = 84,
  aux_sym__string_token2 = 85,
  aux_sym_identifier_token1 = 86,
  aux_sym_identifier_token2 = 87,
  anon_sym_stretch = 88,
  aux_sym_stretch_token1 = 89,
  anon_sym_scale = 90,
  sym_command = 91,
  sym_new = 92,
  sym_module = 93,
  sym__input_entity = 94,
  sym__output_entity = 95,
  sym__parameter_entity = 96,
  sym__light_entity = 97,
  sym__widget_entity = 98,
  sym__component_entity = 99,
  sym__guide_entity = 100,
  sym__new_guide_orientation = 101,
  sym__new_guideline_absolute = 102,
  sym__new_guideline_relative = 103,
  sym__new_guideline_geometry = 104,
  sym__new_guideline_guide = 105,
  sym_set = 106,
  sym__module_attr = 107,
  sym__component_attr = 108,
  sym__label_attr = 109,
  sym__decoration_attr = 110,
  sym__guideline_attr = 111,
  sym__guideline_xy_attr = 112,
  sym__x_attr = 113,
  sym__y_attr = 114,
  sym__xy_attr = 115,
  sym__offset_attr = 116,
  sym_decorate = 117,
  sym__component = 118,
  sym_decoration = 119,
  sym_delete = 120,
  sym__guideline_id = 121,
  sym__input_id = 122,
  sym__output_id = 123,
  sym__parameter_id = 124,
  sym__light_id = 125,
  sym__widget_id = 126,
  sym__label_id = 127,
  sym__decoration_id = 128,
  sym__component_id = 129,
  sym__guide_id = 130,
  sym_load = 131,
  sym_save = 132,
  sym_project = 133,
  sym__save_options = 134,
  sym_script = 135,
  sym_export = 136,
  sym__module_export = 137,
  sym_panel = 138,
  sym_svg = 139,
  sym_origin = 140,
  sym_background = 141,
  sym_label = 142,
  sym__label_string = 143,
  sym__label_absolute = 144,
  sym__label_relative = 145,
  sym__label_geometry = 146,
  sym_font = 147,
  sym_fontsize = 148,
  sym_halign = 149,
  sym_valign = 150,
  sym__align = 151,
  sym_colour = 152,
  sym__rgb = 153,
  sym__rgba = 154,
  sym_name = 155,
  sym_part = 156,
  sym_rgb = 157,
  sym_rgba = 158,
  sym_absolute = 159,
  sym__absolute = 160,
  sym__relative = 161,
  sym__x = 162,
  sym__y = 163,
  sym_x = 164,
  sym_y = 165,
  sym_xy = 166,
  sym__xy = 167,
  sym__offset = 168,
  sym_offset = 169,
  sym_string = 170,
  sym__string = 171,
  sym_identifier = 172,
  sym_stretch = 173,
  sym_scale = 174,
  aux_sym_command_repeat1 = 175,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_id] = "id",
  [aux_sym__guideline_xy_attr_token1] = "_guideline_xy_attr_token1",
  [aux_sym__guideline_xy_attr_token2] = "_guideline_xy_attr_token2",
  [aux_sym__guideline_xy_attr_token3] = "reference",
  [aux_sym__x_attr_token1] = "_x_attr_token1",
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
  [anon_sym_stretch] = "stretch",
  [aux_sym_stretch_token1] = "stretch_token1",
  [anon_sym_scale] = "scale",
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
  [sym__decoration_attr] = "_decoration_attr",
  [sym__guideline_attr] = "_guideline_attr",
  [sym__guideline_xy_attr] = "xy",
  [sym__x_attr] = "x",
  [sym__y_attr] = "y",
  [sym__xy_attr] = "xy",
  [sym__offset_attr] = "_offset_attr",
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
  [sym_stretch] = "stretch",
  [sym_scale] = "scale",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_id] = anon_sym_id,
  [aux_sym__guideline_xy_attr_token1] = aux_sym__guideline_xy_attr_token1,
  [aux_sym__guideline_xy_attr_token2] = aux_sym__guideline_xy_attr_token2,
  [aux_sym__guideline_xy_attr_token3] = aux_sym__guideline_xy_attr_token3,
  [aux_sym__x_attr_token1] = aux_sym__x_attr_token1,
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
  [anon_sym_stretch] = anon_sym_stretch,
  [aux_sym_stretch_token1] = aux_sym_stretch_token1,
  [anon_sym_scale] = anon_sym_scale,
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
  [sym__decoration_attr] = sym__decoration_attr,
  [sym__guideline_attr] = sym__guideline_attr,
  [sym__guideline_xy_attr] = sym_xy,
  [sym__x_attr] = sym_x,
  [sym__y_attr] = sym_y,
  [sym__xy_attr] = sym_xy,
  [sym__offset_attr] = sym__offset_attr,
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
  [sym_stretch] = sym_stretch,
  [sym_scale] = sym_scale,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
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
  [anon_sym_stretch] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stretch_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_scale] = {
    .visible = true,
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
  [sym__decoration_attr] = {
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
  [sym__offset_attr] = {
    .visible = false,
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
  [sym_stretch] = {
    .visible = true,
    .named = true,
  },
  [sym_scale] = {
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
  [35] = 14,
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
  [49] = 18,
  [50] = 50,
  [51] = 15,
  [52] = 13,
  [53] = 16,
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
  [70] = 26,
  [71] = 5,
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
  [95] = 38,
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
  [202] = 17,
  [203] = 15,
  [204] = 204,
  [205] = 205,
  [206] = 13,
  [207] = 18,
  [208] = 16,
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
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 249,
  [261] = 261,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(307);
      if (lookahead == '"') ADVANCE(721);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '\'') ADVANCE(725);
      if (lookahead == '(') ADVANCE(655);
      if (lookahead == ')') ADVANCE(656);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '0') ADVANCE(536);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'g') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(501);
      if (lookahead == 'y') ADVANCE(505);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == ')') ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(800);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(798);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(801);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(799);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(797);
      if (lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(794);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'H') ADVANCE(794);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == 'H') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(488);
      if (lookahead == 'U') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(169);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(756);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'b') ADVANCE(629);
      if (lookahead == 'm') ADVANCE(620);
      if (lookahead == 't') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(794);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(794);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(761);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(239);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(758);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(215);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(755);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(657);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(500);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(804);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(239);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 138:
      if (lookahead == 'j') ADVANCE(74);
      END_STATE();
    case 139:
      if (lookahead == 'k') ADVANCE(759);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(757);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(797);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(488);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(487);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(794);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(796);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(762);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(521);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(523);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(747);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(746);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(796);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(795);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(748);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(738);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(737);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(795);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(125);
      if (lookahead == 'z') ADVANCE(128);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 258:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 259:
      if (lookahead == 'w') ADVANCE(308);
      END_STATE();
    case 260:
      if (lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 261:
      if (lookahead == 'x') ADVANCE(228);
      END_STATE();
    case 262:
      if (lookahead == 'z') ADVANCE(71);
      END_STATE();
    case 263:
      if (lookahead == 'z') ADVANCE(198);
      END_STATE();
    case 264:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(797);
      if (lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 285:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 286:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 287:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 288:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 289:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 290:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 291:
      if (eof) ADVANCE(307);
      if (lookahead == ' ') SKIP(291)
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '\'') ADVANCE(726);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'e') ADVANCE(717);
      if (lookahead == 'f') ADVANCE(698);
      if (lookahead == 'h') ADVANCE(672);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 's') ADVANCE(668);
      if (lookahead == 't') ADVANCE(682);
      if (lookahead == 'v') ADVANCE(673);
      if (lookahead == 'x') ADVANCE(502);
      if (lookahead == 'y') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(666);
      if (lookahead != 0) ADVANCE(720);
      END_STATE();
    case 292:
      if (eof) ADVANCE(307);
      if (lookahead == ' ') SKIP(292)
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '\'') ADVANCE(726);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'e') ADVANCE(717);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 's') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(667);
      if (lookahead != 0) ADVANCE(720);
      END_STATE();
    case 293:
      if (eof) ADVANCE(307);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(655);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == 'x') ADVANCE(503);
      if (lookahead == 'y') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(293)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 294:
      if (eof) ADVANCE(307);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(655);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 295:
      if (eof) ADVANCE(307);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == 'x') ADVANCE(503);
      if (lookahead == 'y') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(295)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 296:
      if (eof) ADVANCE(307);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(655);
      if (lookahead == ')') ADVANCE(656);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(501);
      if (lookahead == 'y') ADVANCE(505);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 297:
      if (eof) ADVANCE(307);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(191);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(297)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 298:
      if (eof) ADVANCE(307);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(769);
      if (lookahead == 'e') ADVANCE(787);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'n') ADVANCE(770);
      if (lookahead == 's') ADVANCE(764);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(298)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 299:
      if (eof) ADVANCE(307);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '(') ADVANCE(655);
      if (lookahead == 'd') ADVANCE(769);
      if (lookahead == 'e') ADVANCE(787);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'n') ADVANCE(770);
      if (lookahead == 's') ADVANCE(764);
      if (lookahead == 'x') ADVANCE(504);
      if (lookahead == 'y') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(299)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 300:
      if (eof) ADVANCE(307);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == 'b') ADVANCE(430);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead == 'v') ADVANCE(398);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(300)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 301:
      if (eof) ADVANCE(307);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'b') ADVANCE(574);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'l') ADVANCE(557);
      if (lookahead == 'm') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead == 't') ADVANCE(577);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(301)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 302:
      if (eof) ADVANCE(307);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'b') ADVANCE(434);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'd') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(419);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(418);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(302)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 303:
      if (eof) ADVANCE(307);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'b') ADVANCE(629);
      if (lookahead == 'd') ADVANCE(606);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == 'l') ADVANCE(624);
      if (lookahead == 'm') ADVANCE(620);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead == 't') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(303)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 304:
      if (eof) ADVANCE(307);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'c') ADVANCE(605);
      if (lookahead == 'd') ADVANCE(606);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 'r') ADVANCE(619);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(304)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 305:
      if (eof) ADVANCE(307);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(305)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 306:
      if (eof) ADVANCE(307);
      if (lookahead == '@') ADVANCE(326);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(306)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__new_guideline_absolute_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__new_guideline_geometry_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead == 'l') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'f') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'f') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'g') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'g') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'h') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'h') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'v') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'v') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'w') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'w') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'x') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'x') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'z') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(486);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(169);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(509);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_halign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_valign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(540);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(539);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == 'H') ADVANCE(535);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(535);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == '.') ADVANCE(545);
      if (lookahead == 'H') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == 'H') ADVANCE(542);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == 'H') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == 'H') ADVANCE(542);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(593);
      if (lookahead == 'e') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'f') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'g') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'h') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'i') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'i') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'l') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'm') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'n') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'p') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'p') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'v') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'w') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'x') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'c') ADVANCE(625);
      if (lookahead == 'l') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'o') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == 'r') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'f') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'g') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'h') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'l') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'm') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'n') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'p') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'p') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'v') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'w') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'x') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '\'') ADVANCE(726);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'e') ADVANCE(717);
      if (lookahead == 'f') ADVANCE(698);
      if (lookahead == 'h') ADVANCE(672);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 's') ADVANCE(668);
      if (lookahead == 't') ADVANCE(682);
      if (lookahead == 'v') ADVANCE(673);
      if (lookahead == 'x') ADVANCE(502);
      if (lookahead == 'y') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '\'') ADVANCE(726);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'e') ADVANCE(717);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 's') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(715);
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead == 'i') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(715);
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'c') ADVANCE(700);
      if (lookahead == 'l') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'd') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'p') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'v') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'w') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'z') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(724);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(728);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(720);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(785);
      if (lookahead == 'e') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(784);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(776);
      if (lookahead == 'l') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_stretch_token1);
      if (lookahead == '.') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_stretch_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_scale);
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
  [5] = {.lex_state = 291},
  [6] = {.lex_state = 300},
  [7] = {.lex_state = 301},
  [8] = {.lex_state = 302},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 301},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 295},
  [14] = {.lex_state = 293},
  [15] = {.lex_state = 295},
  [16] = {.lex_state = 295},
  [17] = {.lex_state = 295},
  [18] = {.lex_state = 295},
  [19] = {.lex_state = 304},
  [20] = {.lex_state = 304},
  [21] = {.lex_state = 304},
  [22] = {.lex_state = 297},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 304},
  [26] = {.lex_state = 296},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 305},
  [29] = {.lex_state = 303},
  [30] = {.lex_state = 303},
  [31] = {.lex_state = 298},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 294},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 297},
  [38] = {.lex_state = 299},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 296},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 296},
  [44] = {.lex_state = 296},
  [45] = {.lex_state = 296},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 294},
  [49] = {.lex_state = 294},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 294},
  [52] = {.lex_state = 294},
  [53] = {.lex_state = 294},
  [54] = {.lex_state = 294},
  [55] = {.lex_state = 297},
  [56] = {.lex_state = 294},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 306},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 296},
  [62] = {.lex_state = 297},
  [63] = {.lex_state = 298},
  [64] = {.lex_state = 298},
  [65] = {.lex_state = 298},
  [66] = {.lex_state = 298},
  [67] = {.lex_state = 298},
  [68] = {.lex_state = 298},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 297},
  [71] = {.lex_state = 292},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 297},
  [74] = {.lex_state = 298},
  [75] = {.lex_state = 297},
  [76] = {.lex_state = 298},
  [77] = {.lex_state = 296},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 297},
  [80] = {.lex_state = 297},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 297},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 298},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 298},
  [88] = {.lex_state = 298},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 298},
  [91] = {.lex_state = 298},
  [92] = {.lex_state = 298},
  [93] = {.lex_state = 296},
  [94] = {.lex_state = 296},
  [95] = {.lex_state = 298},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 298},
  [98] = {.lex_state = 305},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 296},
  [101] = {.lex_state = 305},
  [102] = {.lex_state = 298},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 298},
  [105] = {.lex_state = 298},
  [106] = {.lex_state = 298},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 296},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 296},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 296},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 296},
  [121] = {.lex_state = 296},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 306},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 298},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 306},
  [129] = {.lex_state = 306},
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
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 23},
  [201] = {.lex_state = 23},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 296},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 296},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 300},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 301},
  [214] = {.lex_state = 300},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 301},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 297},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 297},
  [221] = {.lex_state = 300},
  [222] = {.lex_state = 295},
  [223] = {.lex_state = 301},
  [224] = {.lex_state = 293},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 301},
  [229] = {.lex_state = 300},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 300},
  [232] = {.lex_state = 295},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 298},
  [237] = {.lex_state = 301},
  [238] = {.lex_state = 301},
  [239] = {.lex_state = 301},
  [240] = {.lex_state = 301},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 723},
  [244] = {.lex_state = 293},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 727},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 293},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 305},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 298},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [aux_sym__guideline_xy_attr_token1] = ACTIONS(1),
    [aux_sym__guideline_xy_attr_token2] = ACTIONS(1),
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
    [anon_sym_stretch] = ACTIONS(1),
    [aux_sym_stretch_token1] = ACTIONS(1),
    [anon_sym_scale] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(248),
    [sym_new] = STATE(24),
    [sym_set] = STATE(24),
    [sym_decorate] = STATE(24),
    [sym_delete] = STATE(24),
    [sym_load] = STATE(24),
    [sym_save] = STATE(24),
    [sym_export] = STATE(24),
    [aux_sym_command_repeat1] = STATE(24),
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
  [0] = 17,
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
      anon_sym_decoration,
    ACTIONS(39), 1,
      anon_sym_origin,
    ACTIONS(41), 1,
      anon_sym_background,
    STATE(7), 1,
      sym__guide_id,
    STATE(9), 1,
      sym__label_id,
    STATE(33), 1,
      sym__decoration_id,
    STATE(42), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(135), 7,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__decoration_attr,
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
  [69] = 10,
    ACTIONS(45), 1,
      anon_sym_module,
    ACTIONS(47), 1,
      anon_sym_input,
    ACTIONS(49), 1,
      anon_sym_output,
    ACTIONS(51), 1,
      anon_sym_parameter,
    ACTIONS(53), 1,
      anon_sym_light,
    ACTIONS(55), 1,
      anon_sym_widget,
    ACTIONS(57), 1,
      anon_sym_guide,
    ACTIONS(59), 1,
      anon_sym_label,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(134), 8,
      sym_module,
      sym__input_entity,
      sym__output_entity,
      sym__parameter_entity,
      sym__light_entity,
      sym__widget_entity,
      sym__guide_entity,
      sym_label,
  [114] = 10,
    ACTIONS(63), 1,
      anon_sym_input,
    ACTIONS(65), 1,
      anon_sym_output,
    ACTIONS(67), 1,
      anon_sym_parameter,
    ACTIONS(69), 1,
      anon_sym_light,
    ACTIONS(71), 1,
      anon_sym_widget,
    ACTIONS(73), 1,
      anon_sym_guide,
    ACTIONS(75), 1,
      anon_sym_label,
    ACTIONS(77), 1,
      anon_sym_decoration,
    ACTIONS(61), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(139), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [159] = 5,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym__label_id_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 18,
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
  [192] = 6,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(93), 2,
      anon_sym_vertical,
      anon_sym_horizontal,
    STATE(184), 3,
      sym__new_guide_orientation,
      sym__new_guideline_geometry,
      sym__new_guideline_guide,
    ACTIONS(91), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    ACTIONS(95), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [226] = 7,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(107), 1,
      anon_sym_id,
    ACTIONS(109), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(168), 1,
      sym__guideline_xy_attr,
    ACTIONS(101), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    ACTIONS(105), 8,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guideline_xy_attr_token3,
  [261] = 3,
    ACTIONS(115), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(113), 16,
      anon_sym_new,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_set,
      anon_sym_id,
      aux_sym__guideline_xy_attr_token3,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [288] = 11,
    ACTIONS(119), 1,
      anon_sym_x,
    ACTIONS(121), 1,
      anon_sym_y,
    ACTIONS(123), 1,
      anon_sym_xy,
    ACTIONS(125), 1,
      anon_sym_text,
    ACTIONS(127), 1,
      anon_sym_font,
    ACTIONS(129), 1,
      anon_sym_size,
    ACTIONS(131), 1,
      anon_sym_halign,
    ACTIONS(133), 1,
      anon_sym_valign,
    ACTIONS(135), 1,
      anon_sym_align,
    ACTIONS(137), 2,
      anon_sym_colour,
      anon_sym_color,
    ACTIONS(117), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [330] = 2,
    ACTIONS(141), 1,
      anon_sym_x,
    ACTIONS(139), 18,
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
  [354] = 2,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(145), 16,
      anon_sym_new,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_set,
      anon_sym_id,
      aux_sym__guideline_xy_attr_token3,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [378] = 2,
    ACTIONS(149), 1,
      anon_sym_x,
    ACTIONS(147), 18,
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
  [402] = 5,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(157), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(153), 12,
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
  [430] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(157), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(50), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(161), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_x,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [458] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(157), 2,
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
  [486] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(157), 2,
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
  [514] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(157), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(173), 12,
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
  [542] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(157), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(177), 12,
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
  [570] = 6,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(161), 1,
      sym__x_attr,
    ACTIONS(185), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(181), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [599] = 6,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      anon_sym_AT,
    ACTIONS(197), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(150), 1,
      sym__xy_attr,
    ACTIONS(195), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(191), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [628] = 6,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      anon_sym_AT,
    ACTIONS(197), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(161), 1,
      sym__xy_attr,
    ACTIONS(195), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(181), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [657] = 7,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      aux_sym__absolute_token1,
    ACTIONS(205), 1,
      aux_sym__x_token1,
    STATE(76), 1,
      sym_xy,
    STATE(247), 1,
      sym__x,
    STATE(126), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [688] = 9,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      anon_sym_new,
    ACTIONS(212), 1,
      anon_sym_set,
    ACTIONS(215), 1,
      anon_sym_decorate,
    ACTIONS(218), 1,
      anon_sym_delete,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(224), 1,
      anon_sym_save,
    ACTIONS(227), 1,
      anon_sym_export,
    STATE(23), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [723] = 9,
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
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(23), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [758] = 6,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      sym__x_attr,
    ACTIONS(185), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(191), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [787] = 2,
    ACTIONS(234), 2,
      sym_width,
      anon_sym_x,
    ACTIONS(232), 13,
      ts_builtin_sym_end,
      anon_sym_new,
      sym_height,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [807] = 2,
    ACTIONS(238), 1,
      anon_sym_x,
    ACTIONS(236), 14,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [827] = 6,
    ACTIONS(205), 1,
      aux_sym__x_token1,
    ACTIONS(242), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      aux_sym__label_relative_token1,
    STATE(252), 1,
      sym__x,
    STATE(136), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(240), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [855] = 6,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_AT,
    ACTIONS(250), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(150), 1,
      sym__y_attr,
    ACTIONS(248), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
    ACTIONS(191), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [883] = 6,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_AT,
    ACTIONS(250), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(161), 1,
      sym__y_attr,
    ACTIONS(248), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
    ACTIONS(181), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [911] = 8,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      aux_sym_font_token1,
    ACTIONS(258), 1,
      aux_sym__rgb_token1,
    ACTIONS(260), 1,
      aux_sym__rgba_token1,
    STATE(111), 1,
      sym_rgba,
    STATE(112), 1,
      sym_rgb,
    STATE(194), 1,
      sym_name,
    ACTIONS(254), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [942] = 2,
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
  [961] = 6,
    ACTIONS(268), 1,
      anon_sym_x,
    ACTIONS(270), 1,
      anon_sym_y,
    ACTIONS(272), 1,
      anon_sym_xy,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(192), 2,
      sym_stretch,
      sym_scale,
    ACTIONS(266), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [988] = 2,
    ACTIONS(278), 1,
      anon_sym_x,
    ACTIONS(276), 13,
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
  [1007] = 6,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(50), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(161), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1034] = 2,
    ACTIONS(284), 1,
      anon_sym_x,
    ACTIONS(282), 13,
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
  [1053] = 7,
    ACTIONS(288), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      aux_sym__x_token1,
    ACTIONS(292), 1,
      aux_sym__y_token1,
    STATE(119), 1,
      sym_y,
    STATE(122), 1,
      sym_x,
    STATE(131), 1,
      sym_absolute,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1082] = 4,
    ACTIONS(256), 1,
      aux_sym_font_token1,
    STATE(60), 1,
      sym_name,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(296), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_x,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1105] = 2,
    ACTIONS(300), 1,
      anon_sym_x,
    ACTIONS(298), 13,
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
  [1124] = 2,
    ACTIONS(304), 1,
      anon_sym_x,
    ACTIONS(302), 13,
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
  [1143] = 3,
    STATE(161), 1,
      sym_valign,
    ACTIONS(306), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1163] = 6,
    ACTIONS(310), 1,
      anon_sym_name,
    ACTIONS(312), 1,
      anon_sym_x,
    ACTIONS(314), 1,
      anon_sym_y,
    ACTIONS(316), 1,
      anon_sym_xy,
    ACTIONS(318), 1,
      anon_sym_part,
    ACTIONS(308), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1189] = 3,
    STATE(193), 1,
      sym_halign,
    ACTIONS(322), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1209] = 3,
    STATE(161), 1,
      sym_halign,
    ACTIONS(322), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1229] = 3,
    STATE(161), 1,
      sym__align,
    ACTIONS(324), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1249] = 5,
    ACTIONS(326), 1,
      aux_sym__rgb_token1,
    ACTIONS(328), 1,
      aux_sym__rgba_token1,
    STATE(161), 1,
      sym_colour,
    STATE(110), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1273] = 5,
    ACTIONS(326), 1,
      aux_sym__rgb_token1,
    ACTIONS(328), 1,
      aux_sym__rgba_token1,
    STATE(191), 1,
      sym_colour,
    STATE(110), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1297] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      sym_identifier,
    ACTIONS(157), 2,
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
  [1320] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(157), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(177), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1343] = 2,
    ACTIONS(338), 1,
      anon_sym_x,
    ACTIONS(336), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1360] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(157), 2,
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
  [1383] = 5,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(157), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(153), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1406] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(157), 2,
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
  [1429] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(157), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(173), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1452] = 4,
    STATE(28), 1,
      sym__string,
    STATE(186), 1,
      sym__label_string,
    ACTIONS(342), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1473] = 5,
    ACTIONS(155), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(157), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(346), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1496] = 4,
    ACTIONS(350), 1,
      anon_sym_module,
    ACTIONS(352), 1,
      anon_sym_panel,
    STATE(144), 2,
      sym__module_export,
      sym_panel,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1517] = 4,
    ACTIONS(356), 1,
      anon_sym_AT,
    ACTIONS(358), 1,
      aux_sym__new_guideline_absolute_token1,
    STATE(195), 2,
      sym__new_guideline_absolute,
      sym__new_guideline_relative,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1538] = 4,
    ACTIONS(362), 1,
      anon_sym_project,
    ACTIONS(364), 1,
      anon_sym_script,
    STATE(142), 2,
      sym_project,
      sym_script,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1559] = 2,
    ACTIONS(368), 1,
      anon_sym_x,
    ACTIONS(366), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1576] = 3,
    STATE(161), 1,
      sym_string,
    ACTIONS(370), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1594] = 3,
    ACTIONS(374), 1,
      aux_sym__offset_token1,
    STATE(125), 1,
      sym_offset,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1612] = 5,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(145), 1,
      sym__component_entity,
    ACTIONS(378), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1634] = 5,
    ACTIONS(380), 1,
      aux_sym_font_token1,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(154), 1,
      sym__component_entity,
    ACTIONS(384), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1656] = 4,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 1,
      aux_sym__offset_token1,
    STATE(106), 1,
      sym__offset,
    ACTIONS(388), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1676] = 5,
    ACTIONS(380), 1,
      aux_sym_font_token1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(159), 1,
      sym__component_entity,
    ACTIONS(394), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1698] = 5,
    ACTIONS(380), 1,
      aux_sym_font_token1,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(167), 1,
      sym__component_entity,
    ACTIONS(398), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1720] = 5,
    ACTIONS(380), 1,
      aux_sym_font_token1,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(171), 1,
      sym__component_entity,
    ACTIONS(402), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1742] = 4,
    ACTIONS(406), 1,
      anon_sym_name,
    ACTIONS(408), 1,
      anon_sym_height,
    ACTIONS(410), 1,
      anon_sym_width,
    ACTIONS(404), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1762] = 1,
    ACTIONS(232), 11,
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
  [1776] = 5,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym__label_id_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1798] = 4,
    ACTIONS(414), 1,
      anon_sym_timestamp,
    ACTIONS(416), 1,
      anon_sym_gzip,
    STATE(165), 1,
      sym__save_options,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1818] = 3,
    ACTIONS(374), 1,
      aux_sym__offset_token1,
    STATE(124), 1,
      sym_offset,
    ACTIONS(418), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1836] = 4,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      aux_sym_font_token1,
    STATE(161), 1,
      sym_font,
    ACTIONS(181), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1855] = 3,
    ACTIONS(422), 1,
      aux_sym_fontsize_token1,
    STATE(161), 1,
      sym_fontsize,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1872] = 4,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    ACTIONS(428), 1,
      aux_sym_font_token1,
    STATE(187), 1,
      sym_part,
    ACTIONS(426), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1891] = 3,
    ACTIONS(432), 1,
      sym_height,
    ACTIONS(434), 1,
      sym_width,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1908] = 3,
    ACTIONS(438), 1,
      anon_sym_svg,
    STATE(155), 1,
      sym_svg,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1925] = 3,
    ACTIONS(292), 1,
      aux_sym__y_token1,
    STATE(130), 1,
      sym_y,
    ACTIONS(440), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1942] = 3,
    ACTIONS(290), 1,
      aux_sym__x_token1,
    STATE(130), 1,
      sym_x,
    ACTIONS(440), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1959] = 3,
    ACTIONS(444), 1,
      anon_sym_light,
    ACTIONS(446), 1,
      anon_sym_dark,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1976] = 3,
    ACTIONS(422), 1,
      aux_sym_fontsize_token1,
    STATE(199), 1,
      sym_fontsize,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1993] = 3,
    ACTIONS(452), 1,
      anon_sym_project,
    ACTIONS(454), 1,
      anon_sym_script,
    ACTIONS(450), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2010] = 4,
    ACTIONS(256), 1,
      aux_sym_font_token1,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym_name,
    ACTIONS(458), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2029] = 2,
    ACTIONS(462), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2044] = 6,
    ACTIONS(464), 1,
      anon_sym_input,
    ACTIONS(466), 1,
      anon_sym_output,
    ACTIONS(468), 1,
      anon_sym_parameter,
    ACTIONS(470), 1,
      anon_sym_light,
    ACTIONS(472), 1,
      anon_sym_widget,
    STATE(260), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [2067] = 4,
    ACTIONS(256), 1,
      aux_sym_font_token1,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_name,
    ACTIONS(476), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2086] = 4,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      aux_sym_font_token1,
    STATE(150), 1,
      sym_name,
    ACTIONS(191), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2105] = 3,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym_decoration,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2122] = 4,
    ACTIONS(420), 1,
      aux_sym_font_token1,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    STATE(158), 1,
      sym_font,
    ACTIONS(484), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2141] = 4,
    ACTIONS(420), 1,
      aux_sym_font_token1,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_font,
    ACTIONS(488), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2160] = 4,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(428), 1,
      aux_sym_font_token1,
    STATE(150), 1,
      sym_part,
    ACTIONS(191), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2179] = 3,
    ACTIONS(492), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(233), 1,
      sym__offset_attr,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2196] = 3,
    ACTIONS(492), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(170), 1,
      sym__offset_attr,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2213] = 4,
    ACTIONS(256), 1,
      aux_sym_font_token1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_name,
    ACTIONS(296), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2232] = 3,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym__component,
    ACTIONS(494), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2249] = 4,
    ACTIONS(420), 1,
      aux_sym_font_token1,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_font,
    ACTIONS(500), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2268] = 2,
    ACTIONS(504), 1,
      aux_sym__new_guideline_geometry_token1,
    ACTIONS(502), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2282] = 2,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(506), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2296] = 2,
    ACTIONS(512), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(510), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2310] = 2,
    ACTIONS(516), 1,
      aux_sym__new_guideline_geometry_token1,
    ACTIONS(514), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2324] = 2,
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
  [2338] = 2,
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
  [2352] = 2,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    ACTIONS(528), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2366] = 2,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    ACTIONS(532), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2380] = 2,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(536), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2394] = 1,
    ACTIONS(538), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2406] = 2,
    ACTIONS(542), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2420] = 2,
    ACTIONS(546), 1,
      anon_sym_timestamp,
    ACTIONS(544), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2434] = 2,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(548), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2448] = 2,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(552), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2462] = 2,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(552), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2476] = 2,
    ACTIONS(560), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(558), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2490] = 2,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2504] = 2,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2518] = 1,
    ACTIONS(568), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2530] = 1,
    ACTIONS(570), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2542] = 2,
    ACTIONS(574), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(572), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2556] = 2,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(576), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2570] = 2,
    ACTIONS(582), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2584] = 2,
    ACTIONS(586), 1,
      sym_width,
    ACTIONS(584), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2598] = 2,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(576), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2612] = 2,
    ACTIONS(592), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(590), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2626] = 1,
    ACTIONS(594), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2638] = 1,
    ACTIONS(596), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2650] = 2,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(600), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [2664] = 1,
    ACTIONS(602), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2676] = 2,
    ACTIONS(606), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(604), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2690] = 2,
    ACTIONS(610), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(608), 8,
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
    ACTIONS(576), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2726] = 1,
    ACTIONS(614), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2737] = 1,
    ACTIONS(616), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2748] = 1,
    ACTIONS(618), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2759] = 1,
    ACTIONS(620), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2770] = 1,
    ACTIONS(622), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2781] = 1,
    ACTIONS(624), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2792] = 1,
    ACTIONS(626), 8,
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
    ACTIONS(632), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2836] = 1,
    ACTIONS(634), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2847] = 1,
    ACTIONS(636), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2858] = 1,
    ACTIONS(638), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2869] = 1,
    ACTIONS(640), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2880] = 1,
    ACTIONS(642), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2891] = 1,
    ACTIONS(644), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2902] = 1,
    ACTIONS(646), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2913] = 1,
    ACTIONS(648), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2924] = 1,
    ACTIONS(650), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2935] = 1,
    ACTIONS(510), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2946] = 1,
    ACTIONS(584), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2957] = 1,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2968] = 1,
    ACTIONS(652), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2979] = 1,
    ACTIONS(654), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2990] = 1,
    ACTIONS(572), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3001] = 1,
    ACTIONS(656), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3012] = 1,
    ACTIONS(658), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3023] = 1,
    ACTIONS(660), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3034] = 1,
    ACTIONS(662), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3045] = 1,
    ACTIONS(664), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3056] = 1,
    ACTIONS(666), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3067] = 1,
    ACTIONS(668), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3078] = 1,
    ACTIONS(670), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3089] = 1,
    ACTIONS(672), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3100] = 1,
    ACTIONS(674), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3111] = 1,
    ACTIONS(676), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3122] = 1,
    ACTIONS(344), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3133] = 1,
    ACTIONS(678), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3144] = 1,
    ACTIONS(680), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3155] = 1,
    ACTIONS(682), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3166] = 1,
    ACTIONS(684), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3177] = 1,
    ACTIONS(686), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3188] = 1,
    ACTIONS(688), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3199] = 1,
    ACTIONS(690), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3210] = 1,
    ACTIONS(692), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3221] = 1,
    ACTIONS(694), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3232] = 1,
    ACTIONS(696), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3243] = 1,
    ACTIONS(698), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3254] = 1,
    ACTIONS(700), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3265] = 1,
    ACTIONS(702), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3276] = 1,
    ACTIONS(704), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3287] = 1,
    ACTIONS(558), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3298] = 1,
    ACTIONS(706), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3309] = 1,
    ACTIONS(708), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3320] = 1,
    ACTIONS(710), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3331] = 1,
    ACTIONS(712), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3342] = 1,
    ACTIONS(714), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3353] = 1,
    ACTIONS(716), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3364] = 1,
    ACTIONS(718), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3375] = 1,
    ACTIONS(720), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3386] = 1,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3397] = 1,
    ACTIONS(722), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3408] = 1,
    ACTIONS(552), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3419] = 1,
    ACTIONS(724), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3430] = 1,
    ACTIONS(726), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3441] = 1,
    ACTIONS(728), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3452] = 1,
    ACTIONS(730), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3463] = 1,
    ACTIONS(732), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3474] = 3,
    ACTIONS(734), 1,
      anon_sym_AT,
    ACTIONS(738), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(736), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
  [3487] = 3,
    ACTIONS(560), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(740), 1,
      anon_sym_AT,
    ACTIONS(742), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
  [3500] = 3,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(157), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3512] = 3,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(157), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3524] = 2,
    STATE(179), 1,
      sym_valign,
    ACTIONS(306), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3534] = 1,
    ACTIONS(744), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [3542] = 3,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(157), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3554] = 3,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(157), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3566] = 3,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(157), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3578] = 1,
    ACTIONS(746), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3585] = 3,
    ACTIONS(748), 1,
      aux_sym__rgb_token1,
    ACTIONS(750), 1,
      aux_sym__rgba_token1,
    STATE(177), 2,
      sym__rgb,
      sym__rgba,
  [3596] = 3,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      aux_sym__offset_token1,
    STATE(242), 1,
      sym__offset,
  [3606] = 2,
    ACTIONS(756), 1,
      anon_sym_stretch,
    ACTIONS(758), 1,
      anon_sym_scale,
  [3613] = 2,
    ACTIONS(492), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(173), 1,
      sym__offset_attr,
  [3620] = 2,
    ACTIONS(760), 1,
      aux_sym__rgb_token1,
    STATE(196), 1,
      sym_rgb,
  [3627] = 2,
    ACTIONS(260), 1,
      aux_sym__rgba_token1,
    STATE(196), 1,
      sym_rgba,
  [3634] = 2,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      aux_sym__guideline_xy_attr_token2,
  [3641] = 2,
    ACTIONS(766), 1,
      aux_sym_font_token1,
    STATE(149), 1,
      sym_name,
  [3648] = 2,
    ACTIONS(768), 1,
      aux_sym__y_token1,
    STATE(97), 1,
      sym__y,
  [3655] = 2,
    ACTIONS(766), 1,
      aux_sym_font_token1,
    STATE(138), 1,
      sym_name,
  [3662] = 2,
    ACTIONS(768), 1,
      aux_sym__y_token1,
    STATE(105), 1,
      sym__y,
  [3669] = 1,
    ACTIONS(770), 1,
      aux_sym_stretch_token1,
  [3673] = 1,
    ACTIONS(772), 1,
      sym_width,
  [3677] = 1,
    ACTIONS(560), 1,
      aux_sym__guideline_xy_attr_token1,
  [3681] = 1,
    ACTIONS(774), 1,
      aux_sym__absolute_token1,
  [3685] = 1,
    ACTIONS(776), 1,
      anon_sym_COMMA,
  [3689] = 1,
    ACTIONS(778), 1,
      anon_sym_timestamp,
  [3693] = 1,
    ACTIONS(778), 1,
      anon_sym_gzip,
  [3697] = 1,
    ACTIONS(780), 1,
      aux_sym__guideline_xy_attr_token1,
  [3701] = 1,
    ACTIONS(782), 1,
      aux_sym_stretch_token1,
  [3705] = 1,
    ACTIONS(784), 1,
      anon_sym_COMMA,
  [3709] = 1,
    ACTIONS(786), 1,
      aux_sym_stretch_token1,
  [3713] = 1,
    ACTIONS(772), 1,
      sym_height,
  [3717] = 1,
    ACTIONS(788), 1,
      anon_sym_COMMA,
  [3721] = 1,
    ACTIONS(790), 1,
      anon_sym_COMMA,
  [3725] = 1,
    ACTIONS(762), 1,
      anon_sym_COMMA,
  [3729] = 1,
    ACTIONS(792), 1,
      aux_sym__new_guideline_absolute_token1,
  [3733] = 1,
    ACTIONS(764), 1,
      aux_sym__guideline_xy_attr_token1,
  [3737] = 1,
    ACTIONS(512), 1,
      aux_sym__guideline_xy_attr_token1,
  [3741] = 1,
    ACTIONS(574), 1,
      aux_sym__guideline_xy_attr_token1,
  [3745] = 1,
    ACTIONS(582), 1,
      aux_sym__guideline_xy_attr_token1,
  [3749] = 1,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
  [3753] = 1,
    ACTIONS(796), 1,
      anon_sym_COMMA,
  [3757] = 1,
    ACTIONS(798), 1,
      aux_sym__label_id_token2,
  [3761] = 1,
    ACTIONS(800), 1,
      aux_sym__absolute_token1,
  [3765] = 1,
    ACTIONS(802), 1,
      anon_sym_COMMA,
  [3769] = 1,
    ACTIONS(804), 1,
      aux_sym__label_id_token3,
  [3773] = 1,
    ACTIONS(806), 1,
      anon_sym_COMMA,
  [3777] = 1,
    ACTIONS(808), 1,
      ts_builtin_sym_end,
  [3781] = 1,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [3785] = 1,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
  [3789] = 1,
    ACTIONS(812), 1,
      anon_sym_DQUOTE,
  [3793] = 1,
    ACTIONS(814), 1,
      anon_sym_COMMA,
  [3797] = 1,
    ACTIONS(816), 1,
      aux_sym__absolute_token1,
  [3801] = 1,
    ACTIONS(818), 1,
      anon_sym_COMMA,
  [3805] = 1,
    ACTIONS(820), 1,
      anon_sym_COMMA,
  [3809] = 1,
    ACTIONS(822), 1,
      aux_sym__label_relative_token1,
  [3813] = 1,
    ACTIONS(824), 1,
      anon_sym_with,
  [3817] = 1,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
  [3821] = 1,
    ACTIONS(828), 1,
      anon_sym_COMMA,
  [3825] = 1,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
  [3829] = 1,
    ACTIONS(832), 1,
      aux_sym__new_guideline_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 330,
  [SMALL_STATE(11)] = 354,
  [SMALL_STATE(12)] = 378,
  [SMALL_STATE(13)] = 402,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 458,
  [SMALL_STATE(16)] = 486,
  [SMALL_STATE(17)] = 514,
  [SMALL_STATE(18)] = 542,
  [SMALL_STATE(19)] = 570,
  [SMALL_STATE(20)] = 599,
  [SMALL_STATE(21)] = 628,
  [SMALL_STATE(22)] = 657,
  [SMALL_STATE(23)] = 688,
  [SMALL_STATE(24)] = 723,
  [SMALL_STATE(25)] = 758,
  [SMALL_STATE(26)] = 787,
  [SMALL_STATE(27)] = 807,
  [SMALL_STATE(28)] = 827,
  [SMALL_STATE(29)] = 855,
  [SMALL_STATE(30)] = 883,
  [SMALL_STATE(31)] = 911,
  [SMALL_STATE(32)] = 942,
  [SMALL_STATE(33)] = 961,
  [SMALL_STATE(34)] = 988,
  [SMALL_STATE(35)] = 1007,
  [SMALL_STATE(36)] = 1034,
  [SMALL_STATE(37)] = 1053,
  [SMALL_STATE(38)] = 1082,
  [SMALL_STATE(39)] = 1105,
  [SMALL_STATE(40)] = 1124,
  [SMALL_STATE(41)] = 1143,
  [SMALL_STATE(42)] = 1163,
  [SMALL_STATE(43)] = 1189,
  [SMALL_STATE(44)] = 1209,
  [SMALL_STATE(45)] = 1229,
  [SMALL_STATE(46)] = 1249,
  [SMALL_STATE(47)] = 1273,
  [SMALL_STATE(48)] = 1297,
  [SMALL_STATE(49)] = 1320,
  [SMALL_STATE(50)] = 1343,
  [SMALL_STATE(51)] = 1360,
  [SMALL_STATE(52)] = 1383,
  [SMALL_STATE(53)] = 1406,
  [SMALL_STATE(54)] = 1429,
  [SMALL_STATE(55)] = 1452,
  [SMALL_STATE(56)] = 1473,
  [SMALL_STATE(57)] = 1496,
  [SMALL_STATE(58)] = 1517,
  [SMALL_STATE(59)] = 1538,
  [SMALL_STATE(60)] = 1559,
  [SMALL_STATE(61)] = 1576,
  [SMALL_STATE(62)] = 1594,
  [SMALL_STATE(63)] = 1612,
  [SMALL_STATE(64)] = 1634,
  [SMALL_STATE(65)] = 1656,
  [SMALL_STATE(66)] = 1676,
  [SMALL_STATE(67)] = 1698,
  [SMALL_STATE(68)] = 1720,
  [SMALL_STATE(69)] = 1742,
  [SMALL_STATE(70)] = 1762,
  [SMALL_STATE(71)] = 1776,
  [SMALL_STATE(72)] = 1798,
  [SMALL_STATE(73)] = 1818,
  [SMALL_STATE(74)] = 1836,
  [SMALL_STATE(75)] = 1855,
  [SMALL_STATE(76)] = 1872,
  [SMALL_STATE(77)] = 1891,
  [SMALL_STATE(78)] = 1908,
  [SMALL_STATE(79)] = 1925,
  [SMALL_STATE(80)] = 1942,
  [SMALL_STATE(81)] = 1959,
  [SMALL_STATE(82)] = 1976,
  [SMALL_STATE(83)] = 1993,
  [SMALL_STATE(84)] = 2010,
  [SMALL_STATE(85)] = 2029,
  [SMALL_STATE(86)] = 2044,
  [SMALL_STATE(87)] = 2067,
  [SMALL_STATE(88)] = 2086,
  [SMALL_STATE(89)] = 2105,
  [SMALL_STATE(90)] = 2122,
  [SMALL_STATE(91)] = 2141,
  [SMALL_STATE(92)] = 2160,
  [SMALL_STATE(93)] = 2179,
  [SMALL_STATE(94)] = 2196,
  [SMALL_STATE(95)] = 2213,
  [SMALL_STATE(96)] = 2232,
  [SMALL_STATE(97)] = 2249,
  [SMALL_STATE(98)] = 2268,
  [SMALL_STATE(99)] = 2282,
  [SMALL_STATE(100)] = 2296,
  [SMALL_STATE(101)] = 2310,
  [SMALL_STATE(102)] = 2324,
  [SMALL_STATE(103)] = 2338,
  [SMALL_STATE(104)] = 2352,
  [SMALL_STATE(105)] = 2366,
  [SMALL_STATE(106)] = 2380,
  [SMALL_STATE(107)] = 2394,
  [SMALL_STATE(108)] = 2406,
  [SMALL_STATE(109)] = 2420,
  [SMALL_STATE(110)] = 2434,
  [SMALL_STATE(111)] = 2448,
  [SMALL_STATE(112)] = 2462,
  [SMALL_STATE(113)] = 2476,
  [SMALL_STATE(114)] = 2490,
  [SMALL_STATE(115)] = 2504,
  [SMALL_STATE(116)] = 2518,
  [SMALL_STATE(117)] = 2530,
  [SMALL_STATE(118)] = 2542,
  [SMALL_STATE(119)] = 2556,
  [SMALL_STATE(120)] = 2570,
  [SMALL_STATE(121)] = 2584,
  [SMALL_STATE(122)] = 2598,
  [SMALL_STATE(123)] = 2612,
  [SMALL_STATE(124)] = 2626,
  [SMALL_STATE(125)] = 2638,
  [SMALL_STATE(126)] = 2650,
  [SMALL_STATE(127)] = 2664,
  [SMALL_STATE(128)] = 2676,
  [SMALL_STATE(129)] = 2690,
  [SMALL_STATE(130)] = 2704,
  [SMALL_STATE(131)] = 2715,
  [SMALL_STATE(132)] = 2726,
  [SMALL_STATE(133)] = 2737,
  [SMALL_STATE(134)] = 2748,
  [SMALL_STATE(135)] = 2759,
  [SMALL_STATE(136)] = 2770,
  [SMALL_STATE(137)] = 2781,
  [SMALL_STATE(138)] = 2792,
  [SMALL_STATE(139)] = 2803,
  [SMALL_STATE(140)] = 2814,
  [SMALL_STATE(141)] = 2825,
  [SMALL_STATE(142)] = 2836,
  [SMALL_STATE(143)] = 2847,
  [SMALL_STATE(144)] = 2858,
  [SMALL_STATE(145)] = 2869,
  [SMALL_STATE(146)] = 2880,
  [SMALL_STATE(147)] = 2891,
  [SMALL_STATE(148)] = 2902,
  [SMALL_STATE(149)] = 2913,
  [SMALL_STATE(150)] = 2924,
  [SMALL_STATE(151)] = 2935,
  [SMALL_STATE(152)] = 2946,
  [SMALL_STATE(153)] = 2957,
  [SMALL_STATE(154)] = 2968,
  [SMALL_STATE(155)] = 2979,
  [SMALL_STATE(156)] = 2990,
  [SMALL_STATE(157)] = 3001,
  [SMALL_STATE(158)] = 3012,
  [SMALL_STATE(159)] = 3023,
  [SMALL_STATE(160)] = 3034,
  [SMALL_STATE(161)] = 3045,
  [SMALL_STATE(162)] = 3056,
  [SMALL_STATE(163)] = 3067,
  [SMALL_STATE(164)] = 3078,
  [SMALL_STATE(165)] = 3089,
  [SMALL_STATE(166)] = 3100,
  [SMALL_STATE(167)] = 3111,
  [SMALL_STATE(168)] = 3122,
  [SMALL_STATE(169)] = 3133,
  [SMALL_STATE(170)] = 3144,
  [SMALL_STATE(171)] = 3155,
  [SMALL_STATE(172)] = 3166,
  [SMALL_STATE(173)] = 3177,
  [SMALL_STATE(174)] = 3188,
  [SMALL_STATE(175)] = 3199,
  [SMALL_STATE(176)] = 3210,
  [SMALL_STATE(177)] = 3221,
  [SMALL_STATE(178)] = 3232,
  [SMALL_STATE(179)] = 3243,
  [SMALL_STATE(180)] = 3254,
  [SMALL_STATE(181)] = 3265,
  [SMALL_STATE(182)] = 3276,
  [SMALL_STATE(183)] = 3287,
  [SMALL_STATE(184)] = 3298,
  [SMALL_STATE(185)] = 3309,
  [SMALL_STATE(186)] = 3320,
  [SMALL_STATE(187)] = 3331,
  [SMALL_STATE(188)] = 3342,
  [SMALL_STATE(189)] = 3353,
  [SMALL_STATE(190)] = 3364,
  [SMALL_STATE(191)] = 3375,
  [SMALL_STATE(192)] = 3386,
  [SMALL_STATE(193)] = 3397,
  [SMALL_STATE(194)] = 3408,
  [SMALL_STATE(195)] = 3419,
  [SMALL_STATE(196)] = 3430,
  [SMALL_STATE(197)] = 3441,
  [SMALL_STATE(198)] = 3452,
  [SMALL_STATE(199)] = 3463,
  [SMALL_STATE(200)] = 3474,
  [SMALL_STATE(201)] = 3487,
  [SMALL_STATE(202)] = 3500,
  [SMALL_STATE(203)] = 3512,
  [SMALL_STATE(204)] = 3524,
  [SMALL_STATE(205)] = 3534,
  [SMALL_STATE(206)] = 3542,
  [SMALL_STATE(207)] = 3554,
  [SMALL_STATE(208)] = 3566,
  [SMALL_STATE(209)] = 3578,
  [SMALL_STATE(210)] = 3585,
  [SMALL_STATE(211)] = 3596,
  [SMALL_STATE(212)] = 3606,
  [SMALL_STATE(213)] = 3613,
  [SMALL_STATE(214)] = 3620,
  [SMALL_STATE(215)] = 3627,
  [SMALL_STATE(216)] = 3634,
  [SMALL_STATE(217)] = 3641,
  [SMALL_STATE(218)] = 3648,
  [SMALL_STATE(219)] = 3655,
  [SMALL_STATE(220)] = 3662,
  [SMALL_STATE(221)] = 3669,
  [SMALL_STATE(222)] = 3673,
  [SMALL_STATE(223)] = 3677,
  [SMALL_STATE(224)] = 3681,
  [SMALL_STATE(225)] = 3685,
  [SMALL_STATE(226)] = 3689,
  [SMALL_STATE(227)] = 3693,
  [SMALL_STATE(228)] = 3697,
  [SMALL_STATE(229)] = 3701,
  [SMALL_STATE(230)] = 3705,
  [SMALL_STATE(231)] = 3709,
  [SMALL_STATE(232)] = 3713,
  [SMALL_STATE(233)] = 3717,
  [SMALL_STATE(234)] = 3721,
  [SMALL_STATE(235)] = 3725,
  [SMALL_STATE(236)] = 3729,
  [SMALL_STATE(237)] = 3733,
  [SMALL_STATE(238)] = 3737,
  [SMALL_STATE(239)] = 3741,
  [SMALL_STATE(240)] = 3745,
  [SMALL_STATE(241)] = 3749,
  [SMALL_STATE(242)] = 3753,
  [SMALL_STATE(243)] = 3757,
  [SMALL_STATE(244)] = 3761,
  [SMALL_STATE(245)] = 3765,
  [SMALL_STATE(246)] = 3769,
  [SMALL_STATE(247)] = 3773,
  [SMALL_STATE(248)] = 3777,
  [SMALL_STATE(249)] = 3781,
  [SMALL_STATE(250)] = 3785,
  [SMALL_STATE(251)] = 3789,
  [SMALL_STATE(252)] = 3793,
  [SMALL_STATE(253)] = 3797,
  [SMALL_STATE(254)] = 3801,
  [SMALL_STATE(255)] = 3805,
  [SMALL_STATE(256)] = 3809,
  [SMALL_STATE(257)] = 3813,
  [SMALL_STATE(258)] = 3817,
  [SMALL_STATE(259)] = 3821,
  [SMALL_STATE(260)] = 3825,
  [SMALL_STATE(261)] = 3829,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_entity, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_entity, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_attr, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2, .production_id = 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_attr, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_attr, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(96),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(83),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(59),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(57),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_attr, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guide_orientation, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_entity, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_entity, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_entity, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_geometry, 1, .production_id = 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_guide, 1, .production_id = 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 7),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1, .production_id = 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 1, .production_id = 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 7),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_absolute, 1, .production_id = 6),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_geometry, 2, .production_id = 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_guide, 2, .production_id = 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_relative, 1, .production_id = 5),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 1, .production_id = 5),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 5),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 2, .production_id = 8),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 2, .production_id = 9),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3, .production_id = 12),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 10),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_entity, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 11),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_absolute, 2, .production_id = 8),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guide_orientation, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [808] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
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
