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
#define STATE_COUNT 485
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 1
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
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
  sym__component_x_attr = 139,
  sym__component_y_attr = 140,
  sym__component_xy_attr = 141,
  sym_delete = 142,
  sym__guide_id = 143,
  sym__input_id = 144,
  sym__output_id = 145,
  sym__parameter_id = 146,
  sym__light_id = 147,
  sym__widget_id = 148,
  sym__label_id = 149,
  sym__decoration_id = 150,
  sym__font_id = 151,
  sym__component_id = 152,
  sym_load = 153,
  sym_unload = 154,
  sym_save = 155,
  sym_export = 156,
  sym__module_export = 157,
  sym_list = 158,
  sym_project = 159,
  sym_script = 160,
  sym__input = 161,
  sym__output = 162,
  sym__parameter = 163,
  sym__light = 164,
  sym__widget = 165,
  sym_label = 166,
  sym_font = 167,
  sym__align = 168,
  sym_halign = 169,
  sym_valign = 170,
  sym_colour = 171,
  sym_decoration = 172,
  sym__scale = 173,
  sym_stretch = 174,
  sym_origin = 175,
  sym__originx = 176,
  sym__originy = 177,
  sym_background = 178,
  sym_panel = 179,
  sym_svg = 180,
  sym_name = 181,
  sym_part = 182,
  sym_guide = 183,
  sym_identifier = 184,
  sym_vertical = 185,
  sym_horizontal = 186,
  sym_geometry = 187,
  sym_offset = 188,
  sym__offset = 189,
  sym_guideline = 190,
  sym__string = 191,
  sym_absolute = 192,
  sym_polar = 193,
  sym_relative = 194,
  sym__decorate = 195,
  sym__relative = 196,
  sym_x = 197,
  sym_y = 198,
  sym_radius = 199,
  aux_sym_command_repeat1 = 200,
  alias_sym_dy = 201,
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
  [50] = 49,
  [51] = 49,
  [52] = 16,
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
  [67] = 7,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 26,
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
  [85] = 25,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 27,
  [96] = 96,
  [97] = 25,
  [98] = 98,
  [99] = 24,
  [100] = 15,
  [101] = 101,
  [102] = 16,
  [103] = 103,
  [104] = 104,
  [105] = 26,
  [106] = 83,
  [107] = 107,
  [108] = 108,
  [109] = 28,
  [110] = 110,
  [111] = 29,
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
  [127] = 124,
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
  [141] = 123,
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
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 122,
  [220] = 220,
  [221] = 17,
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
  [233] = 232,
  [234] = 234,
  [235] = 232,
  [236] = 236,
  [237] = 231,
  [238] = 7,
  [239] = 239,
  [240] = 240,
  [241] = 231,
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
  [263] = 261,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 15,
  [271] = 271,
  [272] = 272,
  [273] = 17,
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
  [289] = 261,
  [290] = 290,
  [291] = 291,
  [292] = 261,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 268,
  [297] = 268,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 7,
  [304] = 304,
  [305] = 305,
  [306] = 305,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 17,
  [322] = 322,
  [323] = 323,
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
  [334] = 305,
  [335] = 335,
  [336] = 336,
  [337] = 305,
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
  [354] = 103,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 117,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 27,
  [364] = 364,
  [365] = 28,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
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
  [396] = 101,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 29,
  [404] = 404,
  [405] = 405,
  [406] = 28,
  [407] = 16,
  [408] = 408,
  [409] = 409,
  [410] = 103,
  [411] = 27,
  [412] = 26,
  [413] = 25,
  [414] = 414,
  [415] = 415,
  [416] = 24,
  [417] = 15,
  [418] = 101,
  [419] = 117,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 29,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 24,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 397,
  [445] = 421,
  [446] = 366,
  [447] = 447,
  [448] = 448,
  [449] = 360,
  [450] = 346,
  [451] = 362,
  [452] = 452,
  [453] = 395,
  [454] = 454,
  [455] = 421,
  [456] = 366,
  [457] = 457,
  [458] = 458,
  [459] = 362,
  [460] = 460,
  [461] = 395,
  [462] = 462,
  [463] = 366,
  [464] = 464,
  [465] = 362,
  [466] = 466,
  [467] = 428,
  [468] = 427,
  [469] = 424,
  [470] = 466,
  [471] = 382,
  [472] = 369,
  [473] = 473,
  [474] = 474,
  [475] = 428,
  [476] = 427,
  [477] = 424,
  [478] = 369,
  [479] = 479,
  [480] = 428,
  [481] = 427,
  [482] = 369,
  [483] = 405,
  [484] = 405,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(401);
      if (lookahead == '"') ADVANCE(640);
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(645);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == ',') ADVANCE(405);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '0') ADVANCE(450);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'g') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(183);
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
      if (lookahead == 's') ADVANCE(667);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(640);
      if (lookahead == '\'') ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(698);
      if (lookahead != 0) ADVANCE(699);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(642);
      if (lookahead == '\'') ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(638);
      if (lookahead != 0) ADVANCE(639);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(568);
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
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(568);
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
      if (lookahead == 'b') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(518);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'b') ADVANCE(533);
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(518);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'b') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'w') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'U') ADVANCE(690);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '5') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'H') ADVANCE(692);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 176) ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(678);
      if (lookahead == 'm') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == '8') ADVANCE(54);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(495);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == 'w') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(40);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'U') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == '5') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == '5') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
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
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 49:
      if (lookahead == ';') ADVANCE(402);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(662);
      END_STATE();
    case 51:
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'm') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'H') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'H') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == 'H') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(434);
      if (lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(533);
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead == 'h') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(518);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == 'v') ADVANCE(507);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(651);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(655);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(681);
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
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(434);
      if (lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(679);
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
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(315);
      END_STATE();
    case 155:
      if (lookahead == 'f') ADVANCE(328);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(688);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(704);
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
      if (lookahead == 'h') ADVANCE(661);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(676);
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
      if (lookahead == 'i') ADVANCE(85);
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
      if (lookahead == 'o') ADVANCE(67);
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
      if (lookahead == 'k') ADVANCE(689);
      END_STATE();
    case 204:
      if (lookahead == 'k') ADVANCE(162);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(637);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(693);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(695);
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
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(700);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(697);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(691);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(690);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(461);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(680);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(561);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(678);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(701);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(478);
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
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(677);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(650);
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
      if (lookahead == 'r') ADVANCE(66);
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
      if (lookahead == 'o') ADVANCE(70);
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
      if (lookahead == 'p') ADVANCE(669);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(668);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(680);
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
      if (lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(76);
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
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(702);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(666);
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
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(663);
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
      if (lookahead == 't') ADVANCE(659);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(68);
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
      if (lookahead == 't') ADVANCE(71);
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
          lookahead == 'h') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(678);
      if (lookahead == 'm') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(372)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(686);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(684);
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
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(571);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'd') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == 'l') ADVANCE(582);
      if (lookahead == 'm') ADVANCE(598);
      if (lookahead == 'n') ADVANCE(583);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == 's') ADVANCE(572);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead == 'u') ADVANCE(606);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 396:
      if (eof) ADVANCE(401);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead == 'n') ADVANCE(583);
      if (lookahead == 's') ADVANCE(572);
      if (lookahead == 'u') ADVANCE(606);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 397:
      if (eof) ADVANCE(401);
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == ',') ADVANCE(405);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(61);
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
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '@') ADVANCE(460);
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'w') ADVANCE(185);
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
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(255);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 400:
      if (eof) ADVANCE(401);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_input2);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_input2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_output2);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_output2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_light2);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_light2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_widget2);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_widget2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(456);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
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
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(702);
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
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(702);
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
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(702);
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
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 176) ADVANCE(702);
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
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 176) ADVANCE(702);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 176) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 176) ADVANCE(702);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead == 'r') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(563);
      if (lookahead == 'H') ADVANCE(561);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(561);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(621);
      if (lookahead == 'o') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(610);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead == 'o') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead == 'o') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(642);
      if (lookahead == '\'') ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(639);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(699);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(639);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(699);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(639);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(649);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_decoration2);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(237);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(641);
      if (lookahead == '\'') ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(699);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == '5') ADVANCE(237);
      END_STATE();
    case 704:
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
  [2] = {.lex_state = 395},
  [3] = {.lex_state = 395},
  [4] = {.lex_state = 395},
  [5] = {.lex_state = 397},
  [6] = {.lex_state = 397},
  [7] = {.lex_state = 395},
  [8] = {.lex_state = 397},
  [9] = {.lex_state = 397},
  [10] = {.lex_state = 397},
  [11] = {.lex_state = 397},
  [12] = {.lex_state = 397},
  [13] = {.lex_state = 397},
  [14] = {.lex_state = 397},
  [15] = {.lex_state = 395},
  [16] = {.lex_state = 395},
  [17] = {.lex_state = 397},
  [18] = {.lex_state = 395},
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
  [30] = {.lex_state = 397},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 398},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 397},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 81},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 42},
  [50] = {.lex_state = 42},
  [51] = {.lex_state = 42},
  [52] = {.lex_state = 398},
  [53] = {.lex_state = 81},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 397},
  [56] = {.lex_state = 397},
  [57] = {.lex_state = 398},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 396},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 398},
  [75] = {.lex_state = 397},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 398},
  [80] = {.lex_state = 398},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 399},
  [83] = {.lex_state = 400},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 396},
  [89] = {.lex_state = 397},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 396},
  [96] = {.lex_state = 18},
  [97] = {.lex_state = 396},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 396},
  [100] = {.lex_state = 396},
  [101] = {.lex_state = 396},
  [102] = {.lex_state = 396},
  [103] = {.lex_state = 396},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 396},
  [106] = {.lex_state = 399},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 398},
  [109] = {.lex_state = 396},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 396},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 397},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 396},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 81},
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
  [141] = {.lex_state = 22},
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
  [217] = {.lex_state = 397},
  [218] = {.lex_state = 23},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 23},
  [223] = {.lex_state = 16},
  [224] = {.lex_state = 395},
  [225] = {.lex_state = 395},
  [226] = {.lex_state = 395},
  [227] = {.lex_state = 395},
  [228] = {.lex_state = 395},
  [229] = {.lex_state = 397},
  [230] = {.lex_state = 397},
  [231] = {.lex_state = 18},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 397},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 23},
  [239] = {.lex_state = 397},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 397},
  [243] = {.lex_state = 13},
  [244] = {.lex_state = 398},
  [245] = {.lex_state = 397},
  [246] = {.lex_state = 397},
  [247] = {.lex_state = 395},
  [248] = {.lex_state = 395},
  [249] = {.lex_state = 395},
  [250] = {.lex_state = 395},
  [251] = {.lex_state = 395},
  [252] = {.lex_state = 395},
  [253] = {.lex_state = 397},
  [254] = {.lex_state = 11},
  [255] = {.lex_state = 11},
  [256] = {.lex_state = 397},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 398},
  [260] = {.lex_state = 14},
  [261] = {.lex_state = 395},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 395},
  [264] = {.lex_state = 398},
  [265] = {.lex_state = 81},
  [266] = {.lex_state = 14},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 395},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 398},
  [271] = {.lex_state = 81},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 16},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 14},
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
  [289] = {.lex_state = 395},
  [290] = {.lex_state = 395},
  [291] = {.lex_state = 14},
  [292] = {.lex_state = 395},
  [293] = {.lex_state = 22},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 22},
  [296] = {.lex_state = 395},
  [297] = {.lex_state = 395},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 22},
  [300] = {.lex_state = 21},
  [301] = {.lex_state = 12},
  [302] = {.lex_state = 14},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 14},
  [305] = {.lex_state = 395},
  [306] = {.lex_state = 395},
  [307] = {.lex_state = 14},
  [308] = {.lex_state = 14},
  [309] = {.lex_state = 14},
  [310] = {.lex_state = 14},
  [311] = {.lex_state = 14},
  [312] = {.lex_state = 42},
  [313] = {.lex_state = 14},
  [314] = {.lex_state = 14},
  [315] = {.lex_state = 14},
  [316] = {.lex_state = 395},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 22},
  [319] = {.lex_state = 22},
  [320] = {.lex_state = 398},
  [321] = {.lex_state = 22},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 14},
  [325] = {.lex_state = 372},
  [326] = {.lex_state = 14},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 372},
  [329] = {.lex_state = 22},
  [330] = {.lex_state = 22},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 14},
  [333] = {.lex_state = 22},
  [334] = {.lex_state = 395},
  [335] = {.lex_state = 397},
  [336] = {.lex_state = 398},
  [337] = {.lex_state = 395},
  [338] = {.lex_state = 396},
  [339] = {.lex_state = 14},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 14},
  [343] = {.lex_state = 395},
  [344] = {.lex_state = 14},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 648},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 395},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 81},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 20},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 81},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 42},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 397},
  [381] = {.lex_state = 643},
  [382] = {.lex_state = 648},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 14},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 395},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 21},
  [398] = {.lex_state = 14},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 14},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 14},
  [404] = {.lex_state = 396},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 14},
  [407] = {.lex_state = 14},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 14},
  [410] = {.lex_state = 14},
  [411] = {.lex_state = 14},
  [412] = {.lex_state = 14},
  [413] = {.lex_state = 14},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 13},
  [416] = {.lex_state = 14},
  [417] = {.lex_state = 14},
  [418] = {.lex_state = 14},
  [419] = {.lex_state = 14},
  [420] = {.lex_state = 14},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 14},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 81},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 16},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 81},
  [436] = {.lex_state = 14},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 21},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 20},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 395},
  [452] = {.lex_state = 397},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 20},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 395},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 13},
  [463] = {.lex_state = 20},
  [464] = {.lex_state = 13},
  [465] = {.lex_state = 395},
  [466] = {.lex_state = 643},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 643},
  [471] = {.lex_state = 648},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
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
    [sym_command] = STATE(440),
    [sym_new] = STATE(33),
    [sym_decorate] = STATE(33),
    [sym_set] = STATE(33),
    [sym_delete] = STATE(33),
    [sym_load] = STATE(33),
    [sym_unload] = STATE(33),
    [sym_save] = STATE(33),
    [sym_export] = STATE(33),
    [sym_list] = STATE(33),
    [aux_sym_command_repeat1] = STATE(33),
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
  [0] = 15,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(35), 1,
      sym_fontsize,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(41), 1,
      sym_angle,
    STATE(4), 1,
      sym_polar,
    STATE(6), 1,
      sym_font,
    STATE(54), 1,
      sym_halign,
    STATE(61), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(120), 1,
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
  [61] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(47), 1,
      sym_fontsize,
    STATE(9), 1,
      sym_font,
    STATE(54), 1,
      sym_halign,
    STATE(63), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(202), 1,
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
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(45), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [116] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(53), 1,
      sym_fontsize,
    STATE(8), 1,
      sym_font,
    STATE(54), 1,
      sym_halign,
    STATE(62), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(133), 1,
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
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(51), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [171] = 16,
    ACTIONS(55), 1,
      anon_sym_module2,
    ACTIONS(57), 1,
      anon_sym_input2,
    ACTIONS(59), 1,
      anon_sym_output2,
    ACTIONS(61), 1,
      anon_sym_parameter,
    ACTIONS(63), 1,
      anon_sym_light2,
    ACTIONS(65), 1,
      anon_sym_widget2,
    ACTIONS(67), 1,
      anon_sym_guide,
    ACTIONS(69), 1,
      anon_sym_label,
    ACTIONS(71), 1,
      anon_sym_decoration2,
    ACTIONS(73), 1,
      anon_sym_origin,
    ACTIONS(75), 1,
      anon_sym_background,
    STATE(48), 1,
      sym__guide_id,
    STATE(135), 1,
      sym__label_id,
    STATE(220), 1,
      sym__decoration_id,
    STATE(240), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(134), 7,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__decoration_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
  [230] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(53), 1,
      sym_fontsize,
    STATE(54), 1,
      sym_halign,
    STATE(62), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(133), 1,
      sym_colour,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(79), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(49), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [277] = 4,
    ACTIONS(85), 1,
      aux_sym_offset_token1,
    STATE(15), 1,
      sym_offset,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
      sym_angle,
    ACTIONS(83), 17,
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
  [312] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(89), 1,
      sym_fontsize,
    STATE(54), 1,
      sym_halign,
    STATE(65), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(131), 1,
      sym_colour,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(79), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [359] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(93), 1,
      sym_fontsize,
    STATE(54), 1,
      sym_halign,
    STATE(59), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(191), 1,
      sym_colour,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(79), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(91), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [406] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(54), 1,
      sym_halign,
    STATE(62), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(133), 1,
      sym_colour,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(79), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(49), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [450] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(54), 1,
      sym_halign,
    STATE(61), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(120), 1,
      sym_colour,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(79), 4,
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
  [494] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(54), 1,
      sym_halign,
    STATE(65), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(131), 1,
      sym_colour,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(79), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [538] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(54), 1,
      sym_halign,
    STATE(66), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(130), 1,
      sym_colour,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(79), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(95), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [582] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(54), 1,
      sym_halign,
    STATE(59), 1,
      sym__align,
    STATE(72), 1,
      sym_valign,
    STATE(191), 1,
      sym_colour,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(79), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(91), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [626] = 2,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
      sym_angle,
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
  [655] = 2,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
      sym_angle,
    ACTIONS(103), 17,
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
  [684] = 2,
    ACTIONS(107), 4,
      anon_sym_x,
      anon_sym_dx,
      sym_width,
      sym_angle,
    ACTIONS(105), 19,
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
  [712] = 2,
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
  [740] = 2,
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
  [768] = 2,
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
  [796] = 2,
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
  [824] = 2,
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
  [852] = 2,
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
  [880] = 2,
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
  [908] = 2,
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
  [936] = 2,
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
  [964] = 2,
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
  [992] = 2,
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
  [1020] = 2,
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
  [1048] = 2,
    ACTIONS(159), 1,
      sym_rgb,
    ACTIONS(157), 21,
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
  [1075] = 2,
    ACTIONS(163), 1,
      anon_sym_x,
    ACTIONS(161), 21,
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
  [1102] = 2,
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
  [1129] = 12,
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
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      sym_comment,
    STATE(34), 10,
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
  [1175] = 12,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_new,
    ACTIONS(181), 1,
      anon_sym_decorate,
    ACTIONS(184), 1,
      anon_sym_set,
    ACTIONS(187), 1,
      anon_sym_delete,
    ACTIONS(190), 1,
      anon_sym_load,
    ACTIONS(193), 1,
      anon_sym_unload,
    ACTIONS(196), 1,
      anon_sym_save,
    ACTIONS(199), 1,
      anon_sym_export,
    ACTIONS(202), 1,
      anon_sym_list,
    STATE(34), 10,
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
  [1221] = 11,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(215), 1,
      sym_angle,
    STATE(205), 1,
      sym__xy_attr,
    STATE(473), 1,
      sym__guide_attr,
    STATE(474), 1,
      sym__geometry_x_attr,
    STATE(479), 1,
      sym__relative_attr,
    ACTIONS(211), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(212), 5,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym_polar,
  [1262] = 2,
    ACTIONS(219), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(217), 16,
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
  [1285] = 10,
    ACTIONS(221), 1,
      anon_sym_module,
    ACTIONS(223), 1,
      anon_sym_input,
    ACTIONS(225), 1,
      anon_sym_output,
    ACTIONS(227), 1,
      aux_sym__new_parameter_token1,
    ACTIONS(229), 1,
      anon_sym_light,
    ACTIONS(231), 1,
      anon_sym_widget,
    ACTIONS(233), 1,
      anon_sym_decoration,
    ACTIONS(235), 1,
      anon_sym_guide,
    ACTIONS(237), 1,
      anon_sym_label,
    STATE(121), 9,
      sym__new_module,
      sym__new_input,
      sym__new_output,
      sym__new_parameter,
      sym__new_light,
      sym__new_widget,
      sym__new_decoration,
      sym_label,
      sym_guide,
  [1324] = 11,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(215), 1,
      sym_angle,
    STATE(185), 1,
      sym__xy_attr,
    STATE(473), 1,
      sym__guide_attr,
    STATE(474), 1,
      sym__geometry_x_attr,
    STATE(479), 1,
      sym__relative_attr,
    ACTIONS(211), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(212), 5,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym_polar,
  [1365] = 11,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(215), 1,
      sym_angle,
    STATE(136), 1,
      sym__xy_attr,
    STATE(473), 1,
      sym__guide_attr,
    STATE(474), 1,
      sym__geometry_x_attr,
    STATE(479), 1,
      sym__relative_attr,
    ACTIONS(211), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(212), 5,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym_polar,
  [1406] = 10,
    ACTIONS(57), 1,
      anon_sym_input2,
    ACTIONS(59), 1,
      anon_sym_output2,
    ACTIONS(61), 1,
      anon_sym_parameter,
    ACTIONS(63), 1,
      anon_sym_light2,
    ACTIONS(65), 1,
      anon_sym_widget2,
    ACTIONS(69), 1,
      anon_sym_label,
    ACTIONS(71), 1,
      anon_sym_decoration2,
    ACTIONS(239), 1,
      anon_sym_font,
    ACTIONS(241), 1,
      anon_sym_guide,
    STATE(170), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [1445] = 2,
    ACTIONS(245), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(243), 16,
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
  [1468] = 2,
    ACTIONS(249), 1,
      anon_sym_x,
    ACTIONS(247), 16,
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
  [1490] = 2,
    ACTIONS(253), 1,
      anon_sym_x,
    ACTIONS(251), 16,
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
  [1512] = 2,
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
  [1534] = 8,
    ACTIONS(261), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(263), 1,
      anon_sym_vertical,
    ACTIONS(265), 1,
      anon_sym_horizontal,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
    STATE(343), 1,
      sym_identifier,
    STATE(168), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(259), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1568] = 2,
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
  [1590] = 2,
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
  [1612] = 7,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(277), 1,
      anon_sym_id,
    ACTIONS(279), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(283), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(211), 4,
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
  [1643] = 8,
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
    STATE(483), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(445), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1676] = 8,
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
    STATE(484), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(455), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1709] = 8,
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
    STATE(405), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(421), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1742] = 1,
    ACTIONS(101), 15,
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
  [1760] = 6,
    ACTIONS(261), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(263), 1,
      anon_sym_vertical,
    ACTIONS(265), 1,
      anon_sym_horizontal,
    STATE(45), 1,
      sym_identifier,
    STATE(176), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(259), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1788] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      sym_rgb,
    ACTIONS(297), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1809] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(91), 1,
      sym_offset,
    ACTIONS(303), 12,
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
  [1830] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(104), 1,
      sym_offset,
    ACTIONS(305), 12,
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
  [1851] = 2,
    ACTIONS(309), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(307), 13,
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
      sym_angle,
  [1870] = 8,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_AT,
    ACTIONS(315), 1,
      aux_sym_relative_token1,
    ACTIONS(317), 1,
      sym_angle,
    STATE(403), 1,
      sym_polar,
    STATE(469), 1,
      sym_x,
    STATE(302), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1901] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(120), 1,
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
  [1924] = 8,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      anon_sym_AT,
    ACTIONS(323), 1,
      aux_sym_relative_token1,
    STATE(424), 1,
      sym_x,
    STATE(425), 1,
      sym_polar,
    STATE(426), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1955] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(133), 1,
      sym_colour,
    ACTIONS(49), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1978] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(131), 1,
      sym_colour,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2001] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(191), 1,
      sym_colour,
    ACTIONS(91), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2024] = 8,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_AT,
    ACTIONS(329), 1,
      aux_sym_relative_token1,
    ACTIONS(331), 1,
      sym_angle,
    STATE(111), 1,
      sym_polar,
    STATE(477), 1,
      sym_x,
    STATE(88), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2055] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(130), 1,
      sym_colour,
    ACTIONS(95), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2078] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(128), 1,
      sym_colour,
    ACTIONS(333), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2101] = 4,
    ACTIONS(335), 1,
      aux_sym_offset_token1,
    STATE(100), 1,
      sym_offset,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(83), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2124] = 4,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym__scale,
    STATE(172), 1,
      sym_stretch,
    ACTIONS(337), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2147] = 8,
    ACTIONS(41), 1,
      sym_angle,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(345), 1,
      aux_sym_relative_token1,
    STATE(29), 1,
      sym_polar,
    STATE(355), 1,
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
  [2178] = 2,
    ACTIONS(349), 1,
      sym_rgb,
    ACTIONS(347), 13,
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
  [2197] = 2,
    ACTIONS(353), 1,
      sym_rgb,
    ACTIONS(351), 13,
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
  [2216] = 3,
    ACTIONS(301), 1,
      sym_rgb,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(297), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2237] = 1,
    ACTIONS(141), 13,
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
  [2253] = 3,
    ACTIONS(215), 1,
      sym_angle,
    STATE(139), 1,
      sym_polar,
    ACTIONS(357), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2273] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym_offset,
    ACTIONS(359), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2293] = 7,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(279), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__x_attr,
    ACTIONS(211), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2321] = 3,
    ACTIONS(365), 1,
      anon_sym_timestamp,
    ACTIONS(367), 1,
      anon_sym_gzip,
    ACTIONS(363), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2341] = 7,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(279), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym__x_attr,
    ACTIONS(211), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2369] = 1,
    ACTIONS(369), 13,
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
      sym_angle,
  [2385] = 3,
    ACTIONS(215), 1,
      sym_angle,
    STATE(138), 1,
      sym_polar,
    ACTIONS(371), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2405] = 1,
    ACTIONS(373), 13,
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
  [2421] = 2,
    ACTIONS(377), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(375), 12,
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
  [2439] = 2,
    ACTIONS(381), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(379), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2457] = 7,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(279), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym__x_attr,
    ACTIONS(211), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2485] = 1,
    ACTIONS(137), 13,
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
  [2501] = 3,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_stretch,
    ACTIONS(383), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2521] = 3,
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
  [2541] = 4,
    ACTIONS(397), 1,
      aux_sym__input_id_token1,
    STATE(177), 1,
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
  [2563] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(210), 1,
      sym_offset,
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
  [2583] = 2,
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
  [2601] = 1,
    ACTIONS(405), 12,
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
  [2616] = 7,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(279), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__y_attr,
    ACTIONS(283), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2643] = 2,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(409), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2660] = 2,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(409), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2677] = 2,
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
  [2694] = 7,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(279), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym__y_attr,
    ACTIONS(283), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2721] = 2,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(139), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2738] = 1,
    ACTIONS(415), 12,
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
  [2753] = 2,
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
  [2770] = 2,
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
  [2787] = 2,
    ACTIONS(417), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(419), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2804] = 2,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(103), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2821] = 2,
    ACTIONS(421), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(423), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2838] = 1,
    ACTIONS(425), 12,
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
  [2853] = 2,
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
  [2870] = 2,
    ACTIONS(427), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(379), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2887] = 1,
    ACTIONS(429), 12,
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
  [2902] = 1,
    ACTIONS(431), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2917] = 2,
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
  [2934] = 2,
    ACTIONS(435), 1,
      anon_sym_timestamp,
    ACTIONS(433), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2951] = 2,
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
  [2968] = 7,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(279), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym__y_attr,
    ACTIONS(283), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2995] = 2,
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
  [3012] = 8,
    ACTIONS(441), 1,
      anon_sym_input2,
    ACTIONS(443), 1,
      anon_sym_output2,
    ACTIONS(445), 1,
      anon_sym_parameter,
    ACTIONS(447), 1,
      anon_sym_light2,
    ACTIONS(449), 1,
      anon_sym_widget2,
    ACTIONS(451), 1,
      anon_sym_scale,
    ACTIONS(453), 1,
      anon_sym_stretch,
    STATE(460), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3041] = 2,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(455), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3058] = 2,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(455), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3075] = 2,
    ACTIONS(461), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(463), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3092] = 1,
    ACTIONS(465), 12,
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
  [3107] = 1,
    ACTIONS(467), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3121] = 1,
    ACTIONS(49), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3135] = 1,
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
  [3149] = 1,
    ACTIONS(471), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3163] = 1,
    ACTIONS(473), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3177] = 1,
    ACTIONS(475), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3191] = 1,
    ACTIONS(455), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3205] = 1,
    ACTIONS(477), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3219] = 2,
    ACTIONS(475), 1,
      aux_sym_offset_token1,
    ACTIONS(479), 10,
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
  [3235] = 1,
    ACTIONS(481), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3249] = 1,
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
  [3263] = 1,
    ACTIONS(333), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3277] = 1,
    ACTIONS(95), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3291] = 1,
    ACTIONS(485), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3305] = 1,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3319] = 1,
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
  [3333] = 10,
    ACTIONS(489), 1,
      anon_sym_x,
    ACTIONS(491), 1,
      anon_sym_y,
    ACTIONS(493), 1,
      anon_sym_xy,
    ACTIONS(495), 1,
      anon_sym_text,
    ACTIONS(497), 1,
      anon_sym_font,
    ACTIONS(499), 1,
      anon_sym_size,
    ACTIONS(501), 1,
      anon_sym_halign,
    ACTIONS(503), 1,
      anon_sym_valign,
    ACTIONS(505), 1,
      anon_sym_align,
    ACTIONS(507), 2,
      anon_sym_colour,
      anon_sym_color,
  [3365] = 1,
    ACTIONS(509), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3379] = 5,
    STATE(54), 1,
      sym_halign,
    STATE(72), 1,
      sym_valign,
    STATE(185), 1,
      sym__align,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(79), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3401] = 1,
    ACTIONS(511), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3415] = 1,
    ACTIONS(513), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3429] = 1,
    ACTIONS(515), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3443] = 2,
    ACTIONS(473), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(517), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3459] = 1,
    ACTIONS(519), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3473] = 1,
    ACTIONS(521), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3487] = 1,
    ACTIONS(523), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3501] = 1,
    ACTIONS(525), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3515] = 1,
    ACTIONS(527), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3529] = 1,
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
  [3543] = 1,
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
  [3557] = 1,
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
  [3571] = 1,
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
  [3585] = 1,
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
  [3599] = 1,
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
  [3613] = 1,
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
  [3627] = 1,
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
  [3641] = 1,
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
  [3655] = 1,
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
  [3669] = 1,
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
  [3683] = 1,
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
  [3697] = 1,
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
  [3711] = 1,
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
  [3725] = 1,
    ACTIONS(557), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3739] = 1,
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
  [3753] = 1,
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
  [3767] = 1,
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
  [3781] = 1,
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
  [3795] = 1,
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
  [3809] = 1,
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
  [3823] = 1,
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
  [3837] = 1,
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
  [3851] = 1,
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
  [3865] = 1,
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
  [3879] = 1,
    ACTIONS(383), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3893] = 1,
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
  [3907] = 1,
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
  [3921] = 1,
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
  [3935] = 1,
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
  [3949] = 1,
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
  [3963] = 1,
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
  [3977] = 1,
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
  [3991] = 1,
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
  [4005] = 1,
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
  [4019] = 1,
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
  [4033] = 1,
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
  [4047] = 1,
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
  [4061] = 1,
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
  [4075] = 1,
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
  [4089] = 1,
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
  [4103] = 1,
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
  [4117] = 1,
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
  [4131] = 1,
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
  [4145] = 1,
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
  [4159] = 1,
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
  [4173] = 1,
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
  [4187] = 1,
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
  [4201] = 1,
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
  [4215] = 1,
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
  [4229] = 1,
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
  [4243] = 1,
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
  [4257] = 1,
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
  [4271] = 1,
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
  [4285] = 1,
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
  [4299] = 1,
    ACTIONS(91), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4313] = 1,
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
  [4327] = 1,
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
  [4341] = 1,
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
  [4355] = 1,
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
  [4369] = 1,
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
  [4383] = 1,
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
  [4397] = 1,
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
  [4411] = 1,
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
  [4425] = 1,
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
  [4439] = 1,
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
  [4453] = 1,
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
  [4467] = 1,
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
  [4481] = 1,
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
  [4495] = 1,
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
  [4509] = 6,
    ACTIONS(57), 1,
      anon_sym_input2,
    ACTIONS(59), 1,
      anon_sym_output2,
    ACTIONS(61), 1,
      anon_sym_parameter,
    ACTIONS(63), 1,
      anon_sym_light2,
    ACTIONS(65), 1,
      anon_sym_widget2,
    STATE(402), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [4532] = 6,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    ACTIONS(663), 1,
      anon_sym_AT,
    ACTIONS(667), 1,
      anon_sym_origin,
    ACTIONS(669), 1,
      aux_sym_origin_token1,
    STATE(163), 1,
      sym_offset,
    ACTIONS(665), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4554] = 2,
    ACTIONS(471), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(671), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4568] = 8,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
    ACTIONS(675), 1,
      anon_sym_x,
    ACTIONS(677), 1,
      anon_sym_y,
    ACTIONS(679), 1,
      anon_sym_xy,
    ACTIONS(681), 1,
      anon_sym_dx,
    ACTIONS(683), 1,
      anon_sym_dy,
    ACTIONS(685), 1,
      anon_sym_dxy,
    STATE(146), 2,
      sym__scale,
      sym_stretch,
  [4594] = 2,
    ACTIONS(105), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(107), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4608] = 6,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    ACTIONS(687), 1,
      anon_sym_AT,
    ACTIONS(689), 1,
      anon_sym_origin,
    ACTIONS(691), 1,
      aux_sym_origin_token1,
    STATE(166), 1,
      sym_offset,
    ACTIONS(665), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4629] = 5,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(695), 1,
      aux_sym__offset_attr_token1,
    STATE(373), 1,
      sym__offset_attr,
    STATE(374), 2,
      sym__offset_xy_attr,
      sym_polar,
  [4646] = 5,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    STATE(447), 1,
      sym__offset,
    STATE(438), 2,
      sym_polar,
      sym__relative,
  [4663] = 5,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym__offset,
    STATE(439), 2,
      sym_polar,
      sym__relative,
  [4680] = 5,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym__offset,
    STATE(441), 2,
      sym_polar,
      sym__relative,
  [4697] = 5,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym__offset,
    STATE(442), 2,
      sym_polar,
      sym__relative,
  [4714] = 5,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym__offset,
    STATE(443), 2,
      sym_polar,
      sym__relative,
  [4731] = 6,
    ACTIONS(709), 1,
      anon_sym_input2,
    ACTIONS(711), 1,
      anon_sym_output2,
    ACTIONS(713), 1,
      anon_sym_parameter,
    ACTIONS(715), 1,
      anon_sym_light2,
    ACTIONS(717), 1,
      anon_sym_widget2,
    ACTIONS(719), 1,
      anon_sym_label,
  [4750] = 5,
    ACTIONS(721), 1,
      anon_sym_input2,
    ACTIONS(723), 1,
      anon_sym_output2,
    ACTIONS(725), 1,
      anon_sym_parameter,
    ACTIONS(727), 1,
      anon_sym_light2,
    ACTIONS(729), 1,
      anon_sym_widget2,
  [4766] = 2,
    STATE(410), 1,
      sym_y,
    ACTIONS(731), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4776] = 2,
    STATE(296), 1,
      sym_y,
    ACTIONS(733), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4786] = 2,
    STATE(268), 1,
      sym_y,
    ACTIONS(733), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4796] = 5,
    ACTIONS(735), 1,
      anon_sym_input2,
    ACTIONS(737), 1,
      anon_sym_output2,
    ACTIONS(739), 1,
      anon_sym_parameter,
    ACTIONS(741), 1,
      anon_sym_light2,
    ACTIONS(743), 1,
      anon_sym_widget2,
  [4812] = 2,
    STATE(297), 1,
      sym_y,
    ACTIONS(733), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4822] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(745), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4832] = 2,
    STATE(354), 1,
      sym_y,
    ACTIONS(733), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4842] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(270), 1,
      sym_offset,
    ACTIONS(81), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [4854] = 2,
    STATE(185), 1,
      sym_valign,
    ACTIONS(79), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4864] = 5,
    ACTIONS(747), 1,
      anon_sym_name,
    ACTIONS(749), 1,
      anon_sym_x,
    ACTIONS(751), 1,
      anon_sym_y,
    ACTIONS(753), 1,
      anon_sym_xy,
    ACTIONS(755), 1,
      anon_sym_part,
  [4880] = 2,
    STATE(103), 1,
      sym_y,
    ACTIONS(757), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4890] = 2,
    STATE(185), 1,
      sym_halign,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4900] = 5,
    ACTIONS(759), 1,
      aux_sym__input_id_token1,
    ACTIONS(761), 1,
      anon_sym_none,
    ACTIONS(763), 1,
      sym_rgb,
    ACTIONS(765), 1,
      sym_rgba,
    STATE(125), 1,
      sym_name,
  [4916] = 5,
    ACTIONS(767), 1,
      anon_sym_AT,
    ACTIONS(769), 1,
      aux_sym__originx_token1,
    ACTIONS(771), 1,
      aux_sym__originy_token1,
    STATE(347), 1,
      sym__originx,
    STATE(408), 1,
      sym__originy,
  [4932] = 5,
    ACTIONS(773), 1,
      anon_sym_input2,
    ACTIONS(775), 1,
      anon_sym_output2,
    ACTIONS(777), 1,
      anon_sym_parameter,
    ACTIONS(779), 1,
      anon_sym_light2,
    ACTIONS(781), 1,
      anon_sym_widget2,
  [4948] = 2,
    STATE(90), 1,
      sym_valign,
    ACTIONS(79), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4958] = 4,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    STATE(447), 1,
      sym__offset,
    STATE(353), 2,
      sym_polar,
      sym__relative,
  [4972] = 4,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    STATE(447), 1,
      sym__offset,
    STATE(352), 2,
      sym_polar,
      sym__relative,
  [4986] = 4,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    STATE(447), 1,
      sym__offset,
    STATE(351), 2,
      sym_polar,
      sym__relative,
  [5000] = 4,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    STATE(447), 1,
      sym__offset,
    STATE(350), 2,
      sym_polar,
      sym__relative,
  [5014] = 4,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    STATE(447), 1,
      sym__offset,
    STATE(349), 2,
      sym_polar,
      sym__relative,
  [5028] = 4,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    STATE(447), 1,
      sym__offset,
    STATE(348), 2,
      sym_polar,
      sym__relative,
  [5042] = 2,
    STATE(90), 1,
      sym_halign,
    ACTIONS(77), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [5052] = 4,
    ACTIONS(783), 1,
      anon_sym_DQUOTE,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      aux_sym__string_token1,
    STATE(185), 1,
      sym__string,
  [5065] = 4,
    ACTIONS(789), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      aux_sym__string_token1,
    STATE(69), 1,
      sym__string,
  [5078] = 2,
    STATE(74), 1,
      sym__geometry_y_attr,
    ACTIONS(795), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [5087] = 3,
    ACTIONS(797), 1,
      anon_sym_module2,
    ACTIONS(799), 1,
      anon_sym_panel,
    STATE(189), 2,
      sym__module_export,
      sym_panel,
  [5098] = 3,
    ACTIONS(801), 1,
      anon_sym_project,
    ACTIONS(803), 1,
      anon_sym_script,
    STATE(183), 2,
      sym_project,
      sym_script,
  [5109] = 4,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(805), 1,
      aux_sym__absolute_attr_token1,
    STATE(196), 1,
      sym_polar,
    STATE(430), 1,
      sym__absolute_x_attr,
  [5122] = 3,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
    STATE(371), 1,
      sym__component_xy_attr,
  [5132] = 3,
    ACTIONS(331), 1,
      sym_angle,
    ACTIONS(809), 1,
      aux_sym_absolute_token1,
    STATE(109), 1,
      sym_polar,
  [5142] = 3,
    ACTIONS(811), 1,
      anon_sym_font,
    ACTIONS(813), 1,
      anon_sym_project,
    ACTIONS(815), 1,
      anon_sym_script,
  [5152] = 3,
    ACTIONS(317), 1,
      sym_angle,
    ACTIONS(817), 1,
      aux_sym_absolute_token1,
    STATE(406), 1,
      sym_polar,
  [5162] = 1,
    ACTIONS(819), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [5168] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    ACTIONS(821), 1,
      aux_sym_origin_token1,
    STATE(175), 1,
      sym_offset,
  [5178] = 3,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(199), 1,
      sym__new_component,
  [5188] = 3,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(203), 1,
      sym__new_component,
  [5198] = 3,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      sym_polar,
  [5208] = 3,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(204), 1,
      sym__new_component,
  [5218] = 1,
    ACTIONS(97), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [5224] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    ACTIONS(827), 1,
      aux_sym_origin_token1,
    STATE(211), 1,
      sym_offset,
  [5234] = 3,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(206), 1,
      sym__new_component,
  [5244] = 2,
    ACTIONS(107), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(105), 2,
      anon_sym_RPAREN,
      sym_angle,
  [5252] = 3,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(208), 1,
      sym__new_component,
  [5262] = 3,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
    STATE(299), 1,
      sym_name,
    STATE(393), 1,
      sym__component_x_attr,
  [5272] = 3,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
    STATE(299), 1,
      sym_name,
    STATE(392), 1,
      sym__component_x_attr,
  [5282] = 3,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
    STATE(299), 1,
      sym_name,
    STATE(391), 1,
      sym__component_x_attr,
  [5292] = 3,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
    STATE(299), 1,
      sym_name,
    STATE(389), 1,
      sym__component_x_attr,
  [5302] = 3,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
    STATE(299), 1,
      sym_name,
    STATE(388), 1,
      sym__component_x_attr,
  [5312] = 3,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
    STATE(295), 1,
      sym_name,
    STATE(387), 1,
      sym__component_y_attr,
  [5322] = 3,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
    STATE(295), 1,
      sym_name,
    STATE(386), 1,
      sym__component_y_attr,
  [5332] = 3,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
    STATE(295), 1,
      sym_name,
    STATE(385), 1,
      sym__component_y_attr,
  [5342] = 3,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
    STATE(295), 1,
      sym_name,
    STATE(379), 1,
      sym__component_y_attr,
  [5352] = 3,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
    STATE(295), 1,
      sym_name,
    STATE(378), 1,
      sym__component_y_attr,
  [5362] = 3,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
    STATE(377), 1,
      sym__component_xy_attr,
  [5372] = 3,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
    STATE(375), 1,
      sym__component_xy_attr,
  [5382] = 3,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
    STATE(372), 1,
      sym__component_xy_attr,
  [5392] = 3,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
    STATE(370), 1,
      sym__component_xy_attr,
  [5402] = 3,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(831), 1,
      aux_sym_absolute_token1,
    STATE(365), 1,
      sym_polar,
  [5412] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      sym_offset,
  [5422] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(68), 1,
      sym_name,
    STATE(186), 1,
      sym_decoration,
  [5432] = 3,
    ACTIONS(41), 1,
      sym_angle,
    ACTIONS(837), 1,
      aux_sym_absolute_token1,
    STATE(28), 1,
      sym_polar,
  [5442] = 3,
    ACTIONS(839), 1,
      aux_sym__offset_attr_token1,
    STATE(136), 1,
      sym__offset_dxy_attr,
    STATE(458), 1,
      sym__offset_attr,
  [5452] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(185), 1,
      sym_colour,
  [5462] = 3,
    ACTIONS(839), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      sym__offset_attr,
  [5472] = 3,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      sym_polar,
  [5482] = 3,
    ACTIONS(215), 1,
      sym_angle,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      sym_polar,
  [5492] = 3,
    ACTIONS(847), 1,
      anon_sym_name,
    ACTIONS(849), 1,
      anon_sym_height,
    ACTIONS(851), 1,
      anon_sym_width,
  [5502] = 3,
    ACTIONS(839), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      sym__offset_attr,
  [5512] = 3,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    ACTIONS(857), 1,
      aux_sym__guide_id_token1,
    STATE(324), 1,
      sym__component_id,
  [5522] = 3,
    ACTIONS(859), 1,
      aux_sym__label_id_token1,
    ACTIONS(861), 1,
      anon_sym_DQUOTE,
    ACTIONS(863), 1,
      anon_sym_SQUOTE,
  [5532] = 3,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(68), 1,
      sym_name,
    STATE(157), 1,
      sym_decoration,
  [5542] = 3,
    ACTIONS(81), 1,
      aux_sym__input_id_token1,
    ACTIONS(865), 1,
      aux_sym_offset_token1,
    STATE(417), 1,
      sym_offset,
  [5552] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(226), 1,
      sym_name,
  [5559] = 2,
    ACTIONS(867), 1,
      aux_sym_absolute_token1,
    STATE(97), 1,
      sym_radius,
  [5566] = 2,
    ACTIONS(869), 1,
      aux_sym_absolute_token1,
    STATE(413), 1,
      sym_radius,
  [5573] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(248), 1,
      sym_name,
  [5580] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(249), 1,
      sym_name,
  [5587] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(250), 1,
      sym_name,
  [5594] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(251), 1,
      sym_name,
  [5601] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(252), 1,
      sym_name,
  [5608] = 2,
    ACTIONS(871), 1,
      sym_height,
    ACTIONS(873), 1,
      sym_width,
  [5615] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_name,
  [5622] = 2,
    ACTIONS(875), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_part,
  [5629] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(224), 1,
      sym_name,
  [5636] = 2,
    ACTIONS(699), 1,
      aux_sym_offset_token1,
    STATE(358), 1,
      sym__offset,
  [5643] = 2,
    ACTIONS(877), 1,
      aux_sym__input_id_token1,
    STATE(185), 1,
      sym_font,
  [5650] = 2,
    ACTIONS(839), 1,
      aux_sym__offset_attr_token1,
    STATE(399), 1,
      sym__offset_attr,
  [5657] = 2,
    ACTIONS(839), 1,
      aux_sym__offset_attr_token1,
    STATE(180), 1,
      sym__offset_attr,
  [5664] = 2,
    ACTIONS(771), 1,
      aux_sym__originy_token1,
    STATE(198), 1,
      sym__originy,
  [5671] = 1,
    ACTIONS(105), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [5676] = 2,
    ACTIONS(451), 1,
      anon_sym_scale,
    ACTIONS(453), 1,
      anon_sym_stretch,
  [5683] = 2,
    ACTIONS(879), 1,
      sym_rgb,
    ACTIONS(881), 1,
      sym_rgba,
  [5690] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(36), 1,
      sym_name,
  [5697] = 2,
    ACTIONS(883), 1,
      aux_sym__guide_attr_token1,
    STATE(200), 1,
      sym_identifier,
  [5704] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(247), 1,
      sym_name,
  [5711] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(227), 1,
      sym_name,
  [5718] = 2,
    ACTIONS(885), 1,
      aux_sym__guide_attr_token1,
    STATE(80), 1,
      sym__guide_attr,
  [5725] = 2,
    ACTIONS(839), 1,
      aux_sym__offset_attr_token1,
    STATE(126), 1,
      sym__offset_attr,
  [5732] = 2,
    ACTIONS(839), 1,
      aux_sym__offset_attr_token1,
    STATE(174), 1,
      sym__offset_attr,
  [5739] = 2,
    ACTIONS(239), 1,
      anon_sym_font,
    STATE(181), 1,
      sym__font_id,
  [5746] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(188), 1,
      sym_name,
  [5753] = 2,
    ACTIONS(279), 1,
      aux_sym__offset_attr_token1,
    STATE(184), 1,
      sym__relative_attr,
  [5760] = 2,
    ACTIONS(887), 1,
      aux_sym_absolute_token1,
    STATE(25), 1,
      sym_radius,
  [5767] = 2,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      sym_width,
  [5774] = 2,
    ACTIONS(769), 1,
      aux_sym__originx_token1,
    STATE(198), 1,
      sym__originx,
  [5781] = 2,
    ACTIONS(893), 1,
      aux_sym_absolute_token1,
    STATE(85), 1,
      sym_radius,
  [5788] = 2,
    ACTIONS(895), 1,
      aux_sym__absolute_attr_token1,
    STATE(140), 1,
      sym__absolute_y_attr,
  [5795] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(225), 1,
      sym_name,
  [5802] = 2,
    ACTIONS(897), 1,
      anon_sym_svg,
    STATE(153), 1,
      sym_svg,
  [5809] = 1,
    ACTIONS(899), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [5814] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(312), 1,
      sym_name,
  [5821] = 2,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
  [5828] = 2,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
  [5835] = 1,
    ACTIONS(901), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5840] = 1,
    ACTIONS(903), 1,
      anon_sym_SQUOTE,
  [5844] = 1,
    ACTIONS(905), 1,
      anon_sym_COMMA,
  [5848] = 1,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
  [5852] = 1,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
  [5856] = 1,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
  [5860] = 1,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
  [5864] = 1,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
  [5868] = 1,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
  [5872] = 1,
    ACTIONS(421), 1,
      anon_sym_with,
  [5876] = 1,
    ACTIONS(919), 1,
      anon_sym_COMMA,
  [5880] = 1,
    ACTIONS(921), 1,
      anon_sym_COMMA,
  [5884] = 1,
    ACTIONS(923), 1,
      aux_sym__label_id_token3,
  [5888] = 1,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
  [5892] = 1,
    ACTIONS(461), 1,
      anon_sym_with,
  [5896] = 1,
    ACTIONS(903), 1,
      anon_sym_DQUOTE,
  [5900] = 1,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
  [5904] = 1,
    ACTIONS(929), 1,
      aux_sym_absolute_token1,
  [5908] = 1,
    ACTIONS(145), 1,
      anon_sym_with,
  [5912] = 1,
    ACTIONS(931), 1,
      aux_sym_origin_token1,
  [5916] = 1,
    ACTIONS(149), 1,
      anon_sym_with,
  [5920] = 1,
    ACTIONS(933), 1,
      aux_sym_relative_token1,
  [5924] = 1,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [5928] = 1,
    ACTIONS(937), 1,
      aux_sym_origin_token1,
  [5932] = 1,
    ACTIONS(939), 1,
      anon_sym_COMMA,
  [5936] = 1,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
  [5940] = 1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [5944] = 1,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
  [5948] = 1,
    ACTIONS(947), 1,
      anon_sym_COMMA,
  [5952] = 1,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
  [5956] = 1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [5960] = 1,
    ACTIONS(953), 1,
      sym_height,
  [5964] = 1,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
  [5968] = 1,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
  [5972] = 1,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [5976] = 1,
    ACTIONS(953), 1,
      sym_width,
  [5980] = 1,
    ACTIONS(961), 1,
      aux_sym__label_id_token2,
  [5984] = 1,
    ACTIONS(963), 1,
      aux_sym__label_id_token3,
  [5988] = 1,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
  [5992] = 1,
    ACTIONS(967), 1,
      aux_sym__input_id_token1,
  [5996] = 1,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
  [6000] = 1,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
  [6004] = 1,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [6008] = 1,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [6012] = 1,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
  [6016] = 1,
    ACTIONS(979), 1,
      sym_fontsize,
  [6020] = 1,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
  [6024] = 1,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
  [6028] = 1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [6032] = 1,
    ACTIONS(987), 1,
      anon_sym_DQUOTE,
  [6036] = 1,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
  [6040] = 1,
    ACTIONS(417), 1,
      anon_sym_with,
  [6044] = 1,
    ACTIONS(991), 1,
      aux_sym__guide_id_token1,
  [6048] = 1,
    ACTIONS(993), 1,
      aux_sym__input_id_token1,
  [6052] = 1,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
  [6056] = 1,
    ACTIONS(987), 1,
      anon_sym_SQUOTE,
  [6060] = 1,
    ACTIONS(997), 1,
      aux_sym__input_id_token1,
  [6064] = 1,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
  [6068] = 1,
    ACTIONS(153), 1,
      aux_sym__input_id_token1,
  [6072] = 1,
    ACTIONS(1001), 1,
      aux_sym__absolute_attr_token1,
  [6076] = 1,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
  [6080] = 1,
    ACTIONS(149), 1,
      aux_sym__input_id_token1,
  [6084] = 1,
    ACTIONS(101), 1,
      aux_sym__input_id_token1,
  [6088] = 1,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
  [6092] = 1,
    ACTIONS(1007), 1,
      aux_sym__input_id_token1,
  [6096] = 1,
    ACTIONS(421), 1,
      aux_sym__input_id_token1,
  [6100] = 1,
    ACTIONS(145), 1,
      aux_sym__input_id_token1,
  [6104] = 1,
    ACTIONS(141), 1,
      aux_sym__input_id_token1,
  [6108] = 1,
    ACTIONS(137), 1,
      aux_sym__input_id_token1,
  [6112] = 1,
    ACTIONS(453), 1,
      anon_sym_stretch,
  [6116] = 1,
    ACTIONS(1009), 1,
      aux_sym__scale_token1,
  [6120] = 1,
    ACTIONS(133), 1,
      aux_sym__input_id_token1,
  [6124] = 1,
    ACTIONS(97), 1,
      aux_sym__input_id_token1,
  [6128] = 1,
    ACTIONS(417), 1,
      aux_sym__input_id_token1,
  [6132] = 1,
    ACTIONS(461), 1,
      aux_sym__input_id_token1,
  [6136] = 1,
    ACTIONS(1011), 1,
      aux_sym__input_id_token1,
  [6140] = 1,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
  [6144] = 1,
    ACTIONS(1015), 1,
      aux_sym__input_id_token1,
  [6148] = 1,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
  [6152] = 1,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
  [6156] = 1,
    ACTIONS(153), 1,
      anon_sym_with,
  [6160] = 1,
    ACTIONS(1021), 1,
      anon_sym_with,
  [6164] = 1,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
  [6168] = 1,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
  [6172] = 1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
  [6176] = 1,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
  [6180] = 1,
    ACTIONS(1031), 1,
      aux_sym_origin_token1,
  [6184] = 1,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
  [6188] = 1,
    ACTIONS(1035), 1,
      sym_rgb,
  [6192] = 1,
    ACTIONS(1035), 1,
      sym_rgba,
  [6196] = 1,
    ACTIONS(1037), 1,
      aux_sym_origin_token1,
  [6200] = 1,
    ACTIONS(1039), 1,
      aux_sym__input_id_token1,
  [6204] = 1,
    ACTIONS(133), 1,
      anon_sym_with,
  [6208] = 1,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
  [6212] = 1,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
  [6216] = 1,
    ACTIONS(1045), 1,
      ts_builtin_sym_end,
  [6220] = 1,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
  [6224] = 1,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
  [6228] = 1,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
  [6232] = 1,
    ACTIONS(1053), 1,
      aux_sym__guide_id_token1,
  [6236] = 1,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [6240] = 1,
    ACTIONS(1057), 1,
      aux_sym_relative_token1,
  [6244] = 1,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
  [6248] = 1,
    ACTIONS(1061), 1,
      anon_sym_COMMA,
  [6252] = 1,
    ACTIONS(1063), 1,
      anon_sym_DQUOTE,
  [6256] = 1,
    ACTIONS(1063), 1,
      anon_sym_SQUOTE,
  [6260] = 1,
    ACTIONS(1065), 1,
      aux_sym_absolute_token1,
  [6264] = 1,
    ACTIONS(1067), 1,
      sym_width,
  [6268] = 1,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
  [6272] = 1,
    ACTIONS(1071), 1,
      anon_sym_timestamp,
  [6276] = 1,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
  [6280] = 1,
    ACTIONS(1075), 1,
      aux_sym_relative_token1,
  [6284] = 1,
    ACTIONS(1071), 1,
      anon_sym_gzip,
  [6288] = 1,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
  [6292] = 1,
    ACTIONS(1079), 1,
      aux_sym_absolute_token1,
  [6296] = 1,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
  [6300] = 1,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
  [6304] = 1,
    ACTIONS(1085), 1,
      aux_sym__scale_token1,
  [6308] = 1,
    ACTIONS(1087), 1,
      aux_sym_relative_token1,
  [6312] = 1,
    ACTIONS(1089), 1,
      aux_sym__scale_token1,
  [6316] = 1,
    ACTIONS(1091), 1,
      aux_sym_absolute_token1,
  [6320] = 1,
    ACTIONS(1093), 1,
      aux_sym__label_id_token2,
  [6324] = 1,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
  [6328] = 1,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
  [6332] = 1,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
  [6336] = 1,
    ACTIONS(1101), 1,
      aux_sym__label_id_token2,
  [6340] = 1,
    ACTIONS(1103), 1,
      aux_sym__label_id_token3,
  [6344] = 1,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
  [6348] = 1,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
  [6352] = 1,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
  [6356] = 1,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
  [6360] = 1,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
  [6364] = 1,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
  [6368] = 1,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
  [6372] = 1,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
  [6376] = 1,
    ACTIONS(1121), 1,
      anon_sym_COMMA,
  [6380] = 1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
  [6384] = 1,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
  [6388] = 1,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
  [6392] = 1,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 230,
  [SMALL_STATE(7)] = 277,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 359,
  [SMALL_STATE(10)] = 406,
  [SMALL_STATE(11)] = 450,
  [SMALL_STATE(12)] = 494,
  [SMALL_STATE(13)] = 538,
  [SMALL_STATE(14)] = 582,
  [SMALL_STATE(15)] = 626,
  [SMALL_STATE(16)] = 655,
  [SMALL_STATE(17)] = 684,
  [SMALL_STATE(18)] = 712,
  [SMALL_STATE(19)] = 740,
  [SMALL_STATE(20)] = 768,
  [SMALL_STATE(21)] = 796,
  [SMALL_STATE(22)] = 824,
  [SMALL_STATE(23)] = 852,
  [SMALL_STATE(24)] = 880,
  [SMALL_STATE(25)] = 908,
  [SMALL_STATE(26)] = 936,
  [SMALL_STATE(27)] = 964,
  [SMALL_STATE(28)] = 992,
  [SMALL_STATE(29)] = 1020,
  [SMALL_STATE(30)] = 1048,
  [SMALL_STATE(31)] = 1075,
  [SMALL_STATE(32)] = 1102,
  [SMALL_STATE(33)] = 1129,
  [SMALL_STATE(34)] = 1175,
  [SMALL_STATE(35)] = 1221,
  [SMALL_STATE(36)] = 1262,
  [SMALL_STATE(37)] = 1285,
  [SMALL_STATE(38)] = 1324,
  [SMALL_STATE(39)] = 1365,
  [SMALL_STATE(40)] = 1406,
  [SMALL_STATE(41)] = 1445,
  [SMALL_STATE(42)] = 1468,
  [SMALL_STATE(43)] = 1490,
  [SMALL_STATE(44)] = 1512,
  [SMALL_STATE(45)] = 1534,
  [SMALL_STATE(46)] = 1568,
  [SMALL_STATE(47)] = 1590,
  [SMALL_STATE(48)] = 1612,
  [SMALL_STATE(49)] = 1643,
  [SMALL_STATE(50)] = 1676,
  [SMALL_STATE(51)] = 1709,
  [SMALL_STATE(52)] = 1742,
  [SMALL_STATE(53)] = 1760,
  [SMALL_STATE(54)] = 1788,
  [SMALL_STATE(55)] = 1809,
  [SMALL_STATE(56)] = 1830,
  [SMALL_STATE(57)] = 1851,
  [SMALL_STATE(58)] = 1870,
  [SMALL_STATE(59)] = 1901,
  [SMALL_STATE(60)] = 1924,
  [SMALL_STATE(61)] = 1955,
  [SMALL_STATE(62)] = 1978,
  [SMALL_STATE(63)] = 2001,
  [SMALL_STATE(64)] = 2024,
  [SMALL_STATE(65)] = 2055,
  [SMALL_STATE(66)] = 2078,
  [SMALL_STATE(67)] = 2101,
  [SMALL_STATE(68)] = 2124,
  [SMALL_STATE(69)] = 2147,
  [SMALL_STATE(70)] = 2178,
  [SMALL_STATE(71)] = 2197,
  [SMALL_STATE(72)] = 2216,
  [SMALL_STATE(73)] = 2237,
  [SMALL_STATE(74)] = 2253,
  [SMALL_STATE(75)] = 2273,
  [SMALL_STATE(76)] = 2293,
  [SMALL_STATE(77)] = 2321,
  [SMALL_STATE(78)] = 2341,
  [SMALL_STATE(79)] = 2369,
  [SMALL_STATE(80)] = 2385,
  [SMALL_STATE(81)] = 2405,
  [SMALL_STATE(82)] = 2421,
  [SMALL_STATE(83)] = 2439,
  [SMALL_STATE(84)] = 2457,
  [SMALL_STATE(85)] = 2485,
  [SMALL_STATE(86)] = 2501,
  [SMALL_STATE(87)] = 2521,
  [SMALL_STATE(88)] = 2541,
  [SMALL_STATE(89)] = 2563,
  [SMALL_STATE(90)] = 2583,
  [SMALL_STATE(91)] = 2601,
  [SMALL_STATE(92)] = 2616,
  [SMALL_STATE(93)] = 2643,
  [SMALL_STATE(94)] = 2660,
  [SMALL_STATE(95)] = 2677,
  [SMALL_STATE(96)] = 2694,
  [SMALL_STATE(97)] = 2721,
  [SMALL_STATE(98)] = 2738,
  [SMALL_STATE(99)] = 2753,
  [SMALL_STATE(100)] = 2770,
  [SMALL_STATE(101)] = 2787,
  [SMALL_STATE(102)] = 2804,
  [SMALL_STATE(103)] = 2821,
  [SMALL_STATE(104)] = 2838,
  [SMALL_STATE(105)] = 2853,
  [SMALL_STATE(106)] = 2870,
  [SMALL_STATE(107)] = 2887,
  [SMALL_STATE(108)] = 2902,
  [SMALL_STATE(109)] = 2917,
  [SMALL_STATE(110)] = 2934,
  [SMALL_STATE(111)] = 2951,
  [SMALL_STATE(112)] = 2968,
  [SMALL_STATE(113)] = 2995,
  [SMALL_STATE(114)] = 3012,
  [SMALL_STATE(115)] = 3041,
  [SMALL_STATE(116)] = 3058,
  [SMALL_STATE(117)] = 3075,
  [SMALL_STATE(118)] = 3092,
  [SMALL_STATE(119)] = 3107,
  [SMALL_STATE(120)] = 3121,
  [SMALL_STATE(121)] = 3135,
  [SMALL_STATE(122)] = 3149,
  [SMALL_STATE(123)] = 3163,
  [SMALL_STATE(124)] = 3177,
  [SMALL_STATE(125)] = 3191,
  [SMALL_STATE(126)] = 3205,
  [SMALL_STATE(127)] = 3219,
  [SMALL_STATE(128)] = 3235,
  [SMALL_STATE(129)] = 3249,
  [SMALL_STATE(130)] = 3263,
  [SMALL_STATE(131)] = 3277,
  [SMALL_STATE(132)] = 3291,
  [SMALL_STATE(133)] = 3305,
  [SMALL_STATE(134)] = 3319,
  [SMALL_STATE(135)] = 3333,
  [SMALL_STATE(136)] = 3365,
  [SMALL_STATE(137)] = 3379,
  [SMALL_STATE(138)] = 3401,
  [SMALL_STATE(139)] = 3415,
  [SMALL_STATE(140)] = 3429,
  [SMALL_STATE(141)] = 3443,
  [SMALL_STATE(142)] = 3459,
  [SMALL_STATE(143)] = 3473,
  [SMALL_STATE(144)] = 3487,
  [SMALL_STATE(145)] = 3501,
  [SMALL_STATE(146)] = 3515,
  [SMALL_STATE(147)] = 3529,
  [SMALL_STATE(148)] = 3543,
  [SMALL_STATE(149)] = 3557,
  [SMALL_STATE(150)] = 3571,
  [SMALL_STATE(151)] = 3585,
  [SMALL_STATE(152)] = 3599,
  [SMALL_STATE(153)] = 3613,
  [SMALL_STATE(154)] = 3627,
  [SMALL_STATE(155)] = 3641,
  [SMALL_STATE(156)] = 3655,
  [SMALL_STATE(157)] = 3669,
  [SMALL_STATE(158)] = 3683,
  [SMALL_STATE(159)] = 3697,
  [SMALL_STATE(160)] = 3711,
  [SMALL_STATE(161)] = 3725,
  [SMALL_STATE(162)] = 3739,
  [SMALL_STATE(163)] = 3753,
  [SMALL_STATE(164)] = 3767,
  [SMALL_STATE(165)] = 3781,
  [SMALL_STATE(166)] = 3795,
  [SMALL_STATE(167)] = 3809,
  [SMALL_STATE(168)] = 3823,
  [SMALL_STATE(169)] = 3837,
  [SMALL_STATE(170)] = 3851,
  [SMALL_STATE(171)] = 3865,
  [SMALL_STATE(172)] = 3879,
  [SMALL_STATE(173)] = 3893,
  [SMALL_STATE(174)] = 3907,
  [SMALL_STATE(175)] = 3921,
  [SMALL_STATE(176)] = 3935,
  [SMALL_STATE(177)] = 3949,
  [SMALL_STATE(178)] = 3963,
  [SMALL_STATE(179)] = 3977,
  [SMALL_STATE(180)] = 3991,
  [SMALL_STATE(181)] = 4005,
  [SMALL_STATE(182)] = 4019,
  [SMALL_STATE(183)] = 4033,
  [SMALL_STATE(184)] = 4047,
  [SMALL_STATE(185)] = 4061,
  [SMALL_STATE(186)] = 4075,
  [SMALL_STATE(187)] = 4089,
  [SMALL_STATE(188)] = 4103,
  [SMALL_STATE(189)] = 4117,
  [SMALL_STATE(190)] = 4131,
  [SMALL_STATE(191)] = 4145,
  [SMALL_STATE(192)] = 4159,
  [SMALL_STATE(193)] = 4173,
  [SMALL_STATE(194)] = 4187,
  [SMALL_STATE(195)] = 4201,
  [SMALL_STATE(196)] = 4215,
  [SMALL_STATE(197)] = 4229,
  [SMALL_STATE(198)] = 4243,
  [SMALL_STATE(199)] = 4257,
  [SMALL_STATE(200)] = 4271,
  [SMALL_STATE(201)] = 4285,
  [SMALL_STATE(202)] = 4299,
  [SMALL_STATE(203)] = 4313,
  [SMALL_STATE(204)] = 4327,
  [SMALL_STATE(205)] = 4341,
  [SMALL_STATE(206)] = 4355,
  [SMALL_STATE(207)] = 4369,
  [SMALL_STATE(208)] = 4383,
  [SMALL_STATE(209)] = 4397,
  [SMALL_STATE(210)] = 4411,
  [SMALL_STATE(211)] = 4425,
  [SMALL_STATE(212)] = 4439,
  [SMALL_STATE(213)] = 4453,
  [SMALL_STATE(214)] = 4467,
  [SMALL_STATE(215)] = 4481,
  [SMALL_STATE(216)] = 4495,
  [SMALL_STATE(217)] = 4509,
  [SMALL_STATE(218)] = 4532,
  [SMALL_STATE(219)] = 4554,
  [SMALL_STATE(220)] = 4568,
  [SMALL_STATE(221)] = 4594,
  [SMALL_STATE(222)] = 4608,
  [SMALL_STATE(223)] = 4629,
  [SMALL_STATE(224)] = 4646,
  [SMALL_STATE(225)] = 4663,
  [SMALL_STATE(226)] = 4680,
  [SMALL_STATE(227)] = 4697,
  [SMALL_STATE(228)] = 4714,
  [SMALL_STATE(229)] = 4731,
  [SMALL_STATE(230)] = 4750,
  [SMALL_STATE(231)] = 4766,
  [SMALL_STATE(232)] = 4776,
  [SMALL_STATE(233)] = 4786,
  [SMALL_STATE(234)] = 4796,
  [SMALL_STATE(235)] = 4812,
  [SMALL_STATE(236)] = 4822,
  [SMALL_STATE(237)] = 4832,
  [SMALL_STATE(238)] = 4842,
  [SMALL_STATE(239)] = 4854,
  [SMALL_STATE(240)] = 4864,
  [SMALL_STATE(241)] = 4880,
  [SMALL_STATE(242)] = 4890,
  [SMALL_STATE(243)] = 4900,
  [SMALL_STATE(244)] = 4916,
  [SMALL_STATE(245)] = 4932,
  [SMALL_STATE(246)] = 4948,
  [SMALL_STATE(247)] = 4958,
  [SMALL_STATE(248)] = 4972,
  [SMALL_STATE(249)] = 4986,
  [SMALL_STATE(250)] = 5000,
  [SMALL_STATE(251)] = 5014,
  [SMALL_STATE(252)] = 5028,
  [SMALL_STATE(253)] = 5042,
  [SMALL_STATE(254)] = 5052,
  [SMALL_STATE(255)] = 5065,
  [SMALL_STATE(256)] = 5078,
  [SMALL_STATE(257)] = 5087,
  [SMALL_STATE(258)] = 5098,
  [SMALL_STATE(259)] = 5109,
  [SMALL_STATE(260)] = 5122,
  [SMALL_STATE(261)] = 5132,
  [SMALL_STATE(262)] = 5142,
  [SMALL_STATE(263)] = 5152,
  [SMALL_STATE(264)] = 5162,
  [SMALL_STATE(265)] = 5168,
  [SMALL_STATE(266)] = 5178,
  [SMALL_STATE(267)] = 5188,
  [SMALL_STATE(268)] = 5198,
  [SMALL_STATE(269)] = 5208,
  [SMALL_STATE(270)] = 5218,
  [SMALL_STATE(271)] = 5224,
  [SMALL_STATE(272)] = 5234,
  [SMALL_STATE(273)] = 5244,
  [SMALL_STATE(274)] = 5252,
  [SMALL_STATE(275)] = 5262,
  [SMALL_STATE(276)] = 5272,
  [SMALL_STATE(277)] = 5282,
  [SMALL_STATE(278)] = 5292,
  [SMALL_STATE(279)] = 5302,
  [SMALL_STATE(280)] = 5312,
  [SMALL_STATE(281)] = 5322,
  [SMALL_STATE(282)] = 5332,
  [SMALL_STATE(283)] = 5342,
  [SMALL_STATE(284)] = 5352,
  [SMALL_STATE(285)] = 5362,
  [SMALL_STATE(286)] = 5372,
  [SMALL_STATE(287)] = 5382,
  [SMALL_STATE(288)] = 5392,
  [SMALL_STATE(289)] = 5402,
  [SMALL_STATE(290)] = 5412,
  [SMALL_STATE(291)] = 5422,
  [SMALL_STATE(292)] = 5432,
  [SMALL_STATE(293)] = 5442,
  [SMALL_STATE(294)] = 5452,
  [SMALL_STATE(295)] = 5462,
  [SMALL_STATE(296)] = 5472,
  [SMALL_STATE(297)] = 5482,
  [SMALL_STATE(298)] = 5492,
  [SMALL_STATE(299)] = 5502,
  [SMALL_STATE(300)] = 5512,
  [SMALL_STATE(301)] = 5522,
  [SMALL_STATE(302)] = 5532,
  [SMALL_STATE(303)] = 5542,
  [SMALL_STATE(304)] = 5552,
  [SMALL_STATE(305)] = 5559,
  [SMALL_STATE(306)] = 5566,
  [SMALL_STATE(307)] = 5573,
  [SMALL_STATE(308)] = 5580,
  [SMALL_STATE(309)] = 5587,
  [SMALL_STATE(310)] = 5594,
  [SMALL_STATE(311)] = 5601,
  [SMALL_STATE(312)] = 5608,
  [SMALL_STATE(313)] = 5615,
  [SMALL_STATE(314)] = 5622,
  [SMALL_STATE(315)] = 5629,
  [SMALL_STATE(316)] = 5636,
  [SMALL_STATE(317)] = 5643,
  [SMALL_STATE(318)] = 5650,
  [SMALL_STATE(319)] = 5657,
  [SMALL_STATE(320)] = 5664,
  [SMALL_STATE(321)] = 5671,
  [SMALL_STATE(322)] = 5676,
  [SMALL_STATE(323)] = 5683,
  [SMALL_STATE(324)] = 5690,
  [SMALL_STATE(325)] = 5697,
  [SMALL_STATE(326)] = 5704,
  [SMALL_STATE(327)] = 5711,
  [SMALL_STATE(328)] = 5718,
  [SMALL_STATE(329)] = 5725,
  [SMALL_STATE(330)] = 5732,
  [SMALL_STATE(331)] = 5739,
  [SMALL_STATE(332)] = 5746,
  [SMALL_STATE(333)] = 5753,
  [SMALL_STATE(334)] = 5760,
  [SMALL_STATE(335)] = 5767,
  [SMALL_STATE(336)] = 5774,
  [SMALL_STATE(337)] = 5781,
  [SMALL_STATE(338)] = 5788,
  [SMALL_STATE(339)] = 5795,
  [SMALL_STATE(340)] = 5802,
  [SMALL_STATE(341)] = 5809,
  [SMALL_STATE(342)] = 5814,
  [SMALL_STATE(343)] = 5821,
  [SMALL_STATE(344)] = 5828,
  [SMALL_STATE(345)] = 5835,
  [SMALL_STATE(346)] = 5840,
  [SMALL_STATE(347)] = 5844,
  [SMALL_STATE(348)] = 5848,
  [SMALL_STATE(349)] = 5852,
  [SMALL_STATE(350)] = 5856,
  [SMALL_STATE(351)] = 5860,
  [SMALL_STATE(352)] = 5864,
  [SMALL_STATE(353)] = 5868,
  [SMALL_STATE(354)] = 5872,
  [SMALL_STATE(355)] = 5876,
  [SMALL_STATE(356)] = 5880,
  [SMALL_STATE(357)] = 5884,
  [SMALL_STATE(358)] = 5888,
  [SMALL_STATE(359)] = 5892,
  [SMALL_STATE(360)] = 5896,
  [SMALL_STATE(361)] = 5900,
  [SMALL_STATE(362)] = 5904,
  [SMALL_STATE(363)] = 5908,
  [SMALL_STATE(364)] = 5912,
  [SMALL_STATE(365)] = 5916,
  [SMALL_STATE(366)] = 5920,
  [SMALL_STATE(367)] = 5924,
  [SMALL_STATE(368)] = 5928,
  [SMALL_STATE(369)] = 5932,
  [SMALL_STATE(370)] = 5936,
  [SMALL_STATE(371)] = 5940,
  [SMALL_STATE(372)] = 5944,
  [SMALL_STATE(373)] = 5948,
  [SMALL_STATE(374)] = 5952,
  [SMALL_STATE(375)] = 5956,
  [SMALL_STATE(376)] = 5960,
  [SMALL_STATE(377)] = 5964,
  [SMALL_STATE(378)] = 5968,
  [SMALL_STATE(379)] = 5972,
  [SMALL_STATE(380)] = 5976,
  [SMALL_STATE(381)] = 5980,
  [SMALL_STATE(382)] = 5984,
  [SMALL_STATE(383)] = 5988,
  [SMALL_STATE(384)] = 5992,
  [SMALL_STATE(385)] = 5996,
  [SMALL_STATE(386)] = 6000,
  [SMALL_STATE(387)] = 6004,
  [SMALL_STATE(388)] = 6008,
  [SMALL_STATE(389)] = 6012,
  [SMALL_STATE(390)] = 6016,
  [SMALL_STATE(391)] = 6020,
  [SMALL_STATE(392)] = 6024,
  [SMALL_STATE(393)] = 6028,
  [SMALL_STATE(394)] = 6032,
  [SMALL_STATE(395)] = 6036,
  [SMALL_STATE(396)] = 6040,
  [SMALL_STATE(397)] = 6044,
  [SMALL_STATE(398)] = 6048,
  [SMALL_STATE(399)] = 6052,
  [SMALL_STATE(400)] = 6056,
  [SMALL_STATE(401)] = 6060,
  [SMALL_STATE(402)] = 6064,
  [SMALL_STATE(403)] = 6068,
  [SMALL_STATE(404)] = 6072,
  [SMALL_STATE(405)] = 6076,
  [SMALL_STATE(406)] = 6080,
  [SMALL_STATE(407)] = 6084,
  [SMALL_STATE(408)] = 6088,
  [SMALL_STATE(409)] = 6092,
  [SMALL_STATE(410)] = 6096,
  [SMALL_STATE(411)] = 6100,
  [SMALL_STATE(412)] = 6104,
  [SMALL_STATE(413)] = 6108,
  [SMALL_STATE(414)] = 6112,
  [SMALL_STATE(415)] = 6116,
  [SMALL_STATE(416)] = 6120,
  [SMALL_STATE(417)] = 6124,
  [SMALL_STATE(418)] = 6128,
  [SMALL_STATE(419)] = 6132,
  [SMALL_STATE(420)] = 6136,
  [SMALL_STATE(421)] = 6140,
  [SMALL_STATE(422)] = 6144,
  [SMALL_STATE(423)] = 6148,
  [SMALL_STATE(424)] = 6152,
  [SMALL_STATE(425)] = 6156,
  [SMALL_STATE(426)] = 6160,
  [SMALL_STATE(427)] = 6164,
  [SMALL_STATE(428)] = 6168,
  [SMALL_STATE(429)] = 6172,
  [SMALL_STATE(430)] = 6176,
  [SMALL_STATE(431)] = 6180,
  [SMALL_STATE(432)] = 6184,
  [SMALL_STATE(433)] = 6188,
  [SMALL_STATE(434)] = 6192,
  [SMALL_STATE(435)] = 6196,
  [SMALL_STATE(436)] = 6200,
  [SMALL_STATE(437)] = 6204,
  [SMALL_STATE(438)] = 6208,
  [SMALL_STATE(439)] = 6212,
  [SMALL_STATE(440)] = 6216,
  [SMALL_STATE(441)] = 6220,
  [SMALL_STATE(442)] = 6224,
  [SMALL_STATE(443)] = 6228,
  [SMALL_STATE(444)] = 6232,
  [SMALL_STATE(445)] = 6236,
  [SMALL_STATE(446)] = 6240,
  [SMALL_STATE(447)] = 6244,
  [SMALL_STATE(448)] = 6248,
  [SMALL_STATE(449)] = 6252,
  [SMALL_STATE(450)] = 6256,
  [SMALL_STATE(451)] = 6260,
  [SMALL_STATE(452)] = 6264,
  [SMALL_STATE(453)] = 6268,
  [SMALL_STATE(454)] = 6272,
  [SMALL_STATE(455)] = 6276,
  [SMALL_STATE(456)] = 6280,
  [SMALL_STATE(457)] = 6284,
  [SMALL_STATE(458)] = 6288,
  [SMALL_STATE(459)] = 6292,
  [SMALL_STATE(460)] = 6296,
  [SMALL_STATE(461)] = 6300,
  [SMALL_STATE(462)] = 6304,
  [SMALL_STATE(463)] = 6308,
  [SMALL_STATE(464)] = 6312,
  [SMALL_STATE(465)] = 6316,
  [SMALL_STATE(466)] = 6320,
  [SMALL_STATE(467)] = 6324,
  [SMALL_STATE(468)] = 6328,
  [SMALL_STATE(469)] = 6332,
  [SMALL_STATE(470)] = 6336,
  [SMALL_STATE(471)] = 6340,
  [SMALL_STATE(472)] = 6344,
  [SMALL_STATE(473)] = 6348,
  [SMALL_STATE(474)] = 6352,
  [SMALL_STATE(475)] = 6356,
  [SMALL_STATE(476)] = 6360,
  [SMALL_STATE(477)] = 6364,
  [SMALL_STATE(478)] = 6368,
  [SMALL_STATE(479)] = 6372,
  [SMALL_STATE(480)] = 6376,
  [SMALL_STATE(481)] = 6380,
  [SMALL_STATE(482)] = 6384,
  [SMALL_STATE(483)] = 6388,
  [SMALL_STATE(484)] = 6392,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polar, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_polar, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_radius, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_radius, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(34),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(37),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(60),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(40),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(262),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(331),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(258),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(257),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(264),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 17),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 17),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 5),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 6),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 13),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 14),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 10),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 28),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 4, .production_id = 17),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 4, .production_id = 17),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 9),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 22),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 21),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 20),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 19),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 22),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 21),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 22),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 21),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 11),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_dxy_attr, 3, .production_id = 18),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 17),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 16),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 2, .production_id = 9),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 9),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_output, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_parameter, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_light, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_widget, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 12),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 13),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 14),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 11),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 17),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [1045] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
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
