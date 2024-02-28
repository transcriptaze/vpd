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
#define STATE_COUNT 269
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 182
#define ALIAS_COUNT 0
#define TOKEN_COUNT 94
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

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
  anon_sym_unload = 61,
  anon_sym_save = 62,
  anon_sym_timestamp = 63,
  anon_sym_gzip = 64,
  anon_sym_export = 65,
  anon_sym_DOTh = 66,
  anon_sym_GT_GT = 67,
  anon_sym_panel = 68,
  anon_sym_svg = 69,
  anon_sym_dark = 70,
  anon_sym_list = 71,
  anon_sym_fonts = 72,
  anon_sym_origin = 73,
  anon_sym_background = 74,
  aux_sym__label_relative_token1 = 75,
  aux_sym_font_token1 = 76,
  aux_sym_fontsize_token1 = 77,
  anon_sym_baseline = 78,
  aux_sym__rgb_token1 = 79,
  aux_sym__rgba_token1 = 80,
  aux_sym__absolute_token1 = 81,
  aux_sym__x_token1 = 82,
  aux_sym__y_token1 = 83,
  aux_sym__offset_token1 = 84,
  aux_sym_string_token1 = 85,
  aux_sym_string_token2 = 86,
  aux_sym__string_token1 = 87,
  aux_sym__string_token2 = 88,
  aux_sym_identifier_token1 = 89,
  aux_sym_identifier_token2 = 90,
  anon_sym_stretch = 91,
  aux_sym_stretch_token1 = 92,
  anon_sym_scale = 93,
  sym_command = 94,
  sym_new = 95,
  sym_module = 96,
  sym__input_entity = 97,
  sym__output_entity = 98,
  sym__parameter_entity = 99,
  sym__light_entity = 100,
  sym__widget_entity = 101,
  sym__component_entity = 102,
  sym__guide_entity = 103,
  sym__new_guide_orientation = 104,
  sym__new_guideline_absolute = 105,
  sym__new_guideline_relative = 106,
  sym__new_guideline_geometry = 107,
  sym__new_guideline_guide = 108,
  sym_set = 109,
  sym__module_attr = 110,
  sym__component_attr = 111,
  sym__label_attr = 112,
  sym__decoration_attr = 113,
  sym__guideline_attr = 114,
  sym__guideline_xy_attr = 115,
  sym__x_attr = 116,
  sym__y_attr = 117,
  sym__xy_attr = 118,
  sym__offset_attr = 119,
  sym_decorate = 120,
  sym__component = 121,
  sym_decoration = 122,
  sym_delete = 123,
  sym__guideline_id = 124,
  sym__input_id = 125,
  sym__output_id = 126,
  sym__parameter_id = 127,
  sym__light_id = 128,
  sym__widget_id = 129,
  sym__label_id = 130,
  sym__decoration_id = 131,
  sym__font_id = 132,
  sym__component_id = 133,
  sym__guide_id = 134,
  sym_load = 135,
  sym_unload = 136,
  sym_save = 137,
  sym_project = 138,
  sym__save_options = 139,
  sym_script = 140,
  sym_export = 141,
  sym__module_export = 142,
  sym_panel = 143,
  sym_svg = 144,
  sym_list = 145,
  sym_origin = 146,
  sym_background = 147,
  sym_label = 148,
  sym__label_string = 149,
  sym__label_absolute = 150,
  sym__label_relative = 151,
  sym__label_geometry = 152,
  sym_font = 153,
  sym_fontsize = 154,
  sym_halign = 155,
  sym_valign = 156,
  sym__align = 157,
  sym_colour = 158,
  sym__rgb = 159,
  sym__rgba = 160,
  sym_name = 161,
  sym_part = 162,
  sym_rgb = 163,
  sym_rgba = 164,
  sym_absolute = 165,
  sym__absolute = 166,
  sym__relative = 167,
  sym__x = 168,
  sym__y = 169,
  sym_x = 170,
  sym_y = 171,
  sym_xy = 172,
  sym__xy = 173,
  sym__offset = 174,
  sym_offset = 175,
  sym_string = 176,
  sym__string = 177,
  sym_identifier = 178,
  sym_stretch = 179,
  sym_scale = 180,
  aux_sym_command_repeat1 = 181,
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
  [anon_sym_unload] = "unload",
  [anon_sym_save] = "save",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_gzip] = "gzip",
  [anon_sym_export] = "export",
  [anon_sym_DOTh] = "header",
  [anon_sym_GT_GT] = "helper",
  [anon_sym_panel] = "panel",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [anon_sym_list] = "list",
  [anon_sym_fonts] = "fonts",
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
  [sym__font_id] = "font",
  [sym__component_id] = "_component_id",
  [sym__guide_id] = "guide",
  [sym_load] = "load",
  [sym_unload] = "unload",
  [sym_save] = "save",
  [sym_project] = "project",
  [sym__save_options] = "_save_options",
  [sym_script] = "script",
  [sym_export] = "export",
  [sym__module_export] = "module",
  [sym_panel] = "panel",
  [sym_svg] = "svg",
  [sym_list] = "list",
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
  [anon_sym_unload] = anon_sym_unload,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_gzip] = anon_sym_gzip,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_DOTh] = anon_sym_DOTh,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_fonts] = anon_sym_fonts,
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
  [sym__font_id] = sym_font,
  [sym__component_id] = sym__component_id,
  [sym__guide_id] = sym__guide_entity,
  [sym_load] = sym_load,
  [sym_unload] = sym_unload,
  [sym_save] = sym_save,
  [sym_project] = sym_project,
  [sym__save_options] = sym__save_options,
  [sym_script] = sym_script,
  [sym_export] = sym_export,
  [sym__module_export] = sym_module,
  [sym_panel] = sym_panel,
  [sym_svg] = sym_svg,
  [sym_list] = sym_list,
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
  [anon_sym_unload] = {
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
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fonts] = {
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
  [sym__font_id] = {
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
  [sym_unload] = {
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
  [sym_list] = {
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
    [1] = sym_font,
  },
  [2] = {
    [1] = sym_project,
  },
  [3] = {
    [1] = sym_script,
  },
  [4] = {
    [0] = aux_sym__guideline_xy_attr_token3,
  },
  [5] = {
    [1] = sym_identifier,
  },
  [6] = {
    [0] = sym_offset,
  },
  [7] = {
    [0] = sym_absolute,
  },
  [8] = {
    [1] = sym_x,
  },
  [9] = {
    [0] = sym_absolute,
    [1] = sym_offset,
  },
  [10] = {
    [0] = aux_sym__guideline_xy_attr_token3,
    [1] = sym_offset,
  },
  [11] = {
    [1] = sym__light_entity,
  },
  [12] = {
    [1] = sym_x,
    [3] = sym_y,
  },
  [13] = {
    [0] = sym_halign,
    [2] = sym_valign,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_name, 2,
    sym_name,
    sym_identifier,
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
  [40] = 20,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 19,
  [49] = 49,
  [50] = 16,
  [51] = 17,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 18,
  [57] = 57,
  [58] = 58,
  [59] = 15,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 5,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 26,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 39,
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
  [209] = 19,
  [210] = 16,
  [211] = 211,
  [212] = 17,
  [213] = 213,
  [214] = 15,
  [215] = 18,
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
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 251,
  [268] = 268,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(767);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(771);
      if (lookahead == '(') ADVANCE(694);
      if (lookahead == ')') ADVANCE(695);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == '0') ADVANCE(561);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'g') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(526);
      if (lookahead == 'y') ADVANCE(530);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == ')') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(868);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(866);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(824);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(869);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(824);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(865);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(275);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(338);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'H') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'H') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'm') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(513);
      if (lookahead == 'U') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(173);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(809);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'b') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(655);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == 'v') ADVANCE(103);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(776);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(785);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(822);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(858);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(863);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(236);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(249);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(811);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(222);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(808);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(696);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(525);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(872);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(243);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 141:
      if (lookahead == 'j') ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == 'k') ADVANCE(812);
      END_STATE();
    case 143:
      if (lookahead == 'k') ADVANCE(109);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(810);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(865);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(560);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(567);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(513);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(512);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(862);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(864);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(823);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(546);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(821);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(548);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(359);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(800);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(799);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(864);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(554);
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(820);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(857);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(813);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(801);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(784);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(783);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(863);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 264:
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'z') ADVANCE(130);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 266:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 269:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 270:
      if (lookahead == 'w') ADVANCE(319);
      END_STATE();
    case 271:
      if (lookahead == 'x') ADVANCE(213);
      END_STATE();
    case 272:
      if (lookahead == 'x') ADVANCE(238);
      END_STATE();
    case 273:
      if (lookahead == 'z') ADVANCE(71);
      END_STATE();
    case 274:
      if (lookahead == 'z') ADVANCE(203);
      END_STATE();
    case 275:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(338);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(865);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(860);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(861);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 296:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 297:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 298:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 299:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 300:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 301:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 302:
      if (eof) ADVANCE(318);
      if (lookahead == ' ') SKIP(302)
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\'') ADVANCE(772);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(744);
      if (lookahead == 'd') ADVANCE(717);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == 'f') ADVANCE(745);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'l') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead == 's') ADVANCE(707);
      if (lookahead == 't') ADVANCE(723);
      if (lookahead == 'u') ADVANCE(741);
      if (lookahead == 'v') ADVANCE(713);
      if (lookahead == 'x') ADVANCE(527);
      if (lookahead == 'y') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(705);
      if (lookahead != 0) ADVANCE(766);
      END_STATE();
    case 303:
      if (eof) ADVANCE(318);
      if (lookahead == ' ') SKIP(303)
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\'') ADVANCE(772);
      if (lookahead == 'd') ADVANCE(717);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == 'u') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(706);
      if (lookahead != 0) ADVANCE(766);
      END_STATE();
    case 304:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == '(') ADVANCE(694);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(445);
      if (lookahead == 'x') ADVANCE(528);
      if (lookahead == 'y') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(304)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 305:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == '(') ADVANCE(694);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(305)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 306:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(445);
      if (lookahead == 'x') ADVANCE(528);
      if (lookahead == 'y') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(306)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 307:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(694);
      if (lookahead == ')') ADVANCE(695);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(526);
      if (lookahead == 'y') ADVANCE(530);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(307)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 308:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(187);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(308)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 309:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(832);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == 'n') ADVANCE(833);
      if (lookahead == 's') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(840);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(309)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 310:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(694);
      if (lookahead == 'd') ADVANCE(832);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == 'n') ADVANCE(833);
      if (lookahead == 's') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(840);
      if (lookahead == 'x') ADVANCE(529);
      if (lookahead == 'y') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(310)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 311:
      if (eof) ADVANCE(318);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == 'b') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == 'h') ADVANCE(451);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(445);
      if (lookahead == 'v') ADVANCE(417);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(311)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(873);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 312:
      if (eof) ADVANCE(318);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'b') ADVANCE(453);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == 'u') ADVANCE(446);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 313:
      if (eof) ADVANCE(318);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'b') ADVANCE(603);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'd') ADVANCE(582);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == 'l') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(584);
      if (lookahead == 'r') ADVANCE(596);
      if (lookahead == 's') ADVANCE(572);
      if (lookahead == 't') ADVANCE(606);
      if (lookahead == 'u') ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(313)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 314:
      if (eof) ADVANCE(318);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'b') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(639);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead == 'l') ADVANCE(653);
      if (lookahead == 'm') ADVANCE(655);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead == 'u') ADVANCE(659);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(314)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 315:
      if (eof) ADVANCE(318);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(639);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead == 'l') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'r') ADVANCE(654);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 'u') ADVANCE(659);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(315)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 316:
      if (eof) ADVANCE(318);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 317:
      if (eof) ADVANCE(318);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__new_guideline_absolute_token1);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__new_guideline_geometry_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 'e') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'e') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == 'r') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'f') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'f') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'g') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'g') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'h') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'h') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 's') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 's') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'v') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'v') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'w') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'x') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'x') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'z') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(511);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(173);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(534);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_halign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_valign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == 'H') ADVANCE(338);
      if (lookahead == 'h') ADVANCE(338);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(564);
      if (lookahead == 'H') ADVANCE(338);
      if (lookahead == 'h') ADVANCE(338);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'H') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(338);
      if (lookahead == 'h') ADVANCE(338);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(338);
      if (lookahead == 'h') ADVANCE(338);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == 'H') ADVANCE(374);
      if (lookahead == 'h') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == '.') ADVANCE(571);
      if (lookahead == 'H') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == 'H') ADVANCE(374);
      if (lookahead == 'h') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == 'H') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'e') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'l') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead == 'o') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'r') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'f') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'g') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'h') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'i') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'i') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'l') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'l') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'm') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'n') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'n') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'p') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'p') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 's') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'v') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'x') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'c') ADVANCE(661);
      if (lookahead == 'l') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(672);
      if (lookahead == 'o') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'f') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'g') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'h') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(672);
      if (lookahead == 'o') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'l') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'l') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'm') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'n') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'n') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'p') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'p') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 's') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'v') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'w') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'x') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\'') ADVANCE(772);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(744);
      if (lookahead == 'd') ADVANCE(717);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == 'f') ADVANCE(745);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'l') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead == 's') ADVANCE(707);
      if (lookahead == 't') ADVANCE(723);
      if (lookahead == 'u') ADVANCE(741);
      if (lookahead == 'v') ADVANCE(713);
      if (lookahead == 'x') ADVANCE(527);
      if (lookahead == 'y') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\'') ADVANCE(772);
      if (lookahead == 'd') ADVANCE(717);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == 'u') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'c') ADVANCE(743);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'd') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(753);
      if (lookahead == 'o') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'p') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 'u') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 's') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'v') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'w') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'z') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(770);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(770);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(774);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(774);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_unload);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_unload);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_unload);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_unload);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'e') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(841);
      if (lookahead == 'l') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(847);
      if (lookahead == 'o') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(856);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_stretch_token1);
      if (lookahead == '.') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(873);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_stretch_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
      END_STATE();
    case 875:
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
  [5] = {.lex_state = 302},
  [6] = {.lex_state = 311},
  [7] = {.lex_state = 312},
  [8] = {.lex_state = 313},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 313},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 306},
  [16] = {.lex_state = 306},
  [17] = {.lex_state = 306},
  [18] = {.lex_state = 306},
  [19] = {.lex_state = 306},
  [20] = {.lex_state = 304},
  [21] = {.lex_state = 315},
  [22] = {.lex_state = 308},
  [23] = {.lex_state = 315},
  [24] = {.lex_state = 315},
  [25] = {.lex_state = 315},
  [26] = {.lex_state = 307},
  [27] = {.lex_state = 314},
  [28] = {.lex_state = 316},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 314},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 308},
  [33] = {.lex_state = 309},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 310},
  [40] = {.lex_state = 305},
  [41] = {.lex_state = 307},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 307},
  [44] = {.lex_state = 307},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 307},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 305},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 305},
  [51] = {.lex_state = 305},
  [52] = {.lex_state = 305},
  [53] = {.lex_state = 305},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 308},
  [56] = {.lex_state = 305},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 317},
  [59] = {.lex_state = 305},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 309},
  [64] = {.lex_state = 309},
  [65] = {.lex_state = 303},
  [66] = {.lex_state = 308},
  [67] = {.lex_state = 309},
  [68] = {.lex_state = 309},
  [69] = {.lex_state = 309},
  [70] = {.lex_state = 307},
  [71] = {.lex_state = 308},
  [72] = {.lex_state = 308},
  [73] = {.lex_state = 309},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 309},
  [76] = {.lex_state = 309},
  [77] = {.lex_state = 309},
  [78] = {.lex_state = 309},
  [79] = {.lex_state = 309},
  [80] = {.lex_state = 308},
  [81] = {.lex_state = 308},
  [82] = {.lex_state = 308},
  [83] = {.lex_state = 308},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 307},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 307},
  [89] = {.lex_state = 307},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 309},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 309},
  [94] = {.lex_state = 309},
  [95] = {.lex_state = 309},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 309},
  [98] = {.lex_state = 309},
  [99] = {.lex_state = 317},
  [100] = {.lex_state = 307},
  [101] = {.lex_state = 307},
  [102] = {.lex_state = 309},
  [103] = {.lex_state = 309},
  [104] = {.lex_state = 307},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 317},
  [107] = {.lex_state = 309},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 309},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 316},
  [118] = {.lex_state = 307},
  [119] = {.lex_state = 309},
  [120] = {.lex_state = 316},
  [121] = {.lex_state = 317},
  [122] = {.lex_state = 307},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 307},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 308},
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
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 307},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 307},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 311},
  [219] = {.lex_state = 312},
  [220] = {.lex_state = 308},
  [221] = {.lex_state = 308},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 311},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 312},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 311},
  [229] = {.lex_state = 306},
  [230] = {.lex_state = 311},
  [231] = {.lex_state = 312},
  [232] = {.lex_state = 773},
  [233] = {.lex_state = 311},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 312},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 769},
  [241] = {.lex_state = 304},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 312},
  [244] = {.lex_state = 312},
  [245] = {.lex_state = 312},
  [246] = {.lex_state = 304},
  [247] = {.lex_state = 312},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 308},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 306},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 308},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 316},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 308},
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
    [anon_sym_unload] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_DOTh] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
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
    [sym_command] = STATE(261),
    [sym_new] = STATE(13),
    [sym_set] = STATE(13),
    [sym_decorate] = STATE(13),
    [sym_delete] = STATE(13),
    [sym_load] = STATE(13),
    [sym_unload] = STATE(13),
    [sym_save] = STATE(13),
    [sym_export] = STATE(13),
    [sym_list] = STATE(13),
    [aux_sym_command_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_decorate] = ACTIONS(9),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_unload] = ACTIONS(15),
    [anon_sym_save] = ACTIONS(17),
    [anon_sym_export] = ACTIONS(19),
    [anon_sym_list] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(25), 1,
      anon_sym_module,
    ACTIONS(27), 1,
      anon_sym_input,
    ACTIONS(29), 1,
      anon_sym_output,
    ACTIONS(31), 1,
      anon_sym_parameter,
    ACTIONS(33), 1,
      anon_sym_light,
    ACTIONS(35), 1,
      anon_sym_widget,
    ACTIONS(37), 1,
      anon_sym_guide,
    ACTIONS(39), 1,
      anon_sym_label,
    ACTIONS(41), 1,
      anon_sym_decoration,
    ACTIONS(43), 1,
      anon_sym_origin,
    ACTIONS(45), 1,
      anon_sym_background,
    STATE(8), 1,
      sym__guide_id,
    STATE(12), 1,
      sym__label_id,
    STATE(35), 1,
      sym__decoration_id,
    STATE(42), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(145), 7,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__decoration_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
    ACTIONS(23), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [71] = 10,
    ACTIONS(49), 1,
      anon_sym_module,
    ACTIONS(51), 1,
      anon_sym_input,
    ACTIONS(53), 1,
      anon_sym_output,
    ACTIONS(55), 1,
      anon_sym_parameter,
    ACTIONS(57), 1,
      anon_sym_light,
    ACTIONS(59), 1,
      anon_sym_widget,
    ACTIONS(61), 1,
      anon_sym_guide,
    ACTIONS(63), 1,
      anon_sym_label,
    STATE(144), 8,
      sym_module,
      sym__input_entity,
      sym__output_entity,
      sym__parameter_entity,
      sym__light_entity,
      sym__widget_entity,
      sym__guide_entity,
      sym_label,
    ACTIONS(47), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [118] = 10,
    ACTIONS(67), 1,
      anon_sym_input,
    ACTIONS(69), 1,
      anon_sym_output,
    ACTIONS(71), 1,
      anon_sym_parameter,
    ACTIONS(73), 1,
      anon_sym_light,
    ACTIONS(75), 1,
      anon_sym_widget,
    ACTIONS(77), 1,
      anon_sym_guide,
    ACTIONS(79), 1,
      anon_sym_label,
    ACTIONS(81), 1,
      anon_sym_decoration,
    STATE(151), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
    ACTIONS(65), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [165] = 5,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      aux_sym__label_id_token1,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 20,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [200] = 6,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(97), 2,
      anon_sym_vertical,
      anon_sym_horizontal,
    STATE(159), 3,
      sym__new_guide_orientation,
      sym__new_guideline_geometry,
      sym__new_guideline_guide,
    ACTIONS(99), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(95), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [236] = 3,
    ACTIONS(107), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(105), 18,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [265] = 7,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(117), 1,
      anon_sym_id,
    ACTIONS(119), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(135), 1,
      sym__guideline_xy_attr,
    ACTIONS(115), 8,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guideline_xy_attr_token3,
    ACTIONS(111), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [302] = 2,
    ACTIONS(123), 1,
      anon_sym_x,
    ACTIONS(121), 20,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [328] = 2,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(127), 18,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [354] = 2,
    ACTIONS(131), 1,
      anon_sym_x,
    ACTIONS(129), 20,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [380] = 11,
    ACTIONS(135), 1,
      anon_sym_x,
    ACTIONS(137), 1,
      anon_sym_y,
    ACTIONS(139), 1,
      anon_sym_xy,
    ACTIONS(141), 1,
      anon_sym_text,
    ACTIONS(143), 1,
      anon_sym_font,
    ACTIONS(145), 1,
      anon_sym_size,
    ACTIONS(147), 1,
      anon_sym_halign,
    ACTIONS(149), 1,
      anon_sym_valign,
    ACTIONS(151), 1,
      anon_sym_align,
    ACTIONS(153), 2,
      anon_sym_colour,
      anon_sym_color,
    ACTIONS(133), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [424] = 11,
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
      anon_sym_unload,
    ACTIONS(17), 1,
      anon_sym_save,
    ACTIONS(19), 1,
      anon_sym_export,
    ACTIONS(21), 1,
      anon_sym_list,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(14), 10,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_unload,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [467] = 11,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      anon_sym_new,
    ACTIONS(162), 1,
      anon_sym_set,
    ACTIONS(165), 1,
      anon_sym_decorate,
    ACTIONS(168), 1,
      anon_sym_delete,
    ACTIONS(171), 1,
      anon_sym_load,
    ACTIONS(174), 1,
      anon_sym_unload,
    ACTIONS(177), 1,
      anon_sym_save,
    ACTIONS(180), 1,
      anon_sym_export,
    ACTIONS(183), 1,
      anon_sym_list,
    STATE(14), 10,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_unload,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [510] = 5,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(188), 14,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [540] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(196), 14,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [570] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(200), 14,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [600] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(204), 14,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [630] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(208), 14,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [660] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(57), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(212), 12,
      anon_sym_new,
      anon_sym_set,
      anon_sym_x,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [690] = 6,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_AT,
    ACTIONS(222), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(162), 1,
      sym__x_attr,
    ACTIONS(220), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(216), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [721] = 7,
    ACTIONS(226), 1,
      anon_sym_AT,
    ACTIONS(228), 1,
      aux_sym__absolute_token1,
    ACTIONS(230), 1,
      aux_sym__x_token1,
    STATE(91), 1,
      sym_xy,
    STATE(257), 1,
      sym__x,
    STATE(119), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(224), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [754] = 6,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      anon_sym_AT,
    ACTIONS(236), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(162), 1,
      sym__xy_attr,
    ACTIONS(234), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(216), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [785] = 6,
    ACTIONS(232), 1,
      anon_sym_AT,
    ACTIONS(236), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      sym__xy_attr,
    ACTIONS(234), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(240), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [816] = 6,
    ACTIONS(218), 1,
      anon_sym_AT,
    ACTIONS(222), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      sym__x_attr,
    ACTIONS(220), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(240), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [847] = 2,
    ACTIONS(244), 2,
      sym_width,
      anon_sym_x,
    ACTIONS(242), 15,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [869] = 6,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_AT,
    ACTIONS(250), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(171), 1,
      sym__y_attr,
    ACTIONS(248), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
    ACTIONS(240), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [899] = 6,
    ACTIONS(230), 1,
      aux_sym__x_token1,
    ACTIONS(254), 1,
      anon_sym_AT,
    ACTIONS(256), 1,
      aux_sym__label_relative_token1,
    STATE(254), 1,
      sym__x,
    STATE(153), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(252), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [929] = 2,
    ACTIONS(260), 1,
      anon_sym_x,
    ACTIONS(258), 16,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [951] = 6,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_AT,
    ACTIONS(250), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(162), 1,
      sym__y_attr,
    ACTIONS(248), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
    ACTIONS(216), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [981] = 2,
    ACTIONS(264), 1,
      anon_sym_x,
    ACTIONS(262), 15,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1002] = 7,
    ACTIONS(268), 1,
      anon_sym_AT,
    ACTIONS(270), 1,
      aux_sym__x_token1,
    ACTIONS(272), 1,
      aux_sym__y_token1,
    STATE(108), 1,
      sym_x,
    STATE(109), 1,
      sym_y,
    STATE(185), 1,
      sym_absolute,
    ACTIONS(266), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1033] = 8,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 1,
      aux_sym_font_token1,
    ACTIONS(280), 1,
      aux_sym__rgb_token1,
    ACTIONS(282), 1,
      aux_sym__rgba_token1,
    STATE(113), 1,
      sym_rgb,
    STATE(114), 1,
      sym_rgba,
    STATE(191), 1,
      sym_name,
    ACTIONS(276), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1066] = 2,
    ACTIONS(286), 1,
      anon_sym_x,
    ACTIONS(284), 15,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1087] = 6,
    ACTIONS(290), 1,
      anon_sym_x,
    ACTIONS(292), 1,
      anon_sym_y,
    ACTIONS(294), 1,
      anon_sym_xy,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(176), 2,
      sym_stretch,
      sym_scale,
    ACTIONS(288), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1116] = 2,
    ACTIONS(300), 1,
      anon_sym_x,
    ACTIONS(298), 15,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1137] = 2,
    ACTIONS(304), 1,
      anon_sym_x,
    ACTIONS(302), 15,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1158] = 2,
    ACTIONS(308), 1,
      anon_sym_x,
    ACTIONS(306), 15,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1179] = 4,
    ACTIONS(278), 1,
      aux_sym_font_token1,
    STATE(49), 1,
      sym_name,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(312), 12,
      anon_sym_new,
      anon_sym_set,
      anon_sym_x,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1204] = 6,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(57), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(212), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1233] = 3,
    STATE(171), 1,
      sym__align,
    ACTIONS(316), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1255] = 6,
    ACTIONS(320), 1,
      anon_sym_name,
    ACTIONS(322), 1,
      anon_sym_x,
    ACTIONS(324), 1,
      anon_sym_y,
    ACTIONS(326), 1,
      anon_sym_xy,
    ACTIONS(328), 1,
      anon_sym_part,
    ACTIONS(318), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1283] = 3,
    STATE(171), 1,
      sym_halign,
    ACTIONS(330), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1305] = 3,
    STATE(198), 1,
      sym_halign,
    ACTIONS(330), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(332), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1327] = 5,
    ACTIONS(336), 1,
      aux_sym__rgb_token1,
    ACTIONS(338), 1,
      aux_sym__rgba_token1,
    STATE(197), 1,
      sym_colour,
    STATE(116), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(334), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1353] = 3,
    STATE(171), 1,
      sym_valign,
    ACTIONS(340), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1375] = 5,
    ACTIONS(336), 1,
      aux_sym__rgb_token1,
    ACTIONS(338), 1,
      aux_sym__rgba_token1,
    STATE(171), 1,
      sym_colour,
    STATE(116), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1401] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(208), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1426] = 2,
    ACTIONS(344), 1,
      anon_sym_x,
    ACTIONS(342), 13,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1445] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(196), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1470] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(200), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1495] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(348), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1520] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(352), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1545] = 4,
    ACTIONS(356), 1,
      anon_sym_module,
    ACTIONS(358), 1,
      anon_sym_panel,
    STATE(132), 2,
      sym__module_export,
      sym_panel,
    ACTIONS(354), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1568] = 4,
    STATE(28), 1,
      sym__string,
    STATE(190), 1,
      sym__label_string,
    ACTIONS(362), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(360), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1591] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(204), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1616] = 2,
    ACTIONS(366), 1,
      anon_sym_x,
    ACTIONS(364), 13,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1635] = 4,
    ACTIONS(370), 1,
      anon_sym_AT,
    ACTIONS(372), 1,
      aux_sym__new_guideline_absolute_token1,
    STATE(148), 2,
      sym__new_guideline_absolute,
      sym__new_guideline_relative,
    ACTIONS(368), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1658] = 5,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(188), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1683] = 4,
    ACTIONS(376), 1,
      anon_sym_project,
    ACTIONS(378), 1,
      anon_sym_script,
    STATE(186), 2,
      sym_project,
      sym_script,
    ACTIONS(374), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1706] = 4,
    ACTIONS(382), 1,
      anon_sym_font,
    ACTIONS(384), 1,
      anon_sym_project,
    ACTIONS(386), 1,
      anon_sym_script,
    ACTIONS(380), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1728] = 4,
    ACTIONS(390), 1,
      anon_sym_timestamp,
    ACTIONS(392), 1,
      anon_sym_gzip,
    STATE(138), 1,
      sym__save_options,
    ACTIONS(388), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1750] = 5,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(184), 1,
      sym__component_entity,
    ACTIONS(396), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1774] = 5,
    ACTIONS(398), 1,
      aux_sym_font_token1,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(173), 1,
      sym__component_entity,
    ACTIONS(402), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1798] = 5,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      aux_sym__label_id_token1,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1822] = 3,
    ACTIONS(406), 1,
      aux_sym__offset_token1,
    STATE(128), 1,
      sym_offset,
    ACTIONS(404), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1842] = 5,
    ACTIONS(398), 1,
      aux_sym_font_token1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(199), 1,
      sym__component_entity,
    ACTIONS(410), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1866] = 5,
    ACTIONS(398), 1,
      aux_sym_font_token1,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(200), 1,
      sym__component_entity,
    ACTIONS(414), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1890] = 5,
    ACTIONS(398), 1,
      aux_sym_font_token1,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(201), 1,
      sym__component_entity,
    ACTIONS(418), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1914] = 3,
    STATE(171), 1,
      sym_string,
    ACTIONS(420), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1934] = 1,
    ACTIONS(242), 13,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_AT,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym__absolute_token1,
      aux_sym__x_token1,
  [1950] = 3,
    ACTIONS(406), 1,
      aux_sym__offset_token1,
    STATE(130), 1,
      sym_offset,
    ACTIONS(422), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1970] = 4,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    ACTIONS(428), 1,
      aux_sym__offset_token1,
    STATE(102), 1,
      sym__offset,
    ACTIONS(426), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [1992] = 4,
    ACTIONS(432), 1,
      anon_sym_name,
    ACTIONS(434), 1,
      anon_sym_height,
    ACTIONS(436), 1,
      anon_sym_width,
    ACTIONS(430), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2014] = 4,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(442), 1,
      aux_sym_font_token1,
    STATE(165), 1,
      sym_font,
    ACTIONS(440), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2035] = 4,
    ACTIONS(278), 1,
      aux_sym_font_token1,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_name,
    ACTIONS(446), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2056] = 4,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(442), 1,
      aux_sym_font_token1,
    STATE(171), 1,
      sym_font,
    ACTIONS(240), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2077] = 4,
    ACTIONS(278), 1,
      aux_sym_font_token1,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_name,
    ACTIONS(312), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2098] = 4,
    ACTIONS(442), 1,
      aux_sym_font_token1,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    STATE(160), 1,
      sym_font,
    ACTIONS(450), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2119] = 3,
    ACTIONS(452), 1,
      aux_sym_fontsize_token1,
    STATE(171), 1,
      sym_fontsize,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2138] = 3,
    ACTIONS(272), 1,
      aux_sym__y_token1,
    STATE(202), 1,
      sym_y,
    ACTIONS(454), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2157] = 3,
    ACTIONS(270), 1,
      aux_sym__x_token1,
    STATE(202), 1,
      sym_x,
    ACTIONS(454), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2176] = 3,
    ACTIONS(452), 1,
      aux_sym_fontsize_token1,
    STATE(206), 1,
      sym_fontsize,
    ACTIONS(456), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2195] = 3,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      sym_decoration,
    ACTIONS(458), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2214] = 3,
    ACTIONS(464), 1,
      sym_height,
    ACTIONS(466), 1,
      sym_width,
    ACTIONS(462), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2233] = 3,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym__component,
    ACTIONS(468), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2252] = 3,
    ACTIONS(474), 1,
      anon_sym_svg,
    STATE(141), 1,
      sym_svg,
    ACTIONS(472), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2271] = 3,
    ACTIONS(478), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(177), 1,
      sym__offset_attr,
    ACTIONS(476), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2290] = 3,
    ACTIONS(478), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(234), 1,
      sym__offset_attr,
    ACTIONS(476), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2309] = 2,
    ACTIONS(482), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
    ACTIONS(480), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2326] = 4,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    ACTIONS(488), 1,
      aux_sym_font_token1,
    STATE(194), 1,
      sym_part,
    ACTIONS(486), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2347] = 3,
    ACTIONS(492), 1,
      anon_sym_light,
    ACTIONS(494), 1,
      anon_sym_dark,
    ACTIONS(490), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2366] = 4,
    ACTIONS(278), 1,
      aux_sym_font_token1,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_name,
    ACTIONS(498), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2387] = 4,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 1,
      aux_sym_font_token1,
    STATE(162), 1,
      sym_name,
    ACTIONS(216), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2408] = 4,
    ACTIONS(442), 1,
      aux_sym_font_token1,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_font,
    ACTIONS(502), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2429] = 3,
    ACTIONS(506), 1,
      anon_sym_font,
    STATE(168), 1,
      sym__font_id,
    ACTIONS(504), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2448] = 4,
    ACTIONS(278), 1,
      aux_sym_font_token1,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_name,
    ACTIONS(510), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2469] = 4,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(488), 1,
      aux_sym_font_token1,
    STATE(162), 1,
      sym_part,
    ACTIONS(216), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2490] = 2,
    ACTIONS(514), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(512), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2506] = 2,
    ACTIONS(518), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(516), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2522] = 2,
    ACTIONS(522), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(520), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2538] = 2,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    ACTIONS(526), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [2554] = 2,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    ACTIONS(530), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [2570] = 2,
    ACTIONS(534), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(532), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2586] = 2,
    ACTIONS(538), 1,
      anon_sym_timestamp,
    ACTIONS(536), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2602] = 2,
    ACTIONS(542), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(540), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2618] = 2,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(546), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [2634] = 2,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(548), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2650] = 2,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(548), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2666] = 1,
    ACTIONS(554), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2680] = 1,
    ACTIONS(556), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2694] = 2,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    ACTIONS(560), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [2710] = 2,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(562), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2726] = 2,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(562), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2742] = 1,
    ACTIONS(568), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2756] = 2,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(570), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2772] = 2,
    ACTIONS(576), 1,
      aux_sym__new_guideline_geometry_token1,
    ACTIONS(574), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2788] = 2,
    ACTIONS(580), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(578), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2804] = 2,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(584), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [2820] = 2,
    ACTIONS(588), 1,
      aux_sym__new_guideline_geometry_token1,
    ACTIONS(586), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2836] = 2,
    ACTIONS(592), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(590), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2852] = 2,
    ACTIONS(596), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(594), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2868] = 2,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(598), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2884] = 2,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(598), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2900] = 2,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(604), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2916] = 2,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(608), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2932] = 1,
    ACTIONS(612), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2946] = 1,
    ACTIONS(614), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2960] = 2,
    ACTIONS(618), 1,
      sym_width,
    ACTIONS(616), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2976] = 1,
    ACTIONS(620), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2990] = 2,
    ACTIONS(624), 1,
      anon_sym_fonts,
    ACTIONS(622), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3006] = 1,
    ACTIONS(626), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3019] = 1,
    ACTIONS(628), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3032] = 1,
    ACTIONS(630), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3045] = 1,
    ACTIONS(346), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3058] = 1,
    ACTIONS(632), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3071] = 1,
    ACTIONS(634), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3084] = 1,
    ACTIONS(636), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3097] = 1,
    ACTIONS(638), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3110] = 1,
    ACTIONS(640), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3123] = 1,
    ACTIONS(642), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3136] = 1,
    ACTIONS(616), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3149] = 6,
    ACTIONS(644), 1,
      anon_sym_input,
    ACTIONS(646), 1,
      anon_sym_output,
    ACTIONS(648), 1,
      anon_sym_parameter,
    ACTIONS(650), 1,
      anon_sym_light,
    ACTIONS(652), 1,
      anon_sym_widget,
    STATE(267), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [3172] = 1,
    ACTIONS(654), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3185] = 1,
    ACTIONS(656), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3198] = 1,
    ACTIONS(658), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3211] = 1,
    ACTIONS(660), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3224] = 1,
    ACTIONS(662), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3237] = 1,
    ACTIONS(664), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3250] = 1,
    ACTIONS(666), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3263] = 1,
    ACTIONS(668), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3276] = 1,
    ACTIONS(670), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3289] = 1,
    ACTIONS(672), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3302] = 1,
    ACTIONS(674), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3315] = 1,
    ACTIONS(676), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3328] = 1,
    ACTIONS(678), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3341] = 1,
    ACTIONS(680), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3354] = 1,
    ACTIONS(682), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3367] = 1,
    ACTIONS(684), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3380] = 1,
    ACTIONS(686), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3393] = 1,
    ACTIONS(688), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3406] = 1,
    ACTIONS(690), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3419] = 1,
    ACTIONS(520), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3432] = 1,
    ACTIONS(516), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3445] = 1,
    ACTIONS(692), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3458] = 1,
    ACTIONS(594), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3471] = 1,
    ACTIONS(694), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3484] = 1,
    ACTIONS(696), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3497] = 1,
    ACTIONS(698), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3510] = 1,
    ACTIONS(700), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3523] = 1,
    ACTIONS(702), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3536] = 1,
    ACTIONS(704), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3549] = 1,
    ACTIONS(706), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3562] = 1,
    ACTIONS(708), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3575] = 1,
    ACTIONS(710), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3588] = 1,
    ACTIONS(476), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3601] = 1,
    ACTIONS(712), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3614] = 1,
    ACTIONS(714), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3627] = 1,
    ACTIONS(532), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3640] = 1,
    ACTIONS(716), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3653] = 1,
    ACTIONS(718), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3666] = 1,
    ACTIONS(720), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3679] = 1,
    ACTIONS(722), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3692] = 1,
    ACTIONS(724), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3705] = 1,
    ACTIONS(548), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3718] = 1,
    ACTIONS(726), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3731] = 1,
    ACTIONS(728), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3744] = 1,
    ACTIONS(730), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3757] = 1,
    ACTIONS(732), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3770] = 1,
    ACTIONS(734), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3783] = 1,
    ACTIONS(562), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3796] = 1,
    ACTIONS(736), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3809] = 1,
    ACTIONS(738), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3822] = 1,
    ACTIONS(740), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3835] = 1,
    ACTIONS(742), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3848] = 1,
    ACTIONS(744), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3861] = 1,
    ACTIONS(746), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3874] = 1,
    ACTIONS(748), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3887] = 1,
    ACTIONS(750), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3900] = 1,
    ACTIONS(752), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3913] = 1,
    ACTIONS(754), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3926] = 1,
    ACTIONS(756), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3939] = 1,
    ACTIONS(758), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3952] = 1,
    ACTIONS(760), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3965] = 1,
    ACTIONS(762), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3978] = 1,
    ACTIONS(764), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3991] = 3,
    ACTIONS(534), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(766), 1,
      anon_sym_AT,
    ACTIONS(768), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
  [4004] = 3,
    ACTIONS(770), 1,
      anon_sym_AT,
    ACTIONS(774), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(772), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
  [4017] = 3,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_identifier,
    ACTIONS(192), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [4029] = 3,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(192), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [4041] = 2,
    STATE(178), 1,
      sym_valign,
    ACTIONS(340), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4051] = 3,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(192), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [4063] = 1,
    ACTIONS(776), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [4071] = 3,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(192), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [4083] = 3,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(192), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [4095] = 1,
    ACTIONS(778), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4102] = 3,
    ACTIONS(780), 1,
      aux_sym__rgb_token1,
    ACTIONS(782), 1,
      aux_sym__rgba_token1,
    STATE(133), 2,
      sym__rgb,
      sym__rgba,
  [4113] = 3,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      aux_sym__offset_token1,
    STATE(258), 1,
      sym__offset,
  [4123] = 2,
    ACTIONS(478), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(174), 1,
      sym__offset_attr,
  [4130] = 2,
    ACTIONS(788), 1,
      aux_sym__y_token1,
    STATE(107), 1,
      sym__y,
  [4137] = 2,
    ACTIONS(788), 1,
      aux_sym__y_token1,
    STATE(75), 1,
      sym__y,
  [4144] = 2,
    ACTIONS(790), 1,
      anon_sym_stretch,
    ACTIONS(792), 1,
      anon_sym_scale,
  [4151] = 2,
    ACTIONS(794), 1,
      aux_sym__rgb_token1,
    STATE(203), 1,
      sym_rgb,
  [4158] = 2,
    ACTIONS(282), 1,
      aux_sym__rgba_token1,
    STATE(203), 1,
      sym_rgba,
  [4165] = 2,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      aux_sym__guideline_xy_attr_token2,
  [4172] = 2,
    ACTIONS(800), 1,
      aux_sym_font_token1,
    STATE(161), 1,
      sym_name,
  [4179] = 2,
    ACTIONS(800), 1,
      aux_sym_font_token1,
    STATE(155), 1,
      sym_name,
  [4186] = 1,
    ACTIONS(802), 1,
      aux_sym_stretch_token1,
  [4190] = 1,
    ACTIONS(804), 1,
      aux_sym__new_guideline_absolute_token1,
  [4194] = 1,
    ACTIONS(806), 1,
      aux_sym_stretch_token1,
  [4198] = 1,
    ACTIONS(534), 1,
      aux_sym__guideline_xy_attr_token1,
  [4202] = 1,
    ACTIONS(808), 1,
      aux_sym__label_id_token3,
  [4206] = 1,
    ACTIONS(810), 1,
      aux_sym_stretch_token1,
  [4210] = 1,
    ACTIONS(812), 1,
      anon_sym_COMMA,
  [4214] = 1,
    ACTIONS(814), 1,
      aux_sym__guideline_xy_attr_token1,
  [4218] = 1,
    ACTIONS(816), 1,
      anon_sym_COMMA,
  [4222] = 1,
    ACTIONS(818), 1,
      anon_sym_COMMA,
  [4226] = 1,
    ACTIONS(796), 1,
      anon_sym_COMMA,
  [4230] = 1,
    ACTIONS(820), 1,
      anon_sym_timestamp,
  [4234] = 1,
    ACTIONS(822), 1,
      aux_sym__label_id_token2,
  [4238] = 1,
    ACTIONS(824), 1,
      sym_width,
  [4242] = 1,
    ACTIONS(826), 1,
      anon_sym_COMMA,
  [4246] = 1,
    ACTIONS(798), 1,
      aux_sym__guideline_xy_attr_token1,
  [4250] = 1,
    ACTIONS(596), 1,
      aux_sym__guideline_xy_attr_token1,
  [4254] = 1,
    ACTIONS(522), 1,
      aux_sym__guideline_xy_attr_token1,
  [4258] = 1,
    ACTIONS(824), 1,
      sym_height,
  [4262] = 1,
    ACTIONS(518), 1,
      aux_sym__guideline_xy_attr_token1,
  [4266] = 1,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
  [4270] = 1,
    ACTIONS(820), 1,
      anon_sym_gzip,
  [4274] = 1,
    ACTIONS(830), 1,
      aux_sym__absolute_token1,
  [4278] = 1,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [4282] = 1,
    ACTIONS(834), 1,
      anon_sym_SQUOTE,
  [4286] = 1,
    ACTIONS(834), 1,
      anon_sym_DQUOTE,
  [4290] = 1,
    ACTIONS(836), 1,
      anon_sym_COMMA,
  [4294] = 1,
    ACTIONS(838), 1,
      anon_sym_COMMA,
  [4298] = 1,
    ACTIONS(840), 1,
      aux_sym__new_guideline_absolute_token1,
  [4302] = 1,
    ACTIONS(842), 1,
      anon_sym_COMMA,
  [4306] = 1,
    ACTIONS(844), 1,
      anon_sym_COMMA,
  [4310] = 1,
    ACTIONS(846), 1,
      aux_sym__absolute_token1,
  [4314] = 1,
    ACTIONS(848), 1,
      anon_sym_COMMA,
  [4318] = 1,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
  [4322] = 1,
    ACTIONS(852), 1,
      anon_sym_COMMA,
  [4326] = 1,
    ACTIONS(854), 1,
      anon_sym_with,
  [4330] = 1,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [4334] = 1,
    ACTIONS(858), 1,
      anon_sym_COMMA,
  [4338] = 1,
    ACTIONS(860), 1,
      aux_sym__label_relative_token1,
  [4342] = 1,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
  [4346] = 1,
    ACTIONS(864), 1,
      aux_sym__absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 236,
  [SMALL_STATE(8)] = 265,
  [SMALL_STATE(9)] = 302,
  [SMALL_STATE(10)] = 328,
  [SMALL_STATE(11)] = 354,
  [SMALL_STATE(12)] = 380,
  [SMALL_STATE(13)] = 424,
  [SMALL_STATE(14)] = 467,
  [SMALL_STATE(15)] = 510,
  [SMALL_STATE(16)] = 540,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 600,
  [SMALL_STATE(19)] = 630,
  [SMALL_STATE(20)] = 660,
  [SMALL_STATE(21)] = 690,
  [SMALL_STATE(22)] = 721,
  [SMALL_STATE(23)] = 754,
  [SMALL_STATE(24)] = 785,
  [SMALL_STATE(25)] = 816,
  [SMALL_STATE(26)] = 847,
  [SMALL_STATE(27)] = 869,
  [SMALL_STATE(28)] = 899,
  [SMALL_STATE(29)] = 929,
  [SMALL_STATE(30)] = 951,
  [SMALL_STATE(31)] = 981,
  [SMALL_STATE(32)] = 1002,
  [SMALL_STATE(33)] = 1033,
  [SMALL_STATE(34)] = 1066,
  [SMALL_STATE(35)] = 1087,
  [SMALL_STATE(36)] = 1116,
  [SMALL_STATE(37)] = 1137,
  [SMALL_STATE(38)] = 1158,
  [SMALL_STATE(39)] = 1179,
  [SMALL_STATE(40)] = 1204,
  [SMALL_STATE(41)] = 1233,
  [SMALL_STATE(42)] = 1255,
  [SMALL_STATE(43)] = 1283,
  [SMALL_STATE(44)] = 1305,
  [SMALL_STATE(45)] = 1327,
  [SMALL_STATE(46)] = 1353,
  [SMALL_STATE(47)] = 1375,
  [SMALL_STATE(48)] = 1401,
  [SMALL_STATE(49)] = 1426,
  [SMALL_STATE(50)] = 1445,
  [SMALL_STATE(51)] = 1470,
  [SMALL_STATE(52)] = 1495,
  [SMALL_STATE(53)] = 1520,
  [SMALL_STATE(54)] = 1545,
  [SMALL_STATE(55)] = 1568,
  [SMALL_STATE(56)] = 1591,
  [SMALL_STATE(57)] = 1616,
  [SMALL_STATE(58)] = 1635,
  [SMALL_STATE(59)] = 1658,
  [SMALL_STATE(60)] = 1683,
  [SMALL_STATE(61)] = 1706,
  [SMALL_STATE(62)] = 1728,
  [SMALL_STATE(63)] = 1750,
  [SMALL_STATE(64)] = 1774,
  [SMALL_STATE(65)] = 1798,
  [SMALL_STATE(66)] = 1822,
  [SMALL_STATE(67)] = 1842,
  [SMALL_STATE(68)] = 1866,
  [SMALL_STATE(69)] = 1890,
  [SMALL_STATE(70)] = 1914,
  [SMALL_STATE(71)] = 1934,
  [SMALL_STATE(72)] = 1950,
  [SMALL_STATE(73)] = 1970,
  [SMALL_STATE(74)] = 1992,
  [SMALL_STATE(75)] = 2014,
  [SMALL_STATE(76)] = 2035,
  [SMALL_STATE(77)] = 2056,
  [SMALL_STATE(78)] = 2077,
  [SMALL_STATE(79)] = 2098,
  [SMALL_STATE(80)] = 2119,
  [SMALL_STATE(81)] = 2138,
  [SMALL_STATE(82)] = 2157,
  [SMALL_STATE(83)] = 2176,
  [SMALL_STATE(84)] = 2195,
  [SMALL_STATE(85)] = 2214,
  [SMALL_STATE(86)] = 2233,
  [SMALL_STATE(87)] = 2252,
  [SMALL_STATE(88)] = 2271,
  [SMALL_STATE(89)] = 2290,
  [SMALL_STATE(90)] = 2309,
  [SMALL_STATE(91)] = 2326,
  [SMALL_STATE(92)] = 2347,
  [SMALL_STATE(93)] = 2366,
  [SMALL_STATE(94)] = 2387,
  [SMALL_STATE(95)] = 2408,
  [SMALL_STATE(96)] = 2429,
  [SMALL_STATE(97)] = 2448,
  [SMALL_STATE(98)] = 2469,
  [SMALL_STATE(99)] = 2490,
  [SMALL_STATE(100)] = 2506,
  [SMALL_STATE(101)] = 2522,
  [SMALL_STATE(102)] = 2538,
  [SMALL_STATE(103)] = 2554,
  [SMALL_STATE(104)] = 2570,
  [SMALL_STATE(105)] = 2586,
  [SMALL_STATE(106)] = 2602,
  [SMALL_STATE(107)] = 2618,
  [SMALL_STATE(108)] = 2634,
  [SMALL_STATE(109)] = 2650,
  [SMALL_STATE(110)] = 2666,
  [SMALL_STATE(111)] = 2680,
  [SMALL_STATE(112)] = 2694,
  [SMALL_STATE(113)] = 2710,
  [SMALL_STATE(114)] = 2726,
  [SMALL_STATE(115)] = 2742,
  [SMALL_STATE(116)] = 2756,
  [SMALL_STATE(117)] = 2772,
  [SMALL_STATE(118)] = 2788,
  [SMALL_STATE(119)] = 2804,
  [SMALL_STATE(120)] = 2820,
  [SMALL_STATE(121)] = 2836,
  [SMALL_STATE(122)] = 2852,
  [SMALL_STATE(123)] = 2868,
  [SMALL_STATE(124)] = 2884,
  [SMALL_STATE(125)] = 2900,
  [SMALL_STATE(126)] = 2916,
  [SMALL_STATE(127)] = 2932,
  [SMALL_STATE(128)] = 2946,
  [SMALL_STATE(129)] = 2960,
  [SMALL_STATE(130)] = 2976,
  [SMALL_STATE(131)] = 2990,
  [SMALL_STATE(132)] = 3006,
  [SMALL_STATE(133)] = 3019,
  [SMALL_STATE(134)] = 3032,
  [SMALL_STATE(135)] = 3045,
  [SMALL_STATE(136)] = 3058,
  [SMALL_STATE(137)] = 3071,
  [SMALL_STATE(138)] = 3084,
  [SMALL_STATE(139)] = 3097,
  [SMALL_STATE(140)] = 3110,
  [SMALL_STATE(141)] = 3123,
  [SMALL_STATE(142)] = 3136,
  [SMALL_STATE(143)] = 3149,
  [SMALL_STATE(144)] = 3172,
  [SMALL_STATE(145)] = 3185,
  [SMALL_STATE(146)] = 3198,
  [SMALL_STATE(147)] = 3211,
  [SMALL_STATE(148)] = 3224,
  [SMALL_STATE(149)] = 3237,
  [SMALL_STATE(150)] = 3250,
  [SMALL_STATE(151)] = 3263,
  [SMALL_STATE(152)] = 3276,
  [SMALL_STATE(153)] = 3289,
  [SMALL_STATE(154)] = 3302,
  [SMALL_STATE(155)] = 3315,
  [SMALL_STATE(156)] = 3328,
  [SMALL_STATE(157)] = 3341,
  [SMALL_STATE(158)] = 3354,
  [SMALL_STATE(159)] = 3367,
  [SMALL_STATE(160)] = 3380,
  [SMALL_STATE(161)] = 3393,
  [SMALL_STATE(162)] = 3406,
  [SMALL_STATE(163)] = 3419,
  [SMALL_STATE(164)] = 3432,
  [SMALL_STATE(165)] = 3445,
  [SMALL_STATE(166)] = 3458,
  [SMALL_STATE(167)] = 3471,
  [SMALL_STATE(168)] = 3484,
  [SMALL_STATE(169)] = 3497,
  [SMALL_STATE(170)] = 3510,
  [SMALL_STATE(171)] = 3523,
  [SMALL_STATE(172)] = 3536,
  [SMALL_STATE(173)] = 3549,
  [SMALL_STATE(174)] = 3562,
  [SMALL_STATE(175)] = 3575,
  [SMALL_STATE(176)] = 3588,
  [SMALL_STATE(177)] = 3601,
  [SMALL_STATE(178)] = 3614,
  [SMALL_STATE(179)] = 3627,
  [SMALL_STATE(180)] = 3640,
  [SMALL_STATE(181)] = 3653,
  [SMALL_STATE(182)] = 3666,
  [SMALL_STATE(183)] = 3679,
  [SMALL_STATE(184)] = 3692,
  [SMALL_STATE(185)] = 3705,
  [SMALL_STATE(186)] = 3718,
  [SMALL_STATE(187)] = 3731,
  [SMALL_STATE(188)] = 3744,
  [SMALL_STATE(189)] = 3757,
  [SMALL_STATE(190)] = 3770,
  [SMALL_STATE(191)] = 3783,
  [SMALL_STATE(192)] = 3796,
  [SMALL_STATE(193)] = 3809,
  [SMALL_STATE(194)] = 3822,
  [SMALL_STATE(195)] = 3835,
  [SMALL_STATE(196)] = 3848,
  [SMALL_STATE(197)] = 3861,
  [SMALL_STATE(198)] = 3874,
  [SMALL_STATE(199)] = 3887,
  [SMALL_STATE(200)] = 3900,
  [SMALL_STATE(201)] = 3913,
  [SMALL_STATE(202)] = 3926,
  [SMALL_STATE(203)] = 3939,
  [SMALL_STATE(204)] = 3952,
  [SMALL_STATE(205)] = 3965,
  [SMALL_STATE(206)] = 3978,
  [SMALL_STATE(207)] = 3991,
  [SMALL_STATE(208)] = 4004,
  [SMALL_STATE(209)] = 4017,
  [SMALL_STATE(210)] = 4029,
  [SMALL_STATE(211)] = 4041,
  [SMALL_STATE(212)] = 4051,
  [SMALL_STATE(213)] = 4063,
  [SMALL_STATE(214)] = 4071,
  [SMALL_STATE(215)] = 4083,
  [SMALL_STATE(216)] = 4095,
  [SMALL_STATE(217)] = 4102,
  [SMALL_STATE(218)] = 4113,
  [SMALL_STATE(219)] = 4123,
  [SMALL_STATE(220)] = 4130,
  [SMALL_STATE(221)] = 4137,
  [SMALL_STATE(222)] = 4144,
  [SMALL_STATE(223)] = 4151,
  [SMALL_STATE(224)] = 4158,
  [SMALL_STATE(225)] = 4165,
  [SMALL_STATE(226)] = 4172,
  [SMALL_STATE(227)] = 4179,
  [SMALL_STATE(228)] = 4186,
  [SMALL_STATE(229)] = 4190,
  [SMALL_STATE(230)] = 4194,
  [SMALL_STATE(231)] = 4198,
  [SMALL_STATE(232)] = 4202,
  [SMALL_STATE(233)] = 4206,
  [SMALL_STATE(234)] = 4210,
  [SMALL_STATE(235)] = 4214,
  [SMALL_STATE(236)] = 4218,
  [SMALL_STATE(237)] = 4222,
  [SMALL_STATE(238)] = 4226,
  [SMALL_STATE(239)] = 4230,
  [SMALL_STATE(240)] = 4234,
  [SMALL_STATE(241)] = 4238,
  [SMALL_STATE(242)] = 4242,
  [SMALL_STATE(243)] = 4246,
  [SMALL_STATE(244)] = 4250,
  [SMALL_STATE(245)] = 4254,
  [SMALL_STATE(246)] = 4258,
  [SMALL_STATE(247)] = 4262,
  [SMALL_STATE(248)] = 4266,
  [SMALL_STATE(249)] = 4270,
  [SMALL_STATE(250)] = 4274,
  [SMALL_STATE(251)] = 4278,
  [SMALL_STATE(252)] = 4282,
  [SMALL_STATE(253)] = 4286,
  [SMALL_STATE(254)] = 4290,
  [SMALL_STATE(255)] = 4294,
  [SMALL_STATE(256)] = 4298,
  [SMALL_STATE(257)] = 4302,
  [SMALL_STATE(258)] = 4306,
  [SMALL_STATE(259)] = 4310,
  [SMALL_STATE(260)] = 4314,
  [SMALL_STATE(261)] = 4318,
  [SMALL_STATE(262)] = 4322,
  [SMALL_STATE(263)] = 4326,
  [SMALL_STATE(264)] = 4330,
  [SMALL_STATE(265)] = 4334,
  [SMALL_STATE(266)] = 4338,
  [SMALL_STATE(267)] = 4342,
  [SMALL_STATE(268)] = 4346,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_entity, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_entity, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_attr, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2, .production_id = 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2, .production_id = 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(86),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(61),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(96),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(60),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(54),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(131),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_attr, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_attr, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_attr, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guide_orientation, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_entity, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_entity, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_entity, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__font_id, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 8),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1, .production_id = 6),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_guide, 1, .production_id = 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 1, .production_id = 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_geometry, 1, .production_id = 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_absolute, 1, .production_id = 7),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 8),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 1, .production_id = 6),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_relative, 1, .production_id = 6),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guide_orientation, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_geometry, 2, .production_id = 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_guide, 2, .production_id = 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_entity, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 4),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 5),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3, .production_id = 13),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 12),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 2, .production_id = 9),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 2, .production_id = 10),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 11),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_absolute, 2, .production_id = 9),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [850] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
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
