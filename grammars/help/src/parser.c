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
#define SYMBOL_COUNT 184
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
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
  anon_sym_parts = 73,
  anon_sym_decorations = 74,
  anon_sym_origin = 75,
  anon_sym_background = 76,
  aux_sym__label_relative_token1 = 77,
  aux_sym_font_token1 = 78,
  aux_sym_fontsize_token1 = 79,
  anon_sym_baseline = 80,
  aux_sym__rgb_token1 = 81,
  aux_sym__rgba_token1 = 82,
  aux_sym__absolute_token1 = 83,
  aux_sym__x_token1 = 84,
  aux_sym__y_token1 = 85,
  aux_sym__offset_token1 = 86,
  aux_sym_string_token1 = 87,
  aux_sym_string_token2 = 88,
  aux_sym__string_token1 = 89,
  aux_sym__string_token2 = 90,
  aux_sym_identifier_token1 = 91,
  aux_sym_identifier_token2 = 92,
  anon_sym_stretch = 93,
  aux_sym_stretch_token1 = 94,
  anon_sym_scale = 95,
  sym_command = 96,
  sym_new = 97,
  sym_module = 98,
  sym__input_entity = 99,
  sym__output_entity = 100,
  sym__parameter_entity = 101,
  sym__light_entity = 102,
  sym__widget_entity = 103,
  sym__component_entity = 104,
  sym__guide_entity = 105,
  sym__new_guide_orientation = 106,
  sym__new_guideline_absolute = 107,
  sym__new_guideline_relative = 108,
  sym__new_guideline_geometry = 109,
  sym__new_guideline_guide = 110,
  sym_set = 111,
  sym__module_attr = 112,
  sym__component_attr = 113,
  sym__label_attr = 114,
  sym__decoration_attr = 115,
  sym__guideline_attr = 116,
  sym__guideline_xy_attr = 117,
  sym__x_attr = 118,
  sym__y_attr = 119,
  sym__xy_attr = 120,
  sym__offset_attr = 121,
  sym_decorate = 122,
  sym__component = 123,
  sym_decoration = 124,
  sym_delete = 125,
  sym__guideline_id = 126,
  sym__input_id = 127,
  sym__output_id = 128,
  sym__parameter_id = 129,
  sym__light_id = 130,
  sym__widget_id = 131,
  sym__label_id = 132,
  sym__decoration_id = 133,
  sym__font_id = 134,
  sym__component_id = 135,
  sym__guide_id = 136,
  sym_load = 137,
  sym_unload = 138,
  sym_save = 139,
  sym_project = 140,
  sym__save_options = 141,
  sym_script = 142,
  sym_export = 143,
  sym__module_export = 144,
  sym_panel = 145,
  sym_svg = 146,
  sym_list = 147,
  sym_origin = 148,
  sym_background = 149,
  sym_label = 150,
  sym__label_string = 151,
  sym__label_absolute = 152,
  sym__label_relative = 153,
  sym__label_geometry = 154,
  sym_font = 155,
  sym_fontsize = 156,
  sym_halign = 157,
  sym_valign = 158,
  sym__align = 159,
  sym_colour = 160,
  sym__rgb = 161,
  sym__rgba = 162,
  sym_name = 163,
  sym_part = 164,
  sym_rgb = 165,
  sym_rgba = 166,
  sym_absolute = 167,
  sym__absolute = 168,
  sym__relative = 169,
  sym__x = 170,
  sym__y = 171,
  sym_x = 172,
  sym_y = 173,
  sym_xy = 174,
  sym__xy = 175,
  sym__offset = 176,
  sym_offset = 177,
  sym_string = 178,
  sym__string = 179,
  sym_identifier = 180,
  sym_stretch = 181,
  sym_scale = 182,
  aux_sym_command_repeat1 = 183,
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
  [anon_sym_parts] = "parts",
  [anon_sym_decorations] = "decorations",
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
  [anon_sym_parts] = anon_sym_parts,
  [anon_sym_decorations] = anon_sym_decorations,
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
  [anon_sym_parts] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_decorations] = {
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
  [35] = 19,
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
  [51] = 20,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 15,
  [56] = 17,
  [57] = 57,
  [58] = 16,
  [59] = 18,
  [60] = 60,
  [61] = 26,
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
  [75] = 5,
  [76] = 76,
  [77] = 77,
  [78] = 32,
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
  [209] = 209,
  [210] = 20,
  [211] = 211,
  [212] = 16,
  [213] = 17,
  [214] = 18,
  [215] = 15,
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
  [267] = 256,
  [268] = 268,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(781);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(785);
      if (lookahead == '(') ADVANCE(708);
      if (lookahead == ')') ADVANCE(709);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '0') ADVANCE(575);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(540);
      if (lookahead == 'y') ADVANCE(544);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == ')') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(884);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(882);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(840);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(885);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(840);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(881);
      if (lookahead == 'm') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(878);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(878);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == 'H') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'H') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(527);
      if (lookahead == 'U') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(178);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(823);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(679);
      if (lookahead == 'm') ADVANCE(669);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(878);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(878);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == 'v') ADVANCE(108);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(790);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(799);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(838);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(261);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(825);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(822);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(710);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(539);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(888);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(252);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(255);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(261);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 146:
      if (lookahead == 'j') ADVANCE(77);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(826);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(824);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(352);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(574);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(881);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(581);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(878);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(880);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(527);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(839);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(837);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(814);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(813);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(880);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(568);
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(834);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(835);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(836);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(873);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(827);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(879);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == 'z') ADVANCE(135);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 283:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 284:
      if (lookahead == 'w') ADVANCE(333);
      END_STATE();
    case 285:
      if (lookahead == 'x') ADVANCE(221);
      END_STATE();
    case 286:
      if (lookahead == 'x') ADVANCE(250);
      END_STATE();
    case 287:
      if (lookahead == 'z') ADVANCE(74);
      END_STATE();
    case 288:
      if (lookahead == 'z') ADVANCE(210);
      END_STATE();
    case 289:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(881);
      if (lookahead == 'm') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(876);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(877);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(875);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 305:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 310:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 311:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 312:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 313:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 314:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 315:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 316:
      if (eof) ADVANCE(332);
      if (lookahead == ' ') SKIP(316)
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(777);
      if (lookahead == 'f') ADVANCE(759);
      if (lookahead == 'h') ADVANCE(726);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead == 'n') ADVANCE(732);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(737);
      if (lookahead == 'u') ADVANCE(755);
      if (lookahead == 'v') ADVANCE(727);
      if (lookahead == 'x') ADVANCE(541);
      if (lookahead == 'y') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(719);
      if (lookahead != 0) ADVANCE(780);
      END_STATE();
    case 317:
      if (eof) ADVANCE(332);
      if (lookahead == ' ') SKIP(317)
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead == 'n') ADVANCE(732);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(755);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(720);
      if (lookahead != 0) ADVANCE(780);
      END_STATE();
    case 318:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '(') ADVANCE(708);
      if (lookahead == 'd') ADVANCE(413);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead == 'x') ADVANCE(542);
      if (lookahead == 'y') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 319:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '(') ADVANCE(708);
      if (lookahead == 'd') ADVANCE(413);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(319)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 320:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(413);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 'p') ADVANCE(400);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead == 'x') ADVANCE(542);
      if (lookahead == 'y') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(320)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 321:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(708);
      if (lookahead == ')') ADVANCE(709);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == 'x') ADVANCE(540);
      if (lookahead == 'y') ADVANCE(544);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(321)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 322:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(193);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(322)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 323:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(871);
      if (lookahead == 'l') ADVANCE(854);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == 's') ADVANCE(841);
      if (lookahead == 'u') ADVANCE(856);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 324:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(708);
      if (lookahead == 'd') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(871);
      if (lookahead == 'l') ADVANCE(854);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == 's') ADVANCE(841);
      if (lookahead == 'u') ADVANCE(856);
      if (lookahead == 'x') ADVANCE(543);
      if (lookahead == 'y') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 325:
      if (eof) ADVANCE(332);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == 'b') ADVANCE(464);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == 'd') ADVANCE(413);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'h') ADVANCE(465);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == 'm') ADVANCE(444);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead == 'v') ADVANCE(426);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 326:
      if (eof) ADVANCE(332);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(617);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(611);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead == 'r') ADVANCE(610);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead == 't') ADVANCE(620);
      if (lookahead == 'u') ADVANCE(615);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 327:
      if (eof) ADVANCE(332);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(467);
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead == 'd') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == 'u') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 328:
      if (eof) ADVANCE(332);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(653);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead == 'm') ADVANCE(669);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead == 's') ADVANCE(644);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == 'u') ADVANCE(673);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 329:
      if (eof) ADVANCE(332);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'c') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(653);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == 'l') ADVANCE(654);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead == 'r') ADVANCE(668);
      if (lookahead == 's') ADVANCE(644);
      if (lookahead == 'u') ADVANCE(673);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 330:
      if (eof) ADVANCE(332);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(330)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 331:
      if (eof) ADVANCE(332);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__new_guideline_absolute_token1);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__new_guideline_geometry_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'e') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(468);
      if (lookahead == 'l') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 'l') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(492);
      if (lookahead == 'o') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == 'r') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'f') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'f') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'g') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'g') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'h') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'h') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 's') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 's') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'v') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'v') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'w') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'x') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'x') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'z') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(525);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(178);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(548);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_halign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_valign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(579);
      if (lookahead == 'H') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == 'H') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(580);
      if (lookahead == 'H') ADVANCE(574);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(574);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == 'H') ADVANCE(581);
      if (lookahead == 'm') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == 'H') ADVANCE(581);
      if (lookahead == 'm') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'e') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'c') ADVANCE(618);
      if (lookahead == 'l') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead == 'r') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'f') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'g') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'h') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'i') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'i') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'l') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'l') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'm') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'n') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'n') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'p') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'p') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 's') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'v') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'w') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'x') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(697);
      if (lookahead == 'e') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'l') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == 'i') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == 'r') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'f') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'g') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'h') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'l') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'l') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'm') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'n') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'n') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'p') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'p') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 's') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'v') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'w') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'x') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(777);
      if (lookahead == 'f') ADVANCE(759);
      if (lookahead == 'h') ADVANCE(726);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead == 'n') ADVANCE(732);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(737);
      if (lookahead == 'u') ADVANCE(755);
      if (lookahead == 'v') ADVANCE(727);
      if (lookahead == 'x') ADVANCE(541);
      if (lookahead == 'y') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead == 'n') ADVANCE(732);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(755);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(775);
      if (lookahead == 'e') ADVANCE(768);
      if (lookahead == 'i') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(775);
      if (lookahead == 'e') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'c') ADVANCE(757);
      if (lookahead == 'l') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'd') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'd') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead == 'o') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'p') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == 'u') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 's') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'v') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'w') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'z') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(784);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(784);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(788);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_unload);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_unload);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_unload);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_unload);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(780);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(869);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(857);
      if (lookahead == 'l') ADVANCE(853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_stretch_token1);
      if (lookahead == '.') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_stretch_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(890);
      END_STATE();
    case 891:
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
  [5] = {.lex_state = 316},
  [6] = {.lex_state = 325},
  [7] = {.lex_state = 326},
  [8] = {.lex_state = 327},
  [9] = {.lex_state = 326},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 320},
  [16] = {.lex_state = 320},
  [17] = {.lex_state = 320},
  [18] = {.lex_state = 320},
  [19] = {.lex_state = 318},
  [20] = {.lex_state = 320},
  [21] = {.lex_state = 329},
  [22] = {.lex_state = 322},
  [23] = {.lex_state = 329},
  [24] = {.lex_state = 329},
  [25] = {.lex_state = 329},
  [26] = {.lex_state = 321},
  [27] = {.lex_state = 330},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 328},
  [30] = {.lex_state = 328},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 324},
  [33] = {.lex_state = 322},
  [34] = {.lex_state = 323},
  [35] = {.lex_state = 319},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 321},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 321},
  [44] = {.lex_state = 321},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 321},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 319},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 319},
  [54] = {.lex_state = 319},
  [55] = {.lex_state = 319},
  [56] = {.lex_state = 319},
  [57] = {.lex_state = 322},
  [58] = {.lex_state = 319},
  [59] = {.lex_state = 319},
  [60] = {.lex_state = 331},
  [61] = {.lex_state = 322},
  [62] = {.lex_state = 322},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 323},
  [66] = {.lex_state = 323},
  [67] = {.lex_state = 322},
  [68] = {.lex_state = 323},
  [69] = {.lex_state = 323},
  [70] = {.lex_state = 321},
  [71] = {.lex_state = 322},
  [72] = {.lex_state = 323},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 323},
  [75] = {.lex_state = 317},
  [76] = {.lex_state = 323},
  [77] = {.lex_state = 323},
  [78] = {.lex_state = 323},
  [79] = {.lex_state = 323},
  [80] = {.lex_state = 322},
  [81] = {.lex_state = 323},
  [82] = {.lex_state = 322},
  [83] = {.lex_state = 322},
  [84] = {.lex_state = 322},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 321},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 321},
  [89] = {.lex_state = 321},
  [90] = {.lex_state = 323},
  [91] = {.lex_state = 323},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 323},
  [94] = {.lex_state = 323},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 323},
  [99] = {.lex_state = 323},
  [100] = {.lex_state = 331},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 323},
  [104] = {.lex_state = 323},
  [105] = {.lex_state = 321},
  [106] = {.lex_state = 331},
  [107] = {.lex_state = 323},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 323},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 321},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 321},
  [119] = {.lex_state = 330},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 330},
  [122] = {.lex_state = 321},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 323},
  [126] = {.lex_state = 321},
  [127] = {.lex_state = 331},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 321},
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
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 321},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 321},
  [218] = {.lex_state = 325},
  [219] = {.lex_state = 325},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 326},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 326},
  [226] = {.lex_state = 322},
  [227] = {.lex_state = 322},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 325},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 320},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 318},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 324},
  [240] = {.lex_state = 330},
  [241] = {.lex_state = 320},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 321},
  [245] = {.lex_state = 325},
  [246] = {.lex_state = 318},
  [247] = {.lex_state = 318},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 325},
  [253] = {.lex_state = 325},
  [254] = {.lex_state = 325},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 324},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 320},
  [264] = {.lex_state = 325},
  [265] = {.lex_state = 787},
  [266] = {.lex_state = 783},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 321},
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
    [sym_command] = STATE(255),
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
    STATE(7), 1,
      sym__guide_id,
    STATE(10), 1,
      sym__label_id,
    STATE(37), 1,
      sym__decoration_id,
    STATE(46), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(142), 7,
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
    STATE(140), 8,
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
    STATE(152), 8,
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
    STATE(170), 3,
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
  [236] = 7,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_id,
    ACTIONS(113), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(173), 1,
      sym__guideline_xy_attr,
    ACTIONS(109), 8,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guideline_xy_attr_token3,
    ACTIONS(105), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [273] = 3,
    ACTIONS(119), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(117), 18,
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
  [302] = 2,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(123), 18,
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
  [328] = 11,
    ACTIONS(127), 1,
      anon_sym_x,
    ACTIONS(129), 1,
      anon_sym_y,
    ACTIONS(131), 1,
      anon_sym_xy,
    ACTIONS(133), 1,
      anon_sym_text,
    ACTIONS(135), 1,
      anon_sym_font,
    ACTIONS(137), 1,
      anon_sym_size,
    ACTIONS(139), 1,
      anon_sym_halign,
    ACTIONS(141), 1,
      anon_sym_valign,
    ACTIONS(143), 1,
      anon_sym_align,
    ACTIONS(145), 2,
      anon_sym_colour,
      anon_sym_color,
    ACTIONS(125), 10,
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
  [372] = 2,
    ACTIONS(149), 1,
      anon_sym_x,
    ACTIONS(147), 20,
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
  [398] = 2,
    ACTIONS(153), 1,
      anon_sym_x,
    ACTIONS(151), 20,
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
    STATE(39), 1,
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
    STATE(36), 1,
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
    STATE(31), 1,
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
    STATE(38), 1,
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
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(48), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(208), 12,
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
  [660] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(212), 14,
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
  [690] = 6,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_AT,
    ACTIONS(222), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(168), 1,
      sym__xy_attr,
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
    STATE(261), 1,
      sym__x,
    STATE(125), 3,
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
    STATE(168), 1,
      sym__x_attr,
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
    STATE(159), 1,
      sym__x_attr,
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
    STATE(159), 1,
      sym__xy_attr,
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
    ACTIONS(230), 1,
      aux_sym__x_token1,
    ACTIONS(248), 1,
      anon_sym_AT,
    ACTIONS(250), 1,
      aux_sym__label_relative_token1,
    STATE(259), 1,
      sym__x,
    STATE(149), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(246), 10,
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
  [899] = 2,
    ACTIONS(254), 1,
      anon_sym_x,
    ACTIONS(252), 16,
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
  [921] = 6,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      anon_sym_AT,
    ACTIONS(260), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(168), 1,
      sym__y_attr,
    ACTIONS(258), 4,
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
  [951] = 6,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      anon_sym_AT,
    ACTIONS(260), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(159), 1,
      sym__y_attr,
    ACTIONS(258), 4,
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
  [1002] = 4,
    ACTIONS(270), 1,
      aux_sym_font_token1,
    STATE(50), 1,
      sym_name,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(268), 12,
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
  [1027] = 7,
    ACTIONS(274), 1,
      anon_sym_AT,
    ACTIONS(276), 1,
      aux_sym__x_token1,
    ACTIONS(278), 1,
      aux_sym__y_token1,
    STATE(108), 1,
      sym_x,
    STATE(109), 1,
      sym_y,
    STATE(165), 1,
      sym_absolute,
    ACTIONS(272), 10,
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
  [1058] = 8,
    ACTIONS(270), 1,
      aux_sym_font_token1,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      aux_sym__rgb_token1,
    ACTIONS(286), 1,
      aux_sym__rgba_token1,
    STATE(113), 1,
      sym_rgb,
    STATE(114), 1,
      sym_rgba,
    STATE(202), 1,
      sym_name,
    ACTIONS(282), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1091] = 6,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(48), 2,
      sym__component_id,
      sym_identifier,
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
  [1120] = 2,
    ACTIONS(292), 1,
      anon_sym_x,
    ACTIONS(290), 15,
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
  [1141] = 6,
    ACTIONS(296), 1,
      anon_sym_x,
    ACTIONS(298), 1,
      anon_sym_y,
    ACTIONS(300), 1,
      anon_sym_xy,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    STATE(133), 2,
      sym_stretch,
      sym_scale,
    ACTIONS(294), 10,
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
  [1170] = 2,
    ACTIONS(306), 1,
      anon_sym_x,
    ACTIONS(304), 15,
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
  [1191] = 2,
    ACTIONS(310), 1,
      anon_sym_x,
    ACTIONS(308), 15,
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
  [1212] = 2,
    ACTIONS(314), 1,
      anon_sym_x,
    ACTIONS(312), 15,
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
  [1233] = 3,
    STATE(168), 1,
      sym_valign,
    ACTIONS(316), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(214), 10,
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
  [1255] = 5,
    ACTIONS(318), 1,
      aux_sym__rgb_token1,
    ACTIONS(320), 1,
      aux_sym__rgba_token1,
    STATE(168), 1,
      sym_colour,
    STATE(117), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(214), 10,
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
  [1281] = 3,
    STATE(168), 1,
      sym_halign,
    ACTIONS(322), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(214), 10,
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
  [1303] = 3,
    STATE(201), 1,
      sym_halign,
    ACTIONS(322), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(324), 10,
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
  [1325] = 5,
    ACTIONS(318), 1,
      aux_sym__rgb_token1,
    ACTIONS(320), 1,
      aux_sym__rgba_token1,
    STATE(203), 1,
      sym_colour,
    STATE(117), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(326), 10,
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
  [1351] = 6,
    ACTIONS(330), 1,
      anon_sym_name,
    ACTIONS(332), 1,
      anon_sym_x,
    ACTIONS(334), 1,
      anon_sym_y,
    ACTIONS(336), 1,
      anon_sym_xy,
    ACTIONS(338), 1,
      anon_sym_part,
    ACTIONS(328), 10,
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
  [1379] = 3,
    STATE(168), 1,
      sym__align,
    ACTIONS(340), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(214), 10,
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
  [1401] = 2,
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
  [1420] = 4,
    ACTIONS(348), 1,
      anon_sym_project,
    ACTIONS(350), 1,
      anon_sym_script,
    STATE(188), 2,
      sym_project,
      sym_script,
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
  [1443] = 2,
    ACTIONS(354), 1,
      anon_sym_x,
    ACTIONS(352), 13,
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
  [1462] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
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
  [1487] = 4,
    ACTIONS(358), 1,
      anon_sym_module,
    ACTIONS(360), 1,
      anon_sym_panel,
    STATE(191), 2,
      sym__module_export,
      sym_panel,
    ACTIONS(356), 10,
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
  [1510] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(364), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1535] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    STATE(172), 1,
      sym_identifier,
    ACTIONS(192), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(368), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1560] = 5,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    STATE(39), 1,
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
  [1585] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
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
  [1610] = 4,
    STATE(27), 1,
      sym__string,
    STATE(156), 1,
      sym__label_string,
    ACTIONS(372), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(370), 10,
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
  [1633] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
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
  [1658] = 5,
    ACTIONS(190), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
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
  [1683] = 4,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      aux_sym__new_guideline_absolute_token1,
    STATE(144), 2,
      sym__new_guideline_absolute,
      sym__new_guideline_relative,
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
  [1706] = 1,
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
  [1722] = 3,
    ACTIONS(382), 1,
      aux_sym__offset_token1,
    STATE(131), 1,
      sym_offset,
    ACTIONS(380), 11,
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
  [1742] = 4,
    ACTIONS(386), 1,
      anon_sym_name,
    ACTIONS(388), 1,
      anon_sym_height,
    ACTIONS(390), 1,
      anon_sym_width,
    ACTIONS(384), 10,
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
  [1764] = 4,
    ACTIONS(394), 1,
      anon_sym_font,
    ACTIONS(396), 1,
      anon_sym_project,
    ACTIONS(398), 1,
      anon_sym_script,
    ACTIONS(392), 10,
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
  [1786] = 5,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(192), 1,
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
  [1810] = 5,
    ACTIONS(404), 1,
      aux_sym_font_token1,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(184), 1,
      sym__component_entity,
    ACTIONS(408), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1834] = 3,
    ACTIONS(382), 1,
      aux_sym__offset_token1,
    STATE(101), 1,
      sym_offset,
    ACTIONS(410), 11,
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
  [1854] = 5,
    ACTIONS(404), 1,
      aux_sym_font_token1,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(193), 1,
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
  [1878] = 5,
    ACTIONS(404), 1,
      aux_sym_font_token1,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(132), 1,
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
  [1902] = 3,
    STATE(168), 1,
      sym_string,
    ACTIONS(420), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(214), 10,
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
  [1922] = 2,
    ACTIONS(424), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
    ACTIONS(422), 10,
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
  [1940] = 5,
    ACTIONS(404), 1,
      aux_sym_font_token1,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_name,
    STATE(204), 1,
      sym__component_entity,
    ACTIONS(428), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1964] = 4,
    ACTIONS(432), 1,
      anon_sym_timestamp,
    ACTIONS(434), 1,
      anon_sym_gzip,
    STATE(134), 1,
      sym__save_options,
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
  [1986] = 4,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 1,
      aux_sym__offset_token1,
    STATE(103), 1,
      sym__offset,
    ACTIONS(438), 10,
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
  [2008] = 5,
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
  [2032] = 4,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 1,
      aux_sym_font_token1,
    STATE(180), 1,
      sym_font,
    ACTIONS(444), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2053] = 4,
    ACTIONS(270), 1,
      aux_sym_font_token1,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_name,
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
  [2074] = 4,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      aux_sym_font_token1,
    STATE(50), 1,
      sym_name,
    ACTIONS(268), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2095] = 4,
    ACTIONS(270), 1,
      aux_sym_font_token1,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_name,
    ACTIONS(454), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2116] = 3,
    ACTIONS(456), 1,
      aux_sym_fontsize_token1,
    STATE(168), 1,
      sym_fontsize,
    ACTIONS(214), 10,
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
  [2135] = 4,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 1,
      aux_sym_font_token1,
    STATE(168), 1,
      sym_font,
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
  [2156] = 3,
    ACTIONS(278), 1,
      aux_sym__y_token1,
    STATE(195), 1,
      sym_y,
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
  [2175] = 3,
    ACTIONS(276), 1,
      aux_sym__x_token1,
    STATE(195), 1,
      sym_x,
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
  [2194] = 3,
    ACTIONS(456), 1,
      aux_sym_fontsize_token1,
    STATE(200), 1,
      sym_fontsize,
    ACTIONS(460), 10,
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
  [2213] = 3,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_decoration,
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
  [2232] = 3,
    ACTIONS(468), 1,
      sym_height,
    ACTIONS(470), 1,
      sym_width,
    ACTIONS(466), 10,
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
  [2251] = 3,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym__component,
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
  [2270] = 3,
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
  [2289] = 3,
    ACTIONS(478), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(249), 1,
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
  [2308] = 4,
    ACTIONS(446), 1,
      aux_sym_font_token1,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
    STATE(194), 1,
      sym_font,
    ACTIONS(482), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2329] = 4,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    ACTIONS(488), 1,
      aux_sym_font_token1,
    STATE(189), 1,
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
  [2350] = 3,
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
  [2369] = 4,
    ACTIONS(270), 1,
      aux_sym_font_token1,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
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
  [2390] = 4,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      aux_sym_font_token1,
    STATE(159), 1,
      sym_name,
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
  [2411] = 3,
    ACTIONS(502), 1,
      anon_sym_svg,
    STATE(137), 1,
      sym_svg,
    ACTIONS(500), 10,
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
  [2430] = 2,
    ACTIONS(506), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
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
  [2447] = 3,
    ACTIONS(510), 1,
      anon_sym_font,
    STATE(160), 1,
      sym__font_id,
    ACTIONS(508), 10,
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
  [2466] = 4,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(488), 1,
      aux_sym_font_token1,
    STATE(159), 1,
      sym_part,
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
  [2487] = 4,
    ACTIONS(446), 1,
      aux_sym_font_token1,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      sym_font,
    ACTIONS(514), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2508] = 2,
    ACTIONS(518), 1,
      aux_sym__new_guideline_absolute_token1,
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
  [2524] = 1,
    ACTIONS(520), 11,
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
  [2538] = 2,
    ACTIONS(524), 1,
      anon_sym_timestamp,
    ACTIONS(522), 10,
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
  [2554] = 2,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    ACTIONS(528), 10,
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
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    ACTIONS(532), 10,
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
  [2586] = 2,
    ACTIONS(536), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(534), 10,
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
    ACTIONS(540), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(538), 10,
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
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 10,
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
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(546), 10,
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
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(546), 10,
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
    ACTIONS(552), 11,
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
  [2694] = 2,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
    ACTIONS(558), 10,
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
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(560), 10,
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
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(560), 10,
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
  [2742] = 2,
    ACTIONS(568), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(566), 10,
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
  [2758] = 1,
    ACTIONS(570), 11,
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
  [2772] = 2,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(572), 10,
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
    ACTIONS(578), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(576), 10,
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
      aux_sym__new_guideline_geometry_token1,
    ACTIONS(580), 10,
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
  [2820] = 2,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(584), 10,
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
    ACTIONS(590), 1,
      aux_sym__new_guideline_geometry_token1,
    ACTIONS(588), 10,
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
    ACTIONS(594), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(592), 10,
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
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(596), 10,
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
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(596), 10,
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
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 10,
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
  [2916] = 2,
    ACTIONS(608), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(606), 10,
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
  [2932] = 2,
    ACTIONS(612), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(610), 10,
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
  [2948] = 2,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    ACTIONS(614), 10,
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
  [2964] = 2,
    ACTIONS(620), 1,
      sym_width,
    ACTIONS(618), 10,
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
  [2980] = 1,
    ACTIONS(622), 11,
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
  [2994] = 1,
    ACTIONS(624), 11,
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
  [3008] = 1,
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
  [3021] = 1,
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
  [3034] = 1,
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
  [3047] = 1,
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
  [3060] = 1,
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
  [3073] = 1,
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
  [3086] = 1,
    ACTIONS(618), 10,
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
  [3099] = 1,
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
  [3112] = 1,
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
  [3125] = 1,
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
  [3138] = 1,
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
  [3151] = 1,
    ACTIONS(644), 10,
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
  [3164] = 1,
    ACTIONS(646), 10,
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
  [3177] = 1,
    ACTIONS(648), 10,
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
  [3190] = 1,
    ACTIONS(650), 10,
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
  [3203] = 1,
    ACTIONS(652), 10,
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
  [3216] = 1,
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
  [3229] = 1,
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
  [3242] = 1,
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
  [3255] = 1,
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
  [3268] = 1,
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
  [3281] = 1,
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
  [3294] = 1,
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
  [3307] = 1,
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
  [3320] = 1,
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
  [3333] = 1,
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
  [3346] = 1,
    ACTIONS(534), 10,
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
  [3359] = 1,
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
  [3372] = 1,
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
  [3385] = 1,
    ACTIONS(592), 10,
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
  [3398] = 1,
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
  [3411] = 1,
    ACTIONS(606), 10,
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
  [3424] = 1,
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
  [3437] = 1,
    ACTIONS(546), 10,
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
  [3450] = 1,
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
  [3463] = 1,
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
  [3476] = 1,
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
  [3489] = 1,
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
  [3502] = 1,
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
  [3515] = 6,
    ACTIONS(692), 1,
      anon_sym_input,
    ACTIONS(694), 1,
      anon_sym_output,
    ACTIONS(696), 1,
      anon_sym_parameter,
    ACTIONS(698), 1,
      anon_sym_light,
    ACTIONS(700), 1,
      anon_sym_widget,
    STATE(267), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [3538] = 1,
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
  [3551] = 1,
    ACTIONS(362), 10,
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
  [3564] = 1,
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
  [3577] = 1,
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
  [3590] = 1,
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
  [3603] = 1,
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
  [3616] = 1,
    ACTIONS(566), 10,
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
  [3629] = 1,
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
  [3642] = 1,
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
  [3655] = 1,
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
  [3668] = 1,
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
  [3681] = 1,
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
  [3694] = 1,
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
  [3707] = 1,
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
  [3720] = 1,
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
  [3733] = 1,
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
  [3746] = 1,
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
  [3759] = 1,
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
  [3772] = 1,
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
  [3785] = 1,
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
  [3798] = 1,
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
  [3811] = 1,
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
  [3824] = 1,
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
  [3837] = 1,
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
  [3850] = 1,
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
  [3863] = 1,
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
  [3876] = 1,
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
  [3889] = 1,
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
  [3902] = 1,
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
  [3915] = 1,
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
  [3928] = 1,
    ACTIONS(560), 10,
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
  [3941] = 1,
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
  [3954] = 1,
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
  [3967] = 1,
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
  [3980] = 1,
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
  [3993] = 3,
    ACTIONS(766), 1,
      anon_sym_AT,
    ACTIONS(770), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(768), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
  [4006] = 3,
    ACTIONS(536), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(772), 1,
      anon_sym_AT,
    ACTIONS(774), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
  [4019] = 1,
    ACTIONS(776), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [4027] = 3,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(192), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [4039] = 2,
    STATE(157), 1,
      sym_valign,
    ACTIONS(316), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4049] = 3,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(192), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [4061] = 3,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(192), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [4073] = 3,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(192), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [4085] = 3,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(192), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [4097] = 3,
    ACTIONS(778), 1,
      aux_sym__rgb_token1,
    ACTIONS(780), 1,
      aux_sym__rgba_token1,
    STATE(147), 2,
      sym__rgb,
      sym__rgba,
  [4108] = 1,
    ACTIONS(782), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4115] = 3,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      aux_sym__offset_token1,
    STATE(232), 1,
      sym__offset,
  [4125] = 2,
    ACTIONS(788), 1,
      aux_sym__rgb_token1,
    STATE(196), 1,
      sym_rgb,
  [4132] = 2,
    ACTIONS(790), 1,
      aux_sym_font_token1,
    STATE(151), 1,
      sym_name,
  [4139] = 2,
    ACTIONS(286), 1,
      aux_sym__rgba_token1,
    STATE(196), 1,
      sym_rgba,
  [4146] = 2,
    ACTIONS(478), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(141), 1,
      sym__offset_attr,
  [4153] = 2,
    ACTIONS(792), 1,
      anon_sym_stretch,
    ACTIONS(794), 1,
      anon_sym_scale,
  [4160] = 2,
    ACTIONS(790), 1,
      aux_sym_font_token1,
    STATE(174), 1,
      sym_name,
  [4167] = 2,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      aux_sym__guideline_xy_attr_token2,
  [4174] = 2,
    ACTIONS(800), 1,
      aux_sym__y_token1,
    STATE(107), 1,
      sym__y,
  [4181] = 2,
    ACTIONS(800), 1,
      aux_sym__y_token1,
    STATE(76), 1,
      sym__y,
  [4188] = 1,
    ACTIONS(802), 1,
      anon_sym_COMMA,
  [4192] = 1,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
  [4196] = 1,
    ACTIONS(536), 1,
      aux_sym__guideline_xy_attr_token1,
  [4200] = 1,
    ACTIONS(806), 1,
      anon_sym_with,
  [4204] = 1,
    ACTIONS(808), 1,
      anon_sym_COMMA,
  [4208] = 1,
    ACTIONS(810), 1,
      anon_sym_timestamp,
  [4212] = 1,
    ACTIONS(812), 1,
      aux_sym__absolute_token1,
  [4216] = 1,
    ACTIONS(810), 1,
      anon_sym_gzip,
  [4220] = 1,
    ACTIONS(814), 1,
      anon_sym_COMMA,
  [4224] = 1,
    ACTIONS(816), 1,
      aux_sym_stretch_token1,
  [4228] = 1,
    ACTIONS(818), 1,
      anon_sym_COMMA,
  [4232] = 1,
    ACTIONS(820), 1,
      aux_sym__new_guideline_absolute_token1,
  [4236] = 1,
    ACTIONS(822), 1,
      aux_sym__label_relative_token1,
  [4240] = 1,
    ACTIONS(824), 1,
      aux_sym__absolute_token1,
  [4244] = 1,
    ACTIONS(826), 1,
      anon_sym_COMMA,
  [4248] = 1,
    ACTIONS(828), 1,
      anon_sym_COMMA,
  [4252] = 1,
    ACTIONS(830), 1,
      sym_height,
  [4256] = 1,
    ACTIONS(568), 1,
      aux_sym__guideline_xy_attr_token1,
  [4260] = 1,
    ACTIONS(832), 1,
      aux_sym_stretch_token1,
  [4264] = 1,
    ACTIONS(834), 1,
      aux_sym_stretch_token1,
  [4268] = 1,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
  [4272] = 1,
    ACTIONS(838), 1,
      anon_sym_COMMA,
  [4276] = 1,
    ACTIONS(840), 1,
      anon_sym_COMMA,
  [4280] = 1,
    ACTIONS(796), 1,
      anon_sym_COMMA,
  [4284] = 1,
    ACTIONS(798), 1,
      aux_sym__guideline_xy_attr_token1,
  [4288] = 1,
    ACTIONS(608), 1,
      aux_sym__guideline_xy_attr_token1,
  [4292] = 1,
    ACTIONS(594), 1,
      aux_sym__guideline_xy_attr_token1,
  [4296] = 1,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
  [4300] = 1,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
  [4304] = 1,
    ACTIONS(846), 1,
      anon_sym_SQUOTE,
  [4308] = 1,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
  [4312] = 1,
    ACTIONS(848), 1,
      anon_sym_COMMA,
  [4316] = 1,
    ACTIONS(850), 1,
      aux_sym__new_guideline_absolute_token1,
  [4320] = 1,
    ACTIONS(852), 1,
      anon_sym_COMMA,
  [4324] = 1,
    ACTIONS(854), 1,
      anon_sym_COMMA,
  [4328] = 1,
    ACTIONS(856), 1,
      aux_sym__absolute_token1,
  [4332] = 1,
    ACTIONS(858), 1,
      aux_sym__guideline_xy_attr_token1,
  [4336] = 1,
    ACTIONS(860), 1,
      aux_sym__label_id_token3,
  [4340] = 1,
    ACTIONS(862), 1,
      aux_sym__label_id_token2,
  [4344] = 1,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
  [4348] = 1,
    ACTIONS(830), 1,
      sym_width,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 236,
  [SMALL_STATE(8)] = 273,
  [SMALL_STATE(9)] = 302,
  [SMALL_STATE(10)] = 328,
  [SMALL_STATE(11)] = 372,
  [SMALL_STATE(12)] = 398,
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
  [SMALL_STATE(29)] = 921,
  [SMALL_STATE(30)] = 951,
  [SMALL_STATE(31)] = 981,
  [SMALL_STATE(32)] = 1002,
  [SMALL_STATE(33)] = 1027,
  [SMALL_STATE(34)] = 1058,
  [SMALL_STATE(35)] = 1091,
  [SMALL_STATE(36)] = 1120,
  [SMALL_STATE(37)] = 1141,
  [SMALL_STATE(38)] = 1170,
  [SMALL_STATE(39)] = 1191,
  [SMALL_STATE(40)] = 1212,
  [SMALL_STATE(41)] = 1233,
  [SMALL_STATE(42)] = 1255,
  [SMALL_STATE(43)] = 1281,
  [SMALL_STATE(44)] = 1303,
  [SMALL_STATE(45)] = 1325,
  [SMALL_STATE(46)] = 1351,
  [SMALL_STATE(47)] = 1379,
  [SMALL_STATE(48)] = 1401,
  [SMALL_STATE(49)] = 1420,
  [SMALL_STATE(50)] = 1443,
  [SMALL_STATE(51)] = 1462,
  [SMALL_STATE(52)] = 1487,
  [SMALL_STATE(53)] = 1510,
  [SMALL_STATE(54)] = 1535,
  [SMALL_STATE(55)] = 1560,
  [SMALL_STATE(56)] = 1585,
  [SMALL_STATE(57)] = 1610,
  [SMALL_STATE(58)] = 1633,
  [SMALL_STATE(59)] = 1658,
  [SMALL_STATE(60)] = 1683,
  [SMALL_STATE(61)] = 1706,
  [SMALL_STATE(62)] = 1722,
  [SMALL_STATE(63)] = 1742,
  [SMALL_STATE(64)] = 1764,
  [SMALL_STATE(65)] = 1786,
  [SMALL_STATE(66)] = 1810,
  [SMALL_STATE(67)] = 1834,
  [SMALL_STATE(68)] = 1854,
  [SMALL_STATE(69)] = 1878,
  [SMALL_STATE(70)] = 1902,
  [SMALL_STATE(71)] = 1922,
  [SMALL_STATE(72)] = 1940,
  [SMALL_STATE(73)] = 1964,
  [SMALL_STATE(74)] = 1986,
  [SMALL_STATE(75)] = 2008,
  [SMALL_STATE(76)] = 2032,
  [SMALL_STATE(77)] = 2053,
  [SMALL_STATE(78)] = 2074,
  [SMALL_STATE(79)] = 2095,
  [SMALL_STATE(80)] = 2116,
  [SMALL_STATE(81)] = 2135,
  [SMALL_STATE(82)] = 2156,
  [SMALL_STATE(83)] = 2175,
  [SMALL_STATE(84)] = 2194,
  [SMALL_STATE(85)] = 2213,
  [SMALL_STATE(86)] = 2232,
  [SMALL_STATE(87)] = 2251,
  [SMALL_STATE(88)] = 2270,
  [SMALL_STATE(89)] = 2289,
  [SMALL_STATE(90)] = 2308,
  [SMALL_STATE(91)] = 2329,
  [SMALL_STATE(92)] = 2350,
  [SMALL_STATE(93)] = 2369,
  [SMALL_STATE(94)] = 2390,
  [SMALL_STATE(95)] = 2411,
  [SMALL_STATE(96)] = 2430,
  [SMALL_STATE(97)] = 2447,
  [SMALL_STATE(98)] = 2466,
  [SMALL_STATE(99)] = 2487,
  [SMALL_STATE(100)] = 2508,
  [SMALL_STATE(101)] = 2524,
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
  [SMALL_STATE(116)] = 2758,
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
  [SMALL_STATE(128)] = 2948,
  [SMALL_STATE(129)] = 2964,
  [SMALL_STATE(130)] = 2980,
  [SMALL_STATE(131)] = 2994,
  [SMALL_STATE(132)] = 3008,
  [SMALL_STATE(133)] = 3021,
  [SMALL_STATE(134)] = 3034,
  [SMALL_STATE(135)] = 3047,
  [SMALL_STATE(136)] = 3060,
  [SMALL_STATE(137)] = 3073,
  [SMALL_STATE(138)] = 3086,
  [SMALL_STATE(139)] = 3099,
  [SMALL_STATE(140)] = 3112,
  [SMALL_STATE(141)] = 3125,
  [SMALL_STATE(142)] = 3138,
  [SMALL_STATE(143)] = 3151,
  [SMALL_STATE(144)] = 3164,
  [SMALL_STATE(145)] = 3177,
  [SMALL_STATE(146)] = 3190,
  [SMALL_STATE(147)] = 3203,
  [SMALL_STATE(148)] = 3216,
  [SMALL_STATE(149)] = 3229,
  [SMALL_STATE(150)] = 3242,
  [SMALL_STATE(151)] = 3255,
  [SMALL_STATE(152)] = 3268,
  [SMALL_STATE(153)] = 3281,
  [SMALL_STATE(154)] = 3294,
  [SMALL_STATE(155)] = 3307,
  [SMALL_STATE(156)] = 3320,
  [SMALL_STATE(157)] = 3333,
  [SMALL_STATE(158)] = 3346,
  [SMALL_STATE(159)] = 3359,
  [SMALL_STATE(160)] = 3372,
  [SMALL_STATE(161)] = 3385,
  [SMALL_STATE(162)] = 3398,
  [SMALL_STATE(163)] = 3411,
  [SMALL_STATE(164)] = 3424,
  [SMALL_STATE(165)] = 3437,
  [SMALL_STATE(166)] = 3450,
  [SMALL_STATE(167)] = 3463,
  [SMALL_STATE(168)] = 3476,
  [SMALL_STATE(169)] = 3489,
  [SMALL_STATE(170)] = 3502,
  [SMALL_STATE(171)] = 3515,
  [SMALL_STATE(172)] = 3538,
  [SMALL_STATE(173)] = 3551,
  [SMALL_STATE(174)] = 3564,
  [SMALL_STATE(175)] = 3577,
  [SMALL_STATE(176)] = 3590,
  [SMALL_STATE(177)] = 3603,
  [SMALL_STATE(178)] = 3616,
  [SMALL_STATE(179)] = 3629,
  [SMALL_STATE(180)] = 3642,
  [SMALL_STATE(181)] = 3655,
  [SMALL_STATE(182)] = 3668,
  [SMALL_STATE(183)] = 3681,
  [SMALL_STATE(184)] = 3694,
  [SMALL_STATE(185)] = 3707,
  [SMALL_STATE(186)] = 3720,
  [SMALL_STATE(187)] = 3733,
  [SMALL_STATE(188)] = 3746,
  [SMALL_STATE(189)] = 3759,
  [SMALL_STATE(190)] = 3772,
  [SMALL_STATE(191)] = 3785,
  [SMALL_STATE(192)] = 3798,
  [SMALL_STATE(193)] = 3811,
  [SMALL_STATE(194)] = 3824,
  [SMALL_STATE(195)] = 3837,
  [SMALL_STATE(196)] = 3850,
  [SMALL_STATE(197)] = 3863,
  [SMALL_STATE(198)] = 3876,
  [SMALL_STATE(199)] = 3889,
  [SMALL_STATE(200)] = 3902,
  [SMALL_STATE(201)] = 3915,
  [SMALL_STATE(202)] = 3928,
  [SMALL_STATE(203)] = 3941,
  [SMALL_STATE(204)] = 3954,
  [SMALL_STATE(205)] = 3967,
  [SMALL_STATE(206)] = 3980,
  [SMALL_STATE(207)] = 3993,
  [SMALL_STATE(208)] = 4006,
  [SMALL_STATE(209)] = 4019,
  [SMALL_STATE(210)] = 4027,
  [SMALL_STATE(211)] = 4039,
  [SMALL_STATE(212)] = 4049,
  [SMALL_STATE(213)] = 4061,
  [SMALL_STATE(214)] = 4073,
  [SMALL_STATE(215)] = 4085,
  [SMALL_STATE(216)] = 4097,
  [SMALL_STATE(217)] = 4108,
  [SMALL_STATE(218)] = 4115,
  [SMALL_STATE(219)] = 4125,
  [SMALL_STATE(220)] = 4132,
  [SMALL_STATE(221)] = 4139,
  [SMALL_STATE(222)] = 4146,
  [SMALL_STATE(223)] = 4153,
  [SMALL_STATE(224)] = 4160,
  [SMALL_STATE(225)] = 4167,
  [SMALL_STATE(226)] = 4174,
  [SMALL_STATE(227)] = 4181,
  [SMALL_STATE(228)] = 4188,
  [SMALL_STATE(229)] = 4192,
  [SMALL_STATE(230)] = 4196,
  [SMALL_STATE(231)] = 4200,
  [SMALL_STATE(232)] = 4204,
  [SMALL_STATE(233)] = 4208,
  [SMALL_STATE(234)] = 4212,
  [SMALL_STATE(235)] = 4216,
  [SMALL_STATE(236)] = 4220,
  [SMALL_STATE(237)] = 4224,
  [SMALL_STATE(238)] = 4228,
  [SMALL_STATE(239)] = 4232,
  [SMALL_STATE(240)] = 4236,
  [SMALL_STATE(241)] = 4240,
  [SMALL_STATE(242)] = 4244,
  [SMALL_STATE(243)] = 4248,
  [SMALL_STATE(244)] = 4252,
  [SMALL_STATE(245)] = 4256,
  [SMALL_STATE(246)] = 4260,
  [SMALL_STATE(247)] = 4264,
  [SMALL_STATE(248)] = 4268,
  [SMALL_STATE(249)] = 4272,
  [SMALL_STATE(250)] = 4276,
  [SMALL_STATE(251)] = 4280,
  [SMALL_STATE(252)] = 4284,
  [SMALL_STATE(253)] = 4288,
  [SMALL_STATE(254)] = 4292,
  [SMALL_STATE(255)] = 4296,
  [SMALL_STATE(256)] = 4300,
  [SMALL_STATE(257)] = 4304,
  [SMALL_STATE(258)] = 4308,
  [SMALL_STATE(259)] = 4312,
  [SMALL_STATE(260)] = 4316,
  [SMALL_STATE(261)] = 4320,
  [SMALL_STATE(262)] = 4324,
  [SMALL_STATE(263)] = 4328,
  [SMALL_STATE(264)] = 4332,
  [SMALL_STATE(265)] = 4336,
  [SMALL_STATE(266)] = 4340,
  [SMALL_STATE(267)] = 4344,
  [SMALL_STATE(268)] = 4348,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_entity, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_entity, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_attr, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2, .production_id = 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2, .production_id = 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(87),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(64),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(97),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(49),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(52),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(71),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_attr, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_attr, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_attr, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guide_orientation, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_entity, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_entity, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__font_id, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_entity, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 8),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1, .production_id = 6),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 1, .production_id = 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_geometry, 1, .production_id = 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_guide, 1, .production_id = 4),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_absolute, 1, .production_id = 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 8),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 4),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 5),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_relative, 1, .production_id = 6),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guide_orientation, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_geometry, 2, .production_id = 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_guide, 2, .production_id = 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3, .production_id = 13),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_entity, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 1, .production_id = 6),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 12),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 2, .production_id = 9),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 2, .production_id = 10),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 11),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_absolute, 2, .production_id = 9),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [842] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
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
