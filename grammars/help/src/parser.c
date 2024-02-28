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
#define STATE_COUNT 265
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 179
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
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
  anon_sym_save = 61,
  anon_sym_timestamp = 62,
  anon_sym_gzip = 63,
  anon_sym_export = 64,
  anon_sym_DOTh = 65,
  anon_sym_GT_GT = 66,
  anon_sym_panel = 67,
  anon_sym_svg = 68,
  anon_sym_dark = 69,
  anon_sym_list = 70,
  anon_sym_fonts = 71,
  anon_sym_origin = 72,
  anon_sym_background = 73,
  aux_sym__label_relative_token1 = 74,
  aux_sym_font_token1 = 75,
  aux_sym_fontsize_token1 = 76,
  anon_sym_baseline = 77,
  aux_sym__rgb_token1 = 78,
  aux_sym__rgba_token1 = 79,
  aux_sym__absolute_token1 = 80,
  aux_sym__x_token1 = 81,
  aux_sym__y_token1 = 82,
  aux_sym__offset_token1 = 83,
  aux_sym_string_token1 = 84,
  aux_sym_string_token2 = 85,
  aux_sym__string_token1 = 86,
  aux_sym__string_token2 = 87,
  aux_sym_identifier_token1 = 88,
  aux_sym_identifier_token2 = 89,
  anon_sym_stretch = 90,
  aux_sym_stretch_token1 = 91,
  anon_sym_scale = 92,
  sym_command = 93,
  sym_new = 94,
  sym_module = 95,
  sym__input_entity = 96,
  sym__output_entity = 97,
  sym__parameter_entity = 98,
  sym__light_entity = 99,
  sym__widget_entity = 100,
  sym__component_entity = 101,
  sym__guide_entity = 102,
  sym__new_guide_orientation = 103,
  sym__new_guideline_absolute = 104,
  sym__new_guideline_relative = 105,
  sym__new_guideline_geometry = 106,
  sym__new_guideline_guide = 107,
  sym_set = 108,
  sym__module_attr = 109,
  sym__component_attr = 110,
  sym__label_attr = 111,
  sym__decoration_attr = 112,
  sym__guideline_attr = 113,
  sym__guideline_xy_attr = 114,
  sym__x_attr = 115,
  sym__y_attr = 116,
  sym__xy_attr = 117,
  sym__offset_attr = 118,
  sym_decorate = 119,
  sym__component = 120,
  sym_decoration = 121,
  sym_delete = 122,
  sym__guideline_id = 123,
  sym__input_id = 124,
  sym__output_id = 125,
  sym__parameter_id = 126,
  sym__light_id = 127,
  sym__widget_id = 128,
  sym__label_id = 129,
  sym__decoration_id = 130,
  sym__component_id = 131,
  sym__guide_id = 132,
  sym_load = 133,
  sym_save = 134,
  sym_project = 135,
  sym__save_options = 136,
  sym_script = 137,
  sym_export = 138,
  sym__module_export = 139,
  sym_panel = 140,
  sym_svg = 141,
  sym_list = 142,
  sym_origin = 143,
  sym_background = 144,
  sym_label = 145,
  sym__label_string = 146,
  sym__label_absolute = 147,
  sym__label_relative = 148,
  sym__label_geometry = 149,
  sym_font = 150,
  sym_fontsize = 151,
  sym_halign = 152,
  sym_valign = 153,
  sym__align = 154,
  sym_colour = 155,
  sym__rgb = 156,
  sym__rgba = 157,
  sym_name = 158,
  sym_part = 159,
  sym_rgb = 160,
  sym_rgba = 161,
  sym_absolute = 162,
  sym__absolute = 163,
  sym__relative = 164,
  sym__x = 165,
  sym__y = 166,
  sym_x = 167,
  sym_y = 168,
  sym_xy = 169,
  sym__xy = 170,
  sym__offset = 171,
  sym_offset = 172,
  sym_string = 173,
  sym__string = 174,
  sym_identifier = 175,
  sym_stretch = 176,
  sym_scale = 177,
  aux_sym_command_repeat1 = 178,
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
  [37] = 20,
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
  [51] = 51,
  [52] = 18,
  [53] = 17,
  [54] = 16,
  [55] = 19,
  [56] = 56,
  [57] = 57,
  [58] = 15,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 5,
  [69] = 69,
  [70] = 26,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 34,
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
  [205] = 15,
  [206] = 19,
  [207] = 18,
  [208] = 208,
  [209] = 17,
  [210] = 210,
  [211] = 16,
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
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 252,
  [264] = 264,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(737);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(741);
      if (lookahead == '(') ADVANCE(669);
      if (lookahead == ')') ADVANCE(670);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '0') ADVANCE(546);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'g') ADVANCE(259);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(511);
      if (lookahead == 'y') ADVANCE(515);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ')') ADVANCE(670);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(826);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(824);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(787);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(827);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(825);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(787);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(823);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(820);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(820);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == 'H') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'H') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(498);
      if (lookahead == 'U') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(170);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(772);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == 'b') ADVANCE(641);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 't') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(820);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(820);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(542);
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(746);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(785);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(816);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(231);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(244);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(774);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(116);
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(217);
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
      if (lookahead == 'h') ADVANCE(771);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(671);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(510);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(830);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 139:
      if (lookahead == 'j') ADVANCE(74);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(775);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(679);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(773);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(364);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(823);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(545);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(552);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(820);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(822);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(498);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(497);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(786);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(784);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(533);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(763);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(762);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(822);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(783);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(764);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(754);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(753);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(821);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(125);
      if (lookahead == 'z') ADVANCE(129);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 261:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 262:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 264:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 265:
      if (lookahead == 'w') ADVANCE(314);
      END_STATE();
    case 266:
      if (lookahead == 'x') ADVANCE(208);
      END_STATE();
    case 267:
      if (lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 268:
      if (lookahead == 'z') ADVANCE(71);
      END_STATE();
    case 269:
      if (lookahead == 'z') ADVANCE(199);
      END_STATE();
    case 270:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(823);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(818);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(819);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(817);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 292:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 293:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 294:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 295:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 296:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 297:
      if (eof) ADVANCE(313);
      if (lookahead == ' ') SKIP(297)
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '\'') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(705);
      if (lookahead == 'c') ADVANCE(716);
      if (lookahead == 'd') ADVANCE(690);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'f') ADVANCE(713);
      if (lookahead == 'h') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(701);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == 'v') ADVANCE(687);
      if (lookahead == 'x') ADVANCE(512);
      if (lookahead == 'y') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 298:
      if (eof) ADVANCE(313);
      if (lookahead == ' ') SKIP(298)
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '\'') ADVANCE(742);
      if (lookahead == 'd') ADVANCE(690);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'l') ADVANCE(701);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(681);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 299:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(669);
      if (lookahead == 'd') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 'x') ADVANCE(513);
      if (lookahead == 'y') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(299)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 300:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(669);
      if (lookahead == 'd') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(300)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 301:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == 'p') ADVANCE(379);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 'x') ADVANCE(513);
      if (lookahead == 'y') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(301)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 302:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(669);
      if (lookahead == ')') ADVANCE(670);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == 'x') ADVANCE(511);
      if (lookahead == 'y') ADVANCE(515);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(302)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 303:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == 'b') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(192);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(303)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 304:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(793);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == 'l') ADVANCE(799);
      if (lookahead == 'n') ADVANCE(794);
      if (lookahead == 's') ADVANCE(788);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(304)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 305:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(669);
      if (lookahead == 'd') ADVANCE(793);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == 'l') ADVANCE(799);
      if (lookahead == 'n') ADVANCE(794);
      if (lookahead == 's') ADVANCE(788);
      if (lookahead == 'x') ADVANCE(514);
      if (lookahead == 'y') ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(305)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 306:
      if (eof) ADVANCE(313);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == 'b') ADVANCE(437);
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead == 'd') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead == 'v') ADVANCE(409);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(306)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 307:
      if (eof) ADVANCE(313);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == 'd') ADVANCE(400);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(426);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(425);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == 't') ADVANCE(444);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(307)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 308:
      if (eof) ADVANCE(313);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == 'b') ADVANCE(584);
      if (lookahead == 'c') ADVANCE(565);
      if (lookahead == 'd') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'l') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(308)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 309:
      if (eof) ADVANCE(313);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == 'b') ADVANCE(641);
      if (lookahead == 'd') ADVANCE(618);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead == 'l') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead == 't') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(309)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 310:
      if (eof) ADVANCE(313);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == 'c') ADVANCE(617);
      if (lookahead == 'd') ADVANCE(618);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead == 'r') ADVANCE(632);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(310)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 311:
      if (eof) ADVANCE(313);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(311)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 312:
      if (eof) ADVANCE(313);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__new_guideline_absolute_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__new_guideline_geometry_token1);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'e') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'a') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'c') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'd') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'f') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'f') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'g') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'g') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'h') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'h') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'l') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'm') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'n') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'o') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'p') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'r') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 's') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 's') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 't') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'v') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'v') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'w') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'w') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'x') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'x') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (lookahead == 'z') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(496);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__new_guideline_guide_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(170);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(519);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_xy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_xy);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_halign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_valign);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == 'H') ADVANCE(333);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(549);
      if (lookahead == 'H') ADVANCE(333);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == 'H') ADVANCE(545);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(333);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(333);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token1);
      if (lookahead == 'H') ADVANCE(545);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == '.') ADVANCE(555);
      if (lookahead == 'H') ADVANCE(369);
      if (lookahead == 'h') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == 'H') ADVANCE(552);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == 'H') ADVANCE(369);
      if (lookahead == 'h') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token2);
      if (lookahead == 'H') ADVANCE(552);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'a') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'c') ADVANCE(585);
      if (lookahead == 'l') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'd') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == 'o') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'r') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'f') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'g') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'h') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'i') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'i') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'l') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'm') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'n') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'o') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'p') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'p') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'r') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 's') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 't') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'v') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'w') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (lookahead == 'x') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__guideline_xy_attr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'a') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'd') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead == 'o') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'e') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'f') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'g') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'h') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead == 'o') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'i') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'l') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'm') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'n') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'o') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'p') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'p') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'r') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 's') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 't') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'v') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'w') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (lookahead == 'x') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__x_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '\'') ADVANCE(742);
      if (lookahead == 'a') ADVANCE(705);
      if (lookahead == 'c') ADVANCE(716);
      if (lookahead == 'd') ADVANCE(690);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'f') ADVANCE(713);
      if (lookahead == 'h') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(701);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == 'v') ADVANCE(687);
      if (lookahead == 'x') ADVANCE(512);
      if (lookahead == 'y') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '\'') ADVANCE(742);
      if (lookahead == 'd') ADVANCE(690);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'l') ADVANCE(701);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(724);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'c') ADVANCE(715);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'd') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'e') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'g') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'i') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'n') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'p') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'r') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 't') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'v') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'w') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'x') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == 'z') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(740);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(744);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(744);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(736);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(811);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(800);
      if (lookahead == 'l') ADVANCE(798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead == 'o') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_stretch_token1);
      if (lookahead == '.') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_stretch_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 833:
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
  [5] = {.lex_state = 297},
  [6] = {.lex_state = 306},
  [7] = {.lex_state = 307},
  [8] = {.lex_state = 308},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 308},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 301},
  [16] = {.lex_state = 301},
  [17] = {.lex_state = 301},
  [18] = {.lex_state = 301},
  [19] = {.lex_state = 301},
  [20] = {.lex_state = 299},
  [21] = {.lex_state = 303},
  [22] = {.lex_state = 310},
  [23] = {.lex_state = 310},
  [24] = {.lex_state = 310},
  [25] = {.lex_state = 310},
  [26] = {.lex_state = 302},
  [27] = {.lex_state = 311},
  [28] = {.lex_state = 309},
  [29] = {.lex_state = 309},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 303},
  [33] = {.lex_state = 304},
  [34] = {.lex_state = 305},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 300},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 302},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 302},
  [46] = {.lex_state = 302},
  [47] = {.lex_state = 302},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 300},
  [53] = {.lex_state = 300},
  [54] = {.lex_state = 300},
  [55] = {.lex_state = 300},
  [56] = {.lex_state = 303},
  [57] = {.lex_state = 300},
  [58] = {.lex_state = 300},
  [59] = {.lex_state = 300},
  [60] = {.lex_state = 312},
  [61] = {.lex_state = 302},
  [62] = {.lex_state = 303},
  [63] = {.lex_state = 304},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 303},
  [66] = {.lex_state = 304},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 298},
  [69] = {.lex_state = 304},
  [70] = {.lex_state = 303},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 304},
  [73] = {.lex_state = 304},
  [74] = {.lex_state = 304},
  [75] = {.lex_state = 303},
  [76] = {.lex_state = 304},
  [77] = {.lex_state = 302},
  [78] = {.lex_state = 303},
  [79] = {.lex_state = 304},
  [80] = {.lex_state = 302},
  [81] = {.lex_state = 304},
  [82] = {.lex_state = 304},
  [83] = {.lex_state = 304},
  [84] = {.lex_state = 303},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 304},
  [87] = {.lex_state = 304},
  [88] = {.lex_state = 304},
  [89] = {.lex_state = 302},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 304},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 304},
  [94] = {.lex_state = 303},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 303},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 312},
  [107] = {.lex_state = 312},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 304},
  [111] = {.lex_state = 302},
  [112] = {.lex_state = 304},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 311},
  [115] = {.lex_state = 311},
  [116] = {.lex_state = 302},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 302},
  [120] = {.lex_state = 302},
  [121] = {.lex_state = 304},
  [122] = {.lex_state = 304},
  [123] = {.lex_state = 302},
  [124] = {.lex_state = 302},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 304},
  [130] = {.lex_state = 312},
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
  [203] = {.lex_state = 23},
  [204] = {.lex_state = 23},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 302},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 302},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 306},
  [215] = {.lex_state = 307},
  [216] = {.lex_state = 303},
  [217] = {.lex_state = 306},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 307},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 303},
  [224] = {.lex_state = 306},
  [225] = {.lex_state = 307},
  [226] = {.lex_state = 301},
  [227] = {.lex_state = 307},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 306},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 306},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 307},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 299},
  [241] = {.lex_state = 307},
  [242] = {.lex_state = 307},
  [243] = {.lex_state = 307},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 302},
  [247] = {.lex_state = 302},
  [248] = {.lex_state = 301},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 301},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 311},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 743},
  [262] = {.lex_state = 739},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 299},
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
    [sym_command] = STATE(251),
    [sym_new] = STATE(14),
    [sym_set] = STATE(14),
    [sym_decorate] = STATE(14),
    [sym_delete] = STATE(14),
    [sym_load] = STATE(14),
    [sym_save] = STATE(14),
    [sym_export] = STATE(14),
    [sym_list] = STATE(14),
    [aux_sym_command_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_decorate] = ACTIONS(9),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(15),
    [anon_sym_export] = ACTIONS(17),
    [anon_sym_list] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(23), 1,
      anon_sym_module,
    ACTIONS(25), 1,
      anon_sym_input,
    ACTIONS(27), 1,
      anon_sym_output,
    ACTIONS(29), 1,
      anon_sym_parameter,
    ACTIONS(31), 1,
      anon_sym_light,
    ACTIONS(33), 1,
      anon_sym_widget,
    ACTIONS(35), 1,
      anon_sym_guide,
    ACTIONS(37), 1,
      anon_sym_label,
    ACTIONS(39), 1,
      anon_sym_decoration,
    ACTIONS(41), 1,
      anon_sym_origin,
    ACTIONS(43), 1,
      anon_sym_background,
    STATE(8), 1,
      sym__guide_id,
    STATE(9), 1,
      sym__label_id,
    STATE(35), 1,
      sym__decoration_id,
    STATE(41), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(138), 7,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__decoration_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [70] = 10,
    ACTIONS(47), 1,
      anon_sym_module,
    ACTIONS(49), 1,
      anon_sym_input,
    ACTIONS(51), 1,
      anon_sym_output,
    ACTIONS(53), 1,
      anon_sym_parameter,
    ACTIONS(55), 1,
      anon_sym_light,
    ACTIONS(57), 1,
      anon_sym_widget,
    ACTIONS(59), 1,
      anon_sym_guide,
    ACTIONS(61), 1,
      anon_sym_label,
    STATE(137), 8,
      sym_module,
      sym__input_entity,
      sym__output_entity,
      sym__parameter_entity,
      sym__light_entity,
      sym__widget_entity,
      sym__guide_entity,
      sym_label,
    ACTIONS(45), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [116] = 10,
    ACTIONS(65), 1,
      anon_sym_input,
    ACTIONS(67), 1,
      anon_sym_output,
    ACTIONS(69), 1,
      anon_sym_parameter,
    ACTIONS(71), 1,
      anon_sym_light,
    ACTIONS(73), 1,
      anon_sym_widget,
    ACTIONS(75), 1,
      anon_sym_guide,
    ACTIONS(77), 1,
      anon_sym_label,
    ACTIONS(79), 1,
      anon_sym_decoration,
    STATE(142), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
    ACTIONS(63), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [162] = 5,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym__label_id_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 19,
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
      anon_sym_list,
  [196] = 6,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(95), 2,
      anon_sym_vertical,
      anon_sym_horizontal,
    STATE(189), 3,
      sym__new_guide_orientation,
      sym__new_guideline_geometry,
      sym__new_guideline_guide,
    ACTIONS(97), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(93), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [231] = 3,
    ACTIONS(105), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(103), 17,
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
      anon_sym_list,
  [259] = 7,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      anon_sym_id,
    ACTIONS(117), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(168), 1,
      sym__guideline_xy_attr,
    ACTIONS(109), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
    ACTIONS(113), 8,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guideline_xy_attr_token3,
  [295] = 11,
    ACTIONS(121), 1,
      anon_sym_x,
    ACTIONS(123), 1,
      anon_sym_y,
    ACTIONS(125), 1,
      anon_sym_xy,
    ACTIONS(127), 1,
      anon_sym_text,
    ACTIONS(129), 1,
      anon_sym_font,
    ACTIONS(131), 1,
      anon_sym_size,
    ACTIONS(133), 1,
      anon_sym_halign,
    ACTIONS(135), 1,
      anon_sym_valign,
    ACTIONS(137), 1,
      anon_sym_align,
    ACTIONS(139), 2,
      anon_sym_colour,
      anon_sym_color,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [338] = 2,
    ACTIONS(143), 1,
      anon_sym_x,
    ACTIONS(141), 19,
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
      anon_sym_list,
  [363] = 2,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(147), 17,
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
      anon_sym_list,
  [388] = 2,
    ACTIONS(151), 1,
      anon_sym_x,
    ACTIONS(149), 19,
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
      anon_sym_list,
  [413] = 10,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_new,
    ACTIONS(158), 1,
      anon_sym_set,
    ACTIONS(161), 1,
      anon_sym_decorate,
    ACTIONS(164), 1,
      anon_sym_delete,
    ACTIONS(167), 1,
      anon_sym_load,
    ACTIONS(170), 1,
      anon_sym_save,
    ACTIONS(173), 1,
      anon_sym_export,
    ACTIONS(176), 1,
      anon_sym_list,
    STATE(13), 9,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [452] = 10,
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
    ACTIONS(19), 1,
      anon_sym_list,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(13), 9,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [491] = 5,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(183), 13,
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
      anon_sym_list,
  [520] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(191), 13,
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
      anon_sym_list,
  [549] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(195), 13,
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
      anon_sym_list,
  [578] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(199), 13,
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
      anon_sym_list,
  [607] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(203), 13,
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
      anon_sym_list,
  [636] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(49), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(207), 11,
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
      anon_sym_list,
  [665] = 7,
    ACTIONS(211), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      aux_sym__absolute_token1,
    ACTIONS(215), 1,
      aux_sym__x_token1,
    STATE(79), 1,
      sym_xy,
    STATE(231), 1,
      sym__x,
    STATE(129), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(209), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [697] = 6,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(164), 1,
      sym__xy_attr,
    ACTIONS(223), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(219), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [727] = 6,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(153), 1,
      sym__x_attr,
    ACTIONS(233), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(229), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [757] = 6,
    ACTIONS(221), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(153), 1,
      sym__xy_attr,
    ACTIONS(223), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(229), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [787] = 6,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(164), 1,
      sym__x_attr,
    ACTIONS(233), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__x_attr_token1,
    ACTIONS(219), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [817] = 2,
    ACTIONS(239), 2,
      sym_width,
      anon_sym_x,
    ACTIONS(237), 14,
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
      anon_sym_list,
  [838] = 6,
    ACTIONS(215), 1,
      aux_sym__x_token1,
    ACTIONS(243), 1,
      anon_sym_AT,
    ACTIONS(245), 1,
      aux_sym__label_relative_token1,
    STATE(255), 1,
      sym__x,
    STATE(139), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(241), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [867] = 6,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(153), 1,
      sym__y_attr,
    ACTIONS(249), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
    ACTIONS(229), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [896] = 6,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      aux_sym__guideline_xy_attr_token1,
    STATE(164), 1,
      sym__y_attr,
    ACTIONS(249), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
    ACTIONS(219), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [925] = 2,
    ACTIONS(255), 1,
      anon_sym_x,
    ACTIONS(253), 15,
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
      anon_sym_list,
  [946] = 2,
    ACTIONS(259), 1,
      anon_sym_x,
    ACTIONS(257), 14,
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
      anon_sym_list,
  [966] = 7,
    ACTIONS(263), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      aux_sym__x_token1,
    ACTIONS(267), 1,
      aux_sym__y_token1,
    STATE(98), 1,
      sym_x,
    STATE(102), 1,
      sym_y,
    STATE(196), 1,
      sym_absolute,
    ACTIONS(261), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [996] = 8,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 1,
      aux_sym_font_token1,
    ACTIONS(275), 1,
      aux_sym__rgb_token1,
    ACTIONS(277), 1,
      aux_sym__rgba_token1,
    STATE(103), 1,
      sym_rgb,
    STATE(104), 1,
      sym_rgba,
    STATE(195), 1,
      sym_name,
    ACTIONS(271), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1028] = 4,
    ACTIONS(273), 1,
      aux_sym_font_token1,
    STATE(48), 1,
      sym_name,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(281), 11,
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
      anon_sym_list,
  [1052] = 6,
    ACTIONS(285), 1,
      anon_sym_x,
    ACTIONS(287), 1,
      anon_sym_y,
    ACTIONS(289), 1,
      anon_sym_xy,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    STATE(172), 2,
      sym_stretch,
      sym_scale,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1080] = 2,
    ACTIONS(295), 1,
      anon_sym_x,
    ACTIONS(293), 14,
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
      anon_sym_list,
  [1100] = 6,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(49), 2,
      sym__component_id,
      sym_identifier,
    ACTIONS(207), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1128] = 2,
    ACTIONS(301), 1,
      anon_sym_x,
    ACTIONS(299), 14,
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
      anon_sym_list,
  [1148] = 2,
    ACTIONS(305), 1,
      anon_sym_x,
    ACTIONS(303), 14,
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
      anon_sym_list,
  [1168] = 2,
    ACTIONS(309), 1,
      anon_sym_x,
    ACTIONS(307), 14,
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
      anon_sym_list,
  [1188] = 6,
    ACTIONS(313), 1,
      anon_sym_name,
    ACTIONS(315), 1,
      anon_sym_x,
    ACTIONS(317), 1,
      anon_sym_y,
    ACTIONS(319), 1,
      anon_sym_xy,
    ACTIONS(321), 1,
      anon_sym_part,
    ACTIONS(311), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1215] = 3,
    STATE(164), 1,
      sym__align,
    ACTIONS(323), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1236] = 5,
    ACTIONS(327), 1,
      aux_sym__rgb_token1,
    ACTIONS(329), 1,
      aux_sym__rgba_token1,
    STATE(197), 1,
      sym_colour,
    STATE(109), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(325), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1261] = 5,
    ACTIONS(327), 1,
      aux_sym__rgb_token1,
    ACTIONS(329), 1,
      aux_sym__rgba_token1,
    STATE(164), 1,
      sym_colour,
    STATE(109), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1286] = 3,
    STATE(164), 1,
      sym_valign,
    ACTIONS(331), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1307] = 3,
    STATE(198), 1,
      sym_halign,
    ACTIONS(335), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1328] = 3,
    STATE(164), 1,
      sym_halign,
    ACTIONS(335), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1349] = 2,
    ACTIONS(339), 1,
      anon_sym_x,
    ACTIONS(337), 12,
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
      anon_sym_list,
  [1367] = 2,
    ACTIONS(343), 1,
      anon_sym_x,
    ACTIONS(341), 12,
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
      anon_sym_list,
  [1385] = 4,
    ACTIONS(347), 1,
      anon_sym_project,
    ACTIONS(349), 1,
      anon_sym_script,
    STATE(146), 2,
      sym_project,
      sym_script,
    ACTIONS(345), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1407] = 4,
    ACTIONS(353), 1,
      anon_sym_module,
    ACTIONS(355), 1,
      anon_sym_panel,
    STATE(147), 2,
      sym__module_export,
      sym_panel,
    ACTIONS(351), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1429] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(199), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1453] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(195), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1477] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(191), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1501] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(203), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1525] = 4,
    STATE(27), 1,
      sym__string,
    STATE(192), 1,
      sym__label_string,
    ACTIONS(359), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1547] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(363), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1571] = 5,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(183), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1595] = 5,
    ACTIONS(185), 1,
      aux_sym__new_guideline_guide_token1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_identifier,
    ACTIONS(187), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(367), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1619] = 4,
    ACTIONS(371), 1,
      anon_sym_AT,
    ACTIONS(373), 1,
      aux_sym__new_guideline_absolute_token1,
    STATE(134), 2,
      sym__new_guideline_absolute,
      sym__new_guideline_relative,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1641] = 3,
    STATE(164), 1,
      sym_string,
    ACTIONS(375), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1660] = 3,
    ACTIONS(379), 1,
      aux_sym__offset_token1,
    STATE(126), 1,
      sym_offset,
    ACTIONS(377), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1679] = 5,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 1,
      aux_sym_font_token1,
    STATE(21), 1,
      sym_name,
    STATE(174), 1,
      sym__component_entity,
    ACTIONS(383), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1702] = 4,
    ACTIONS(389), 1,
      anon_sym_timestamp,
    ACTIONS(391), 1,
      anon_sym_gzip,
    STATE(166), 1,
      sym__save_options,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1723] = 3,
    ACTIONS(379), 1,
      aux_sym__offset_token1,
    STATE(125), 1,
      sym_offset,
    ACTIONS(393), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1742] = 4,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 1,
      aux_sym__offset_token1,
    STATE(122), 1,
      sym__offset,
    ACTIONS(397), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [1763] = 4,
    ACTIONS(403), 1,
      anon_sym_font,
    ACTIONS(405), 1,
      anon_sym_project,
    ACTIONS(407), 1,
      anon_sym_script,
    ACTIONS(401), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1784] = 5,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym__label_id_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1807] = 5,
    ACTIONS(385), 1,
      aux_sym_font_token1,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_name,
    STATE(171), 1,
      sym__component_entity,
    ACTIONS(411), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1830] = 1,
    ACTIONS(237), 12,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_AT,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym__absolute_token1,
      aux_sym__x_token1,
  [1845] = 4,
    ACTIONS(415), 1,
      anon_sym_name,
    ACTIONS(417), 1,
      anon_sym_height,
    ACTIONS(419), 1,
      anon_sym_width,
    ACTIONS(413), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1866] = 5,
    ACTIONS(385), 1,
      aux_sym_font_token1,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_name,
    STATE(170), 1,
      sym__component_entity,
    ACTIONS(423), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1889] = 5,
    ACTIONS(385), 1,
      aux_sym_font_token1,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_name,
    STATE(188), 1,
      sym__component_entity,
    ACTIONS(427), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1912] = 5,
    ACTIONS(385), 1,
      aux_sym_font_token1,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_name,
    STATE(186), 1,
      sym__component_entity,
    ACTIONS(431), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1935] = 3,
    ACTIONS(265), 1,
      aux_sym__x_token1,
    STATE(131), 1,
      sym_x,
    ACTIONS(433), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1953] = 4,
    ACTIONS(273), 1,
      aux_sym_font_token1,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_name,
    ACTIONS(281), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1973] = 3,
    ACTIONS(437), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(173), 1,
      sym__offset_attr,
    ACTIONS(435), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1991] = 3,
    ACTIONS(267), 1,
      aux_sym__y_token1,
    STATE(131), 1,
      sym_y,
    ACTIONS(433), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2009] = 4,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 1,
      aux_sym_font_token1,
    STATE(190), 1,
      sym_part,
    ACTIONS(441), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2029] = 3,
    ACTIONS(437), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(236), 1,
      sym__offset_attr,
    ACTIONS(435), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2047] = 4,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 1,
      aux_sym_font_token1,
    STATE(162), 1,
      sym_font,
    ACTIONS(447), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2067] = 4,
    ACTIONS(449), 1,
      aux_sym_font_token1,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    STATE(161), 1,
      sym_font,
    ACTIONS(453), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2087] = 4,
    ACTIONS(273), 1,
      aux_sym_font_token1,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_name,
    ACTIONS(457), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2107] = 3,
    ACTIONS(461), 1,
      aux_sym_fontsize_token1,
    STATE(202), 1,
      sym_fontsize,
    ACTIONS(459), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2125] = 3,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      sym_decoration,
    ACTIONS(463), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2143] = 4,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 1,
      aux_sym_font_token1,
    STATE(153), 1,
      sym_name,
    ACTIONS(229), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2163] = 4,
    ACTIONS(273), 1,
      aux_sym_font_token1,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym_name,
    ACTIONS(469), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2183] = 4,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 1,
      aux_sym_font_token1,
    STATE(153), 1,
      sym_part,
    ACTIONS(229), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2203] = 3,
    ACTIONS(473), 1,
      sym_height,
    ACTIONS(475), 1,
      sym_width,
    ACTIONS(471), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2221] = 3,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym__component,
    ACTIONS(477), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2239] = 4,
    ACTIONS(449), 1,
      aux_sym_font_token1,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_font,
    ACTIONS(483), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2259] = 3,
    ACTIONS(487), 1,
      anon_sym_light,
    ACTIONS(489), 1,
      anon_sym_dark,
    ACTIONS(485), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2277] = 4,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 1,
      aux_sym_font_token1,
    STATE(164), 1,
      sym_font,
    ACTIONS(219), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2297] = 3,
    ACTIONS(461), 1,
      aux_sym_fontsize_token1,
    STATE(164), 1,
      sym_fontsize,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2315] = 3,
    ACTIONS(493), 1,
      anon_sym_svg,
    STATE(150), 1,
      sym_svg,
    ACTIONS(491), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2333] = 2,
    ACTIONS(497), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
    ACTIONS(495), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2349] = 1,
    ACTIONS(499), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2362] = 2,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(501), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2377] = 1,
    ACTIONS(505), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2390] = 6,
    ACTIONS(507), 1,
      anon_sym_input,
    ACTIONS(509), 1,
      anon_sym_output,
    ACTIONS(511), 1,
      anon_sym_parameter,
    ACTIONS(513), 1,
      anon_sym_light,
    ACTIONS(515), 1,
      anon_sym_widget,
    STATE(263), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [2413] = 2,
    ACTIONS(519), 1,
      anon_sym_fonts,
    ACTIONS(517), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2428] = 2,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(501), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2443] = 2,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(523), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2458] = 2,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    ACTIONS(523), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2473] = 2,
    ACTIONS(531), 1,
      anon_sym_timestamp,
    ACTIONS(529), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2488] = 2,
    ACTIONS(535), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(533), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2503] = 2,
    ACTIONS(539), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(537), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2518] = 1,
    ACTIONS(541), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2531] = 2,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(543), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2546] = 2,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [2561] = 2,
    ACTIONS(553), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(551), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2576] = 2,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [2591] = 2,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(559), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2606] = 2,
    ACTIONS(565), 1,
      aux_sym__new_guideline_geometry_token1,
    ACTIONS(563), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2621] = 2,
    ACTIONS(569), 1,
      aux_sym__new_guideline_geometry_token1,
    ACTIONS(567), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2636] = 2,
    ACTIONS(573), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(571), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2651] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(575), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2666] = 2,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(575), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2681] = 2,
    ACTIONS(583), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(581), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2696] = 2,
    ACTIONS(587), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(585), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2711] = 2,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(591), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [2726] = 2,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
    ACTIONS(595), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [2741] = 2,
    ACTIONS(599), 1,
      aux_sym__guideline_xy_attr_token2,
    ACTIONS(597), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2756] = 2,
    ACTIONS(603), 1,
      sym_width,
    ACTIONS(601), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2771] = 1,
    ACTIONS(605), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2784] = 1,
    ACTIONS(607), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2797] = 1,
    ACTIONS(609), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2810] = 2,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(611), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2825] = 2,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
    ACTIONS(617), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      aux_sym_font_token1,
  [2840] = 2,
    ACTIONS(621), 1,
      aux_sym__new_guideline_absolute_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2855] = 1,
    ACTIONS(623), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2867] = 1,
    ACTIONS(625), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2879] = 1,
    ACTIONS(627), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2891] = 1,
    ACTIONS(629), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2903] = 1,
    ACTIONS(631), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2915] = 1,
    ACTIONS(633), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2927] = 1,
    ACTIONS(635), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2939] = 1,
    ACTIONS(637), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2951] = 1,
    ACTIONS(639), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2963] = 1,
    ACTIONS(641), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2975] = 1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2987] = 1,
    ACTIONS(645), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2999] = 1,
    ACTIONS(647), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3011] = 1,
    ACTIONS(649), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3023] = 1,
    ACTIONS(651), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3035] = 1,
    ACTIONS(653), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3047] = 1,
    ACTIONS(655), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3059] = 1,
    ACTIONS(657), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3071] = 1,
    ACTIONS(601), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3083] = 1,
    ACTIONS(659), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3095] = 1,
    ACTIONS(661), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3107] = 1,
    ACTIONS(663), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3119] = 1,
    ACTIONS(665), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3131] = 1,
    ACTIONS(667), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3143] = 1,
    ACTIONS(669), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3155] = 1,
    ACTIONS(585), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3167] = 1,
    ACTIONS(597), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3179] = 1,
    ACTIONS(671), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3191] = 1,
    ACTIONS(581), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3203] = 1,
    ACTIONS(673), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3215] = 1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3227] = 1,
    ACTIONS(677), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3239] = 1,
    ACTIONS(679), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3251] = 1,
    ACTIONS(681), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3263] = 1,
    ACTIONS(683), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3275] = 1,
    ACTIONS(685), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3287] = 1,
    ACTIONS(687), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3299] = 1,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3311] = 1,
    ACTIONS(689), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3323] = 1,
    ACTIONS(691), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3335] = 1,
    ACTIONS(693), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3347] = 1,
    ACTIONS(435), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3359] = 1,
    ACTIONS(695), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3371] = 1,
    ACTIONS(697), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3383] = 1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3395] = 1,
    ACTIONS(701), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3407] = 1,
    ACTIONS(703), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3419] = 1,
    ACTIONS(705), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3431] = 1,
    ACTIONS(707), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3443] = 1,
    ACTIONS(709), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3455] = 1,
    ACTIONS(711), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3467] = 1,
    ACTIONS(571), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3479] = 1,
    ACTIONS(713), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3491] = 1,
    ACTIONS(715), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3503] = 1,
    ACTIONS(717), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3515] = 1,
    ACTIONS(719), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3527] = 1,
    ACTIONS(721), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3539] = 1,
    ACTIONS(723), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3551] = 1,
    ACTIONS(725), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3563] = 1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3575] = 1,
    ACTIONS(729), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3587] = 1,
    ACTIONS(731), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3599] = 1,
    ACTIONS(733), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3611] = 1,
    ACTIONS(735), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3623] = 1,
    ACTIONS(523), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3635] = 1,
    ACTIONS(501), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3647] = 1,
    ACTIONS(737), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3659] = 1,
    ACTIONS(739), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3671] = 1,
    ACTIONS(741), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3683] = 1,
    ACTIONS(743), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3695] = 1,
    ACTIONS(745), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3707] = 1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3719] = 3,
    ACTIONS(573), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(749), 1,
      anon_sym_AT,
    ACTIONS(751), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
  [3732] = 3,
    ACTIONS(753), 1,
      anon_sym_AT,
    ACTIONS(757), 1,
      aux_sym__guideline_xy_attr_token1,
    ACTIONS(755), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__x_attr_token1,
  [3745] = 3,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(187), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3757] = 3,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(187), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3769] = 3,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(187), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3781] = 2,
    STATE(181), 1,
      sym_valign,
    ACTIONS(331), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3791] = 3,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(187), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3803] = 1,
    ACTIONS(759), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [3811] = 3,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(187), 3,
      aux_sym__new_guideline_guide_token1,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [3823] = 1,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3830] = 3,
    ACTIONS(763), 1,
      aux_sym__rgb_token1,
    ACTIONS(765), 1,
      aux_sym__rgba_token1,
    STATE(132), 2,
      sym__rgb,
      sym__rgba,
  [3841] = 3,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      aux_sym__offset_token1,
    STATE(245), 1,
      sym__offset,
  [3851] = 2,
    ACTIONS(437), 1,
      aux_sym__guideline_xy_attr_token2,
    STATE(176), 1,
      sym__offset_attr,
  [3858] = 2,
    ACTIONS(771), 1,
      aux_sym__y_token1,
    STATE(82), 1,
      sym__y,
  [3865] = 2,
    ACTIONS(773), 1,
      aux_sym__rgb_token1,
    STATE(199), 1,
      sym_rgb,
  [3872] = 2,
    ACTIONS(277), 1,
      aux_sym__rgba_token1,
    STATE(199), 1,
      sym_rgba,
  [3879] = 2,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      aux_sym__guideline_xy_attr_token2,
  [3886] = 2,
    ACTIONS(779), 1,
      aux_sym_font_token1,
    STATE(141), 1,
      sym_name,
  [3893] = 2,
    ACTIONS(779), 1,
      aux_sym_font_token1,
    STATE(154), 1,
      sym_name,
  [3900] = 2,
    ACTIONS(781), 1,
      anon_sym_stretch,
    ACTIONS(783), 1,
      anon_sym_scale,
  [3907] = 2,
    ACTIONS(771), 1,
      aux_sym__y_token1,
    STATE(112), 1,
      sym__y,
  [3914] = 1,
    ACTIONS(785), 1,
      aux_sym_stretch_token1,
  [3918] = 1,
    ACTIONS(587), 1,
      aux_sym__guideline_xy_attr_token1,
  [3922] = 1,
    ACTIONS(787), 1,
      aux_sym__absolute_token1,
  [3926] = 1,
    ACTIONS(573), 1,
      aux_sym__guideline_xy_attr_token1,
  [3930] = 1,
    ACTIONS(789), 1,
      anon_sym_COMMA,
  [3934] = 1,
    ACTIONS(791), 1,
      anon_sym_timestamp,
  [3938] = 1,
    ACTIONS(791), 1,
      anon_sym_gzip,
  [3942] = 1,
    ACTIONS(793), 1,
      anon_sym_COMMA,
  [3946] = 1,
    ACTIONS(795), 1,
      aux_sym_stretch_token1,
  [3950] = 1,
    ACTIONS(797), 1,
      anon_sym_COMMA,
  [3954] = 1,
    ACTIONS(799), 1,
      aux_sym_stretch_token1,
  [3958] = 1,
    ACTIONS(801), 1,
      anon_sym_COMMA,
  [3962] = 1,
    ACTIONS(803), 1,
      anon_sym_COMMA,
  [3966] = 1,
    ACTIONS(805), 1,
      aux_sym__guideline_xy_attr_token1,
  [3970] = 1,
    ACTIONS(807), 1,
      anon_sym_COMMA,
  [3974] = 1,
    ACTIONS(775), 1,
      anon_sym_COMMA,
  [3978] = 1,
    ACTIONS(809), 1,
      aux_sym__new_guideline_absolute_token1,
  [3982] = 1,
    ACTIONS(599), 1,
      aux_sym__guideline_xy_attr_token1,
  [3986] = 1,
    ACTIONS(777), 1,
      aux_sym__guideline_xy_attr_token1,
  [3990] = 1,
    ACTIONS(583), 1,
      aux_sym__guideline_xy_attr_token1,
  [3994] = 1,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
  [3998] = 1,
    ACTIONS(813), 1,
      anon_sym_COMMA,
  [4002] = 1,
    ACTIONS(815), 1,
      sym_height,
  [4006] = 1,
    ACTIONS(815), 1,
      sym_width,
  [4010] = 1,
    ACTIONS(817), 1,
      aux_sym__absolute_token1,
  [4014] = 1,
    ACTIONS(819), 1,
      anon_sym_COMMA,
  [4018] = 1,
    ACTIONS(821), 1,
      aux_sym__absolute_token1,
  [4022] = 1,
    ACTIONS(823), 1,
      ts_builtin_sym_end,
  [4026] = 1,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [4030] = 1,
    ACTIONS(827), 1,
      anon_sym_SQUOTE,
  [4034] = 1,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
  [4038] = 1,
    ACTIONS(829), 1,
      anon_sym_COMMA,
  [4042] = 1,
    ACTIONS(831), 1,
      aux_sym__label_relative_token1,
  [4046] = 1,
    ACTIONS(833), 1,
      anon_sym_COMMA,
  [4050] = 1,
    ACTIONS(835), 1,
      anon_sym_with,
  [4054] = 1,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [4058] = 1,
    ACTIONS(839), 1,
      anon_sym_COMMA,
  [4062] = 1,
    ACTIONS(841), 1,
      aux_sym__label_id_token3,
  [4066] = 1,
    ACTIONS(843), 1,
      aux_sym__label_id_token2,
  [4070] = 1,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
  [4074] = 1,
    ACTIONS(847), 1,
      aux_sym__new_guideline_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 259,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 388,
  [SMALL_STATE(13)] = 413,
  [SMALL_STATE(14)] = 452,
  [SMALL_STATE(15)] = 491,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 549,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 607,
  [SMALL_STATE(20)] = 636,
  [SMALL_STATE(21)] = 665,
  [SMALL_STATE(22)] = 697,
  [SMALL_STATE(23)] = 727,
  [SMALL_STATE(24)] = 757,
  [SMALL_STATE(25)] = 787,
  [SMALL_STATE(26)] = 817,
  [SMALL_STATE(27)] = 838,
  [SMALL_STATE(28)] = 867,
  [SMALL_STATE(29)] = 896,
  [SMALL_STATE(30)] = 925,
  [SMALL_STATE(31)] = 946,
  [SMALL_STATE(32)] = 966,
  [SMALL_STATE(33)] = 996,
  [SMALL_STATE(34)] = 1028,
  [SMALL_STATE(35)] = 1052,
  [SMALL_STATE(36)] = 1080,
  [SMALL_STATE(37)] = 1100,
  [SMALL_STATE(38)] = 1128,
  [SMALL_STATE(39)] = 1148,
  [SMALL_STATE(40)] = 1168,
  [SMALL_STATE(41)] = 1188,
  [SMALL_STATE(42)] = 1215,
  [SMALL_STATE(43)] = 1236,
  [SMALL_STATE(44)] = 1261,
  [SMALL_STATE(45)] = 1286,
  [SMALL_STATE(46)] = 1307,
  [SMALL_STATE(47)] = 1328,
  [SMALL_STATE(48)] = 1349,
  [SMALL_STATE(49)] = 1367,
  [SMALL_STATE(50)] = 1385,
  [SMALL_STATE(51)] = 1407,
  [SMALL_STATE(52)] = 1429,
  [SMALL_STATE(53)] = 1453,
  [SMALL_STATE(54)] = 1477,
  [SMALL_STATE(55)] = 1501,
  [SMALL_STATE(56)] = 1525,
  [SMALL_STATE(57)] = 1547,
  [SMALL_STATE(58)] = 1571,
  [SMALL_STATE(59)] = 1595,
  [SMALL_STATE(60)] = 1619,
  [SMALL_STATE(61)] = 1641,
  [SMALL_STATE(62)] = 1660,
  [SMALL_STATE(63)] = 1679,
  [SMALL_STATE(64)] = 1702,
  [SMALL_STATE(65)] = 1723,
  [SMALL_STATE(66)] = 1742,
  [SMALL_STATE(67)] = 1763,
  [SMALL_STATE(68)] = 1784,
  [SMALL_STATE(69)] = 1807,
  [SMALL_STATE(70)] = 1830,
  [SMALL_STATE(71)] = 1845,
  [SMALL_STATE(72)] = 1866,
  [SMALL_STATE(73)] = 1889,
  [SMALL_STATE(74)] = 1912,
  [SMALL_STATE(75)] = 1935,
  [SMALL_STATE(76)] = 1953,
  [SMALL_STATE(77)] = 1973,
  [SMALL_STATE(78)] = 1991,
  [SMALL_STATE(79)] = 2009,
  [SMALL_STATE(80)] = 2029,
  [SMALL_STATE(81)] = 2047,
  [SMALL_STATE(82)] = 2067,
  [SMALL_STATE(83)] = 2087,
  [SMALL_STATE(84)] = 2107,
  [SMALL_STATE(85)] = 2125,
  [SMALL_STATE(86)] = 2143,
  [SMALL_STATE(87)] = 2163,
  [SMALL_STATE(88)] = 2183,
  [SMALL_STATE(89)] = 2203,
  [SMALL_STATE(90)] = 2221,
  [SMALL_STATE(91)] = 2239,
  [SMALL_STATE(92)] = 2259,
  [SMALL_STATE(93)] = 2277,
  [SMALL_STATE(94)] = 2297,
  [SMALL_STATE(95)] = 2315,
  [SMALL_STATE(96)] = 2333,
  [SMALL_STATE(97)] = 2349,
  [SMALL_STATE(98)] = 2362,
  [SMALL_STATE(99)] = 2377,
  [SMALL_STATE(100)] = 2390,
  [SMALL_STATE(101)] = 2413,
  [SMALL_STATE(102)] = 2428,
  [SMALL_STATE(103)] = 2443,
  [SMALL_STATE(104)] = 2458,
  [SMALL_STATE(105)] = 2473,
  [SMALL_STATE(106)] = 2488,
  [SMALL_STATE(107)] = 2503,
  [SMALL_STATE(108)] = 2518,
  [SMALL_STATE(109)] = 2531,
  [SMALL_STATE(110)] = 2546,
  [SMALL_STATE(111)] = 2561,
  [SMALL_STATE(112)] = 2576,
  [SMALL_STATE(113)] = 2591,
  [SMALL_STATE(114)] = 2606,
  [SMALL_STATE(115)] = 2621,
  [SMALL_STATE(116)] = 2636,
  [SMALL_STATE(117)] = 2651,
  [SMALL_STATE(118)] = 2666,
  [SMALL_STATE(119)] = 2681,
  [SMALL_STATE(120)] = 2696,
  [SMALL_STATE(121)] = 2711,
  [SMALL_STATE(122)] = 2726,
  [SMALL_STATE(123)] = 2741,
  [SMALL_STATE(124)] = 2756,
  [SMALL_STATE(125)] = 2771,
  [SMALL_STATE(126)] = 2784,
  [SMALL_STATE(127)] = 2797,
  [SMALL_STATE(128)] = 2810,
  [SMALL_STATE(129)] = 2825,
  [SMALL_STATE(130)] = 2840,
  [SMALL_STATE(131)] = 2855,
  [SMALL_STATE(132)] = 2867,
  [SMALL_STATE(133)] = 2879,
  [SMALL_STATE(134)] = 2891,
  [SMALL_STATE(135)] = 2903,
  [SMALL_STATE(136)] = 2915,
  [SMALL_STATE(137)] = 2927,
  [SMALL_STATE(138)] = 2939,
  [SMALL_STATE(139)] = 2951,
  [SMALL_STATE(140)] = 2963,
  [SMALL_STATE(141)] = 2975,
  [SMALL_STATE(142)] = 2987,
  [SMALL_STATE(143)] = 2999,
  [SMALL_STATE(144)] = 3011,
  [SMALL_STATE(145)] = 3023,
  [SMALL_STATE(146)] = 3035,
  [SMALL_STATE(147)] = 3047,
  [SMALL_STATE(148)] = 3059,
  [SMALL_STATE(149)] = 3071,
  [SMALL_STATE(150)] = 3083,
  [SMALL_STATE(151)] = 3095,
  [SMALL_STATE(152)] = 3107,
  [SMALL_STATE(153)] = 3119,
  [SMALL_STATE(154)] = 3131,
  [SMALL_STATE(155)] = 3143,
  [SMALL_STATE(156)] = 3155,
  [SMALL_STATE(157)] = 3167,
  [SMALL_STATE(158)] = 3179,
  [SMALL_STATE(159)] = 3191,
  [SMALL_STATE(160)] = 3203,
  [SMALL_STATE(161)] = 3215,
  [SMALL_STATE(162)] = 3227,
  [SMALL_STATE(163)] = 3239,
  [SMALL_STATE(164)] = 3251,
  [SMALL_STATE(165)] = 3263,
  [SMALL_STATE(166)] = 3275,
  [SMALL_STATE(167)] = 3287,
  [SMALL_STATE(168)] = 3299,
  [SMALL_STATE(169)] = 3311,
  [SMALL_STATE(170)] = 3323,
  [SMALL_STATE(171)] = 3335,
  [SMALL_STATE(172)] = 3347,
  [SMALL_STATE(173)] = 3359,
  [SMALL_STATE(174)] = 3371,
  [SMALL_STATE(175)] = 3383,
  [SMALL_STATE(176)] = 3395,
  [SMALL_STATE(177)] = 3407,
  [SMALL_STATE(178)] = 3419,
  [SMALL_STATE(179)] = 3431,
  [SMALL_STATE(180)] = 3443,
  [SMALL_STATE(181)] = 3455,
  [SMALL_STATE(182)] = 3467,
  [SMALL_STATE(183)] = 3479,
  [SMALL_STATE(184)] = 3491,
  [SMALL_STATE(185)] = 3503,
  [SMALL_STATE(186)] = 3515,
  [SMALL_STATE(187)] = 3527,
  [SMALL_STATE(188)] = 3539,
  [SMALL_STATE(189)] = 3551,
  [SMALL_STATE(190)] = 3563,
  [SMALL_STATE(191)] = 3575,
  [SMALL_STATE(192)] = 3587,
  [SMALL_STATE(193)] = 3599,
  [SMALL_STATE(194)] = 3611,
  [SMALL_STATE(195)] = 3623,
  [SMALL_STATE(196)] = 3635,
  [SMALL_STATE(197)] = 3647,
  [SMALL_STATE(198)] = 3659,
  [SMALL_STATE(199)] = 3671,
  [SMALL_STATE(200)] = 3683,
  [SMALL_STATE(201)] = 3695,
  [SMALL_STATE(202)] = 3707,
  [SMALL_STATE(203)] = 3719,
  [SMALL_STATE(204)] = 3732,
  [SMALL_STATE(205)] = 3745,
  [SMALL_STATE(206)] = 3757,
  [SMALL_STATE(207)] = 3769,
  [SMALL_STATE(208)] = 3781,
  [SMALL_STATE(209)] = 3791,
  [SMALL_STATE(210)] = 3803,
  [SMALL_STATE(211)] = 3811,
  [SMALL_STATE(212)] = 3823,
  [SMALL_STATE(213)] = 3830,
  [SMALL_STATE(214)] = 3841,
  [SMALL_STATE(215)] = 3851,
  [SMALL_STATE(216)] = 3858,
  [SMALL_STATE(217)] = 3865,
  [SMALL_STATE(218)] = 3872,
  [SMALL_STATE(219)] = 3879,
  [SMALL_STATE(220)] = 3886,
  [SMALL_STATE(221)] = 3893,
  [SMALL_STATE(222)] = 3900,
  [SMALL_STATE(223)] = 3907,
  [SMALL_STATE(224)] = 3914,
  [SMALL_STATE(225)] = 3918,
  [SMALL_STATE(226)] = 3922,
  [SMALL_STATE(227)] = 3926,
  [SMALL_STATE(228)] = 3930,
  [SMALL_STATE(229)] = 3934,
  [SMALL_STATE(230)] = 3938,
  [SMALL_STATE(231)] = 3942,
  [SMALL_STATE(232)] = 3946,
  [SMALL_STATE(233)] = 3950,
  [SMALL_STATE(234)] = 3954,
  [SMALL_STATE(235)] = 3958,
  [SMALL_STATE(236)] = 3962,
  [SMALL_STATE(237)] = 3966,
  [SMALL_STATE(238)] = 3970,
  [SMALL_STATE(239)] = 3974,
  [SMALL_STATE(240)] = 3978,
  [SMALL_STATE(241)] = 3982,
  [SMALL_STATE(242)] = 3986,
  [SMALL_STATE(243)] = 3990,
  [SMALL_STATE(244)] = 3994,
  [SMALL_STATE(245)] = 3998,
  [SMALL_STATE(246)] = 4002,
  [SMALL_STATE(247)] = 4006,
  [SMALL_STATE(248)] = 4010,
  [SMALL_STATE(249)] = 4014,
  [SMALL_STATE(250)] = 4018,
  [SMALL_STATE(251)] = 4022,
  [SMALL_STATE(252)] = 4026,
  [SMALL_STATE(253)] = 4030,
  [SMALL_STATE(254)] = 4034,
  [SMALL_STATE(255)] = 4038,
  [SMALL_STATE(256)] = 4042,
  [SMALL_STATE(257)] = 4046,
  [SMALL_STATE(258)] = 4050,
  [SMALL_STATE(259)] = 4054,
  [SMALL_STATE(260)] = 4058,
  [SMALL_STATE(261)] = 4062,
  [SMALL_STATE(262)] = 4066,
  [SMALL_STATE(263)] = 4070,
  [SMALL_STATE(264)] = 4074,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_entity, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_entity, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_attr, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2, .production_id = 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(90),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(67),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(50),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(51),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(101),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_attr, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_attr, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_attr, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guide_orientation, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_entity, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_entity, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_entity, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_entity, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_entity, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 8),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1, .production_id = 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 1, .production_id = 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_guide, 1, .production_id = 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_geometry, 1, .production_id = 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 8),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_absolute, 1, .production_id = 7),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_relative, 1, .production_id = 6),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guide_orientation, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_geometry, 2, .production_id = 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_guide, 2, .production_id = 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 5),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 1, .production_id = 6),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_entity, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_entity, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 5),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 2, .production_id = 9),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_xy_attr, 2, .production_id = 10),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3, .production_id = 13),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 11),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_entity, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 12),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_entity, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_entity, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_entity, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_guideline_absolute, 2, .production_id = 9),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [823] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
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
