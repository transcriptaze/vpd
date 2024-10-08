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
#define STATE_COUNT 502
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 202
#define ALIAS_COUNT 1
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 29

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_module = 3,
  anon_sym_COMMA = 4,
  anon_sym_input = 5,
  anon_sym_output = 6,
  aux_sym__new_parameter_token1 = 7,
  anon_sym_light = 8,
  anon_sym_widget = 9,
  anon_sym_decoration = 10,
  anon_sym_decorate = 11,
  anon_sym_with = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_set = 15,
  anon_sym_module2 = 16,
  anon_sym_name = 17,
  anon_sym_height = 18,
  anon_sym_width = 19,
  anon_sym_x = 20,
  anon_sym_y = 21,
  anon_sym_xy = 22,
  anon_sym_part = 23,
  anon_sym_text = 24,
  anon_sym_font = 25,
  anon_sym_size = 26,
  anon_sym_halign = 27,
  anon_sym_valign = 28,
  anon_sym_align = 29,
  anon_sym_colour = 30,
  anon_sym_color = 31,
  anon_sym_dx = 32,
  anon_sym_dy = 33,
  anon_sym_dxy = 34,
  anon_sym_id = 35,
  anon_sym_input2 = 36,
  anon_sym_output2 = 37,
  anon_sym_parameter = 38,
  anon_sym_light2 = 39,
  anon_sym_widget2 = 40,
  aux_sym__offset_attr_token1 = 41,
  anon_sym_AT = 42,
  aux_sym__absolute_attr_token1 = 43,
  anon_sym_left = 44,
  anon_sym_centre = 45,
  anon_sym_center = 46,
  anon_sym_right = 47,
  aux_sym__geometry_x_attr_token1 = 48,
  anon_sym_top = 49,
  anon_sym_middle = 50,
  anon_sym_bottom = 51,
  aux_sym__guide_attr_token1 = 52,
  aux_sym__guide_attr_token2 = 53,
  anon_sym_delete = 54,
  anon_sym_guide = 55,
  aux_sym__guide_id_token1 = 56,
  aux_sym__input_id_token1 = 57,
  anon_sym_label = 58,
  aux_sym__label_id_token1 = 59,
  anon_sym_DQUOTE = 60,
  aux_sym__label_id_token2 = 61,
  anon_sym_SQUOTE = 62,
  aux_sym__label_id_token3 = 63,
  anon_sym_decoration2 = 64,
  anon_sym_load = 65,
  anon_sym_project = 66,
  anon_sym_script = 67,
  anon_sym_unload = 68,
  anon_sym_save = 69,
  anon_sym_export = 70,
  anon_sym_DOTh = 71,
  anon_sym_GT_GT = 72,
  anon_sym_list = 73,
  anon_sym_fonts = 74,
  anon_sym_parts = 75,
  anon_sym_decorations = 76,
  anon_sym_timestamp = 77,
  anon_sym_gzip = 78,
  sym_fontsize = 79,
  anon_sym_baseline = 80,
  anon_sym_scale = 81,
  aux_sym__scale_token1 = 82,
  anon_sym_stretch = 83,
  anon_sym_origin = 84,
  aux_sym_origin_token1 = 85,
  aux_sym__originx_token1 = 86,
  aux_sym__originy_token1 = 87,
  anon_sym_background = 88,
  anon_sym_none = 89,
  sym_rgb = 90,
  sym_rgba = 91,
  anon_sym_panel = 92,
  anon_sym_svg = 93,
  anon_sym_dark = 94,
  sym_height = 95,
  sym_width = 96,
  anon_sym_vertical = 97,
  anon_sym_horizontal = 98,
  aux_sym_offset_token1 = 99,
  aux_sym__string_token1 = 100,
  aux_sym_absolute_token1 = 101,
  aux_sym_relative_token1 = 102,
  sym_angle = 103,
  sym_command = 104,
  sym_new = 105,
  sym__new_module = 106,
  sym__new_input = 107,
  sym__new_output = 108,
  sym__new_parameter = 109,
  sym__new_light = 110,
  sym__new_widget = 111,
  sym__new_component = 112,
  sym__new_decoration = 113,
  sym_decorate = 114,
  sym__new_xy = 115,
  sym_set = 116,
  sym__module_attr = 117,
  sym__component_attr = 118,
  sym__label_attr = 119,
  sym__decoration_attr = 120,
  sym__guideline_attr = 121,
  sym__x_attr = 122,
  sym__y_attr = 123,
  sym__xy_attr = 124,
  sym__offset_attr = 125,
  sym__offset_xy_attr = 126,
  sym__offset_dxy_attr = 127,
  sym__absolute_attr = 128,
  sym__absolute_x_attr = 129,
  sym__absolute_y_attr = 130,
  sym__absolute_xy_attr = 131,
  sym__relative_attr = 132,
  sym__relative_xy_attr = 133,
  sym__geometry_x_attr = 134,
  sym__geometry_y_attr = 135,
  sym__geometry_xy_attr = 136,
  sym__guide_attr = 137,
  sym__guide_xy_attr = 138,
  sym__widget_xy_attr = 139,
  sym__component_x_attr = 140,
  sym__component_y_attr = 141,
  sym__component_xy_attr = 142,
  sym_delete = 143,
  sym__guide_id = 144,
  sym__input_id = 145,
  sym__output_id = 146,
  sym__parameter_id = 147,
  sym__light_id = 148,
  sym__widget_id = 149,
  sym__label_id = 150,
  sym__decoration_id = 151,
  sym__font_id = 152,
  sym__component_id = 153,
  sym_load = 154,
  sym_unload = 155,
  sym_save = 156,
  sym_export = 157,
  sym__module_export = 158,
  sym_list = 159,
  sym_project = 160,
  sym_script = 161,
  sym__input = 162,
  sym__output = 163,
  sym__parameter = 164,
  sym__light = 165,
  sym__widget = 166,
  sym_label = 167,
  sym_font = 168,
  sym__align = 169,
  sym_halign = 170,
  sym_valign = 171,
  sym_colour = 172,
  sym_decoration = 173,
  sym__scale = 174,
  sym_stretch = 175,
  sym_origin = 176,
  sym__originx = 177,
  sym__originy = 178,
  sym_background = 179,
  sym_panel = 180,
  sym_svg = 181,
  sym_name = 182,
  sym_part = 183,
  sym_guide = 184,
  sym_identifier = 185,
  sym_vertical = 186,
  sym_horizontal = 187,
  sym_geometry = 188,
  sym_offset = 189,
  sym__offset = 190,
  sym_guideline = 191,
  sym__string = 192,
  sym_absolute = 193,
  sym_polar = 194,
  sym_relative = 195,
  sym__decorate = 196,
  sym__relative = 197,
  sym_x = 198,
  sym_y = 199,
  sym_radius = 200,
  aux_sym_command_repeat1 = 201,
  alias_sym_dy = 202,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new ",
  [anon_sym_module] = "module ",
  [anon_sym_COMMA] = ",",
  [anon_sym_input] = "input ",
  [anon_sym_output] = "output ",
  [aux_sym__new_parameter_token1] = "_new_parameter_token1",
  [anon_sym_light] = "light ",
  [anon_sym_widget] = "widget ",
  [anon_sym_decoration] = "decoration ",
  [anon_sym_decorate] = "decorate ",
  [anon_sym_with] = "with",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_set] = "set",
  [anon_sym_module2] = "module",
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
  [anon_sym_dx] = "dx",
  [anon_sym_dy] = "dy",
  [anon_sym_dxy] = "dxy",
  [anon_sym_id] = "id",
  [anon_sym_input2] = "input",
  [anon_sym_output2] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light2] = "light",
  [anon_sym_widget2] = "widget",
  [aux_sym__offset_attr_token1] = "offset",
  [anon_sym_AT] = "@",
  [aux_sym__absolute_attr_token1] = "offset",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [aux_sym__geometry_x_attr_token1] = "offset",
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_bottom] = "bottom",
  [aux_sym__guide_attr_token1] = "_guide_attr_token1",
  [aux_sym__guide_attr_token2] = "offset",
  [anon_sym_delete] = "delete",
  [anon_sym_guide] = "guide",
  [aux_sym__guide_id_token1] = "identifier",
  [aux_sym__input_id_token1] = "_input_id_token1",
  [anon_sym_label] = "label",
  [aux_sym__label_id_token1] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__label_id_token2] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__label_id_token3] = "identifier",
  [anon_sym_decoration2] = "decoration",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_unload] = "unload",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_DOTh] = "header",
  [anon_sym_GT_GT] = "helper",
  [anon_sym_list] = "list",
  [anon_sym_fonts] = "fonts",
  [anon_sym_parts] = "parts",
  [anon_sym_decorations] = "decorations",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_gzip] = "gzip",
  [sym_fontsize] = "fontsize",
  [anon_sym_baseline] = "baseline",
  [anon_sym_scale] = "scale",
  [aux_sym__scale_token1] = "scale",
  [anon_sym_stretch] = "stretch",
  [anon_sym_origin] = "origin",
  [aux_sym_origin_token1] = "offset",
  [aux_sym__originx_token1] = "reference",
  [aux_sym__originy_token1] = "reference",
  [anon_sym_background] = "background",
  [anon_sym_none] = "none",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [anon_sym_panel] = "panel",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
  [aux_sym_offset_token1] = "offset_token1",
  [aux_sym__string_token1] = "string",
  [aux_sym_absolute_token1] = "absolute_token1",
  [aux_sym_relative_token1] = "x",
  [sym_angle] = "angle",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym__new_module] = "module",
  [sym__new_input] = "input",
  [sym__new_output] = "output",
  [sym__new_parameter] = "parameter",
  [sym__new_light] = "light",
  [sym__new_widget] = "widget",
  [sym__new_component] = "_new_component",
  [sym__new_decoration] = "decoration",
  [sym_decorate] = "decorate",
  [sym__new_xy] = "_new_xy",
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__component_attr] = "_component_attr",
  [sym__label_attr] = "_label_attr",
  [sym__decoration_attr] = "_decoration_attr",
  [sym__guideline_attr] = "_guideline_attr",
  [sym__x_attr] = "x",
  [sym__y_attr] = "y",
  [sym__xy_attr] = "xy",
  [sym__offset_attr] = "_offset_attr",
  [sym__offset_xy_attr] = "_offset_xy_attr",
  [sym__offset_dxy_attr] = "_offset_dxy_attr",
  [sym__absolute_attr] = "_absolute_attr",
  [sym__absolute_x_attr] = "x",
  [sym__absolute_y_attr] = "y",
  [sym__absolute_xy_attr] = "_absolute_xy_attr",
  [sym__relative_attr] = "_relative_attr",
  [sym__relative_xy_attr] = "_relative_xy_attr",
  [sym__geometry_x_attr] = "_geometry_x_attr",
  [sym__geometry_y_attr] = "_geometry_y_attr",
  [sym__geometry_xy_attr] = "_geometry_xy_attr",
  [sym__guide_attr] = "_guide_attr",
  [sym__guide_xy_attr] = "_guide_xy_attr",
  [sym__widget_xy_attr] = "_widget_xy_attr",
  [sym__component_x_attr] = "input",
  [sym__component_y_attr] = "input",
  [sym__component_xy_attr] = "input",
  [sym_delete] = "delete",
  [sym__guide_id] = "guide",
  [sym__input_id] = "input",
  [sym__output_id] = "output",
  [sym__parameter_id] = "parameter",
  [sym__light_id] = "light",
  [sym__widget_id] = "widget",
  [sym__label_id] = "label",
  [sym__decoration_id] = "decoration",
  [sym__font_id] = "font",
  [sym__component_id] = "_component_id",
  [sym_load] = "load",
  [sym_unload] = "unload",
  [sym_save] = "save",
  [sym_export] = "export",
  [sym__module_export] = "module",
  [sym_list] = "list",
  [sym_project] = "project",
  [sym_script] = "script",
  [sym__input] = "input",
  [sym__output] = "output",
  [sym__parameter] = "parameter",
  [sym__light] = "light",
  [sym__widget] = "widget",
  [sym_label] = "label",
  [sym_font] = "font",
  [sym__align] = "_align",
  [sym_halign] = "halign",
  [sym_valign] = "valign",
  [sym_colour] = "colour",
  [sym_decoration] = "decoration",
  [sym__scale] = "_scale",
  [sym_stretch] = "stretch",
  [sym_origin] = "origin",
  [sym__originx] = "x",
  [sym__originy] = "y",
  [sym_background] = "background",
  [sym_panel] = "panel",
  [sym_svg] = "svg",
  [sym_name] = "name",
  [sym_part] = "part",
  [sym_guide] = "guide",
  [sym_identifier] = "identifier",
  [sym_vertical] = "vertical",
  [sym_horizontal] = "horizontal",
  [sym_geometry] = "geometry",
  [sym_offset] = "offset",
  [sym__offset] = "dx",
  [sym_guideline] = "guideline",
  [sym__string] = "_string",
  [sym_absolute] = "absolute",
  [sym_polar] = "polar",
  [sym_relative] = "relative",
  [sym__decorate] = "decorate",
  [sym__relative] = "_relative",
  [sym_x] = "x",
  [sym_y] = "y",
  [sym_radius] = "radius",
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_dy] = "dy",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [aux_sym__new_parameter_token1] = aux_sym__new_parameter_token1,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_decoration] = anon_sym_decoration,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_module2] = anon_sym_module2,
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
  [anon_sym_dx] = anon_sym_dx,
  [anon_sym_dy] = anon_sym_dy,
  [anon_sym_dxy] = anon_sym_dxy,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_input2] = anon_sym_input2,
  [anon_sym_output2] = anon_sym_output2,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light2] = anon_sym_light2,
  [anon_sym_widget2] = anon_sym_widget2,
  [aux_sym__offset_attr_token1] = sym_offset,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__absolute_attr_token1] = sym_offset,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [aux_sym__geometry_x_attr_token1] = sym_offset,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_bottom] = anon_sym_bottom,
  [aux_sym__guide_attr_token1] = aux_sym__guide_attr_token1,
  [aux_sym__guide_attr_token2] = sym_offset,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_guide] = anon_sym_guide,
  [aux_sym__guide_id_token1] = sym_identifier,
  [aux_sym__input_id_token1] = aux_sym__input_id_token1,
  [anon_sym_label] = anon_sym_label,
  [aux_sym__label_id_token1] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__label_id_token2] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__label_id_token3] = sym_identifier,
  [anon_sym_decoration2] = anon_sym_decoration2,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_unload] = anon_sym_unload,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_DOTh] = anon_sym_DOTh,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_fonts] = anon_sym_fonts,
  [anon_sym_parts] = anon_sym_parts,
  [anon_sym_decorations] = anon_sym_decorations,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_gzip] = anon_sym_gzip,
  [sym_fontsize] = sym_fontsize,
  [anon_sym_baseline] = anon_sym_baseline,
  [anon_sym_scale] = anon_sym_scale,
  [aux_sym__scale_token1] = aux_sym__scale_token1,
  [anon_sym_stretch] = anon_sym_stretch,
  [anon_sym_origin] = anon_sym_origin,
  [aux_sym_origin_token1] = sym_offset,
  [aux_sym__originx_token1] = aux_sym__originx_token1,
  [aux_sym__originy_token1] = aux_sym__originx_token1,
  [anon_sym_background] = anon_sym_background,
  [anon_sym_none] = anon_sym_none,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [aux_sym_offset_token1] = aux_sym_offset_token1,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym_absolute_token1] = aux_sym_absolute_token1,
  [aux_sym_relative_token1] = sym_x,
  [sym_angle] = sym_angle,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym__new_module] = sym__new_module,
  [sym__new_input] = sym__new_input,
  [sym__new_output] = sym__new_output,
  [sym__new_parameter] = sym__new_parameter,
  [sym__new_light] = sym__new_light,
  [sym__new_widget] = sym__new_widget,
  [sym__new_component] = sym__new_component,
  [sym__new_decoration] = sym_decoration,
  [sym_decorate] = sym_decorate,
  [sym__new_xy] = sym__new_xy,
  [sym_set] = sym_set,
  [sym__module_attr] = sym__new_module,
  [sym__component_attr] = sym__component_attr,
  [sym__label_attr] = sym__label_attr,
  [sym__decoration_attr] = sym__decoration_attr,
  [sym__guideline_attr] = sym__guideline_attr,
  [sym__x_attr] = sym_x,
  [sym__y_attr] = sym_y,
  [sym__xy_attr] = sym__xy_attr,
  [sym__offset_attr] = sym__offset_attr,
  [sym__offset_xy_attr] = sym__offset_xy_attr,
  [sym__offset_dxy_attr] = sym__offset_dxy_attr,
  [sym__absolute_attr] = sym__absolute_attr,
  [sym__absolute_x_attr] = sym_x,
  [sym__absolute_y_attr] = sym_y,
  [sym__absolute_xy_attr] = sym__absolute_xy_attr,
  [sym__relative_attr] = sym__relative_attr,
  [sym__relative_xy_attr] = sym__relative_xy_attr,
  [sym__geometry_x_attr] = sym__geometry_x_attr,
  [sym__geometry_y_attr] = sym__geometry_y_attr,
  [sym__geometry_xy_attr] = sym__geometry_xy_attr,
  [sym__guide_attr] = sym__guide_attr,
  [sym__guide_xy_attr] = sym__guide_xy_attr,
  [sym__widget_xy_attr] = sym__widget_xy_attr,
  [sym__component_x_attr] = sym__new_input,
  [sym__component_y_attr] = sym__new_input,
  [sym__component_xy_attr] = sym__new_input,
  [sym_delete] = sym_delete,
  [sym__guide_id] = sym_guide,
  [sym__input_id] = sym__new_input,
  [sym__output_id] = sym__new_output,
  [sym__parameter_id] = sym__new_parameter,
  [sym__light_id] = sym__new_light,
  [sym__widget_id] = sym__new_widget,
  [sym__label_id] = sym_label,
  [sym__decoration_id] = sym_decoration,
  [sym__font_id] = sym_font,
  [sym__component_id] = sym__component_id,
  [sym_load] = sym_load,
  [sym_unload] = sym_unload,
  [sym_save] = sym_save,
  [sym_export] = sym_export,
  [sym__module_export] = sym__new_module,
  [sym_list] = sym_list,
  [sym_project] = sym_project,
  [sym_script] = sym_script,
  [sym__input] = sym__new_input,
  [sym__output] = sym__new_output,
  [sym__parameter] = sym__new_parameter,
  [sym__light] = sym__new_light,
  [sym__widget] = sym__new_widget,
  [sym_label] = sym_label,
  [sym_font] = sym_font,
  [sym__align] = sym__align,
  [sym_halign] = sym_halign,
  [sym_valign] = sym_valign,
  [sym_colour] = sym_colour,
  [sym_decoration] = sym_decoration,
  [sym__scale] = sym__scale,
  [sym_stretch] = sym_stretch,
  [sym_origin] = sym_origin,
  [sym__originx] = sym_x,
  [sym__originy] = sym_y,
  [sym_background] = sym_background,
  [sym_panel] = sym_panel,
  [sym_svg] = sym_svg,
  [sym_name] = sym_name,
  [sym_part] = sym_part,
  [sym_guide] = sym_guide,
  [sym_identifier] = sym_identifier,
  [sym_vertical] = sym_vertical,
  [sym_horizontal] = sym_horizontal,
  [sym_geometry] = sym_geometry,
  [sym_offset] = sym_offset,
  [sym__offset] = sym__offset,
  [sym_guideline] = sym_guideline,
  [sym__string] = sym__string,
  [sym_absolute] = sym_absolute,
  [sym_polar] = sym_polar,
  [sym_relative] = sym_relative,
  [sym__decorate] = sym_decorate,
  [sym__relative] = sym__relative,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [sym_radius] = sym_radius,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [alias_sym_dy] = alias_sym_dy,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
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
  [aux_sym__new_parameter_token1] = {
    .visible = false,
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
  [anon_sym_decoration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decorate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
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
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module2] = {
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
  [anon_sym_dx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_light2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_widget2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__offset_attr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__absolute_attr_token1] = {
    .visible = true,
    .named = true,
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
  [aux_sym__geometry_x_attr_token1] = {
    .visible = true,
    .named = true,
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
  [aux_sym__guide_attr_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__guide_attr_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__guide_id_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__input_id_token1] = {
    .visible = false,
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
  [anon_sym_decoration2] = {
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
  [anon_sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_gzip] = {
    .visible = true,
    .named = true,
  },
  [sym_fontsize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_baseline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scale] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__scale_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_stretch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_origin_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__originx_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__originy_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
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
  [sym_height] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_offset_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_absolute_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relative_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_angle] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_new] = {
    .visible = true,
    .named = true,
  },
  [sym__new_module] = {
    .visible = true,
    .named = true,
  },
  [sym__new_input] = {
    .visible = true,
    .named = true,
  },
  [sym__new_output] = {
    .visible = true,
    .named = true,
  },
  [sym__new_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__new_light] = {
    .visible = true,
    .named = true,
  },
  [sym__new_widget] = {
    .visible = true,
    .named = true,
  },
  [sym__new_component] = {
    .visible = false,
    .named = true,
  },
  [sym__new_decoration] = {
    .visible = true,
    .named = true,
  },
  [sym_decorate] = {
    .visible = true,
    .named = true,
  },
  [sym__new_xy] = {
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
  [sym__offset_xy_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__offset_dxy_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__absolute_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__absolute_x_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__absolute_y_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__absolute_xy_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__relative_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__relative_xy_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__geometry_x_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__geometry_y_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__geometry_xy_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__guide_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__guide_xy_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__widget_xy_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__component_x_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__component_y_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__component_xy_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_delete] = {
    .visible = true,
    .named = true,
  },
  [sym__guide_id] = {
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
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym__module_export] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym__input] = {
    .visible = true,
    .named = true,
  },
  [sym__output] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__light] = {
    .visible = true,
    .named = true,
  },
  [sym__widget] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_font] = {
    .visible = true,
    .named = true,
  },
  [sym__align] = {
    .visible = false,
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
  [sym_decoration] = {
    .visible = true,
    .named = true,
  },
  [sym__scale] = {
    .visible = false,
    .named = true,
  },
  [sym_stretch] = {
    .visible = true,
    .named = true,
  },
  [sym_origin] = {
    .visible = true,
    .named = true,
  },
  [sym__originx] = {
    .visible = true,
    .named = true,
  },
  [sym__originy] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_part] = {
    .visible = true,
    .named = true,
  },
  [sym_guide] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_vertical] = {
    .visible = true,
    .named = true,
  },
  [sym_horizontal] = {
    .visible = true,
    .named = true,
  },
  [sym_geometry] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__offset] = {
    .visible = true,
    .named = true,
  },
  [sym_guideline] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym_polar] = {
    .visible = true,
    .named = true,
  },
  [sym_relative] = {
    .visible = true,
    .named = true,
  },
  [sym__decorate] = {
    .visible = true,
    .named = true,
  },
  [sym__relative] = {
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
  [sym_radius] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_dy] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = aux_sym__originx_token1,
  },
  [2] = {
    [1] = sym_font,
  },
  [3] = {
    [1] = sym_project,
  },
  [4] = {
    [1] = sym_script,
  },
  [5] = {
    [1] = sym_identifier,
  },
  [6] = {
    [1] = sym__xy_attr,
  },
  [7] = {
    [1] = aux_sym__originx_token1,
  },
  [8] = {
    [2] = sym_y,
  },
  [9] = {
    [0] = sym_absolute,
  },
  [10] = {
    [2] = sym__offset,
  },
  [11] = {
    [2] = alias_sym_dy,
  },
  [12] = {
    [1] = sym__new_light,
  },
  [13] = {
    [1] = sym_absolute,
  },
  [14] = {
    [1] = aux_sym__string_token1,
  },
  [15] = {
    [1] = sym_x,
    [3] = sym_y,
  },
  [16] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [17] = {
    [0] = sym_x,
    [2] = sym_y,
  },
  [18] = {
    [0] = sym__offset,
    [2] = alias_sym_dy,
  },
  [19] = {
    [2] = sym__new_output,
  },
  [20] = {
    [2] = sym__new_parameter,
  },
  [21] = {
    [2] = sym__new_light,
  },
  [22] = {
    [2] = sym__new_widget,
  },
  [23] = {
    [1] = sym__new_input,
  },
  [24] = {
    [1] = sym__new_output,
  },
  [25] = {
    [1] = sym__new_parameter,
  },
  [26] = {
    [1] = sym__new_widget,
  },
  [27] = {
    [1] = sym_label,
  },
  [28] = {
    [2] = sym_x,
    [4] = sym_y,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__offset_attr, 5,
    sym__offset_attr,
    alias_sym_dy,
    sym__offset,
    sym_x,
    sym_y,
  sym__absolute_attr, 2,
    sym__absolute_attr,
    sym__xy_attr,
  sym__relative_attr, 4,
    sym__relative_attr,
    sym__xy_attr,
    sym_x,
    sym_y,
  sym__geometry_x_attr, 3,
    sym__geometry_x_attr,
    sym__xy_attr,
    sym_x,
  sym__geometry_y_attr, 3,
    sym__geometry_y_attr,
    sym__xy_attr,
    sym_y,
  sym__guide_attr, 4,
    sym__guide_attr,
    sym__xy_attr,
    sym_x,
    sym_y,
  sym__component_x_attr, 5,
    sym__new_input,
    sym__new_light,
    sym__new_output,
    sym__new_parameter,
    sym__new_widget,
  sym__component_y_attr, 5,
    sym__new_input,
    sym__new_light,
    sym__new_output,
    sym__new_parameter,
    sym__new_widget,
  sym__component_xy_attr, 5,
    sym__new_input,
    sym__new_light,
    sym__new_output,
    sym__new_parameter,
    sym__new_widget,
  sym_identifier, 2,
    sym_identifier,
    aux_sym__originx_token1,
  sym__offset, 2,
    sym__offset,
    alias_sym_dy,
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
  [54] = 53,
  [55] = 53,
  [56] = 56,
  [57] = 33,
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
  [69] = 15,
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
  [80] = 32,
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
  [91] = 30,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 33,
  [97] = 30,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 21,
  [102] = 26,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 19,
  [109] = 109,
  [110] = 32,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 29,
  [118] = 118,
  [119] = 28,
  [120] = 120,
  [121] = 81,
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
  [158] = 130,
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
  [222] = 131,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 128,
  [230] = 230,
  [231] = 31,
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
  [243] = 15,
  [244] = 242,
  [245] = 245,
  [246] = 246,
  [247] = 242,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 246,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 246,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 28,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 31,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 306,
  [309] = 15,
  [310] = 310,
  [311] = 306,
  [312] = 306,
  [313] = 313,
  [314] = 310,
  [315] = 310,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 31,
  [321] = 321,
  [322] = 322,
  [323] = 318,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 318,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 318,
  [359] = 359,
  [360] = 30,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 112,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 19,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 107,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 26,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 21,
  [421] = 421,
  [422] = 422,
  [423] = 26,
  [424] = 33,
  [425] = 425,
  [426] = 426,
  [427] = 107,
  [428] = 19,
  [429] = 32,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 29,
  [434] = 28,
  [435] = 122,
  [436] = 112,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 122,
  [441] = 441,
  [442] = 21,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 29,
  [461] = 415,
  [462] = 451,
  [463] = 361,
  [464] = 464,
  [465] = 465,
  [466] = 384,
  [467] = 382,
  [468] = 373,
  [469] = 469,
  [470] = 438,
  [471] = 471,
  [472] = 451,
  [473] = 361,
  [474] = 474,
  [475] = 475,
  [476] = 373,
  [477] = 477,
  [478] = 438,
  [479] = 479,
  [480] = 361,
  [481] = 481,
  [482] = 373,
  [483] = 483,
  [484] = 445,
  [485] = 444,
  [486] = 441,
  [487] = 409,
  [488] = 371,
  [489] = 398,
  [490] = 490,
  [491] = 491,
  [492] = 445,
  [493] = 444,
  [494] = 441,
  [495] = 398,
  [496] = 496,
  [497] = 445,
  [498] = 444,
  [499] = 398,
  [500] = 404,
  [501] = 404,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(401);
      if (lookahead == '"') ADVANCE(646);
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(651);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == ',') ADVANCE(405);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '0') ADVANCE(450);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'g') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'v') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == 'x') ADVANCE(422);
      if (lookahead == 'y') ADVANCE(423);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(412);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(406);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(409);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(404);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(407);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(410);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(646);
      if (lookahead == '\'') ADVANCE(651);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(704);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '\'') ADVANCE(653);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(644);
      if (lookahead != 0) ADVANCE(645);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(573);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(573);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'm') ADVANCE(521);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'm') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'b') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'w') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(684);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(684);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'U') ADVANCE(696);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '5') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'H') ADVANCE(698);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 176) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(707);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(707);
      if (lookahead == 'm') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == '8') ADVANCE(52);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'U') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '5') ADVANCE(49);
      if (lookahead == 'H') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == '5') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == '5') ADVANCE(237);
      END_STATE();
    case 45:
      if (lookahead == '5') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == '5') ADVANCE(237);
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 47:
      if (lookahead == ';') ADVANCE(402);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(668);
      END_STATE();
    case 49:
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 'H') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'H') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == 'H') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(434);
      if (lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead == 'h') ADVANCE(537);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'm') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead == 'v') ADVANCE(509);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 'p') ADVANCE(496);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == 'w') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 'p') ADVANCE(496);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == 'w') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(680);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(657);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(661);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(687);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(359);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(434);
      if (lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 153:
      if (lookahead == 'f') ADVANCE(315);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(328);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(694);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(710);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(146);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(667);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(682);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(328);
      END_STATE();
    case 178:
      if (lookahead == 'h') ADVANCE(334);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 'p') ADVANCE(496);
      if (lookahead == 'w') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(185)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 202:
      if (lookahead == 'j') ADVANCE(119);
      END_STATE();
    case 203:
      if (lookahead == 'k') ADVANCE(695);
      END_STATE();
    case 204:
      if (lookahead == 'k') ADVANCE(161);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(693);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(684);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(703);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(697);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(696);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(461);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(686);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(566);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(706);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(707);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 233:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 238:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 239:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(656);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 277:
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 278:
      if (lookahead == 'p') ADVANCE(483);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(675);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(674);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(686);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 285:
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(708);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(671);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(672);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 310:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(660);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(659);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 351:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 352:
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == 'z') ADVANCE(188);
      END_STATE();
    case 353:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 354:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 355:
      if (lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 356:
      if (lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 357:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 358:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 359:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 360:
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 361:
      if (lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 362:
      if (lookahead == 'w') ADVANCE(1);
      END_STATE();
    case 363:
      if (lookahead == 'x') ADVANCE(284);
      END_STATE();
    case 364:
      if (lookahead == 'x') ADVANCE(317);
      END_STATE();
    case 365:
      if (lookahead == 'z') ADVANCE(116);
      END_STATE();
    case 366:
      if (lookahead == 'z') ADVANCE(273);
      END_STATE();
    case 367:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(684);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(684);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(707);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(707);
      if (lookahead == 'm') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(372)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 373:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(691);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(692);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(690);
      END_STATE();
    case 383:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 384:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 385:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 386:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 387:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 388:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 389:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 390:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 391:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 392:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      END_STATE();
    case 393:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 394:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 395:
      if (eof) ADVANCE(401);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == ',') ADVANCE(405);
      if (lookahead == '0') ADVANCE(24);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(595);
      if (lookahead == 'd') ADVANCE(586);
      if (lookahead == 'e') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(603);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(604);
      if (lookahead == 's') ADVANCE(577);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead == 'u') ADVANCE(611);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 396:
      if (eof) ADVANCE(401);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(586);
      if (lookahead == 'e') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead == 's') ADVANCE(577);
      if (lookahead == 'u') ADVANCE(611);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 397:
      if (eof) ADVANCE(401);
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == ',') ADVANCE(405);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'w') ADVANCE(194);
      if (lookahead == 'x') ADVANCE(422);
      if (lookahead == 'y') ADVANCE(423);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 398:
      if (eof) ADVANCE(401);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == ',') ADVANCE(405);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'w') ADVANCE(184);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 399:
      if (eof) ADVANCE(401);
      if (lookahead == ',') ADVANCE(405);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(255);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 400:
      if (eof) ADVANCE(401);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__new_parameter_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_module2);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(424);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_dx);
      if (lookahead == 'y') ADVANCE(436);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_dy);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_dxy);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_input2);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_input2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_output2);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_output2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_light2);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_light2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_widget2);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_widget2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(456);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(457);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(461);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(465);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(461);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 176) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'b') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'r') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == 'H') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(615);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '\'') ADVANCE(653);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(645);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(705);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(645);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(705);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(645);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(655);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_decoration2);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(680);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(237);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(647);
      if (lookahead == '\'') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(705);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(705);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == '5') ADVANCE(237);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 395},
  [3] = {.lex_state = 395},
  [4] = {.lex_state = 395},
  [5] = {.lex_state = 395},
  [6] = {.lex_state = 397},
  [7] = {.lex_state = 397},
  [8] = {.lex_state = 397},
  [9] = {.lex_state = 397},
  [10] = {.lex_state = 397},
  [11] = {.lex_state = 397},
  [12] = {.lex_state = 397},
  [13] = {.lex_state = 397},
  [14] = {.lex_state = 397},
  [15] = {.lex_state = 395},
  [16] = {.lex_state = 397},
  [17] = {.lex_state = 397},
  [18] = {.lex_state = 397},
  [19] = {.lex_state = 395},
  [20] = {.lex_state = 395},
  [21] = {.lex_state = 395},
  [22] = {.lex_state = 395},
  [23] = {.lex_state = 395},
  [24] = {.lex_state = 395},
  [25] = {.lex_state = 395},
  [26] = {.lex_state = 395},
  [27] = {.lex_state = 395},
  [28] = {.lex_state = 395},
  [29] = {.lex_state = 395},
  [30] = {.lex_state = 395},
  [31] = {.lex_state = 397},
  [32] = {.lex_state = 395},
  [33] = {.lex_state = 395},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 397},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 398},
  [45] = {.lex_state = 397},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 79},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 82},
  [55] = {.lex_state = 82},
  [56] = {.lex_state = 79},
  [57] = {.lex_state = 398},
  [58] = {.lex_state = 398},
  [59] = {.lex_state = 397},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 396},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 397},
  [72] = {.lex_state = 398},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 400},
  [82] = {.lex_state = 397},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 399},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 396},
  [90] = {.lex_state = 398},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 397},
  [96] = {.lex_state = 396},
  [97] = {.lex_state = 396},
  [98] = {.lex_state = 83},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 396},
  [102] = {.lex_state = 396},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 398},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 396},
  [108] = {.lex_state = 396},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 396},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 396},
  [113] = {.lex_state = 397},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 396},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 396},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 399},
  [122] = {.lex_state = 396},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 18},
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
  [137] = {.lex_state = 397},
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
  [158] = {.lex_state = 22},
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
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 79},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 397},
  [228] = {.lex_state = 23},
  [229] = {.lex_state = 20},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 23},
  [233] = {.lex_state = 185},
  [234] = {.lex_state = 16},
  [235] = {.lex_state = 395},
  [236] = {.lex_state = 395},
  [237] = {.lex_state = 395},
  [238] = {.lex_state = 395},
  [239] = {.lex_state = 395},
  [240] = {.lex_state = 13},
  [241] = {.lex_state = 397},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 23},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 397},
  [246] = {.lex_state = 18},
  [247] = {.lex_state = 18},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 398},
  [250] = {.lex_state = 397},
  [251] = {.lex_state = 397},
  [252] = {.lex_state = 395},
  [253] = {.lex_state = 397},
  [254] = {.lex_state = 18},
  [255] = {.lex_state = 397},
  [256] = {.lex_state = 18},
  [257] = {.lex_state = 395},
  [258] = {.lex_state = 18},
  [259] = {.lex_state = 18},
  [260] = {.lex_state = 395},
  [261] = {.lex_state = 395},
  [262] = {.lex_state = 395},
  [263] = {.lex_state = 395},
  [264] = {.lex_state = 398},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 397},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 398},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 398},
  [273] = {.lex_state = 395},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 395},
  [277] = {.lex_state = 395},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 14},
  [282] = {.lex_state = 14},
  [283] = {.lex_state = 14},
  [284] = {.lex_state = 14},
  [285] = {.lex_state = 14},
  [286] = {.lex_state = 14},
  [287] = {.lex_state = 14},
  [288] = {.lex_state = 14},
  [289] = {.lex_state = 14},
  [290] = {.lex_state = 14},
  [291] = {.lex_state = 14},
  [292] = {.lex_state = 14},
  [293] = {.lex_state = 14},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 14},
  [296] = {.lex_state = 395},
  [297] = {.lex_state = 22},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 21},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 12},
  [303] = {.lex_state = 22},
  [304] = {.lex_state = 14},
  [305] = {.lex_state = 22},
  [306] = {.lex_state = 79},
  [307] = {.lex_state = 395},
  [308] = {.lex_state = 79},
  [309] = {.lex_state = 14},
  [310] = {.lex_state = 395},
  [311] = {.lex_state = 79},
  [312] = {.lex_state = 79},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 395},
  [315] = {.lex_state = 395},
  [316] = {.lex_state = 22},
  [317] = {.lex_state = 22},
  [318] = {.lex_state = 79},
  [319] = {.lex_state = 395},
  [320] = {.lex_state = 22},
  [321] = {.lex_state = 14},
  [322] = {.lex_state = 372},
  [323] = {.lex_state = 79},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 14},
  [326] = {.lex_state = 14},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 14},
  [329] = {.lex_state = 14},
  [330] = {.lex_state = 22},
  [331] = {.lex_state = 14},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 22},
  [334] = {.lex_state = 14},
  [335] = {.lex_state = 14},
  [336] = {.lex_state = 79},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 372},
  [339] = {.lex_state = 22},
  [340] = {.lex_state = 14},
  [341] = {.lex_state = 372},
  [342] = {.lex_state = 82},
  [343] = {.lex_state = 397},
  [344] = {.lex_state = 14},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 14},
  [347] = {.lex_state = 398},
  [348] = {.lex_state = 398},
  [349] = {.lex_state = 395},
  [350] = {.lex_state = 14},
  [351] = {.lex_state = 14},
  [352] = {.lex_state = 14},
  [353] = {.lex_state = 14},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 396},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 14},
  [358] = {.lex_state = 79},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 14},
  [361] = {.lex_state = 20},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 654},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 79},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 396},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 83},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 16},
  [389] = {.lex_state = 395},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 397},
  [392] = {.lex_state = 395},
  [393] = {.lex_state = 649},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 654},
  [397] = {.lex_state = 14},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 395},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 649},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 21},
  [416] = {.lex_state = 14},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 14},
  [419] = {.lex_state = 395},
  [420] = {.lex_state = 14},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 14},
  [424] = {.lex_state = 14},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 14},
  [427] = {.lex_state = 14},
  [428] = {.lex_state = 14},
  [429] = {.lex_state = 14},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 14},
  [434] = {.lex_state = 14},
  [435] = {.lex_state = 14},
  [436] = {.lex_state = 14},
  [437] = {.lex_state = 14},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 14},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 82},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 395},
  [459] = {.lex_state = 14},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 21},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 20},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 79},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 20},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 79},
  [477] = {.lex_state = 83},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 83},
  [480] = {.lex_state = 20},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 79},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 649},
  [488] = {.lex_state = 654},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 397},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__new_parameter_token1] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_module2] = ACTIONS(1),
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
    [anon_sym_dx] = ACTIONS(1),
    [anon_sym_dy] = ACTIONS(1),
    [anon_sym_dxy] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_input2] = ACTIONS(1),
    [anon_sym_output2] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light2] = ACTIONS(1),
    [anon_sym_widget2] = ACTIONS(1),
    [aux_sym__offset_attr_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__absolute_attr_token1] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [aux_sym__geometry_x_attr_token1] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [aux_sym__guide_attr_token2] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_decoration2] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_unload] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_DOTh] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
    [sym_fontsize] = ACTIONS(1),
    [anon_sym_baseline] = ACTIONS(1),
    [anon_sym_scale] = ACTIONS(1),
    [aux_sym__scale_token1] = ACTIONS(1),
    [anon_sym_stretch] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [aux_sym_origin_token1] = ACTIONS(1),
    [aux_sym__originx_token1] = ACTIONS(1),
    [aux_sym__originy_token1] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [sym_rgb] = ACTIONS(1),
    [sym_rgba] = ACTIONS(1),
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [aux_sym_offset_token1] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_relative_token1] = ACTIONS(1),
    [sym_angle] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(457),
    [sym_new] = STATE(38),
    [sym_decorate] = STATE(38),
    [sym_set] = STATE(38),
    [sym_delete] = STATE(38),
    [sym_load] = STATE(38),
    [sym_unload] = STATE(38),
    [sym_save] = STATE(38),
    [sym_export] = STATE(38),
    [sym_list] = STATE(38),
    [aux_sym_command_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_decorate] = ACTIONS(9),
    [anon_sym_set] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(13),
    [anon_sym_load] = ACTIONS(15),
    [anon_sym_unload] = ACTIONS(17),
    [anon_sym_save] = ACTIONS(19),
    [anon_sym_export] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(35), 1,
      sym_fontsize,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(8), 1,
      sym_font,
    STATE(61), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(140), 1,
      sym_colour,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(29), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(31), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(27), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [55] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(45), 1,
      sym_fontsize,
    STATE(9), 1,
      sym_font,
    STATE(63), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(136), 1,
      sym_colour,
    ACTIONS(29), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(31), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(43), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [110] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(51), 1,
      sym_fontsize,
    STATE(10), 1,
      sym_font,
    STATE(70), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(223), 1,
      sym_colour,
    ACTIONS(29), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(31), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(49), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [165] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(57), 1,
      sym_fontsize,
    STATE(6), 1,
      sym_font,
    STATE(60), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(193), 1,
      sym_colour,
    ACTIONS(29), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(31), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(55), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [220] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(65), 1,
      sym_fontsize,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(79), 1,
      sym__align,
    STATE(148), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [267] = 16,
    ACTIONS(67), 1,
      anon_sym_module2,
    ACTIONS(69), 1,
      anon_sym_input2,
    ACTIONS(71), 1,
      anon_sym_output2,
    ACTIONS(73), 1,
      anon_sym_parameter,
    ACTIONS(75), 1,
      anon_sym_light2,
    ACTIONS(77), 1,
      anon_sym_widget2,
    ACTIONS(79), 1,
      anon_sym_guide,
    ACTIONS(81), 1,
      anon_sym_label,
    ACTIONS(83), 1,
      anon_sym_decoration2,
    ACTIONS(85), 1,
      anon_sym_origin,
    ACTIONS(87), 1,
      anon_sym_background,
    STATE(52), 1,
      sym__guide_id,
    STATE(142), 1,
      sym__label_id,
    STATE(230), 1,
      sym__decoration_id,
    STATE(248), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(141), 7,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__decoration_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
  [326] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(45), 1,
      sym_fontsize,
    STATE(63), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(136), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [373] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(91), 1,
      sym_fontsize,
    STATE(64), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(135), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(89), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [420] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(95), 1,
      sym_fontsize,
    STATE(68), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(211), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [467] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(68), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(211), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [511] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(79), 1,
      sym__align,
    STATE(148), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [555] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(61), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(140), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [599] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(63), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(136), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [643] = 4,
    ACTIONS(101), 1,
      aux_sym_offset_token1,
    STATE(28), 1,
      sym_offset,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(99), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [677] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(64), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(135), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(89), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [721] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(66), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(134), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(103), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [765] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(60), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(193), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(53), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [809] = 2,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(107), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [837] = 2,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(111), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [865] = 2,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(115), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [893] = 2,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(119), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [921] = 2,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(123), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [949] = 2,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(127), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [977] = 2,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(131), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1005] = 2,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(135), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1033] = 2,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(139), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1061] = 2,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(143), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1089] = 2,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(147), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1117] = 2,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(151), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1145] = 2,
    ACTIONS(155), 4,
      anon_sym_x,
      anon_sym_dx,
      sym_width,
      sym_angle,
    ACTIONS(153), 19,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_dy,
      anon_sym_dxy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_height,
      aux_sym_offset_token1,
  [1173] = 2,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(159), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1201] = 2,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(163), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1229] = 2,
    ACTIONS(167), 1,
      anon_sym_x,
    ACTIONS(165), 21,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
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
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1256] = 2,
    ACTIONS(171), 1,
      sym_rgb,
    ACTIONS(169), 21,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_fontsize,
      anon_sym_baseline,
      sym_rgba,
  [1283] = 2,
    ACTIONS(175), 1,
      anon_sym_x,
    ACTIONS(173), 21,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
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
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1310] = 12,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_new,
    ACTIONS(185), 1,
      anon_sym_decorate,
    ACTIONS(188), 1,
      anon_sym_set,
    ACTIONS(191), 1,
      anon_sym_delete,
    ACTIONS(194), 1,
      anon_sym_load,
    ACTIONS(197), 1,
      anon_sym_unload,
    ACTIONS(200), 1,
      anon_sym_save,
    ACTIONS(203), 1,
      anon_sym_export,
    ACTIONS(206), 1,
      anon_sym_list,
    STATE(37), 10,
      sym_new,
      sym_decorate,
      sym_set,
      sym_delete,
      sym_load,
      sym_unload,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [1356] = 12,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_decorate,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_delete,
    ACTIONS(15), 1,
      anon_sym_load,
    ACTIONS(17), 1,
      anon_sym_unload,
    ACTIONS(19), 1,
      anon_sym_save,
    ACTIONS(21), 1,
      anon_sym_export,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      sym_comment,
    STATE(37), 10,
      sym_new,
      sym_decorate,
      sym_set,
      sym_delete,
      sym_load,
      sym_unload,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [1402] = 11,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(223), 1,
      sym_angle,
    STATE(217), 1,
      sym__xy_attr,
    STATE(446), 1,
      sym__relative_attr,
    STATE(447), 1,
      sym__geometry_x_attr,
    STATE(450), 1,
      sym__guide_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(212), 6,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym__widget_xy_attr,
      sym_polar,
  [1444] = 11,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(223), 1,
      sym_angle,
    STATE(205), 1,
      sym__xy_attr,
    STATE(446), 1,
      sym__relative_attr,
    STATE(447), 1,
      sym__geometry_x_attr,
    STATE(450), 1,
      sym__guide_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(212), 6,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym__widget_xy_attr,
      sym_polar,
  [1486] = 11,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(223), 1,
      sym_angle,
    STATE(225), 1,
      sym__xy_attr,
    STATE(446), 1,
      sym__relative_attr,
    STATE(447), 1,
      sym__geometry_x_attr,
    STATE(450), 1,
      sym__guide_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(212), 6,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym__widget_xy_attr,
      sym_polar,
  [1528] = 2,
    ACTIONS(227), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(225), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_dy,
      anon_sym_dxy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1551] = 2,
    ACTIONS(231), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(229), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_dy,
      anon_sym_dxy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1574] = 10,
    ACTIONS(233), 1,
      anon_sym_module,
    ACTIONS(235), 1,
      anon_sym_input,
    ACTIONS(237), 1,
      anon_sym_output,
    ACTIONS(239), 1,
      aux_sym__new_parameter_token1,
    ACTIONS(241), 1,
      anon_sym_light,
    ACTIONS(243), 1,
      anon_sym_widget,
    ACTIONS(245), 1,
      anon_sym_decoration,
    ACTIONS(247), 1,
      anon_sym_guide,
    ACTIONS(249), 1,
      anon_sym_label,
    STATE(127), 9,
      sym__new_module,
      sym__new_input,
      sym__new_output,
      sym__new_parameter,
      sym__new_light,
      sym__new_widget,
      sym__new_decoration,
      sym_label,
      sym_guide,
  [1613] = 10,
    ACTIONS(69), 1,
      anon_sym_input2,
    ACTIONS(71), 1,
      anon_sym_output2,
    ACTIONS(73), 1,
      anon_sym_parameter,
    ACTIONS(75), 1,
      anon_sym_light2,
    ACTIONS(77), 1,
      anon_sym_widget2,
    ACTIONS(81), 1,
      anon_sym_label,
    ACTIONS(83), 1,
      anon_sym_decoration2,
    ACTIONS(251), 1,
      anon_sym_font,
    ACTIONS(253), 1,
      anon_sym_guide,
    STATE(152), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [1652] = 2,
    ACTIONS(257), 1,
      anon_sym_x,
    ACTIONS(255), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1674] = 2,
    ACTIONS(261), 1,
      anon_sym_x,
    ACTIONS(259), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1696] = 2,
    ACTIONS(265), 1,
      anon_sym_x,
    ACTIONS(263), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1718] = 2,
    ACTIONS(269), 1,
      anon_sym_x,
    ACTIONS(267), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1740] = 8,
    ACTIONS(273), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(275), 1,
      anon_sym_vertical,
    ACTIONS(277), 1,
      anon_sym_horizontal,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
    STATE(349), 1,
      sym_identifier,
    STATE(168), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(271), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1774] = 2,
    ACTIONS(283), 1,
      anon_sym_x,
    ACTIONS(281), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1796] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(285), 1,
      anon_sym_id,
    ACTIONS(287), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(289), 1,
      anon_sym_AT,
    ACTIONS(291), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(129), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1827] = 8,
    ACTIONS(293), 1,
      anon_sym_input2,
    ACTIONS(295), 1,
      anon_sym_output2,
    ACTIONS(297), 1,
      anon_sym_parameter,
    ACTIONS(299), 1,
      anon_sym_light2,
    ACTIONS(301), 1,
      anon_sym_widget2,
    STATE(500), 1,
      sym_x,
    ACTIONS(303), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(462), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1860] = 8,
    ACTIONS(293), 1,
      anon_sym_input2,
    ACTIONS(295), 1,
      anon_sym_output2,
    ACTIONS(297), 1,
      anon_sym_parameter,
    ACTIONS(299), 1,
      anon_sym_light2,
    ACTIONS(301), 1,
      anon_sym_widget2,
    STATE(404), 1,
      sym_x,
    ACTIONS(303), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(451), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1893] = 8,
    ACTIONS(293), 1,
      anon_sym_input2,
    ACTIONS(295), 1,
      anon_sym_output2,
    ACTIONS(297), 1,
      anon_sym_parameter,
    ACTIONS(299), 1,
      anon_sym_light2,
    ACTIONS(301), 1,
      anon_sym_widget2,
    STATE(501), 1,
      sym_x,
    ACTIONS(303), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(472), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1926] = 6,
    ACTIONS(273), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(275), 1,
      anon_sym_vertical,
    ACTIONS(277), 1,
      anon_sym_horizontal,
    STATE(50), 1,
      sym_identifier,
    STATE(226), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(271), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1954] = 1,
    ACTIONS(161), 15,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_with,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_angle,
  [1972] = 2,
    ACTIONS(307), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(305), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_angle,
  [1992] = 3,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    STATE(111), 1,
      sym_offset,
    ACTIONS(309), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2013] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(148), 1,
      sym_colour,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2036] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(136), 1,
      sym_colour,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2059] = 8,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_AT,
    ACTIONS(315), 1,
      aux_sym_relative_token1,
    STATE(441), 1,
      sym_x,
    STATE(442), 1,
      sym_polar,
    STATE(443), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(303), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2090] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(135), 1,
      sym_colour,
    ACTIONS(89), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2113] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(134), 1,
      sym_colour,
    ACTIONS(103), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2136] = 8,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(321), 1,
      aux_sym_relative_token1,
    ACTIONS(323), 1,
      sym_angle,
    STATE(101), 1,
      sym_polar,
    STATE(494), 1,
      sym_x,
    STATE(89), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(303), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2167] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(133), 1,
      sym_colour,
    ACTIONS(325), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2190] = 4,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym__scale,
    STATE(224), 1,
      sym_stretch,
    ACTIONS(327), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2213] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(193), 1,
      sym_colour,
    ACTIONS(53), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2236] = 4,
    ACTIONS(331), 1,
      aux_sym_offset_token1,
    STATE(119), 1,
      sym_offset,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(99), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2259] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(211), 1,
      sym_colour,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2282] = 3,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    STATE(120), 1,
      sym_offset,
    ACTIONS(333), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2303] = 1,
    ACTIONS(335), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_angle,
  [2320] = 8,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_AT,
    ACTIONS(341), 1,
      aux_sym_relative_token1,
    ACTIONS(343), 1,
      sym_angle,
    STATE(420), 1,
      sym_polar,
    STATE(486), 1,
      sym_x,
    STATE(271), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(303), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2351] = 8,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      aux_sym_relative_token1,
    ACTIONS(351), 1,
      sym_angle,
    STATE(21), 1,
      sym_polar,
    STATE(379), 1,
      sym_x,
    STATE(4), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(303), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2382] = 3,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      sym_rgb,
    ACTIONS(353), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [2403] = 3,
    ACTIONS(357), 1,
      sym_rgb,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(353), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [2424] = 2,
    ACTIONS(363), 1,
      sym_rgb,
    ACTIONS(361), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [2443] = 2,
    ACTIONS(367), 1,
      sym_rgb,
    ACTIONS(365), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [2462] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(140), 1,
      sym_colour,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2485] = 1,
    ACTIONS(157), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_with,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2501] = 2,
    ACTIONS(371), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(369), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_angle,
  [2519] = 3,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym_offset,
    ACTIONS(373), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2539] = 3,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym_stretch,
    ACTIONS(375), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2559] = 1,
    ACTIONS(379), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2575] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(287), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(289), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym__x_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2603] = 2,
    ACTIONS(385), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(383), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2621] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(287), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(289), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym__x_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2649] = 3,
    ACTIONS(389), 1,
      anon_sym_light2,
    ACTIONS(391), 1,
      anon_sym_dark,
    ACTIONS(387), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2669] = 4,
    ACTIONS(397), 1,
      aux_sym__input_id_token1,
    STATE(145), 1,
      sym_part,
    ACTIONS(393), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(395), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2691] = 3,
    ACTIONS(223), 1,
      sym_angle,
    STATE(164), 1,
      sym_polar,
    ACTIONS(399), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2711] = 1,
    ACTIONS(149), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_with,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2727] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(287), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(289), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__x_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2755] = 2,
    ACTIONS(403), 1,
      sym_rgb,
    ACTIONS(401), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [2773] = 3,
    ACTIONS(407), 1,
      anon_sym_timestamp,
    ACTIONS(409), 1,
      anon_sym_gzip,
    ACTIONS(405), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2793] = 3,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    STATE(179), 1,
      sym_offset,
    ACTIONS(411), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2813] = 2,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(163), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2830] = 2,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(151), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2847] = 8,
    ACTIONS(413), 1,
      anon_sym_input2,
    ACTIONS(415), 1,
      anon_sym_output2,
    ACTIONS(417), 1,
      anon_sym_parameter,
    ACTIONS(419), 1,
      anon_sym_light2,
    ACTIONS(421), 1,
      anon_sym_widget2,
    ACTIONS(423), 1,
      anon_sym_label,
    STATE(483), 1,
      sym_x,
    ACTIONS(303), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2876] = 1,
    ACTIONS(425), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2891] = 2,
    ACTIONS(429), 1,
      anon_sym_timestamp,
    ACTIONS(427), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2908] = 2,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(115), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2925] = 2,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(135), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2942] = 2,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(431), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2959] = 1,
    ACTIONS(435), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_angle,
  [2974] = 2,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(437), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2991] = 2,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(437), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3008] = 2,
    ACTIONS(443), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(445), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3025] = 2,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(107), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3042] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(287), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(289), 1,
      anon_sym_AT,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym__y_attr,
    ACTIONS(291), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [3069] = 2,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(159), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3086] = 1,
    ACTIONS(449), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3101] = 2,
    ACTIONS(451), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(453), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3118] = 8,
    ACTIONS(455), 1,
      anon_sym_input2,
    ACTIONS(457), 1,
      anon_sym_output2,
    ACTIONS(459), 1,
      anon_sym_parameter,
    ACTIONS(461), 1,
      anon_sym_light2,
    ACTIONS(463), 1,
      anon_sym_widget2,
    ACTIONS(465), 1,
      anon_sym_scale,
    ACTIONS(467), 1,
      anon_sym_stretch,
    STATE(481), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3147] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(287), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(289), 1,
      anon_sym_AT,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__y_attr,
    ACTIONS(291), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [3174] = 2,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    ACTIONS(469), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3191] = 2,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(469), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3208] = 2,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(147), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3225] = 1,
    ACTIONS(475), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3240] = 2,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(143), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3257] = 1,
    ACTIONS(477), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3272] = 2,
    ACTIONS(479), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(369), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3289] = 2,
    ACTIONS(481), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(483), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3306] = 1,
    ACTIONS(485), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3321] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(287), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(289), 1,
      anon_sym_AT,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym__y_attr,
    ACTIONS(291), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [3348] = 1,
    ACTIONS(487), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3362] = 1,
    ACTIONS(489), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3376] = 1,
    ACTIONS(491), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3390] = 1,
    ACTIONS(493), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3404] = 1,
    ACTIONS(495), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3418] = 1,
    ACTIONS(497), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3432] = 1,
    ACTIONS(499), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3446] = 1,
    ACTIONS(501), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3460] = 1,
    ACTIONS(503), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3474] = 1,
    ACTIONS(325), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3488] = 1,
    ACTIONS(103), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3502] = 1,
    ACTIONS(89), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3516] = 5,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(217), 1,
      sym__align,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3538] = 1,
    ACTIONS(505), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3552] = 1,
    ACTIONS(469), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3566] = 1,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3580] = 1,
    ACTIONS(507), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3594] = 10,
    ACTIONS(509), 1,
      anon_sym_x,
    ACTIONS(511), 1,
      anon_sym_y,
    ACTIONS(513), 1,
      anon_sym_xy,
    ACTIONS(515), 1,
      anon_sym_text,
    ACTIONS(517), 1,
      anon_sym_font,
    ACTIONS(519), 1,
      anon_sym_size,
    ACTIONS(521), 1,
      anon_sym_halign,
    ACTIONS(523), 1,
      anon_sym_valign,
    ACTIONS(525), 1,
      anon_sym_align,
    ACTIONS(527), 2,
      anon_sym_colour,
      anon_sym_color,
  [3626] = 1,
    ACTIONS(529), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3640] = 1,
    ACTIONS(531), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3654] = 1,
    ACTIONS(533), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3668] = 1,
    ACTIONS(535), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3682] = 1,
    ACTIONS(537), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3696] = 1,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3710] = 1,
    ACTIONS(539), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3724] = 1,
    ACTIONS(541), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3738] = 1,
    ACTIONS(543), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3752] = 1,
    ACTIONS(545), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3766] = 1,
    ACTIONS(547), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3780] = 1,
    ACTIONS(549), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3794] = 1,
    ACTIONS(551), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3808] = 1,
    ACTIONS(553), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3822] = 1,
    ACTIONS(555), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3836] = 2,
    ACTIONS(497), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(557), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3852] = 1,
    ACTIONS(559), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3866] = 1,
    ACTIONS(561), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3880] = 1,
    ACTIONS(563), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3894] = 1,
    ACTIONS(565), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3908] = 1,
    ACTIONS(567), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3922] = 1,
    ACTIONS(569), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3936] = 1,
    ACTIONS(571), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3950] = 1,
    ACTIONS(573), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3964] = 1,
    ACTIONS(575), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3978] = 1,
    ACTIONS(577), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3992] = 1,
    ACTIONS(579), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4006] = 1,
    ACTIONS(581), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4020] = 1,
    ACTIONS(583), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4034] = 1,
    ACTIONS(585), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4048] = 1,
    ACTIONS(587), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4062] = 1,
    ACTIONS(589), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4076] = 1,
    ACTIONS(591), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4090] = 1,
    ACTIONS(593), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4104] = 1,
    ACTIONS(595), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4118] = 1,
    ACTIONS(597), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4132] = 1,
    ACTIONS(599), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4146] = 1,
    ACTIONS(601), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4160] = 1,
    ACTIONS(603), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4174] = 1,
    ACTIONS(605), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4188] = 1,
    ACTIONS(607), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4202] = 1,
    ACTIONS(609), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4216] = 1,
    ACTIONS(611), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4230] = 1,
    ACTIONS(613), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4244] = 1,
    ACTIONS(615), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4258] = 1,
    ACTIONS(617), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4272] = 1,
    ACTIONS(619), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4286] = 1,
    ACTIONS(621), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4300] = 1,
    ACTIONS(623), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4314] = 1,
    ACTIONS(625), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4328] = 1,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4342] = 1,
    ACTIONS(627), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4356] = 1,
    ACTIONS(629), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4370] = 1,
    ACTIONS(631), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4384] = 1,
    ACTIONS(633), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4398] = 1,
    ACTIONS(635), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4412] = 1,
    ACTIONS(637), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4426] = 1,
    ACTIONS(639), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4440] = 1,
    ACTIONS(641), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4454] = 1,
    ACTIONS(643), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4468] = 1,
    ACTIONS(645), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4482] = 1,
    ACTIONS(647), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4496] = 1,
    ACTIONS(649), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4510] = 1,
    ACTIONS(651), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4524] = 1,
    ACTIONS(653), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4538] = 1,
    ACTIONS(655), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4552] = 1,
    ACTIONS(657), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4566] = 1,
    ACTIONS(659), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4580] = 1,
    ACTIONS(53), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4594] = 1,
    ACTIONS(661), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4608] = 1,
    ACTIONS(663), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4622] = 1,
    ACTIONS(665), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4636] = 1,
    ACTIONS(667), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4650] = 1,
    ACTIONS(669), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4664] = 1,
    ACTIONS(671), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4678] = 1,
    ACTIONS(673), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4692] = 1,
    ACTIONS(675), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4706] = 1,
    ACTIONS(677), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4720] = 1,
    ACTIONS(679), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4734] = 2,
    ACTIONS(499), 1,
      aux_sym_offset_token1,
    ACTIONS(681), 10,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
      anon_sym_vertical,
      anon_sym_horizontal,
  [4750] = 1,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4764] = 1,
    ACTIONS(375), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4778] = 1,
    ACTIONS(683), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4792] = 1,
    ACTIONS(685), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4806] = 6,
    ACTIONS(69), 1,
      anon_sym_input2,
    ACTIONS(71), 1,
      anon_sym_output2,
    ACTIONS(73), 1,
      anon_sym_parameter,
    ACTIONS(75), 1,
      anon_sym_light2,
    ACTIONS(77), 1,
      anon_sym_widget2,
    STATE(365), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [4829] = 6,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    ACTIONS(687), 1,
      anon_sym_AT,
    ACTIONS(691), 1,
      anon_sym_origin,
    ACTIONS(693), 1,
      aux_sym_origin_token1,
    STATE(163), 1,
      sym_offset,
    ACTIONS(689), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4851] = 2,
    ACTIONS(493), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(695), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4865] = 8,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(699), 1,
      anon_sym_x,
    ACTIONS(701), 1,
      anon_sym_y,
    ACTIONS(703), 1,
      anon_sym_xy,
    ACTIONS(705), 1,
      anon_sym_dx,
    ACTIONS(707), 1,
      anon_sym_dy,
    ACTIONS(709), 1,
      anon_sym_dxy,
    STATE(146), 2,
      sym__scale,
      sym_stretch,
  [4891] = 2,
    ACTIONS(153), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(155), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4905] = 6,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    ACTIONS(711), 1,
      anon_sym_AT,
    ACTIONS(713), 1,
      anon_sym_origin,
    ACTIONS(715), 1,
      aux_sym_origin_token1,
    STATE(166), 1,
      sym_offset,
    ACTIONS(689), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4926] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(717), 1,
      anon_sym_input2,
    ACTIONS(719), 1,
      anon_sym_output2,
    ACTIONS(721), 1,
      anon_sym_parameter,
    ACTIONS(723), 1,
      anon_sym_light2,
    ACTIONS(725), 1,
      anon_sym_widget2,
    STATE(456), 1,
      sym__guide_attr,
  [4948] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    ACTIONS(729), 1,
      aux_sym__offset_attr_token1,
    STATE(377), 1,
      sym__offset_attr,
    STATE(378), 2,
      sym__offset_xy_attr,
      sym_polar,
  [4965] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(475), 1,
      sym__offset,
    STATE(464), 2,
      sym_polar,
      sym__relative,
  [4982] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      sym__offset,
    STATE(465), 2,
      sym_polar,
      sym__relative,
  [4999] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      sym__offset,
    STATE(469), 2,
      sym_polar,
      sym__relative,
  [5016] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      sym__offset,
    STATE(471), 2,
      sym_polar,
      sym__relative,
  [5033] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      sym__offset,
    STATE(474), 2,
      sym_polar,
      sym__relative,
  [5050] = 5,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    ACTIONS(745), 1,
      anon_sym_none,
    ACTIONS(747), 1,
      sym_rgb,
    ACTIONS(749), 1,
      sym_rgba,
    STATE(139), 1,
      sym_name,
  [5066] = 5,
    ACTIONS(751), 1,
      anon_sym_input2,
    ACTIONS(753), 1,
      anon_sym_output2,
    ACTIONS(755), 1,
      anon_sym_parameter,
    ACTIONS(757), 1,
      anon_sym_light2,
    ACTIONS(759), 1,
      anon_sym_widget2,
  [5082] = 2,
    STATE(314), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5092] = 3,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    STATE(272), 1,
      sym_offset,
    ACTIONS(97), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [5104] = 2,
    STATE(310), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5114] = 2,
    STATE(93), 1,
      sym_halign,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [5124] = 2,
    STATE(376), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5134] = 2,
    STATE(315), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5144] = 5,
    ACTIONS(763), 1,
      anon_sym_name,
    ACTIONS(765), 1,
      anon_sym_x,
    ACTIONS(767), 1,
      anon_sym_y,
    ACTIONS(769), 1,
      anon_sym_xy,
    ACTIONS(771), 1,
      anon_sym_part,
  [5160] = 5,
    ACTIONS(773), 1,
      anon_sym_AT,
    ACTIONS(775), 1,
      aux_sym__originx_token1,
    ACTIONS(777), 1,
      aux_sym__originy_token1,
    STATE(406), 1,
      sym__originx,
    STATE(407), 1,
      sym__originy,
  [5176] = 2,
    STATE(217), 1,
      sym_valign,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [5186] = 2,
    STATE(217), 1,
      sym_halign,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [5196] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(475), 1,
      sym__offset,
    STATE(383), 2,
      sym_polar,
      sym__relative,
  [5210] = 5,
    ACTIONS(779), 1,
      anon_sym_input2,
    ACTIONS(781), 1,
      anon_sym_output2,
    ACTIONS(783), 1,
      anon_sym_parameter,
    ACTIONS(785), 1,
      anon_sym_light2,
    ACTIONS(787), 1,
      anon_sym_widget2,
  [5226] = 2,
    STATE(427), 1,
      sym_y,
    ACTIONS(789), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5236] = 2,
    STATE(93), 1,
      sym_valign,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [5246] = 2,
    STATE(273), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5256] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(475), 1,
      sym__offset,
    STATE(430), 2,
      sym_polar,
      sym__relative,
  [5270] = 2,
    STATE(107), 1,
      sym_y,
    ACTIONS(791), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5280] = 2,
    STATE(5), 1,
      sym_y,
    ACTIONS(793), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5290] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(475), 1,
      sym__offset,
    STATE(370), 2,
      sym_polar,
      sym__relative,
  [5304] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(475), 1,
      sym__offset,
    STATE(374), 2,
      sym_polar,
      sym__relative,
  [5318] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(475), 1,
      sym__offset,
    STATE(375), 2,
      sym_polar,
      sym__relative,
  [5332] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(475), 1,
      sym__offset,
    STATE(380), 2,
      sym_polar,
      sym__relative,
  [5346] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(795), 1,
      aux_sym__absolute_attr_token1,
    STATE(219), 1,
      sym_polar,
    STATE(454), 1,
      sym__absolute_x_attr,
  [5359] = 4,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      aux_sym__string_token1,
    STATE(217), 1,
      sym__string,
  [5372] = 4,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    ACTIONS(805), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 1,
      aux_sym__string_token1,
    STATE(74), 1,
      sym__string,
  [5385] = 2,
    STATE(90), 1,
      sym__geometry_y_attr,
    ACTIONS(809), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [5394] = 3,
    ACTIONS(811), 1,
      anon_sym_module2,
    ACTIONS(813), 1,
      anon_sym_panel,
    STATE(191), 2,
      sym__module_export,
      sym_panel,
  [5405] = 3,
    ACTIONS(815), 1,
      anon_sym_project,
    ACTIONS(817), 1,
      anon_sym_script,
    STATE(162), 2,
      sym_project,
      sym_script,
  [5416] = 1,
    ACTIONS(819), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [5422] = 3,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(67), 1,
      sym_name,
    STATE(157), 1,
      sym_decoration,
  [5432] = 1,
    ACTIONS(141), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [5438] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      sym_polar,
  [5448] = 3,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(67), 1,
      sym_name,
    STATE(186), 1,
      sym_decoration,
  [5458] = 3,
    ACTIONS(825), 1,
      anon_sym_font,
    ACTIONS(827), 1,
      anon_sym_project,
    ACTIONS(829), 1,
      anon_sym_script,
  [5468] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      sym_polar,
  [5478] = 3,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    ACTIONS(833), 1,
      aux_sym_origin_token1,
    STATE(132), 1,
      sym_offset,
  [5488] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(305), 1,
      sym_name,
    STATE(432), 1,
      sym__component_x_attr,
  [5498] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(305), 1,
      sym_name,
    STATE(431), 1,
      sym__component_x_attr,
  [5508] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(305), 1,
      sym_name,
    STATE(425), 1,
      sym__component_x_attr,
  [5518] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(305), 1,
      sym_name,
    STATE(422), 1,
      sym__component_x_attr,
  [5528] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(305), 1,
      sym_name,
    STATE(421), 1,
      sym__component_x_attr,
  [5538] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(303), 1,
      sym_name,
    STATE(417), 1,
      sym__component_y_attr,
  [5548] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(303), 1,
      sym_name,
    STATE(414), 1,
      sym__component_y_attr,
  [5558] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(303), 1,
      sym_name,
    STATE(413), 1,
      sym__component_y_attr,
  [5568] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(303), 1,
      sym_name,
    STATE(412), 1,
      sym__component_y_attr,
  [5578] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(303), 1,
      sym_name,
    STATE(411), 1,
      sym__component_y_attr,
  [5588] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
    STATE(410), 1,
      sym__component_xy_attr,
  [5598] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
    STATE(403), 1,
      sym__component_xy_attr,
  [5608] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
    STATE(402), 1,
      sym__component_xy_attr,
  [5618] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
    STATE(400), 1,
      sym__component_xy_attr,
  [5628] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
    STATE(399), 1,
      sym__component_xy_attr,
  [5638] = 3,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
    STATE(65), 1,
      sym_name,
    STATE(195), 1,
      sym__new_component,
  [5648] = 3,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
    STATE(65), 1,
      sym_name,
    STATE(197), 1,
      sym__new_component,
  [5658] = 3,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
    STATE(65), 1,
      sym_name,
    STATE(199), 1,
      sym__new_component,
  [5668] = 3,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    ACTIONS(841), 1,
      aux_sym_origin_token1,
    STATE(178), 1,
      sym_offset,
  [5678] = 3,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    STATE(225), 1,
      sym__offset_dxy_attr,
    STATE(369), 1,
      sym__offset_attr,
  [5688] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(217), 1,
      sym_colour,
  [5698] = 3,
    ACTIONS(845), 1,
      anon_sym_LPAREN,
    ACTIONS(847), 1,
      aux_sym__guide_id_token1,
    STATE(340), 1,
      sym__component_id,
  [5708] = 3,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
    STATE(65), 1,
      sym_name,
    STATE(206), 1,
      sym__new_component,
  [5718] = 2,
    ACTIONS(155), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(153), 2,
      anon_sym_RPAREN,
      sym_angle,
  [5726] = 3,
    ACTIONS(849), 1,
      aux_sym__label_id_token1,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    ACTIONS(853), 1,
      anon_sym_SQUOTE,
  [5736] = 3,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      sym__offset_attr,
  [5746] = 3,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
    STATE(65), 1,
      sym_name,
    STATE(208), 1,
      sym__new_component,
  [5756] = 3,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      sym__offset_attr,
  [5766] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(859), 1,
      aux_sym_absolute_token1,
    STATE(394), 1,
      sym_polar,
  [5776] = 3,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      sym_offset,
  [5786] = 3,
    ACTIONS(343), 1,
      sym_angle,
    ACTIONS(863), 1,
      aux_sym_absolute_token1,
    STATE(423), 1,
      sym_polar,
  [5796] = 3,
    ACTIONS(97), 1,
      aux_sym__input_id_token1,
    ACTIONS(865), 1,
      aux_sym_offset_token1,
    STATE(434), 1,
      sym_offset,
  [5806] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_polar,
  [5816] = 3,
    ACTIONS(323), 1,
      sym_angle,
    ACTIONS(869), 1,
      aux_sym_absolute_token1,
    STATE(102), 1,
      sym_polar,
  [5826] = 3,
    ACTIONS(351), 1,
      sym_angle,
    ACTIONS(871), 1,
      aux_sym_absolute_token1,
    STATE(26), 1,
      sym_polar,
  [5836] = 3,
    ACTIONS(873), 1,
      anon_sym_name,
    ACTIONS(875), 1,
      anon_sym_height,
    ACTIONS(877), 1,
      anon_sym_width,
  [5846] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    STATE(478), 1,
      sym_polar,
  [5856] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(438), 1,
      sym_polar,
  [5866] = 2,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    STATE(210), 1,
      sym__offset_attr,
  [5873] = 2,
    ACTIONS(287), 1,
      aux_sym__offset_attr_token1,
    STATE(202), 1,
      sym__relative_attr,
  [5880] = 2,
    ACTIONS(883), 1,
      aux_sym_absolute_token1,
    STATE(30), 1,
      sym_radius,
  [5887] = 2,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(363), 1,
      sym__offset,
  [5894] = 1,
    ACTIONS(153), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [5899] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_name,
  [5906] = 2,
    ACTIONS(885), 1,
      aux_sym__guide_attr_token1,
    STATE(200), 1,
      sym_identifier,
  [5913] = 2,
    ACTIONS(887), 1,
      aux_sym_absolute_token1,
    STATE(360), 1,
      sym_radius,
  [5920] = 2,
    ACTIONS(251), 1,
      anon_sym_font,
    STATE(161), 1,
      sym__font_id,
  [5927] = 2,
    ACTIONS(889), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_part,
  [5934] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(257), 1,
      sym_name,
  [5941] = 2,
    ACTIONS(891), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_font,
  [5948] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(260), 1,
      sym_name,
  [5955] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(261), 1,
      sym_name,
  [5962] = 2,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    STATE(194), 1,
      sym__offset_attr,
  [5969] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(235), 1,
      sym_name,
  [5976] = 2,
    ACTIONS(893), 1,
      sym_rgb,
    ACTIONS(895), 1,
      sym_rgba,
  [5983] = 2,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    STATE(203), 1,
      sym__offset_attr,
  [5990] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(262), 1,
      sym_name,
  [5997] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(263), 1,
      sym_name,
  [6004] = 2,
    ACTIONS(897), 1,
      aux_sym_absolute_token1,
    STATE(97), 1,
      sym_radius,
  [6011] = 1,
    ACTIONS(899), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6016] = 2,
    ACTIONS(901), 1,
      aux_sym__guide_attr_token1,
    STATE(198), 1,
      sym__guide_attr,
  [6023] = 2,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    STATE(408), 1,
      sym__offset_attr,
  [6030] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(43), 1,
      sym_name,
  [6037] = 2,
    ACTIONS(901), 1,
      aux_sym__guide_attr_token1,
    STATE(276), 1,
      sym__guide_attr,
  [6044] = 2,
    ACTIONS(903), 1,
      aux_sym__absolute_attr_token1,
    STATE(165), 1,
      sym__absolute_y_attr,
  [6051] = 2,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    ACTIONS(907), 1,
      sym_width,
  [6058] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(236), 1,
      sym_name,
  [6065] = 1,
    ACTIONS(909), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [6070] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(237), 1,
      sym_name,
  [6077] = 2,
    ACTIONS(775), 1,
      aux_sym__originx_token1,
    STATE(221), 1,
      sym__originx,
  [6084] = 2,
    ACTIONS(777), 1,
      aux_sym__originy_token1,
    STATE(221), 1,
      sym__originy,
  [6091] = 2,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
  [6098] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(238), 1,
      sym_name,
  [6105] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(188), 1,
      sym_name,
  [6112] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(355), 1,
      sym_name,
  [6119] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(252), 1,
      sym_name,
  [6126] = 2,
    ACTIONS(911), 1,
      anon_sym_svg,
    STATE(153), 1,
      sym_svg,
  [6133] = 2,
    ACTIONS(913), 1,
      sym_height,
    ACTIONS(915), 1,
      sym_width,
  [6140] = 2,
    ACTIONS(465), 1,
      anon_sym_scale,
    ACTIONS(467), 1,
      anon_sym_stretch,
  [6147] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(239), 1,
      sym_name,
  [6154] = 2,
    ACTIONS(917), 1,
      aux_sym_absolute_token1,
    STATE(91), 1,
      sym_radius,
  [6161] = 1,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
  [6165] = 1,
    ACTIONS(149), 1,
      aux_sym__input_id_token1,
  [6169] = 1,
    ACTIONS(921), 1,
      aux_sym_relative_token1,
  [6173] = 1,
    ACTIONS(923), 1,
      anon_sym_COMMA,
  [6177] = 1,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
  [6181] = 1,
    ACTIONS(451), 1,
      anon_sym_with,
  [6185] = 1,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
  [6189] = 1,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
  [6193] = 1,
    ACTIONS(931), 1,
      anon_sym_SQUOTE,
  [6197] = 1,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
  [6201] = 1,
    ACTIONS(933), 1,
      anon_sym_COMMA,
  [6205] = 1,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [6209] = 1,
    ACTIONS(937), 1,
      aux_sym__label_id_token3,
  [6213] = 1,
    ACTIONS(105), 1,
      anon_sym_with,
  [6217] = 1,
    ACTIONS(939), 1,
      aux_sym_absolute_token1,
  [6221] = 1,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
  [6225] = 1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [6229] = 1,
    ACTIONS(443), 1,
      anon_sym_with,
  [6233] = 1,
    ACTIONS(945), 1,
      anon_sym_COMMA,
  [6237] = 1,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
  [6241] = 1,
    ACTIONS(949), 1,
      anon_sym_COMMA,
  [6245] = 1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [6249] = 1,
    ACTIONS(953), 1,
      sym_height,
  [6253] = 1,
    ACTIONS(955), 1,
      anon_sym_SQUOTE,
  [6257] = 1,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
  [6261] = 1,
    ACTIONS(955), 1,
      anon_sym_DQUOTE,
  [6265] = 1,
    ACTIONS(959), 1,
      anon_sym_COMMA,
  [6269] = 1,
    ACTIONS(961), 1,
      aux_sym__scale_token1,
  [6273] = 1,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
  [6277] = 1,
    ACTIONS(965), 1,
      sym_rgb,
  [6281] = 1,
    ACTIONS(967), 1,
      aux_sym_origin_token1,
  [6285] = 1,
    ACTIONS(965), 1,
      sym_rgba,
  [6289] = 1,
    ACTIONS(953), 1,
      sym_width,
  [6293] = 1,
    ACTIONS(969), 1,
      aux_sym_origin_token1,
  [6297] = 1,
    ACTIONS(971), 1,
      aux_sym__label_id_token2,
  [6301] = 1,
    ACTIONS(133), 1,
      anon_sym_with,
  [6305] = 1,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [6309] = 1,
    ACTIONS(975), 1,
      aux_sym__label_id_token3,
  [6313] = 1,
    ACTIONS(977), 1,
      aux_sym__input_id_token1,
  [6317] = 1,
    ACTIONS(979), 1,
      anon_sym_COMMA,
  [6321] = 1,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
  [6325] = 1,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
  [6329] = 1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [6333] = 1,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
  [6337] = 1,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
  [6341] = 1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
  [6345] = 1,
    ACTIONS(993), 1,
      aux_sym_origin_token1,
  [6349] = 1,
    ACTIONS(995), 1,
      anon_sym_COMMA,
  [6353] = 1,
    ACTIONS(997), 1,
      anon_sym_COMMA,
  [6357] = 1,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
  [6361] = 1,
    ACTIONS(1001), 1,
      aux_sym__label_id_token2,
  [6365] = 1,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
  [6369] = 1,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
  [6373] = 1,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
  [6377] = 1,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
  [6381] = 1,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
  [6385] = 1,
    ACTIONS(1013), 1,
      aux_sym__guide_id_token1,
  [6389] = 1,
    ACTIONS(1015), 1,
      aux_sym__input_id_token1,
  [6393] = 1,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
  [6397] = 1,
    ACTIONS(1019), 1,
      aux_sym__input_id_token1,
  [6401] = 1,
    ACTIONS(1021), 1,
      sym_fontsize,
  [6405] = 1,
    ACTIONS(113), 1,
      aux_sym__input_id_token1,
  [6409] = 1,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
  [6413] = 1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
  [6417] = 1,
    ACTIONS(133), 1,
      aux_sym__input_id_token1,
  [6421] = 1,
    ACTIONS(161), 1,
      aux_sym__input_id_token1,
  [6425] = 1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
  [6429] = 1,
    ACTIONS(1029), 1,
      aux_sym__input_id_token1,
  [6433] = 1,
    ACTIONS(443), 1,
      aux_sym__input_id_token1,
  [6437] = 1,
    ACTIONS(105), 1,
      aux_sym__input_id_token1,
  [6441] = 1,
    ACTIONS(157), 1,
      aux_sym__input_id_token1,
  [6445] = 1,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
  [6449] = 1,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
  [6453] = 1,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
  [6457] = 1,
    ACTIONS(145), 1,
      aux_sym__input_id_token1,
  [6461] = 1,
    ACTIONS(141), 1,
      aux_sym__input_id_token1,
  [6465] = 1,
    ACTIONS(481), 1,
      aux_sym__input_id_token1,
  [6469] = 1,
    ACTIONS(451), 1,
      aux_sym__input_id_token1,
  [6473] = 1,
    ACTIONS(1037), 1,
      aux_sym__input_id_token1,
  [6477] = 1,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
  [6481] = 1,
    ACTIONS(1041), 1,
      aux_sym__input_id_token1,
  [6485] = 1,
    ACTIONS(481), 1,
      anon_sym_with,
  [6489] = 1,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
  [6493] = 1,
    ACTIONS(113), 1,
      anon_sym_with,
  [6497] = 1,
    ACTIONS(1045), 1,
      anon_sym_with,
  [6501] = 1,
    ACTIONS(1047), 1,
      anon_sym_COMMA,
  [6505] = 1,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
  [6509] = 1,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
  [6513] = 1,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
  [6517] = 1,
    ACTIONS(1055), 1,
      aux_sym__absolute_attr_token1,
  [6521] = 1,
    ACTIONS(467), 1,
      anon_sym_stretch,
  [6525] = 1,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
  [6529] = 1,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
  [6533] = 1,
    ACTIONS(1061), 1,
      anon_sym_COMMA,
  [6537] = 1,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
  [6541] = 1,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
  [6545] = 1,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
  [6549] = 1,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
  [6553] = 1,
    ACTIONS(1071), 1,
      ts_builtin_sym_end,
  [6557] = 1,
    ACTIONS(1073), 1,
      aux_sym_origin_token1,
  [6561] = 1,
    ACTIONS(1075), 1,
      aux_sym__input_id_token1,
  [6565] = 1,
    ACTIONS(145), 1,
      anon_sym_with,
  [6569] = 1,
    ACTIONS(1077), 1,
      aux_sym__guide_id_token1,
  [6573] = 1,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
  [6577] = 1,
    ACTIONS(1081), 1,
      aux_sym_relative_token1,
  [6581] = 1,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
  [6585] = 1,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
  [6589] = 1,
    ACTIONS(1087), 1,
      anon_sym_DQUOTE,
  [6593] = 1,
    ACTIONS(1087), 1,
      anon_sym_SQUOTE,
  [6597] = 1,
    ACTIONS(1089), 1,
      aux_sym_absolute_token1,
  [6601] = 1,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
  [6605] = 1,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
  [6609] = 1,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
  [6613] = 1,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
  [6617] = 1,
    ACTIONS(1099), 1,
      aux_sym_relative_token1,
  [6621] = 1,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
  [6625] = 1,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
  [6629] = 1,
    ACTIONS(1105), 1,
      aux_sym_absolute_token1,
  [6633] = 1,
    ACTIONS(1107), 1,
      aux_sym__scale_token1,
  [6637] = 1,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
  [6641] = 1,
    ACTIONS(1111), 1,
      aux_sym__scale_token1,
  [6645] = 1,
    ACTIONS(1113), 1,
      aux_sym_relative_token1,
  [6649] = 1,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
  [6653] = 1,
    ACTIONS(1117), 1,
      aux_sym_absolute_token1,
  [6657] = 1,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
  [6661] = 1,
    ACTIONS(1121), 1,
      anon_sym_COMMA,
  [6665] = 1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
  [6669] = 1,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
  [6673] = 1,
    ACTIONS(1127), 1,
      aux_sym__label_id_token2,
  [6677] = 1,
    ACTIONS(1129), 1,
      aux_sym__label_id_token3,
  [6681] = 1,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
  [6685] = 1,
    ACTIONS(1133), 1,
      sym_width,
  [6689] = 1,
    ACTIONS(1135), 1,
      anon_sym_timestamp,
  [6693] = 1,
    ACTIONS(1137), 1,
      anon_sym_COMMA,
  [6697] = 1,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
  [6701] = 1,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
  [6705] = 1,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
  [6709] = 1,
    ACTIONS(1135), 1,
      anon_sym_gzip,
  [6713] = 1,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
  [6717] = 1,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
  [6721] = 1,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
  [6725] = 1,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
  [6729] = 1,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 326,
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 420,
  [SMALL_STATE(11)] = 467,
  [SMALL_STATE(12)] = 511,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 599,
  [SMALL_STATE(15)] = 643,
  [SMALL_STATE(16)] = 677,
  [SMALL_STATE(17)] = 721,
  [SMALL_STATE(18)] = 765,
  [SMALL_STATE(19)] = 809,
  [SMALL_STATE(20)] = 837,
  [SMALL_STATE(21)] = 865,
  [SMALL_STATE(22)] = 893,
  [SMALL_STATE(23)] = 921,
  [SMALL_STATE(24)] = 949,
  [SMALL_STATE(25)] = 977,
  [SMALL_STATE(26)] = 1005,
  [SMALL_STATE(27)] = 1033,
  [SMALL_STATE(28)] = 1061,
  [SMALL_STATE(29)] = 1089,
  [SMALL_STATE(30)] = 1117,
  [SMALL_STATE(31)] = 1145,
  [SMALL_STATE(32)] = 1173,
  [SMALL_STATE(33)] = 1201,
  [SMALL_STATE(34)] = 1229,
  [SMALL_STATE(35)] = 1256,
  [SMALL_STATE(36)] = 1283,
  [SMALL_STATE(37)] = 1310,
  [SMALL_STATE(38)] = 1356,
  [SMALL_STATE(39)] = 1402,
  [SMALL_STATE(40)] = 1444,
  [SMALL_STATE(41)] = 1486,
  [SMALL_STATE(42)] = 1528,
  [SMALL_STATE(43)] = 1551,
  [SMALL_STATE(44)] = 1574,
  [SMALL_STATE(45)] = 1613,
  [SMALL_STATE(46)] = 1652,
  [SMALL_STATE(47)] = 1674,
  [SMALL_STATE(48)] = 1696,
  [SMALL_STATE(49)] = 1718,
  [SMALL_STATE(50)] = 1740,
  [SMALL_STATE(51)] = 1774,
  [SMALL_STATE(52)] = 1796,
  [SMALL_STATE(53)] = 1827,
  [SMALL_STATE(54)] = 1860,
  [SMALL_STATE(55)] = 1893,
  [SMALL_STATE(56)] = 1926,
  [SMALL_STATE(57)] = 1954,
  [SMALL_STATE(58)] = 1972,
  [SMALL_STATE(59)] = 1992,
  [SMALL_STATE(60)] = 2013,
  [SMALL_STATE(61)] = 2036,
  [SMALL_STATE(62)] = 2059,
  [SMALL_STATE(63)] = 2090,
  [SMALL_STATE(64)] = 2113,
  [SMALL_STATE(65)] = 2136,
  [SMALL_STATE(66)] = 2167,
  [SMALL_STATE(67)] = 2190,
  [SMALL_STATE(68)] = 2213,
  [SMALL_STATE(69)] = 2236,
  [SMALL_STATE(70)] = 2259,
  [SMALL_STATE(71)] = 2282,
  [SMALL_STATE(72)] = 2303,
  [SMALL_STATE(73)] = 2320,
  [SMALL_STATE(74)] = 2351,
  [SMALL_STATE(75)] = 2382,
  [SMALL_STATE(76)] = 2403,
  [SMALL_STATE(77)] = 2424,
  [SMALL_STATE(78)] = 2443,
  [SMALL_STATE(79)] = 2462,
  [SMALL_STATE(80)] = 2485,
  [SMALL_STATE(81)] = 2501,
  [SMALL_STATE(82)] = 2519,
  [SMALL_STATE(83)] = 2539,
  [SMALL_STATE(84)] = 2559,
  [SMALL_STATE(85)] = 2575,
  [SMALL_STATE(86)] = 2603,
  [SMALL_STATE(87)] = 2621,
  [SMALL_STATE(88)] = 2649,
  [SMALL_STATE(89)] = 2669,
  [SMALL_STATE(90)] = 2691,
  [SMALL_STATE(91)] = 2711,
  [SMALL_STATE(92)] = 2727,
  [SMALL_STATE(93)] = 2755,
  [SMALL_STATE(94)] = 2773,
  [SMALL_STATE(95)] = 2793,
  [SMALL_STATE(96)] = 2813,
  [SMALL_STATE(97)] = 2830,
  [SMALL_STATE(98)] = 2847,
  [SMALL_STATE(99)] = 2876,
  [SMALL_STATE(100)] = 2891,
  [SMALL_STATE(101)] = 2908,
  [SMALL_STATE(102)] = 2925,
  [SMALL_STATE(103)] = 2942,
  [SMALL_STATE(104)] = 2959,
  [SMALL_STATE(105)] = 2974,
  [SMALL_STATE(106)] = 2991,
  [SMALL_STATE(107)] = 3008,
  [SMALL_STATE(108)] = 3025,
  [SMALL_STATE(109)] = 3042,
  [SMALL_STATE(110)] = 3069,
  [SMALL_STATE(111)] = 3086,
  [SMALL_STATE(112)] = 3101,
  [SMALL_STATE(113)] = 3118,
  [SMALL_STATE(114)] = 3147,
  [SMALL_STATE(115)] = 3174,
  [SMALL_STATE(116)] = 3191,
  [SMALL_STATE(117)] = 3208,
  [SMALL_STATE(118)] = 3225,
  [SMALL_STATE(119)] = 3240,
  [SMALL_STATE(120)] = 3257,
  [SMALL_STATE(121)] = 3272,
  [SMALL_STATE(122)] = 3289,
  [SMALL_STATE(123)] = 3306,
  [SMALL_STATE(124)] = 3321,
  [SMALL_STATE(125)] = 3348,
  [SMALL_STATE(126)] = 3362,
  [SMALL_STATE(127)] = 3376,
  [SMALL_STATE(128)] = 3390,
  [SMALL_STATE(129)] = 3404,
  [SMALL_STATE(130)] = 3418,
  [SMALL_STATE(131)] = 3432,
  [SMALL_STATE(132)] = 3446,
  [SMALL_STATE(133)] = 3460,
  [SMALL_STATE(134)] = 3474,
  [SMALL_STATE(135)] = 3488,
  [SMALL_STATE(136)] = 3502,
  [SMALL_STATE(137)] = 3516,
  [SMALL_STATE(138)] = 3538,
  [SMALL_STATE(139)] = 3552,
  [SMALL_STATE(140)] = 3566,
  [SMALL_STATE(141)] = 3580,
  [SMALL_STATE(142)] = 3594,
  [SMALL_STATE(143)] = 3626,
  [SMALL_STATE(144)] = 3640,
  [SMALL_STATE(145)] = 3654,
  [SMALL_STATE(146)] = 3668,
  [SMALL_STATE(147)] = 3682,
  [SMALL_STATE(148)] = 3696,
  [SMALL_STATE(149)] = 3710,
  [SMALL_STATE(150)] = 3724,
  [SMALL_STATE(151)] = 3738,
  [SMALL_STATE(152)] = 3752,
  [SMALL_STATE(153)] = 3766,
  [SMALL_STATE(154)] = 3780,
  [SMALL_STATE(155)] = 3794,
  [SMALL_STATE(156)] = 3808,
  [SMALL_STATE(157)] = 3822,
  [SMALL_STATE(158)] = 3836,
  [SMALL_STATE(159)] = 3852,
  [SMALL_STATE(160)] = 3866,
  [SMALL_STATE(161)] = 3880,
  [SMALL_STATE(162)] = 3894,
  [SMALL_STATE(163)] = 3908,
  [SMALL_STATE(164)] = 3922,
  [SMALL_STATE(165)] = 3936,
  [SMALL_STATE(166)] = 3950,
  [SMALL_STATE(167)] = 3964,
  [SMALL_STATE(168)] = 3978,
  [SMALL_STATE(169)] = 3992,
  [SMALL_STATE(170)] = 4006,
  [SMALL_STATE(171)] = 4020,
  [SMALL_STATE(172)] = 4034,
  [SMALL_STATE(173)] = 4048,
  [SMALL_STATE(174)] = 4062,
  [SMALL_STATE(175)] = 4076,
  [SMALL_STATE(176)] = 4090,
  [SMALL_STATE(177)] = 4104,
  [SMALL_STATE(178)] = 4118,
  [SMALL_STATE(179)] = 4132,
  [SMALL_STATE(180)] = 4146,
  [SMALL_STATE(181)] = 4160,
  [SMALL_STATE(182)] = 4174,
  [SMALL_STATE(183)] = 4188,
  [SMALL_STATE(184)] = 4202,
  [SMALL_STATE(185)] = 4216,
  [SMALL_STATE(186)] = 4230,
  [SMALL_STATE(187)] = 4244,
  [SMALL_STATE(188)] = 4258,
  [SMALL_STATE(189)] = 4272,
  [SMALL_STATE(190)] = 4286,
  [SMALL_STATE(191)] = 4300,
  [SMALL_STATE(192)] = 4314,
  [SMALL_STATE(193)] = 4328,
  [SMALL_STATE(194)] = 4342,
  [SMALL_STATE(195)] = 4356,
  [SMALL_STATE(196)] = 4370,
  [SMALL_STATE(197)] = 4384,
  [SMALL_STATE(198)] = 4398,
  [SMALL_STATE(199)] = 4412,
  [SMALL_STATE(200)] = 4426,
  [SMALL_STATE(201)] = 4440,
  [SMALL_STATE(202)] = 4454,
  [SMALL_STATE(203)] = 4468,
  [SMALL_STATE(204)] = 4482,
  [SMALL_STATE(205)] = 4496,
  [SMALL_STATE(206)] = 4510,
  [SMALL_STATE(207)] = 4524,
  [SMALL_STATE(208)] = 4538,
  [SMALL_STATE(209)] = 4552,
  [SMALL_STATE(210)] = 4566,
  [SMALL_STATE(211)] = 4580,
  [SMALL_STATE(212)] = 4594,
  [SMALL_STATE(213)] = 4608,
  [SMALL_STATE(214)] = 4622,
  [SMALL_STATE(215)] = 4636,
  [SMALL_STATE(216)] = 4650,
  [SMALL_STATE(217)] = 4664,
  [SMALL_STATE(218)] = 4678,
  [SMALL_STATE(219)] = 4692,
  [SMALL_STATE(220)] = 4706,
  [SMALL_STATE(221)] = 4720,
  [SMALL_STATE(222)] = 4734,
  [SMALL_STATE(223)] = 4750,
  [SMALL_STATE(224)] = 4764,
  [SMALL_STATE(225)] = 4778,
  [SMALL_STATE(226)] = 4792,
  [SMALL_STATE(227)] = 4806,
  [SMALL_STATE(228)] = 4829,
  [SMALL_STATE(229)] = 4851,
  [SMALL_STATE(230)] = 4865,
  [SMALL_STATE(231)] = 4891,
  [SMALL_STATE(232)] = 4905,
  [SMALL_STATE(233)] = 4926,
  [SMALL_STATE(234)] = 4948,
  [SMALL_STATE(235)] = 4965,
  [SMALL_STATE(236)] = 4982,
  [SMALL_STATE(237)] = 4999,
  [SMALL_STATE(238)] = 5016,
  [SMALL_STATE(239)] = 5033,
  [SMALL_STATE(240)] = 5050,
  [SMALL_STATE(241)] = 5066,
  [SMALL_STATE(242)] = 5082,
  [SMALL_STATE(243)] = 5092,
  [SMALL_STATE(244)] = 5104,
  [SMALL_STATE(245)] = 5114,
  [SMALL_STATE(246)] = 5124,
  [SMALL_STATE(247)] = 5134,
  [SMALL_STATE(248)] = 5144,
  [SMALL_STATE(249)] = 5160,
  [SMALL_STATE(250)] = 5176,
  [SMALL_STATE(251)] = 5186,
  [SMALL_STATE(252)] = 5196,
  [SMALL_STATE(253)] = 5210,
  [SMALL_STATE(254)] = 5226,
  [SMALL_STATE(255)] = 5236,
  [SMALL_STATE(256)] = 5246,
  [SMALL_STATE(257)] = 5256,
  [SMALL_STATE(258)] = 5270,
  [SMALL_STATE(259)] = 5280,
  [SMALL_STATE(260)] = 5290,
  [SMALL_STATE(261)] = 5304,
  [SMALL_STATE(262)] = 5318,
  [SMALL_STATE(263)] = 5332,
  [SMALL_STATE(264)] = 5346,
  [SMALL_STATE(265)] = 5359,
  [SMALL_STATE(266)] = 5372,
  [SMALL_STATE(267)] = 5385,
  [SMALL_STATE(268)] = 5394,
  [SMALL_STATE(269)] = 5405,
  [SMALL_STATE(270)] = 5416,
  [SMALL_STATE(271)] = 5422,
  [SMALL_STATE(272)] = 5432,
  [SMALL_STATE(273)] = 5438,
  [SMALL_STATE(274)] = 5448,
  [SMALL_STATE(275)] = 5458,
  [SMALL_STATE(276)] = 5468,
  [SMALL_STATE(277)] = 5478,
  [SMALL_STATE(278)] = 5488,
  [SMALL_STATE(279)] = 5498,
  [SMALL_STATE(280)] = 5508,
  [SMALL_STATE(281)] = 5518,
  [SMALL_STATE(282)] = 5528,
  [SMALL_STATE(283)] = 5538,
  [SMALL_STATE(284)] = 5548,
  [SMALL_STATE(285)] = 5558,
  [SMALL_STATE(286)] = 5568,
  [SMALL_STATE(287)] = 5578,
  [SMALL_STATE(288)] = 5588,
  [SMALL_STATE(289)] = 5598,
  [SMALL_STATE(290)] = 5608,
  [SMALL_STATE(291)] = 5618,
  [SMALL_STATE(292)] = 5628,
  [SMALL_STATE(293)] = 5638,
  [SMALL_STATE(294)] = 5648,
  [SMALL_STATE(295)] = 5658,
  [SMALL_STATE(296)] = 5668,
  [SMALL_STATE(297)] = 5678,
  [SMALL_STATE(298)] = 5688,
  [SMALL_STATE(299)] = 5698,
  [SMALL_STATE(300)] = 5708,
  [SMALL_STATE(301)] = 5718,
  [SMALL_STATE(302)] = 5726,
  [SMALL_STATE(303)] = 5736,
  [SMALL_STATE(304)] = 5746,
  [SMALL_STATE(305)] = 5756,
  [SMALL_STATE(306)] = 5766,
  [SMALL_STATE(307)] = 5776,
  [SMALL_STATE(308)] = 5786,
  [SMALL_STATE(309)] = 5796,
  [SMALL_STATE(310)] = 5806,
  [SMALL_STATE(311)] = 5816,
  [SMALL_STATE(312)] = 5826,
  [SMALL_STATE(313)] = 5836,
  [SMALL_STATE(314)] = 5846,
  [SMALL_STATE(315)] = 5856,
  [SMALL_STATE(316)] = 5866,
  [SMALL_STATE(317)] = 5873,
  [SMALL_STATE(318)] = 5880,
  [SMALL_STATE(319)] = 5887,
  [SMALL_STATE(320)] = 5894,
  [SMALL_STATE(321)] = 5899,
  [SMALL_STATE(322)] = 5906,
  [SMALL_STATE(323)] = 5913,
  [SMALL_STATE(324)] = 5920,
  [SMALL_STATE(325)] = 5927,
  [SMALL_STATE(326)] = 5934,
  [SMALL_STATE(327)] = 5941,
  [SMALL_STATE(328)] = 5948,
  [SMALL_STATE(329)] = 5955,
  [SMALL_STATE(330)] = 5962,
  [SMALL_STATE(331)] = 5969,
  [SMALL_STATE(332)] = 5976,
  [SMALL_STATE(333)] = 5983,
  [SMALL_STATE(334)] = 5990,
  [SMALL_STATE(335)] = 5997,
  [SMALL_STATE(336)] = 6004,
  [SMALL_STATE(337)] = 6011,
  [SMALL_STATE(338)] = 6016,
  [SMALL_STATE(339)] = 6023,
  [SMALL_STATE(340)] = 6030,
  [SMALL_STATE(341)] = 6037,
  [SMALL_STATE(342)] = 6044,
  [SMALL_STATE(343)] = 6051,
  [SMALL_STATE(344)] = 6058,
  [SMALL_STATE(345)] = 6065,
  [SMALL_STATE(346)] = 6070,
  [SMALL_STATE(347)] = 6077,
  [SMALL_STATE(348)] = 6084,
  [SMALL_STATE(349)] = 6091,
  [SMALL_STATE(350)] = 6098,
  [SMALL_STATE(351)] = 6105,
  [SMALL_STATE(352)] = 6112,
  [SMALL_STATE(353)] = 6119,
  [SMALL_STATE(354)] = 6126,
  [SMALL_STATE(355)] = 6133,
  [SMALL_STATE(356)] = 6140,
  [SMALL_STATE(357)] = 6147,
  [SMALL_STATE(358)] = 6154,
  [SMALL_STATE(359)] = 6161,
  [SMALL_STATE(360)] = 6165,
  [SMALL_STATE(361)] = 6169,
  [SMALL_STATE(362)] = 6173,
  [SMALL_STATE(363)] = 6177,
  [SMALL_STATE(364)] = 6181,
  [SMALL_STATE(365)] = 6185,
  [SMALL_STATE(366)] = 6189,
  [SMALL_STATE(367)] = 6193,
  [SMALL_STATE(368)] = 6197,
  [SMALL_STATE(369)] = 6201,
  [SMALL_STATE(370)] = 6205,
  [SMALL_STATE(371)] = 6209,
  [SMALL_STATE(372)] = 6213,
  [SMALL_STATE(373)] = 6217,
  [SMALL_STATE(374)] = 6221,
  [SMALL_STATE(375)] = 6225,
  [SMALL_STATE(376)] = 6229,
  [SMALL_STATE(377)] = 6233,
  [SMALL_STATE(378)] = 6237,
  [SMALL_STATE(379)] = 6241,
  [SMALL_STATE(380)] = 6245,
  [SMALL_STATE(381)] = 6249,
  [SMALL_STATE(382)] = 6253,
  [SMALL_STATE(383)] = 6257,
  [SMALL_STATE(384)] = 6261,
  [SMALL_STATE(385)] = 6265,
  [SMALL_STATE(386)] = 6269,
  [SMALL_STATE(387)] = 6273,
  [SMALL_STATE(388)] = 6277,
  [SMALL_STATE(389)] = 6281,
  [SMALL_STATE(390)] = 6285,
  [SMALL_STATE(391)] = 6289,
  [SMALL_STATE(392)] = 6293,
  [SMALL_STATE(393)] = 6297,
  [SMALL_STATE(394)] = 6301,
  [SMALL_STATE(395)] = 6305,
  [SMALL_STATE(396)] = 6309,
  [SMALL_STATE(397)] = 6313,
  [SMALL_STATE(398)] = 6317,
  [SMALL_STATE(399)] = 6321,
  [SMALL_STATE(400)] = 6325,
  [SMALL_STATE(401)] = 6329,
  [SMALL_STATE(402)] = 6333,
  [SMALL_STATE(403)] = 6337,
  [SMALL_STATE(404)] = 6341,
  [SMALL_STATE(405)] = 6345,
  [SMALL_STATE(406)] = 6349,
  [SMALL_STATE(407)] = 6353,
  [SMALL_STATE(408)] = 6357,
  [SMALL_STATE(409)] = 6361,
  [SMALL_STATE(410)] = 6365,
  [SMALL_STATE(411)] = 6369,
  [SMALL_STATE(412)] = 6373,
  [SMALL_STATE(413)] = 6377,
  [SMALL_STATE(414)] = 6381,
  [SMALL_STATE(415)] = 6385,
  [SMALL_STATE(416)] = 6389,
  [SMALL_STATE(417)] = 6393,
  [SMALL_STATE(418)] = 6397,
  [SMALL_STATE(419)] = 6401,
  [SMALL_STATE(420)] = 6405,
  [SMALL_STATE(421)] = 6409,
  [SMALL_STATE(422)] = 6413,
  [SMALL_STATE(423)] = 6417,
  [SMALL_STATE(424)] = 6421,
  [SMALL_STATE(425)] = 6425,
  [SMALL_STATE(426)] = 6429,
  [SMALL_STATE(427)] = 6433,
  [SMALL_STATE(428)] = 6437,
  [SMALL_STATE(429)] = 6441,
  [SMALL_STATE(430)] = 6445,
  [SMALL_STATE(431)] = 6449,
  [SMALL_STATE(432)] = 6453,
  [SMALL_STATE(433)] = 6457,
  [SMALL_STATE(434)] = 6461,
  [SMALL_STATE(435)] = 6465,
  [SMALL_STATE(436)] = 6469,
  [SMALL_STATE(437)] = 6473,
  [SMALL_STATE(438)] = 6477,
  [SMALL_STATE(439)] = 6481,
  [SMALL_STATE(440)] = 6485,
  [SMALL_STATE(441)] = 6489,
  [SMALL_STATE(442)] = 6493,
  [SMALL_STATE(443)] = 6497,
  [SMALL_STATE(444)] = 6501,
  [SMALL_STATE(445)] = 6505,
  [SMALL_STATE(446)] = 6509,
  [SMALL_STATE(447)] = 6513,
  [SMALL_STATE(448)] = 6517,
  [SMALL_STATE(449)] = 6521,
  [SMALL_STATE(450)] = 6525,
  [SMALL_STATE(451)] = 6529,
  [SMALL_STATE(452)] = 6533,
  [SMALL_STATE(453)] = 6537,
  [SMALL_STATE(454)] = 6541,
  [SMALL_STATE(455)] = 6545,
  [SMALL_STATE(456)] = 6549,
  [SMALL_STATE(457)] = 6553,
  [SMALL_STATE(458)] = 6557,
  [SMALL_STATE(459)] = 6561,
  [SMALL_STATE(460)] = 6565,
  [SMALL_STATE(461)] = 6569,
  [SMALL_STATE(462)] = 6573,
  [SMALL_STATE(463)] = 6577,
  [SMALL_STATE(464)] = 6581,
  [SMALL_STATE(465)] = 6585,
  [SMALL_STATE(466)] = 6589,
  [SMALL_STATE(467)] = 6593,
  [SMALL_STATE(468)] = 6597,
  [SMALL_STATE(469)] = 6601,
  [SMALL_STATE(470)] = 6605,
  [SMALL_STATE(471)] = 6609,
  [SMALL_STATE(472)] = 6613,
  [SMALL_STATE(473)] = 6617,
  [SMALL_STATE(474)] = 6621,
  [SMALL_STATE(475)] = 6625,
  [SMALL_STATE(476)] = 6629,
  [SMALL_STATE(477)] = 6633,
  [SMALL_STATE(478)] = 6637,
  [SMALL_STATE(479)] = 6641,
  [SMALL_STATE(480)] = 6645,
  [SMALL_STATE(481)] = 6649,
  [SMALL_STATE(482)] = 6653,
  [SMALL_STATE(483)] = 6657,
  [SMALL_STATE(484)] = 6661,
  [SMALL_STATE(485)] = 6665,
  [SMALL_STATE(486)] = 6669,
  [SMALL_STATE(487)] = 6673,
  [SMALL_STATE(488)] = 6677,
  [SMALL_STATE(489)] = 6681,
  [SMALL_STATE(490)] = 6685,
  [SMALL_STATE(491)] = 6689,
  [SMALL_STATE(492)] = 6693,
  [SMALL_STATE(493)] = 6697,
  [SMALL_STATE(494)] = 6701,
  [SMALL_STATE(495)] = 6705,
  [SMALL_STATE(496)] = 6709,
  [SMALL_STATE(497)] = 6713,
  [SMALL_STATE(498)] = 6717,
  [SMALL_STATE(499)] = 6721,
  [SMALL_STATE(500)] = 6725,
  [SMALL_STATE(501)] = 6729,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 10),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polar, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_polar, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_radius, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_radius, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(37),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(44),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(62),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(7),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(45),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(275),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(324),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(269),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(268),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(270),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 11),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 17),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 6),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 6),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 5),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 22),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 14),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 12),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 6, .production_id = 15),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 28),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 5, .production_id = 15),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 4, .production_id = 17),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 9),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_xy_attr, 4, .production_id = 22),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_xy_attr, 4, .production_id = 21),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_xy_attr, 4, .production_id = 20),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_xy_attr, 4, .production_id = 19),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_xy_attr, 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 13),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 12),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 21),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 13),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 22),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 21),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_dxy_attr, 3, .production_id = 18),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_output, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 17),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_parameter, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 9),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 17),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 11),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 16),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_light, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_widget, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 2, .production_id = 9),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 14),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 11),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 17),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1071] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_command(void) {
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
