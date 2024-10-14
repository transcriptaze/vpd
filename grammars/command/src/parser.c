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
#define STATE_COUNT 503
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
  [54] = 52,
  [55] = 52,
  [56] = 56,
  [57] = 31,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 14,
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
  [79] = 23,
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
  [91] = 33,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 20,
  [100] = 30,
  [101] = 31,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 32,
  [108] = 23,
  [109] = 109,
  [110] = 33,
  [111] = 29,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 19,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 93,
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
  [231] = 21,
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
  [243] = 14,
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
  [272] = 19,
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
  [301] = 21,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 84,
  [306] = 306,
  [307] = 307,
  [308] = 306,
  [309] = 309,
  [310] = 310,
  [311] = 306,
  [312] = 14,
  [313] = 306,
  [314] = 310,
  [315] = 310,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 21,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 323,
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
  [336] = 336,
  [337] = 323,
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
  [356] = 323,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 33,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 122,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 32,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 103,
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
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 30,
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
  [420] = 20,
  [421] = 421,
  [422] = 422,
  [423] = 30,
  [424] = 31,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 103,
  [429] = 32,
  [430] = 23,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 29,
  [435] = 19,
  [436] = 119,
  [437] = 122,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 119,
  [442] = 442,
  [443] = 20,
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
  [460] = 460,
  [461] = 29,
  [462] = 415,
  [463] = 452,
  [464] = 362,
  [465] = 465,
  [466] = 466,
  [467] = 384,
  [468] = 382,
  [469] = 373,
  [470] = 470,
  [471] = 439,
  [472] = 472,
  [473] = 452,
  [474] = 362,
  [475] = 475,
  [476] = 476,
  [477] = 373,
  [478] = 478,
  [479] = 439,
  [480] = 480,
  [481] = 362,
  [482] = 482,
  [483] = 373,
  [484] = 484,
  [485] = 446,
  [486] = 445,
  [487] = 442,
  [488] = 409,
  [489] = 371,
  [490] = 399,
  [491] = 491,
  [492] = 492,
  [493] = 446,
  [494] = 445,
  [495] = 442,
  [496] = 399,
  [497] = 497,
  [498] = 446,
  [499] = 445,
  [500] = 399,
  [501] = 410,
  [502] = 410,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(405);
      if (lookahead == '"') ADVANCE(650);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(655);
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == ')') ADVANCE(419);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '0') ADVANCE(454);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '@') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'g') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'v') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(183);
      if (lookahead == 'x') ADVANCE(426);
      if (lookahead == 'y') ADVANCE(427);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(407);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(416);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(410);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(413);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(408);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(411);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(414);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == 's') ADVANCE(677);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(650);
      if (lookahead == '\'') ADVANCE(655);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(708);
      if (lookahead != 0) ADVANCE(709);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(652);
      if (lookahead == '\'') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(648);
      if (lookahead != 0) ADVANCE(649);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(577);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == ')') ADVANCE(419);
      if (lookahead == '@') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == '@') ADVANCE(462);
      if (lookahead == 'b') ADVANCE(540);
      if (lookahead == 'm') ADVANCE(523);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == '@') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == '@') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(576);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(419);
      if (lookahead == '@') ADVANCE(462);
      if (lookahead == 'b') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'w') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(419);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == 'p') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == 'w') ADVANCE(526);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(419);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == 'p') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == 'w') ADVANCE(526);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(688);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(688);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'U') ADVANCE(700);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '5') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'H') ADVANCE(702);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 176) ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(707);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(707);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(711);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '8') ADVANCE(55);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == 'p') ADVANCE(498);
      if (lookahead == 'w') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(40);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'U') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == '5') ADVANCE(52);
      if (lookahead == 'H') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == '5') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == '5') ADVANCE(237);
      END_STATE();
    case 47:
      if (lookahead == '5') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 48:
      if (lookahead == '5') ADVANCE(237);
      if (lookahead == 't') ADVANCE(680);
      END_STATE();
    case 49:
      if (lookahead == ';') ADVANCE(406);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(672);
      END_STATE();
    case 51:
      if (lookahead == '@') ADVANCE(462);
      if (lookahead == 'b') ADVANCE(540);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'm') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 52:
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'H') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 'H') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == 'H') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(438);
      if (lookahead == 'y') ADVANCE(439);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(540);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 'h') ADVANCE(539);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'm') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead == 'v') ADVANCE(511);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(661);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(665);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(691);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(359);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(438);
      if (lookahead == 'y') ADVANCE(439);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(315);
      END_STATE();
    case 155:
      if (lookahead == 'f') ADVANCE(328);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(698);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(714);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(179);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 170:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(671);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(417);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(425);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(686);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 178:
      if (lookahead == 'h') ADVANCE(328);
      END_STATE();
    case 179:
      if (lookahead == 'h') ADVANCE(334);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 202:
      if (lookahead == 'j') ADVANCE(120);
      END_STATE();
    case 203:
      if (lookahead == 'k') ADVANCE(699);
      END_STATE();
    case 204:
      if (lookahead == 'k') ADVANCE(162);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(646);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(703);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(705);
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
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(139);
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
      if (lookahead == 'm') ADVANCE(453);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(688);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(707);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(701);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(700);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(480);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(690);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(463);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(710);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(711);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(568);
      END_STATE();
    case 233:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 238:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 239:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(660);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(126);
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
      if (lookahead == 'o') ADVANCE(71);
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
      if (lookahead == 'p') ADVANCE(485);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(679);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(678);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(690);
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
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 310:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(680);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(664);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(689);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(69);
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
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(134);
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
      if (lookahead == 'v') ADVANCE(116);
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
      if (lookahead == 'z') ADVANCE(117);
      END_STATE();
    case 366:
      if (lookahead == 'z') ADVANCE(273);
      END_STATE();
    case 367:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(688);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(688);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(707);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(707);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(711);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(372)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 373:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 383:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 384:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(695);
      END_STATE();
    case 385:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      END_STATE();
    case 386:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 387:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 394:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 395:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 396:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(394);
      END_STATE();
    case 397:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 398:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 399:
      if (eof) ADVANCE(405);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ')') ADVANCE(419);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(591);
      if (lookahead == 'm') ADVANCE(607);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == 'r') ADVANCE(608);
      if (lookahead == 's') ADVANCE(581);
      if (lookahead == 't') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(615);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 400:
      if (eof) ADVANCE(405);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == 's') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(615);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 401:
      if (eof) ADVANCE(405);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == ')') ADVANCE(419);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'w') ADVANCE(194);
      if (lookahead == 'x') ADVANCE(426);
      if (lookahead == 'y') ADVANCE(427);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(401)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 402:
      if (eof) ADVANCE(405);
      if (lookahead == ')') ADVANCE(419);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '@') ADVANCE(462);
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'w') ADVANCE(185);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(402)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 403:
      if (eof) ADVANCE(405);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(255);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(403)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 404:
      if (eof) ADVANCE(405);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(255);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(404)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__new_parameter_token1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_module2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_dx);
      if (lookahead == 'y') ADVANCE(440);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_dy);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_dxy);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_input2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_input2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_output2);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_output2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_light2);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_light2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_widget2);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_widget2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'H') ADVANCE(453);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'H') ADVANCE(453);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(460);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(453);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(453);
      if (lookahead == 'm') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(453);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(453);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(453);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(453);
      if (lookahead == 'm') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(463);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(467);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(463);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == 'H') ADVANCE(480);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(484);
      if (lookahead == 'H') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(480);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'b') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == 'r') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == 'H') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(571);
      if (lookahead == 'H') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 176) ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == 'r') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(652);
      if (lookahead == '\'') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(649);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(709);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(649);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(709);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(649);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(659);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_decoration2);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(237);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(651);
      if (lookahead == '\'') ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(709);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(709);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == '5') ADVANCE(237);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 399},
  [3] = {.lex_state = 399},
  [4] = {.lex_state = 399},
  [5] = {.lex_state = 399},
  [6] = {.lex_state = 401},
  [7] = {.lex_state = 401},
  [8] = {.lex_state = 401},
  [9] = {.lex_state = 401},
  [10] = {.lex_state = 401},
  [11] = {.lex_state = 401},
  [12] = {.lex_state = 401},
  [13] = {.lex_state = 401},
  [14] = {.lex_state = 399},
  [15] = {.lex_state = 401},
  [16] = {.lex_state = 401},
  [17] = {.lex_state = 401},
  [18] = {.lex_state = 401},
  [19] = {.lex_state = 399},
  [20] = {.lex_state = 399},
  [21] = {.lex_state = 401},
  [22] = {.lex_state = 399},
  [23] = {.lex_state = 399},
  [24] = {.lex_state = 399},
  [25] = {.lex_state = 399},
  [26] = {.lex_state = 399},
  [27] = {.lex_state = 399},
  [28] = {.lex_state = 399},
  [29] = {.lex_state = 399},
  [30] = {.lex_state = 399},
  [31] = {.lex_state = 399},
  [32] = {.lex_state = 399},
  [33] = {.lex_state = 399},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 401},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 402},
  [43] = {.lex_state = 401},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 82},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 51},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 82},
  [57] = {.lex_state = 402},
  [58] = {.lex_state = 402},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 401},
  [62] = {.lex_state = 400},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 401},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 400},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 401},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 403},
  [85] = {.lex_state = 404},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 402},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 402},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 401},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 400},
  [100] = {.lex_state = 400},
  [101] = {.lex_state = 400},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 400},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 400},
  [108] = {.lex_state = 400},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 400},
  [111] = {.lex_state = 400},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 401},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 400},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 400},
  [120] = {.lex_state = 402},
  [121] = {.lex_state = 404},
  [122] = {.lex_state = 400},
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
  [137] = {.lex_state = 401},
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
  [158] = {.lex_state = 51},
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
  [222] = {.lex_state = 82},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 401},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 20},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 22},
  [233] = {.lex_state = 42},
  [234] = {.lex_state = 16},
  [235] = {.lex_state = 399},
  [236] = {.lex_state = 399},
  [237] = {.lex_state = 399},
  [238] = {.lex_state = 399},
  [239] = {.lex_state = 399},
  [240] = {.lex_state = 13},
  [241] = {.lex_state = 401},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 22},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 401},
  [246] = {.lex_state = 18},
  [247] = {.lex_state = 18},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 402},
  [250] = {.lex_state = 401},
  [251] = {.lex_state = 401},
  [252] = {.lex_state = 399},
  [253] = {.lex_state = 401},
  [254] = {.lex_state = 18},
  [255] = {.lex_state = 401},
  [256] = {.lex_state = 18},
  [257] = {.lex_state = 399},
  [258] = {.lex_state = 18},
  [259] = {.lex_state = 18},
  [260] = {.lex_state = 399},
  [261] = {.lex_state = 399},
  [262] = {.lex_state = 399},
  [263] = {.lex_state = 399},
  [264] = {.lex_state = 82},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 401},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 402},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 402},
  [273] = {.lex_state = 399},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 399},
  [277] = {.lex_state = 399},
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
  [296] = {.lex_state = 399},
  [297] = {.lex_state = 23},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 21},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 12},
  [303] = {.lex_state = 23},
  [304] = {.lex_state = 14},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 400},
  [307] = {.lex_state = 399},
  [308] = {.lex_state = 400},
  [309] = {.lex_state = 23},
  [310] = {.lex_state = 399},
  [311] = {.lex_state = 400},
  [312] = {.lex_state = 14},
  [313] = {.lex_state = 400},
  [314] = {.lex_state = 399},
  [315] = {.lex_state = 399},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 23},
  [318] = {.lex_state = 23},
  [319] = {.lex_state = 399},
  [320] = {.lex_state = 23},
  [321] = {.lex_state = 14},
  [322] = {.lex_state = 372},
  [323] = {.lex_state = 400},
  [324] = {.lex_state = 400},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 14},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 14},
  [329] = {.lex_state = 14},
  [330] = {.lex_state = 23},
  [331] = {.lex_state = 14},
  [332] = {.lex_state = 14},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 23},
  [335] = {.lex_state = 14},
  [336] = {.lex_state = 14},
  [337] = {.lex_state = 400},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 372},
  [340] = {.lex_state = 23},
  [341] = {.lex_state = 372},
  [342] = {.lex_state = 403},
  [343] = {.lex_state = 14},
  [344] = {.lex_state = 401},
  [345] = {.lex_state = 14},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 402},
  [348] = {.lex_state = 402},
  [349] = {.lex_state = 14},
  [350] = {.lex_state = 399},
  [351] = {.lex_state = 14},
  [352] = {.lex_state = 14},
  [353] = {.lex_state = 14},
  [354] = {.lex_state = 14},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 400},
  [357] = {.lex_state = 14},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 42},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 14},
  [362] = {.lex_state = 20},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 658},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 400},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 42},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 13},
  [389] = {.lex_state = 399},
  [390] = {.lex_state = 16},
  [391] = {.lex_state = 401},
  [392] = {.lex_state = 399},
  [393] = {.lex_state = 653},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 658},
  [397] = {.lex_state = 14},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 399},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 653},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 21},
  [416] = {.lex_state = 14},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 14},
  [419] = {.lex_state = 399},
  [420] = {.lex_state = 14},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 14},
  [424] = {.lex_state = 14},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 14},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 14},
  [429] = {.lex_state = 14},
  [430] = {.lex_state = 14},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 14},
  [435] = {.lex_state = 14},
  [436] = {.lex_state = 14},
  [437] = {.lex_state = 14},
  [438] = {.lex_state = 14},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 14},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 403},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 399},
  [460] = {.lex_state = 14},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 21},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 20},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 400},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 20},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 400},
  [478] = {.lex_state = 13},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 13},
  [481] = {.lex_state = 20},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 400},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 653},
  [489] = {.lex_state = 658},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 401},
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
  [502] = {.lex_state = 0},
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
    [sym_command] = STATE(458),
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
    STATE(9), 1,
      sym_font,
    STATE(59), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(193), 1,
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
    STATE(7), 1,
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
    STATE(66), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
    STATE(140), 1,
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
    STATE(67), 1,
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
    STATE(73), 1,
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
  [267] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(69), 1,
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
    ACTIONS(67), 11,
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
  [314] = 16,
    ACTIONS(71), 1,
      anon_sym_module2,
    ACTIONS(73), 1,
      anon_sym_input2,
    ACTIONS(75), 1,
      anon_sym_output2,
    ACTIONS(77), 1,
      anon_sym_parameter,
    ACTIONS(79), 1,
      anon_sym_light2,
    ACTIONS(81), 1,
      anon_sym_widget2,
    ACTIONS(83), 1,
      anon_sym_guide,
    ACTIONS(85), 1,
      anon_sym_label,
    ACTIONS(87), 1,
      anon_sym_decoration2,
    ACTIONS(89), 1,
      anon_sym_origin,
    ACTIONS(91), 1,
      anon_sym_background,
    STATE(53), 1,
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
  [373] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(95), 1,
      sym_fontsize,
    STATE(60), 1,
      sym__align,
    STATE(75), 1,
      sym_valign,
    STATE(76), 1,
      sym_halign,
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
  [420] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(57), 1,
      sym_fontsize,
    STATE(67), 1,
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
  [467] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(73), 1,
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
  [511] = 9,
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
  [555] = 9,
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
    ACTIONS(97), 11,
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
  [599] = 4,
    ACTIONS(103), 1,
      aux_sym_offset_token1,
    STATE(19), 1,
      sym_offset,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(101), 17,
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
  [633] = 9,
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
    ACTIONS(47), 11,
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
  [677] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(67), 1,
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
  [721] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(59), 1,
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
  [765] = 9,
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
    ACTIONS(67), 11,
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
    ACTIONS(115), 4,
      anon_sym_x,
      anon_sym_dx,
      sym_width,
      sym_angle,
    ACTIONS(113), 19,
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
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(155), 17,
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
      anon_sym_x,
    ACTIONS(169), 21,
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
  [1283] = 2,
    ACTIONS(175), 1,
      sym_rgb,
    ACTIONS(173), 21,
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
    STATE(225), 1,
      sym__xy_attr,
    STATE(447), 1,
      sym__relative_attr,
    STATE(448), 1,
      sym__geometry_x_attr,
    STATE(451), 1,
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
    STATE(447), 1,
      sym__relative_attr,
    STATE(448), 1,
      sym__geometry_x_attr,
    STATE(451), 1,
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
    STATE(217), 1,
      sym__xy_attr,
    STATE(447), 1,
      sym__relative_attr,
    STATE(448), 1,
      sym__geometry_x_attr,
    STATE(451), 1,
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
  [1528] = 10,
    ACTIONS(225), 1,
      anon_sym_module,
    ACTIONS(227), 1,
      anon_sym_input,
    ACTIONS(229), 1,
      anon_sym_output,
    ACTIONS(231), 1,
      aux_sym__new_parameter_token1,
    ACTIONS(233), 1,
      anon_sym_light,
    ACTIONS(235), 1,
      anon_sym_widget,
    ACTIONS(237), 1,
      anon_sym_decoration,
    ACTIONS(239), 1,
      anon_sym_guide,
    ACTIONS(241), 1,
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
  [1567] = 10,
    ACTIONS(73), 1,
      anon_sym_input2,
    ACTIONS(75), 1,
      anon_sym_output2,
    ACTIONS(77), 1,
      anon_sym_parameter,
    ACTIONS(79), 1,
      anon_sym_light2,
    ACTIONS(81), 1,
      anon_sym_widget2,
    ACTIONS(85), 1,
      anon_sym_label,
    ACTIONS(87), 1,
      anon_sym_decoration2,
    ACTIONS(243), 1,
      anon_sym_font,
    ACTIONS(245), 1,
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
  [1606] = 2,
    ACTIONS(249), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(247), 16,
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
  [1629] = 2,
    ACTIONS(253), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(251), 16,
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
  [1652] = 8,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(259), 1,
      anon_sym_vertical,
    ACTIONS(261), 1,
      anon_sym_horizontal,
    ACTIONS(263), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
    STATE(350), 1,
      sym_identifier,
    STATE(168), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(255), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1686] = 2,
    ACTIONS(267), 1,
      anon_sym_x,
    ACTIONS(265), 16,
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
  [1708] = 2,
    ACTIONS(271), 1,
      anon_sym_x,
    ACTIONS(269), 16,
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
  [1730] = 2,
    ACTIONS(275), 1,
      anon_sym_x,
    ACTIONS(273), 16,
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
  [1752] = 2,
    ACTIONS(279), 1,
      anon_sym_x,
    ACTIONS(277), 16,
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
  [1796] = 8,
    ACTIONS(285), 1,
      anon_sym_input2,
    ACTIONS(287), 1,
      anon_sym_output2,
    ACTIONS(289), 1,
      anon_sym_parameter,
    ACTIONS(291), 1,
      anon_sym_light2,
    ACTIONS(293), 1,
      anon_sym_widget2,
    STATE(410), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(452), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1829] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(297), 1,
      anon_sym_id,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(303), 3,
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
  [1860] = 8,
    ACTIONS(285), 1,
      anon_sym_input2,
    ACTIONS(287), 1,
      anon_sym_output2,
    ACTIONS(289), 1,
      anon_sym_parameter,
    ACTIONS(291), 1,
      anon_sym_light2,
    ACTIONS(293), 1,
      anon_sym_widget2,
    STATE(501), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(463), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1893] = 8,
    ACTIONS(285), 1,
      anon_sym_input2,
    ACTIONS(287), 1,
      anon_sym_output2,
    ACTIONS(289), 1,
      anon_sym_parameter,
    ACTIONS(291), 1,
      anon_sym_light2,
    ACTIONS(293), 1,
      anon_sym_widget2,
    STATE(502), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(473), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1926] = 6,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(259), 1,
      anon_sym_vertical,
    ACTIONS(261), 1,
      anon_sym_horizontal,
    STATE(46), 1,
      sym_identifier,
    STATE(226), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(255), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1954] = 1,
    ACTIONS(153), 15,
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
  [1972] = 1,
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
  [1989] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(148), 1,
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
  [2012] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(140), 1,
      sym_colour,
    ACTIONS(47), 11,
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
  [2035] = 3,
    ACTIONS(263), 1,
      aux_sym_offset_token1,
    STATE(104), 1,
      sym_offset,
    ACTIONS(307), 12,
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
  [2056] = 4,
    ACTIONS(309), 1,
      aux_sym_offset_token1,
    STATE(117), 1,
      sym_offset,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(101), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2079] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(133), 1,
      sym_colour,
    ACTIONS(311), 11,
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
  [2102] = 8,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_AT,
    ACTIONS(317), 1,
      aux_sym_relative_token1,
    ACTIONS(319), 1,
      sym_angle,
    STATE(99), 1,
      sym_polar,
    STATE(495), 1,
      sym_x,
    STATE(80), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2133] = 4,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym__scale,
    STATE(224), 1,
      sym_stretch,
    ACTIONS(321), 11,
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
  [2156] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(136), 1,
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
  [2179] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(135), 1,
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
  [2202] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(193), 1,
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
  [2225] = 3,
    ACTIONS(263), 1,
      aux_sym_offset_token1,
    STATE(102), 1,
      sym_offset,
    ACTIONS(325), 12,
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
  [2246] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(211), 1,
      sym_colour,
    ACTIONS(67), 11,
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
  [2269] = 8,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      aux_sym_relative_token1,
    STATE(442), 1,
      sym_x,
    STATE(443), 1,
      sym_polar,
    STATE(444), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2300] = 8,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_AT,
    ACTIONS(337), 1,
      aux_sym_relative_token1,
    ACTIONS(339), 1,
      sym_angle,
    STATE(420), 1,
      sym_polar,
    STATE(487), 1,
      sym_x,
    STATE(271), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2331] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(134), 1,
      sym_colour,
    ACTIONS(97), 11,
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
  [2354] = 8,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(345), 1,
      aux_sym_relative_token1,
    ACTIONS(347), 1,
      sym_angle,
    STATE(20), 1,
      sym_polar,
    STATE(379), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2385] = 3,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      sym_rgb,
    ACTIONS(349), 12,
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
  [2406] = 3,
    ACTIONS(353), 1,
      sym_rgb,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(349), 12,
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
  [2427] = 2,
    ACTIONS(359), 1,
      sym_rgb,
    ACTIONS(357), 13,
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
  [2446] = 2,
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
  [2465] = 1,
    ACTIONS(121), 13,
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
  [2481] = 4,
    ACTIONS(369), 1,
      aux_sym__input_id_token1,
    STATE(145), 1,
      sym_part,
    ACTIONS(365), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(367), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2503] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
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
  [2531] = 3,
    ACTIONS(263), 1,
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
  [2551] = 3,
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
  [2571] = 2,
    ACTIONS(381), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(379), 12,
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
  [2589] = 2,
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
  [2607] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
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
  [2635] = 3,
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
  [2655] = 3,
    ACTIONS(223), 1,
      sym_angle,
    STATE(164), 1,
      sym_polar,
    ACTIONS(393), 11,
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
  [2675] = 1,
    ACTIONS(395), 13,
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
  [2691] = 2,
    ACTIONS(399), 1,
      sym_rgb,
    ACTIONS(397), 12,
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
  [2709] = 1,
    ACTIONS(161), 13,
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
  [2725] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
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
  [2753] = 2,
    ACTIONS(403), 1,
      aux_sym__geometry_x_attr_token1,
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
      sym_angle,
  [2771] = 3,
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
  [2791] = 3,
    ACTIONS(263), 1,
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
  [2811] = 2,
    ACTIONS(415), 1,
      anon_sym_timestamp,
    ACTIONS(413), 11,
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
  [2828] = 8,
    ACTIONS(417), 1,
      anon_sym_input2,
    ACTIONS(419), 1,
      anon_sym_output2,
    ACTIONS(421), 1,
      anon_sym_parameter,
    ACTIONS(423), 1,
      anon_sym_light2,
    ACTIONS(425), 1,
      anon_sym_widget2,
    ACTIONS(427), 1,
      anon_sym_label,
    STATE(484), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2857] = 1,
    ACTIONS(429), 12,
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
  [2872] = 2,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(111), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2889] = 2,
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
  [2906] = 2,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(155), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2923] = 1,
    ACTIONS(431), 12,
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
  [2938] = 2,
    ACTIONS(433), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(435), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2955] = 1,
    ACTIONS(437), 12,
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
  [2970] = 2,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(439), 11,
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
  [2987] = 2,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(439), 11,
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
  [3004] = 2,
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
  [3021] = 2,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(123), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3038] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym__y_attr,
    ACTIONS(303), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [3065] = 2,
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
  [3082] = 2,
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
  [3099] = 1,
    ACTIONS(447), 12,
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
  [3114] = 8,
    ACTIONS(449), 1,
      anon_sym_input2,
    ACTIONS(451), 1,
      anon_sym_output2,
    ACTIONS(453), 1,
      anon_sym_parameter,
    ACTIONS(455), 1,
      anon_sym_light2,
    ACTIONS(457), 1,
      anon_sym_widget2,
    ACTIONS(459), 1,
      anon_sym_scale,
    ACTIONS(461), 1,
      anon_sym_stretch,
    STATE(482), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3143] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__y_attr,
    ACTIONS(303), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [3170] = 2,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(463), 11,
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
  [3187] = 2,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(463), 11,
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
  [3204] = 2,
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
  [3221] = 1,
    ACTIONS(469), 12,
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
  [3236] = 2,
    ACTIONS(471), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(473), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3253] = 1,
    ACTIONS(475), 12,
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
  [3268] = 2,
    ACTIONS(477), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(401), 11,
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
  [3285] = 2,
    ACTIONS(479), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(481), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3302] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(483), 11,
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
  [3319] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym__y_attr,
    ACTIONS(303), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [3346] = 1,
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
  [3360] = 1,
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
  [3374] = 1,
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
  [3388] = 1,
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
  [3402] = 1,
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
  [3416] = 1,
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
  [3430] = 1,
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
  [3444] = 1,
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
  [3458] = 1,
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
  [3472] = 1,
    ACTIONS(311), 11,
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
  [3486] = 1,
    ACTIONS(97), 11,
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
  [3500] = 1,
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
  [3514] = 5,
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
  [3536] = 1,
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
  [3550] = 1,
    ACTIONS(463), 11,
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
  [3564] = 1,
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
  [3578] = 1,
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
  [3592] = 10,
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
  [3624] = 1,
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
  [3638] = 1,
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
  [3652] = 1,
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
  [3666] = 1,
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
  [3680] = 1,
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
  [3694] = 1,
    ACTIONS(47), 11,
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
  [3708] = 1,
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
  [3722] = 1,
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
  [3736] = 1,
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
  [3750] = 1,
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
  [3764] = 1,
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
  [3778] = 1,
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
  [3792] = 1,
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
  [3806] = 1,
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
  [3820] = 1,
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
  [3834] = 2,
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
  [3850] = 1,
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
  [3864] = 1,
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
  [3878] = 1,
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
  [3892] = 1,
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
  [3906] = 1,
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
  [3920] = 1,
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
  [3934] = 1,
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
  [3948] = 1,
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
  [3962] = 1,
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
  [3976] = 1,
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
  [3990] = 1,
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
  [4004] = 1,
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
  [4018] = 1,
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
  [4032] = 1,
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
  [4046] = 1,
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
  [4060] = 1,
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
  [4074] = 1,
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
  [4088] = 1,
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
  [4102] = 1,
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
  [4116] = 1,
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
  [4130] = 1,
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
  [4144] = 1,
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
  [4158] = 1,
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
  [4172] = 1,
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
  [4186] = 1,
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
  [4200] = 1,
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
  [4214] = 1,
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
  [4228] = 1,
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
  [4242] = 1,
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
  [4256] = 1,
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
  [4270] = 1,
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
  [4284] = 1,
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
  [4298] = 1,
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
  [4312] = 1,
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
  [4326] = 1,
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
  [4340] = 1,
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
  [4354] = 1,
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
  [4368] = 1,
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
  [4382] = 1,
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
  [4396] = 1,
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
  [4410] = 1,
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
  [4424] = 1,
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
  [4438] = 1,
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
  [4452] = 1,
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
  [4466] = 1,
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
  [4480] = 1,
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
  [4494] = 1,
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
  [4508] = 1,
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
  [4522] = 1,
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
  [4536] = 1,
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
  [4550] = 1,
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
  [4564] = 1,
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
  [4578] = 1,
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
  [4592] = 1,
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
  [4606] = 1,
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
  [4620] = 1,
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
  [4634] = 1,
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
  [4648] = 1,
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
  [4662] = 1,
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
  [4676] = 1,
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
  [4690] = 1,
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
  [4704] = 1,
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
  [4718] = 1,
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
  [4732] = 2,
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
  [4748] = 1,
    ACTIONS(67), 11,
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
  [4762] = 1,
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
  [4776] = 1,
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
  [4790] = 1,
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
  [4804] = 6,
    ACTIONS(73), 1,
      anon_sym_input2,
    ACTIONS(75), 1,
      anon_sym_output2,
    ACTIONS(77), 1,
      anon_sym_parameter,
    ACTIONS(79), 1,
      anon_sym_light2,
    ACTIONS(81), 1,
      anon_sym_widget2,
    STATE(366), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [4827] = 6,
    ACTIONS(263), 1,
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
  [4849] = 2,
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
  [4863] = 8,
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
  [4889] = 2,
    ACTIONS(113), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(115), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4903] = 6,
    ACTIONS(263), 1,
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
  [4924] = 7,
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
    STATE(457), 1,
      sym__guide_attr,
  [4946] = 5,
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
  [4963] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(476), 1,
      sym__offset,
    STATE(465), 2,
      sym_polar,
      sym__relative,
  [4980] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      sym__offset,
    STATE(466), 2,
      sym_polar,
      sym__relative,
  [4997] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      sym__offset,
    STATE(470), 2,
      sym_polar,
      sym__relative,
  [5014] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      sym__offset,
    STATE(472), 2,
      sym_polar,
      sym__relative,
  [5031] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      sym__offset,
    STATE(475), 2,
      sym_polar,
      sym__relative,
  [5048] = 5,
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
  [5064] = 5,
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
  [5080] = 2,
    STATE(314), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5090] = 3,
    ACTIONS(263), 1,
      aux_sym_offset_token1,
    STATE(272), 1,
      sym_offset,
    ACTIONS(99), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [5102] = 2,
    STATE(310), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5112] = 2,
    STATE(90), 1,
      sym_halign,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [5122] = 2,
    STATE(376), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5132] = 2,
    STATE(315), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5142] = 5,
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
  [5158] = 5,
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
  [5174] = 2,
    STATE(217), 1,
      sym_valign,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [5184] = 2,
    STATE(217), 1,
      sym_halign,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [5194] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(476), 1,
      sym__offset,
    STATE(385), 2,
      sym_polar,
      sym__relative,
  [5208] = 5,
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
  [5224] = 2,
    STATE(428), 1,
      sym_y,
    ACTIONS(789), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5234] = 2,
    STATE(90), 1,
      sym_valign,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [5244] = 2,
    STATE(273), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5254] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(476), 1,
      sym__offset,
    STATE(431), 2,
      sym_polar,
      sym__relative,
  [5268] = 2,
    STATE(103), 1,
      sym_y,
    ACTIONS(791), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5278] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(793), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5288] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(476), 1,
      sym__offset,
    STATE(374), 2,
      sym_polar,
      sym__relative,
  [5302] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(476), 1,
      sym__offset,
    STATE(375), 2,
      sym_polar,
      sym__relative,
  [5316] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(476), 1,
      sym__offset,
    STATE(380), 2,
      sym_polar,
      sym__relative,
  [5330] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(476), 1,
      sym__offset,
    STATE(383), 2,
      sym_polar,
      sym__relative,
  [5344] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(795), 1,
      aux_sym__absolute_attr_token1,
    STATE(219), 1,
      sym_polar,
    STATE(455), 1,
      sym__absolute_x_attr,
  [5357] = 4,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      aux_sym__string_token1,
    STATE(217), 1,
      sym__string,
  [5370] = 4,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    ACTIONS(805), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 1,
      aux_sym__string_token1,
    STATE(74), 1,
      sym__string,
  [5383] = 2,
    STATE(88), 1,
      sym__geometry_y_attr,
    ACTIONS(809), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [5392] = 3,
    ACTIONS(811), 1,
      anon_sym_module2,
    ACTIONS(813), 1,
      anon_sym_panel,
    STATE(191), 2,
      sym__module_export,
      sym_panel,
  [5403] = 3,
    ACTIONS(815), 1,
      anon_sym_project,
    ACTIONS(817), 1,
      anon_sym_script,
    STATE(162), 2,
      sym_project,
      sym_script,
  [5414] = 1,
    ACTIONS(819), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [5420] = 3,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(65), 1,
      sym_name,
    STATE(157), 1,
      sym_decoration,
  [5430] = 1,
    ACTIONS(105), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [5436] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      sym_polar,
  [5446] = 3,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(65), 1,
      sym_name,
    STATE(186), 1,
      sym_decoration,
  [5456] = 3,
    ACTIONS(825), 1,
      anon_sym_font,
    ACTIONS(827), 1,
      anon_sym_project,
    ACTIONS(829), 1,
      anon_sym_script,
  [5466] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      sym_polar,
  [5476] = 3,
    ACTIONS(263), 1,
      aux_sym_offset_token1,
    ACTIONS(833), 1,
      aux_sym_origin_token1,
    STATE(132), 1,
      sym_offset,
  [5486] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(309), 1,
      sym_name,
    STATE(433), 1,
      sym__component_x_attr,
  [5496] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(309), 1,
      sym_name,
    STATE(432), 1,
      sym__component_x_attr,
  [5506] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(309), 1,
      sym_name,
    STATE(427), 1,
      sym__component_x_attr,
  [5516] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(309), 1,
      sym_name,
    STATE(425), 1,
      sym__component_x_attr,
  [5526] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(309), 1,
      sym_name,
    STATE(422), 1,
      sym__component_x_attr,
  [5536] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(303), 1,
      sym_name,
    STATE(421), 1,
      sym__component_y_attr,
  [5546] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(303), 1,
      sym_name,
    STATE(417), 1,
      sym__component_y_attr,
  [5556] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(303), 1,
      sym_name,
    STATE(414), 1,
      sym__component_y_attr,
  [5566] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(303), 1,
      sym_name,
    STATE(413), 1,
      sym__component_y_attr,
  [5576] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(303), 1,
      sym_name,
    STATE(412), 1,
      sym__component_y_attr,
  [5586] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
    STATE(411), 1,
      sym__component_xy_attr,
  [5596] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
    STATE(404), 1,
      sym__component_xy_attr,
  [5606] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
    STATE(403), 1,
      sym__component_xy_attr,
  [5616] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
    STATE(402), 1,
      sym__component_xy_attr,
  [5626] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
    STATE(400), 1,
      sym__component_xy_attr,
  [5636] = 3,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(195), 1,
      sym__new_component,
  [5646] = 3,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(197), 1,
      sym__new_component,
  [5656] = 3,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(199), 1,
      sym__new_component,
  [5666] = 3,
    ACTIONS(263), 1,
      aux_sym_offset_token1,
    ACTIONS(841), 1,
      aux_sym_origin_token1,
    STATE(178), 1,
      sym_offset,
  [5676] = 3,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    STATE(225), 1,
      sym__offset_dxy_attr,
    STATE(370), 1,
      sym__offset_attr,
  [5686] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(217), 1,
      sym_colour,
  [5696] = 3,
    ACTIONS(845), 1,
      anon_sym_LPAREN,
    ACTIONS(847), 1,
      aux_sym__guide_id_token1,
    STATE(343), 1,
      sym__component_id,
  [5706] = 3,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(206), 1,
      sym__new_component,
  [5716] = 2,
    ACTIONS(115), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(113), 2,
      anon_sym_RPAREN,
      sym_angle,
  [5724] = 3,
    ACTIONS(849), 1,
      aux_sym__label_id_token1,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    ACTIONS(853), 1,
      anon_sym_SQUOTE,
  [5734] = 3,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      sym__offset_attr,
  [5744] = 3,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(208), 1,
      sym__new_component,
  [5754] = 2,
    ACTIONS(857), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(379), 2,
      anon_sym_RPAREN,
      sym_angle,
  [5762] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(859), 1,
      aux_sym_absolute_token1,
    STATE(398), 1,
      sym_polar,
  [5772] = 3,
    ACTIONS(263), 1,
      aux_sym_offset_token1,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      sym_offset,
  [5782] = 3,
    ACTIONS(339), 1,
      sym_angle,
    ACTIONS(863), 1,
      aux_sym_absolute_token1,
    STATE(423), 1,
      sym_polar,
  [5792] = 3,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      sym__offset_attr,
  [5802] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_polar,
  [5812] = 3,
    ACTIONS(319), 1,
      sym_angle,
    ACTIONS(869), 1,
      aux_sym_absolute_token1,
    STATE(100), 1,
      sym_polar,
  [5822] = 3,
    ACTIONS(99), 1,
      aux_sym__input_id_token1,
    ACTIONS(871), 1,
      aux_sym_offset_token1,
    STATE(435), 1,
      sym_offset,
  [5832] = 3,
    ACTIONS(347), 1,
      sym_angle,
    ACTIONS(873), 1,
      aux_sym_absolute_token1,
    STATE(30), 1,
      sym_polar,
  [5842] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
    STATE(479), 1,
      sym_polar,
  [5852] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      sym_polar,
  [5862] = 3,
    ACTIONS(879), 1,
      anon_sym_name,
    ACTIONS(881), 1,
      anon_sym_height,
    ACTIONS(883), 1,
      anon_sym_width,
  [5872] = 2,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    STATE(210), 1,
      sym__offset_attr,
  [5879] = 2,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    STATE(202), 1,
      sym__relative_attr,
  [5886] = 2,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(364), 1,
      sym__offset,
  [5893] = 1,
    ACTIONS(113), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [5898] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_name,
  [5905] = 2,
    ACTIONS(885), 1,
      aux_sym__guide_attr_token1,
    STATE(200), 1,
      sym_identifier,
  [5912] = 2,
    ACTIONS(887), 1,
      aux_sym_absolute_token1,
    STATE(110), 1,
      sym_radius,
  [5919] = 2,
    ACTIONS(889), 1,
      aux_sym_absolute_token1,
    STATE(361), 1,
      sym_radius,
  [5926] = 2,
    ACTIONS(243), 1,
      anon_sym_font,
    STATE(161), 1,
      sym__font_id,
  [5933] = 2,
    ACTIONS(891), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_part,
  [5940] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(257), 1,
      sym_name,
  [5947] = 2,
    ACTIONS(893), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_font,
  [5954] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(260), 1,
      sym_name,
  [5961] = 2,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    STATE(194), 1,
      sym__offset_attr,
  [5968] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(261), 1,
      sym_name,
  [5975] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(235), 1,
      sym_name,
  [5982] = 2,
    ACTIONS(895), 1,
      sym_rgb,
    ACTIONS(897), 1,
      sym_rgba,
  [5989] = 2,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    STATE(203), 1,
      sym__offset_attr,
  [5996] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(262), 1,
      sym_name,
  [6003] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(263), 1,
      sym_name,
  [6010] = 2,
    ACTIONS(899), 1,
      aux_sym_absolute_token1,
    STATE(33), 1,
      sym_radius,
  [6017] = 1,
    ACTIONS(901), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6022] = 2,
    ACTIONS(903), 1,
      aux_sym__guide_attr_token1,
    STATE(198), 1,
      sym__guide_attr,
  [6029] = 2,
    ACTIONS(843), 1,
      aux_sym__offset_attr_token1,
    STATE(408), 1,
      sym__offset_attr,
  [6036] = 2,
    ACTIONS(905), 1,
      aux_sym__guide_attr_token1,
    STATE(276), 1,
      sym__guide_attr,
  [6043] = 2,
    ACTIONS(907), 1,
      aux_sym__absolute_attr_token1,
    STATE(165), 1,
      sym__absolute_y_attr,
  [6050] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(44), 1,
      sym_name,
  [6057] = 2,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      sym_width,
  [6064] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(236), 1,
      sym_name,
  [6071] = 1,
    ACTIONS(913), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [6076] = 2,
    ACTIONS(775), 1,
      aux_sym__originx_token1,
    STATE(221), 1,
      sym__originx,
  [6083] = 2,
    ACTIONS(777), 1,
      aux_sym__originy_token1,
    STATE(221), 1,
      sym__originy,
  [6090] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(237), 1,
      sym_name,
  [6097] = 2,
    ACTIONS(263), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
  [6104] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(238), 1,
      sym_name,
  [6111] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(188), 1,
      sym_name,
  [6118] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(359), 1,
      sym_name,
  [6125] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(252), 1,
      sym_name,
  [6132] = 2,
    ACTIONS(915), 1,
      anon_sym_svg,
    STATE(153), 1,
      sym_svg,
  [6139] = 2,
    ACTIONS(917), 1,
      aux_sym_absolute_token1,
    STATE(91), 1,
      sym_radius,
  [6146] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(239), 1,
      sym_name,
  [6153] = 2,
    ACTIONS(459), 1,
      anon_sym_scale,
    ACTIONS(461), 1,
      anon_sym_stretch,
  [6160] = 2,
    ACTIONS(919), 1,
      sym_height,
    ACTIONS(921), 1,
      sym_width,
  [6167] = 1,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
  [6171] = 1,
    ACTIONS(161), 1,
      aux_sym__input_id_token1,
  [6175] = 1,
    ACTIONS(925), 1,
      aux_sym_relative_token1,
  [6179] = 1,
    ACTIONS(927), 1,
      anon_sym_COMMA,
  [6183] = 1,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
  [6187] = 1,
    ACTIONS(479), 1,
      anon_sym_with,
  [6191] = 1,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
  [6195] = 1,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
  [6199] = 1,
    ACTIONS(935), 1,
      anon_sym_SQUOTE,
  [6203] = 1,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
  [6207] = 1,
    ACTIONS(937), 1,
      anon_sym_COMMA,
  [6211] = 1,
    ACTIONS(939), 1,
      aux_sym__label_id_token3,
  [6215] = 1,
    ACTIONS(157), 1,
      anon_sym_with,
  [6219] = 1,
    ACTIONS(941), 1,
      aux_sym_absolute_token1,
  [6223] = 1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [6227] = 1,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
  [6231] = 1,
    ACTIONS(433), 1,
      anon_sym_with,
  [6235] = 1,
    ACTIONS(947), 1,
      anon_sym_COMMA,
  [6239] = 1,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
  [6243] = 1,
    ACTIONS(951), 1,
      anon_sym_COMMA,
  [6247] = 1,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
  [6251] = 1,
    ACTIONS(955), 1,
      sym_height,
  [6255] = 1,
    ACTIONS(957), 1,
      anon_sym_SQUOTE,
  [6259] = 1,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [6263] = 1,
    ACTIONS(957), 1,
      anon_sym_DQUOTE,
  [6267] = 1,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
  [6271] = 1,
    ACTIONS(963), 1,
      anon_sym_COMMA,
  [6275] = 1,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
  [6279] = 1,
    ACTIONS(967), 1,
      aux_sym__scale_token1,
  [6283] = 1,
    ACTIONS(969), 1,
      aux_sym_origin_token1,
  [6287] = 1,
    ACTIONS(971), 1,
      sym_rgb,
  [6291] = 1,
    ACTIONS(955), 1,
      sym_width,
  [6295] = 1,
    ACTIONS(973), 1,
      aux_sym_origin_token1,
  [6299] = 1,
    ACTIONS(975), 1,
      aux_sym__label_id_token2,
  [6303] = 1,
    ACTIONS(971), 1,
      sym_rgba,
  [6307] = 1,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
  [6311] = 1,
    ACTIONS(979), 1,
      aux_sym__label_id_token3,
  [6315] = 1,
    ACTIONS(981), 1,
      aux_sym__input_id_token1,
  [6319] = 1,
    ACTIONS(149), 1,
      anon_sym_with,
  [6323] = 1,
    ACTIONS(983), 1,
      anon_sym_COMMA,
  [6327] = 1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [6331] = 1,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
  [6335] = 1,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
  [6339] = 1,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
  [6343] = 1,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
  [6347] = 1,
    ACTIONS(995), 1,
      aux_sym_origin_token1,
  [6351] = 1,
    ACTIONS(997), 1,
      anon_sym_COMMA,
  [6355] = 1,
    ACTIONS(999), 1,
      anon_sym_COMMA,
  [6359] = 1,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
  [6363] = 1,
    ACTIONS(1003), 1,
      aux_sym__label_id_token2,
  [6367] = 1,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
  [6371] = 1,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
  [6375] = 1,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
  [6379] = 1,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
  [6383] = 1,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
  [6387] = 1,
    ACTIONS(1015), 1,
      aux_sym__guide_id_token1,
  [6391] = 1,
    ACTIONS(1017), 1,
      aux_sym__input_id_token1,
  [6395] = 1,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [6399] = 1,
    ACTIONS(1021), 1,
      aux_sym__input_id_token1,
  [6403] = 1,
    ACTIONS(1023), 1,
      sym_fontsize,
  [6407] = 1,
    ACTIONS(109), 1,
      aux_sym__input_id_token1,
  [6411] = 1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
  [6415] = 1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
  [6419] = 1,
    ACTIONS(149), 1,
      aux_sym__input_id_token1,
  [6423] = 1,
    ACTIONS(153), 1,
      aux_sym__input_id_token1,
  [6427] = 1,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
  [6431] = 1,
    ACTIONS(1031), 1,
      aux_sym__input_id_token1,
  [6435] = 1,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
  [6439] = 1,
    ACTIONS(433), 1,
      aux_sym__input_id_token1,
  [6443] = 1,
    ACTIONS(157), 1,
      aux_sym__input_id_token1,
  [6447] = 1,
    ACTIONS(121), 1,
      aux_sym__input_id_token1,
  [6451] = 1,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
  [6455] = 1,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
  [6459] = 1,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
  [6463] = 1,
    ACTIONS(145), 1,
      aux_sym__input_id_token1,
  [6467] = 1,
    ACTIONS(105), 1,
      aux_sym__input_id_token1,
  [6471] = 1,
    ACTIONS(471), 1,
      aux_sym__input_id_token1,
  [6475] = 1,
    ACTIONS(479), 1,
      aux_sym__input_id_token1,
  [6479] = 1,
    ACTIONS(1041), 1,
      aux_sym__input_id_token1,
  [6483] = 1,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
  [6487] = 1,
    ACTIONS(1045), 1,
      aux_sym__input_id_token1,
  [6491] = 1,
    ACTIONS(471), 1,
      anon_sym_with,
  [6495] = 1,
    ACTIONS(1047), 1,
      anon_sym_COMMA,
  [6499] = 1,
    ACTIONS(109), 1,
      anon_sym_with,
  [6503] = 1,
    ACTIONS(1049), 1,
      anon_sym_with,
  [6507] = 1,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
  [6511] = 1,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
  [6515] = 1,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
  [6519] = 1,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
  [6523] = 1,
    ACTIONS(1059), 1,
      aux_sym__absolute_attr_token1,
  [6527] = 1,
    ACTIONS(461), 1,
      anon_sym_stretch,
  [6531] = 1,
    ACTIONS(1061), 1,
      anon_sym_COMMA,
  [6535] = 1,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
  [6539] = 1,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
  [6543] = 1,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
  [6547] = 1,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
  [6551] = 1,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
  [6555] = 1,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
  [6559] = 1,
    ACTIONS(1075), 1,
      ts_builtin_sym_end,
  [6563] = 1,
    ACTIONS(1077), 1,
      aux_sym_origin_token1,
  [6567] = 1,
    ACTIONS(1079), 1,
      aux_sym__input_id_token1,
  [6571] = 1,
    ACTIONS(145), 1,
      anon_sym_with,
  [6575] = 1,
    ACTIONS(1081), 1,
      aux_sym__guide_id_token1,
  [6579] = 1,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
  [6583] = 1,
    ACTIONS(1085), 1,
      aux_sym_relative_token1,
  [6587] = 1,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
  [6591] = 1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [6595] = 1,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
  [6599] = 1,
    ACTIONS(1091), 1,
      anon_sym_SQUOTE,
  [6603] = 1,
    ACTIONS(1093), 1,
      aux_sym_absolute_token1,
  [6607] = 1,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
  [6611] = 1,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
  [6615] = 1,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
  [6619] = 1,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
  [6623] = 1,
    ACTIONS(1103), 1,
      aux_sym_relative_token1,
  [6627] = 1,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
  [6631] = 1,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
  [6635] = 1,
    ACTIONS(1109), 1,
      aux_sym_absolute_token1,
  [6639] = 1,
    ACTIONS(1111), 1,
      aux_sym__scale_token1,
  [6643] = 1,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
  [6647] = 1,
    ACTIONS(1115), 1,
      aux_sym__scale_token1,
  [6651] = 1,
    ACTIONS(1117), 1,
      aux_sym_relative_token1,
  [6655] = 1,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
  [6659] = 1,
    ACTIONS(1121), 1,
      aux_sym_absolute_token1,
  [6663] = 1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
  [6667] = 1,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
  [6671] = 1,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
  [6675] = 1,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
  [6679] = 1,
    ACTIONS(1131), 1,
      aux_sym__label_id_token2,
  [6683] = 1,
    ACTIONS(1133), 1,
      aux_sym__label_id_token3,
  [6687] = 1,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
  [6691] = 1,
    ACTIONS(1137), 1,
      sym_width,
  [6695] = 1,
    ACTIONS(1139), 1,
      anon_sym_timestamp,
  [6699] = 1,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
  [6703] = 1,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
  [6707] = 1,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
  [6711] = 1,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
  [6715] = 1,
    ACTIONS(1139), 1,
      anon_sym_gzip,
  [6719] = 1,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
  [6723] = 1,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
  [6727] = 1,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
  [6731] = 1,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
  [6735] = 1,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 314,
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 420,
  [SMALL_STATE(11)] = 467,
  [SMALL_STATE(12)] = 511,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 599,
  [SMALL_STATE(15)] = 633,
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
  [SMALL_STATE(43)] = 1567,
  [SMALL_STATE(44)] = 1606,
  [SMALL_STATE(45)] = 1629,
  [SMALL_STATE(46)] = 1652,
  [SMALL_STATE(47)] = 1686,
  [SMALL_STATE(48)] = 1708,
  [SMALL_STATE(49)] = 1730,
  [SMALL_STATE(50)] = 1752,
  [SMALL_STATE(51)] = 1774,
  [SMALL_STATE(52)] = 1796,
  [SMALL_STATE(53)] = 1829,
  [SMALL_STATE(54)] = 1860,
  [SMALL_STATE(55)] = 1893,
  [SMALL_STATE(56)] = 1926,
  [SMALL_STATE(57)] = 1954,
  [SMALL_STATE(58)] = 1972,
  [SMALL_STATE(59)] = 1989,
  [SMALL_STATE(60)] = 2012,
  [SMALL_STATE(61)] = 2035,
  [SMALL_STATE(62)] = 2056,
  [SMALL_STATE(63)] = 2079,
  [SMALL_STATE(64)] = 2102,
  [SMALL_STATE(65)] = 2133,
  [SMALL_STATE(66)] = 2156,
  [SMALL_STATE(67)] = 2179,
  [SMALL_STATE(68)] = 2202,
  [SMALL_STATE(69)] = 2225,
  [SMALL_STATE(70)] = 2246,
  [SMALL_STATE(71)] = 2269,
  [SMALL_STATE(72)] = 2300,
  [SMALL_STATE(73)] = 2331,
  [SMALL_STATE(74)] = 2354,
  [SMALL_STATE(75)] = 2385,
  [SMALL_STATE(76)] = 2406,
  [SMALL_STATE(77)] = 2427,
  [SMALL_STATE(78)] = 2446,
  [SMALL_STATE(79)] = 2465,
  [SMALL_STATE(80)] = 2481,
  [SMALL_STATE(81)] = 2503,
  [SMALL_STATE(82)] = 2531,
  [SMALL_STATE(83)] = 2551,
  [SMALL_STATE(84)] = 2571,
  [SMALL_STATE(85)] = 2589,
  [SMALL_STATE(86)] = 2607,
  [SMALL_STATE(87)] = 2635,
  [SMALL_STATE(88)] = 2655,
  [SMALL_STATE(89)] = 2675,
  [SMALL_STATE(90)] = 2691,
  [SMALL_STATE(91)] = 2709,
  [SMALL_STATE(92)] = 2725,
  [SMALL_STATE(93)] = 2753,
  [SMALL_STATE(94)] = 2771,
  [SMALL_STATE(95)] = 2791,
  [SMALL_STATE(96)] = 2811,
  [SMALL_STATE(97)] = 2828,
  [SMALL_STATE(98)] = 2857,
  [SMALL_STATE(99)] = 2872,
  [SMALL_STATE(100)] = 2889,
  [SMALL_STATE(101)] = 2906,
  [SMALL_STATE(102)] = 2923,
  [SMALL_STATE(103)] = 2938,
  [SMALL_STATE(104)] = 2955,
  [SMALL_STATE(105)] = 2970,
  [SMALL_STATE(106)] = 2987,
  [SMALL_STATE(107)] = 3004,
  [SMALL_STATE(108)] = 3021,
  [SMALL_STATE(109)] = 3038,
  [SMALL_STATE(110)] = 3065,
  [SMALL_STATE(111)] = 3082,
  [SMALL_STATE(112)] = 3099,
  [SMALL_STATE(113)] = 3114,
  [SMALL_STATE(114)] = 3143,
  [SMALL_STATE(115)] = 3170,
  [SMALL_STATE(116)] = 3187,
  [SMALL_STATE(117)] = 3204,
  [SMALL_STATE(118)] = 3221,
  [SMALL_STATE(119)] = 3236,
  [SMALL_STATE(120)] = 3253,
  [SMALL_STATE(121)] = 3268,
  [SMALL_STATE(122)] = 3285,
  [SMALL_STATE(123)] = 3302,
  [SMALL_STATE(124)] = 3319,
  [SMALL_STATE(125)] = 3346,
  [SMALL_STATE(126)] = 3360,
  [SMALL_STATE(127)] = 3374,
  [SMALL_STATE(128)] = 3388,
  [SMALL_STATE(129)] = 3402,
  [SMALL_STATE(130)] = 3416,
  [SMALL_STATE(131)] = 3430,
  [SMALL_STATE(132)] = 3444,
  [SMALL_STATE(133)] = 3458,
  [SMALL_STATE(134)] = 3472,
  [SMALL_STATE(135)] = 3486,
  [SMALL_STATE(136)] = 3500,
  [SMALL_STATE(137)] = 3514,
  [SMALL_STATE(138)] = 3536,
  [SMALL_STATE(139)] = 3550,
  [SMALL_STATE(140)] = 3564,
  [SMALL_STATE(141)] = 3578,
  [SMALL_STATE(142)] = 3592,
  [SMALL_STATE(143)] = 3624,
  [SMALL_STATE(144)] = 3638,
  [SMALL_STATE(145)] = 3652,
  [SMALL_STATE(146)] = 3666,
  [SMALL_STATE(147)] = 3680,
  [SMALL_STATE(148)] = 3694,
  [SMALL_STATE(149)] = 3708,
  [SMALL_STATE(150)] = 3722,
  [SMALL_STATE(151)] = 3736,
  [SMALL_STATE(152)] = 3750,
  [SMALL_STATE(153)] = 3764,
  [SMALL_STATE(154)] = 3778,
  [SMALL_STATE(155)] = 3792,
  [SMALL_STATE(156)] = 3806,
  [SMALL_STATE(157)] = 3820,
  [SMALL_STATE(158)] = 3834,
  [SMALL_STATE(159)] = 3850,
  [SMALL_STATE(160)] = 3864,
  [SMALL_STATE(161)] = 3878,
  [SMALL_STATE(162)] = 3892,
  [SMALL_STATE(163)] = 3906,
  [SMALL_STATE(164)] = 3920,
  [SMALL_STATE(165)] = 3934,
  [SMALL_STATE(166)] = 3948,
  [SMALL_STATE(167)] = 3962,
  [SMALL_STATE(168)] = 3976,
  [SMALL_STATE(169)] = 3990,
  [SMALL_STATE(170)] = 4004,
  [SMALL_STATE(171)] = 4018,
  [SMALL_STATE(172)] = 4032,
  [SMALL_STATE(173)] = 4046,
  [SMALL_STATE(174)] = 4060,
  [SMALL_STATE(175)] = 4074,
  [SMALL_STATE(176)] = 4088,
  [SMALL_STATE(177)] = 4102,
  [SMALL_STATE(178)] = 4116,
  [SMALL_STATE(179)] = 4130,
  [SMALL_STATE(180)] = 4144,
  [SMALL_STATE(181)] = 4158,
  [SMALL_STATE(182)] = 4172,
  [SMALL_STATE(183)] = 4186,
  [SMALL_STATE(184)] = 4200,
  [SMALL_STATE(185)] = 4214,
  [SMALL_STATE(186)] = 4228,
  [SMALL_STATE(187)] = 4242,
  [SMALL_STATE(188)] = 4256,
  [SMALL_STATE(189)] = 4270,
  [SMALL_STATE(190)] = 4284,
  [SMALL_STATE(191)] = 4298,
  [SMALL_STATE(192)] = 4312,
  [SMALL_STATE(193)] = 4326,
  [SMALL_STATE(194)] = 4340,
  [SMALL_STATE(195)] = 4354,
  [SMALL_STATE(196)] = 4368,
  [SMALL_STATE(197)] = 4382,
  [SMALL_STATE(198)] = 4396,
  [SMALL_STATE(199)] = 4410,
  [SMALL_STATE(200)] = 4424,
  [SMALL_STATE(201)] = 4438,
  [SMALL_STATE(202)] = 4452,
  [SMALL_STATE(203)] = 4466,
  [SMALL_STATE(204)] = 4480,
  [SMALL_STATE(205)] = 4494,
  [SMALL_STATE(206)] = 4508,
  [SMALL_STATE(207)] = 4522,
  [SMALL_STATE(208)] = 4536,
  [SMALL_STATE(209)] = 4550,
  [SMALL_STATE(210)] = 4564,
  [SMALL_STATE(211)] = 4578,
  [SMALL_STATE(212)] = 4592,
  [SMALL_STATE(213)] = 4606,
  [SMALL_STATE(214)] = 4620,
  [SMALL_STATE(215)] = 4634,
  [SMALL_STATE(216)] = 4648,
  [SMALL_STATE(217)] = 4662,
  [SMALL_STATE(218)] = 4676,
  [SMALL_STATE(219)] = 4690,
  [SMALL_STATE(220)] = 4704,
  [SMALL_STATE(221)] = 4718,
  [SMALL_STATE(222)] = 4732,
  [SMALL_STATE(223)] = 4748,
  [SMALL_STATE(224)] = 4762,
  [SMALL_STATE(225)] = 4776,
  [SMALL_STATE(226)] = 4790,
  [SMALL_STATE(227)] = 4804,
  [SMALL_STATE(228)] = 4827,
  [SMALL_STATE(229)] = 4849,
  [SMALL_STATE(230)] = 4863,
  [SMALL_STATE(231)] = 4889,
  [SMALL_STATE(232)] = 4903,
  [SMALL_STATE(233)] = 4924,
  [SMALL_STATE(234)] = 4946,
  [SMALL_STATE(235)] = 4963,
  [SMALL_STATE(236)] = 4980,
  [SMALL_STATE(237)] = 4997,
  [SMALL_STATE(238)] = 5014,
  [SMALL_STATE(239)] = 5031,
  [SMALL_STATE(240)] = 5048,
  [SMALL_STATE(241)] = 5064,
  [SMALL_STATE(242)] = 5080,
  [SMALL_STATE(243)] = 5090,
  [SMALL_STATE(244)] = 5102,
  [SMALL_STATE(245)] = 5112,
  [SMALL_STATE(246)] = 5122,
  [SMALL_STATE(247)] = 5132,
  [SMALL_STATE(248)] = 5142,
  [SMALL_STATE(249)] = 5158,
  [SMALL_STATE(250)] = 5174,
  [SMALL_STATE(251)] = 5184,
  [SMALL_STATE(252)] = 5194,
  [SMALL_STATE(253)] = 5208,
  [SMALL_STATE(254)] = 5224,
  [SMALL_STATE(255)] = 5234,
  [SMALL_STATE(256)] = 5244,
  [SMALL_STATE(257)] = 5254,
  [SMALL_STATE(258)] = 5268,
  [SMALL_STATE(259)] = 5278,
  [SMALL_STATE(260)] = 5288,
  [SMALL_STATE(261)] = 5302,
  [SMALL_STATE(262)] = 5316,
  [SMALL_STATE(263)] = 5330,
  [SMALL_STATE(264)] = 5344,
  [SMALL_STATE(265)] = 5357,
  [SMALL_STATE(266)] = 5370,
  [SMALL_STATE(267)] = 5383,
  [SMALL_STATE(268)] = 5392,
  [SMALL_STATE(269)] = 5403,
  [SMALL_STATE(270)] = 5414,
  [SMALL_STATE(271)] = 5420,
  [SMALL_STATE(272)] = 5430,
  [SMALL_STATE(273)] = 5436,
  [SMALL_STATE(274)] = 5446,
  [SMALL_STATE(275)] = 5456,
  [SMALL_STATE(276)] = 5466,
  [SMALL_STATE(277)] = 5476,
  [SMALL_STATE(278)] = 5486,
  [SMALL_STATE(279)] = 5496,
  [SMALL_STATE(280)] = 5506,
  [SMALL_STATE(281)] = 5516,
  [SMALL_STATE(282)] = 5526,
  [SMALL_STATE(283)] = 5536,
  [SMALL_STATE(284)] = 5546,
  [SMALL_STATE(285)] = 5556,
  [SMALL_STATE(286)] = 5566,
  [SMALL_STATE(287)] = 5576,
  [SMALL_STATE(288)] = 5586,
  [SMALL_STATE(289)] = 5596,
  [SMALL_STATE(290)] = 5606,
  [SMALL_STATE(291)] = 5616,
  [SMALL_STATE(292)] = 5626,
  [SMALL_STATE(293)] = 5636,
  [SMALL_STATE(294)] = 5646,
  [SMALL_STATE(295)] = 5656,
  [SMALL_STATE(296)] = 5666,
  [SMALL_STATE(297)] = 5676,
  [SMALL_STATE(298)] = 5686,
  [SMALL_STATE(299)] = 5696,
  [SMALL_STATE(300)] = 5706,
  [SMALL_STATE(301)] = 5716,
  [SMALL_STATE(302)] = 5724,
  [SMALL_STATE(303)] = 5734,
  [SMALL_STATE(304)] = 5744,
  [SMALL_STATE(305)] = 5754,
  [SMALL_STATE(306)] = 5762,
  [SMALL_STATE(307)] = 5772,
  [SMALL_STATE(308)] = 5782,
  [SMALL_STATE(309)] = 5792,
  [SMALL_STATE(310)] = 5802,
  [SMALL_STATE(311)] = 5812,
  [SMALL_STATE(312)] = 5822,
  [SMALL_STATE(313)] = 5832,
  [SMALL_STATE(314)] = 5842,
  [SMALL_STATE(315)] = 5852,
  [SMALL_STATE(316)] = 5862,
  [SMALL_STATE(317)] = 5872,
  [SMALL_STATE(318)] = 5879,
  [SMALL_STATE(319)] = 5886,
  [SMALL_STATE(320)] = 5893,
  [SMALL_STATE(321)] = 5898,
  [SMALL_STATE(322)] = 5905,
  [SMALL_STATE(323)] = 5912,
  [SMALL_STATE(324)] = 5919,
  [SMALL_STATE(325)] = 5926,
  [SMALL_STATE(326)] = 5933,
  [SMALL_STATE(327)] = 5940,
  [SMALL_STATE(328)] = 5947,
  [SMALL_STATE(329)] = 5954,
  [SMALL_STATE(330)] = 5961,
  [SMALL_STATE(331)] = 5968,
  [SMALL_STATE(332)] = 5975,
  [SMALL_STATE(333)] = 5982,
  [SMALL_STATE(334)] = 5989,
  [SMALL_STATE(335)] = 5996,
  [SMALL_STATE(336)] = 6003,
  [SMALL_STATE(337)] = 6010,
  [SMALL_STATE(338)] = 6017,
  [SMALL_STATE(339)] = 6022,
  [SMALL_STATE(340)] = 6029,
  [SMALL_STATE(341)] = 6036,
  [SMALL_STATE(342)] = 6043,
  [SMALL_STATE(343)] = 6050,
  [SMALL_STATE(344)] = 6057,
  [SMALL_STATE(345)] = 6064,
  [SMALL_STATE(346)] = 6071,
  [SMALL_STATE(347)] = 6076,
  [SMALL_STATE(348)] = 6083,
  [SMALL_STATE(349)] = 6090,
  [SMALL_STATE(350)] = 6097,
  [SMALL_STATE(351)] = 6104,
  [SMALL_STATE(352)] = 6111,
  [SMALL_STATE(353)] = 6118,
  [SMALL_STATE(354)] = 6125,
  [SMALL_STATE(355)] = 6132,
  [SMALL_STATE(356)] = 6139,
  [SMALL_STATE(357)] = 6146,
  [SMALL_STATE(358)] = 6153,
  [SMALL_STATE(359)] = 6160,
  [SMALL_STATE(360)] = 6167,
  [SMALL_STATE(361)] = 6171,
  [SMALL_STATE(362)] = 6175,
  [SMALL_STATE(363)] = 6179,
  [SMALL_STATE(364)] = 6183,
  [SMALL_STATE(365)] = 6187,
  [SMALL_STATE(366)] = 6191,
  [SMALL_STATE(367)] = 6195,
  [SMALL_STATE(368)] = 6199,
  [SMALL_STATE(369)] = 6203,
  [SMALL_STATE(370)] = 6207,
  [SMALL_STATE(371)] = 6211,
  [SMALL_STATE(372)] = 6215,
  [SMALL_STATE(373)] = 6219,
  [SMALL_STATE(374)] = 6223,
  [SMALL_STATE(375)] = 6227,
  [SMALL_STATE(376)] = 6231,
  [SMALL_STATE(377)] = 6235,
  [SMALL_STATE(378)] = 6239,
  [SMALL_STATE(379)] = 6243,
  [SMALL_STATE(380)] = 6247,
  [SMALL_STATE(381)] = 6251,
  [SMALL_STATE(382)] = 6255,
  [SMALL_STATE(383)] = 6259,
  [SMALL_STATE(384)] = 6263,
  [SMALL_STATE(385)] = 6267,
  [SMALL_STATE(386)] = 6271,
  [SMALL_STATE(387)] = 6275,
  [SMALL_STATE(388)] = 6279,
  [SMALL_STATE(389)] = 6283,
  [SMALL_STATE(390)] = 6287,
  [SMALL_STATE(391)] = 6291,
  [SMALL_STATE(392)] = 6295,
  [SMALL_STATE(393)] = 6299,
  [SMALL_STATE(394)] = 6303,
  [SMALL_STATE(395)] = 6307,
  [SMALL_STATE(396)] = 6311,
  [SMALL_STATE(397)] = 6315,
  [SMALL_STATE(398)] = 6319,
  [SMALL_STATE(399)] = 6323,
  [SMALL_STATE(400)] = 6327,
  [SMALL_STATE(401)] = 6331,
  [SMALL_STATE(402)] = 6335,
  [SMALL_STATE(403)] = 6339,
  [SMALL_STATE(404)] = 6343,
  [SMALL_STATE(405)] = 6347,
  [SMALL_STATE(406)] = 6351,
  [SMALL_STATE(407)] = 6355,
  [SMALL_STATE(408)] = 6359,
  [SMALL_STATE(409)] = 6363,
  [SMALL_STATE(410)] = 6367,
  [SMALL_STATE(411)] = 6371,
  [SMALL_STATE(412)] = 6375,
  [SMALL_STATE(413)] = 6379,
  [SMALL_STATE(414)] = 6383,
  [SMALL_STATE(415)] = 6387,
  [SMALL_STATE(416)] = 6391,
  [SMALL_STATE(417)] = 6395,
  [SMALL_STATE(418)] = 6399,
  [SMALL_STATE(419)] = 6403,
  [SMALL_STATE(420)] = 6407,
  [SMALL_STATE(421)] = 6411,
  [SMALL_STATE(422)] = 6415,
  [SMALL_STATE(423)] = 6419,
  [SMALL_STATE(424)] = 6423,
  [SMALL_STATE(425)] = 6427,
  [SMALL_STATE(426)] = 6431,
  [SMALL_STATE(427)] = 6435,
  [SMALL_STATE(428)] = 6439,
  [SMALL_STATE(429)] = 6443,
  [SMALL_STATE(430)] = 6447,
  [SMALL_STATE(431)] = 6451,
  [SMALL_STATE(432)] = 6455,
  [SMALL_STATE(433)] = 6459,
  [SMALL_STATE(434)] = 6463,
  [SMALL_STATE(435)] = 6467,
  [SMALL_STATE(436)] = 6471,
  [SMALL_STATE(437)] = 6475,
  [SMALL_STATE(438)] = 6479,
  [SMALL_STATE(439)] = 6483,
  [SMALL_STATE(440)] = 6487,
  [SMALL_STATE(441)] = 6491,
  [SMALL_STATE(442)] = 6495,
  [SMALL_STATE(443)] = 6499,
  [SMALL_STATE(444)] = 6503,
  [SMALL_STATE(445)] = 6507,
  [SMALL_STATE(446)] = 6511,
  [SMALL_STATE(447)] = 6515,
  [SMALL_STATE(448)] = 6519,
  [SMALL_STATE(449)] = 6523,
  [SMALL_STATE(450)] = 6527,
  [SMALL_STATE(451)] = 6531,
  [SMALL_STATE(452)] = 6535,
  [SMALL_STATE(453)] = 6539,
  [SMALL_STATE(454)] = 6543,
  [SMALL_STATE(455)] = 6547,
  [SMALL_STATE(456)] = 6551,
  [SMALL_STATE(457)] = 6555,
  [SMALL_STATE(458)] = 6559,
  [SMALL_STATE(459)] = 6563,
  [SMALL_STATE(460)] = 6567,
  [SMALL_STATE(461)] = 6571,
  [SMALL_STATE(462)] = 6575,
  [SMALL_STATE(463)] = 6579,
  [SMALL_STATE(464)] = 6583,
  [SMALL_STATE(465)] = 6587,
  [SMALL_STATE(466)] = 6591,
  [SMALL_STATE(467)] = 6595,
  [SMALL_STATE(468)] = 6599,
  [SMALL_STATE(469)] = 6603,
  [SMALL_STATE(470)] = 6607,
  [SMALL_STATE(471)] = 6611,
  [SMALL_STATE(472)] = 6615,
  [SMALL_STATE(473)] = 6619,
  [SMALL_STATE(474)] = 6623,
  [SMALL_STATE(475)] = 6627,
  [SMALL_STATE(476)] = 6631,
  [SMALL_STATE(477)] = 6635,
  [SMALL_STATE(478)] = 6639,
  [SMALL_STATE(479)] = 6643,
  [SMALL_STATE(480)] = 6647,
  [SMALL_STATE(481)] = 6651,
  [SMALL_STATE(482)] = 6655,
  [SMALL_STATE(483)] = 6659,
  [SMALL_STATE(484)] = 6663,
  [SMALL_STATE(485)] = 6667,
  [SMALL_STATE(486)] = 6671,
  [SMALL_STATE(487)] = 6675,
  [SMALL_STATE(488)] = 6679,
  [SMALL_STATE(489)] = 6683,
  [SMALL_STATE(490)] = 6687,
  [SMALL_STATE(491)] = 6691,
  [SMALL_STATE(492)] = 6695,
  [SMALL_STATE(493)] = 6699,
  [SMALL_STATE(494)] = 6703,
  [SMALL_STATE(495)] = 6707,
  [SMALL_STATE(496)] = 6711,
  [SMALL_STATE(497)] = 6715,
  [SMALL_STATE(498)] = 6719,
  [SMALL_STATE(499)] = 6723,
  [SMALL_STATE(500)] = 6727,
  [SMALL_STATE(501)] = 6731,
  [SMALL_STATE(502)] = 6735,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 10),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_radius, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_radius, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polar, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_polar, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(37),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(42),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(71),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(275),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(325),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(269),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(268),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(270),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 11),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 17),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 5),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 5),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 6),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 6),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
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
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
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
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
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
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
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
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 11),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 17),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1075] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
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
