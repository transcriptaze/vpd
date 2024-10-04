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
#define STATE_COUNT 475
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 1
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  [47] = 43,
  [48] = 43,
  [49] = 49,
  [50] = 15,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 10,
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
  [90] = 17,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 16,
  [97] = 15,
  [98] = 98,
  [99] = 14,
  [100] = 22,
  [101] = 26,
  [102] = 102,
  [103] = 20,
  [104] = 18,
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
  [123] = 118,
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
  [204] = 124,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 122,
  [209] = 19,
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
  [222] = 10,
  [223] = 223,
  [224] = 223,
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
  [235] = 223,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 239,
  [241] = 239,
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
  [259] = 10,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 263,
  [265] = 265,
  [266] = 265,
  [267] = 267,
  [268] = 18,
  [269] = 263,
  [270] = 265,
  [271] = 271,
  [272] = 263,
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
  [298] = 297,
  [299] = 299,
  [300] = 300,
  [301] = 297,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 19,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 297,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 22,
  [331] = 331,
  [332] = 26,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 14,
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
  [358] = 358,
  [359] = 359,
  [360] = 94,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 98,
  [365] = 365,
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
  [378] = 16,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 107,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 17,
  [396] = 396,
  [397] = 397,
  [398] = 16,
  [399] = 15,
  [400] = 400,
  [401] = 98,
  [402] = 14,
  [403] = 22,
  [404] = 26,
  [405] = 405,
  [406] = 406,
  [407] = 20,
  [408] = 18,
  [409] = 107,
  [410] = 94,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 17,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 385,
  [435] = 370,
  [436] = 346,
  [437] = 437,
  [438] = 438,
  [439] = 358,
  [440] = 357,
  [441] = 345,
  [442] = 442,
  [443] = 384,
  [444] = 444,
  [445] = 370,
  [446] = 346,
  [447] = 447,
  [448] = 448,
  [449] = 345,
  [450] = 20,
  [451] = 384,
  [452] = 452,
  [453] = 346,
  [454] = 454,
  [455] = 345,
  [456] = 456,
  [457] = 419,
  [458] = 418,
  [459] = 415,
  [460] = 391,
  [461] = 356,
  [462] = 377,
  [463] = 463,
  [464] = 464,
  [465] = 419,
  [466] = 418,
  [467] = 415,
  [468] = 377,
  [469] = 469,
  [470] = 419,
  [471] = 418,
  [472] = 377,
  [473] = 376,
  [474] = 376,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(628);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(411);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '0') ADVANCE(446);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '@') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(349);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(251);
      if (lookahead == 'v') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == 'x') ADVANCE(418);
      if (lookahead == 'y') ADVANCE(419);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(399);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(408);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(405);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(400);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(406);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == 's') ADVANCE(655);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(628);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(686);
      if (lookahead != 0) ADVANCE(687);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(630);
      if (lookahead == '\'') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(626);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(556);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(411);
      if (lookahead == '@') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == '@') ADVANCE(452);
      if (lookahead == 'b') ADVANCE(518);
      if (lookahead == 'm') ADVANCE(505);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == '@') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(411);
      if (lookahead == '@') ADVANCE(452);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(364);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(685);
      if (lookahead == 'm') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'U') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '5') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'H') ADVANCE(680);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 176) ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(689);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '8') ADVANCE(31);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == '8') ADVANCE(52);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'm') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'm') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == '1') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(518);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(519);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'm') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == 'v') ADVANCE(494);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'U') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == '5') ADVANCE(49);
      if (lookahead == 'H') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == '5') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 43:
      if (lookahead == '5') ADVANCE(234);
      END_STATE();
    case 44:
      if (lookahead == '5') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 45:
      if (lookahead == '5') ADVANCE(234);
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 46:
      if (lookahead == ';') ADVANCE(398);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(650);
      END_STATE();
    case 48:
      if (lookahead == '@') ADVANCE(452);
      if (lookahead == 'b') ADVANCE(518);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'm') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 49:
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'm') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 'H') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'H') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == 'H') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(430);
      if (lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(133);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(515);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead == 'p') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead == 'w') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(639);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(643);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(669);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(430);
      if (lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(312);
      END_STATE();
    case 152:
      if (lookahead == 'f') ADVANCE(325);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(676);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(692);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(172);
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(294);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(144);
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 168:
      if (lookahead == 'h') ADVANCE(649);
      END_STATE();
    case 169:
      if (lookahead == 'h') ADVANCE(409);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(417);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(664);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(331);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 199:
      if (lookahead == 'j') ADVANCE(117);
      END_STATE();
    case 200:
      if (lookahead == 'k') ADVANCE(677);
      END_STATE();
    case 201:
      if (lookahead == 'k') ADVANCE(159);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(625);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(675);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(681);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(683);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(477);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(666);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(685);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(679);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(678);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(668);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(688);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(453);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(689);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(468);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(638);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 274:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 275:
      if (lookahead == 'p') ADVANCE(471);
      END_STATE();
    case 276:
      if (lookahead == 'p') ADVANCE(657);
      END_STATE();
    case 277:
      if (lookahead == 'p') ADVANCE(656);
      END_STATE();
    case 278:
      if (lookahead == 'p') ADVANCE(668);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 303:
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 304:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 305:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(651);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(642);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(667);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 348:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 349:
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == 'z') ADVANCE(186);
      END_STATE();
    case 350:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 351:
      if (lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 352:
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 353:
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 354:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 355:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 356:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 357:
      if (lookahead == 'u') ADVANCE(347);
      END_STATE();
    case 358:
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 359:
      if (lookahead == 'w') ADVANCE(1);
      END_STATE();
    case 360:
      if (lookahead == 'x') ADVANCE(281);
      END_STATE();
    case 361:
      if (lookahead == 'x') ADVANCE(314);
      END_STATE();
    case 362:
      if (lookahead == 'z') ADVANCE(114);
      END_STATE();
    case 363:
      if (lookahead == 'z') ADVANCE(270);
      END_STATE();
    case 364:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 366:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(685);
      if (lookahead == 'm') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(689);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == 176) ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(369)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 370:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 371:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 372:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      END_STATE();
    case 373:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(673);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(674);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(672);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 383:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 391:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 392:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == ')') ADVANCE(411);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead == 'c') ADVANCE(578);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(586);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead == 's') ADVANCE(560);
      if (lookahead == 't') ADVANCE(600);
      if (lookahead == 'u') ADVANCE(594);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(392)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 393:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == 's') ADVANCE(560);
      if (lookahead == 'u') ADVANCE(594);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(393)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 394:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(411);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(251);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == 'x') ADVANCE(418);
      if (lookahead == 'y') ADVANCE(419);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 395:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ')') ADVANCE(411);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '@') ADVANCE(452);
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 'g') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == 'u') ADVANCE(251);
      if (lookahead == 'w') ADVANCE(182);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 396:
      if (eof) ADVANCE(397);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(251);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__new_parameter_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_module2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_dx);
      if (lookahead == 'y') ADVANCE(432);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_dy);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_dxy);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_input2);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_input2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_output2);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_output2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_light2);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_light2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_widget2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_widget2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'H') ADVANCE(445);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(449);
      if (lookahead == 'H') ADVANCE(445);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(445);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(445);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(453);
      if (lookahead == 'm') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(453);
      if (lookahead == 'm') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead == 'H') ADVANCE(468);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(468);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == 'i') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'r') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == 'H') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(598);
      if (lookahead == 'l') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(630);
      if (lookahead == '\'') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(627);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(627);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(627);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(637);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_decoration2);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(234);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '\'') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == '5') ADVANCE(234);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 392},
  [3] = {.lex_state = 392},
  [4] = {.lex_state = 394},
  [5] = {.lex_state = 394},
  [6] = {.lex_state = 394},
  [7] = {.lex_state = 394},
  [8] = {.lex_state = 394},
  [9] = {.lex_state = 394},
  [10] = {.lex_state = 392},
  [11] = {.lex_state = 394},
  [12] = {.lex_state = 392},
  [13] = {.lex_state = 392},
  [14] = {.lex_state = 392},
  [15] = {.lex_state = 392},
  [16] = {.lex_state = 392},
  [17] = {.lex_state = 392},
  [18] = {.lex_state = 392},
  [19] = {.lex_state = 394},
  [20] = {.lex_state = 392},
  [21] = {.lex_state = 392},
  [22] = {.lex_state = 392},
  [23] = {.lex_state = 392},
  [24] = {.lex_state = 392},
  [25] = {.lex_state = 392},
  [26] = {.lex_state = 392},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 394},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 395},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 394},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 81},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 81},
  [48] = {.lex_state = 81},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 395},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 394},
  [60] = {.lex_state = 394},
  [61] = {.lex_state = 393},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 394},
  [71] = {.lex_state = 395},
  [72] = {.lex_state = 396},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 394},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 393},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 394},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 393},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 393},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 393},
  [97] = {.lex_state = 393},
  [98] = {.lex_state = 393},
  [99] = {.lex_state = 393},
  [100] = {.lex_state = 393},
  [101] = {.lex_state = 393},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 393},
  [104] = {.lex_state = 393},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 396},
  [107] = {.lex_state = 393},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 48},
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
  [137] = {.lex_state = 394},
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
  [204] = {.lex_state = 39},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 394},
  [207] = {.lex_state = 21},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 21},
  [212] = {.lex_state = 392},
  [213] = {.lex_state = 394},
  [214] = {.lex_state = 392},
  [215] = {.lex_state = 392},
  [216] = {.lex_state = 392},
  [217] = {.lex_state = 392},
  [218] = {.lex_state = 394},
  [219] = {.lex_state = 13},
  [220] = {.lex_state = 392},
  [221] = {.lex_state = 392},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 18},
  [225] = {.lex_state = 394},
  [226] = {.lex_state = 394},
  [227] = {.lex_state = 394},
  [228] = {.lex_state = 392},
  [229] = {.lex_state = 392},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 394},
  [232] = {.lex_state = 394},
  [233] = {.lex_state = 392},
  [234] = {.lex_state = 395},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 392},
  [238] = {.lex_state = 394},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 18},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 394},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 20},
  [249] = {.lex_state = 14},
  [250] = {.lex_state = 392},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 392},
  [253] = {.lex_state = 17},
  [254] = {.lex_state = 17},
  [255] = {.lex_state = 17},
  [256] = {.lex_state = 14},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 12},
  [259] = {.lex_state = 14},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 14},
  [262] = {.lex_state = 392},
  [263] = {.lex_state = 395},
  [264] = {.lex_state = 395},
  [265] = {.lex_state = 392},
  [266] = {.lex_state = 392},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 395},
  [269] = {.lex_state = 395},
  [270] = {.lex_state = 392},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 395},
  [273] = {.lex_state = 395},
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
  [289] = {.lex_state = 14},
  [290] = {.lex_state = 14},
  [291] = {.lex_state = 17},
  [292] = {.lex_state = 392},
  [293] = {.lex_state = 369},
  [294] = {.lex_state = 39},
  [295] = {.lex_state = 14},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 395},
  [298] = {.lex_state = 395},
  [299] = {.lex_state = 14},
  [300] = {.lex_state = 17},
  [301] = {.lex_state = 395},
  [302] = {.lex_state = 14},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 14},
  [305] = {.lex_state = 17},
  [306] = {.lex_state = 81},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 369},
  [309] = {.lex_state = 395},
  [310] = {.lex_state = 395},
  [311] = {.lex_state = 14},
  [312] = {.lex_state = 14},
  [313] = {.lex_state = 17},
  [314] = {.lex_state = 14},
  [315] = {.lex_state = 392},
  [316] = {.lex_state = 395},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 17},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 17},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 14},
  [324] = {.lex_state = 14},
  [325] = {.lex_state = 394},
  [326] = {.lex_state = 14},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 14},
  [329] = {.lex_state = 81},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 14},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 14},
  [334] = {.lex_state = 14},
  [335] = {.lex_state = 14},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 395},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 395},
  [346] = {.lex_state = 19},
  [347] = {.lex_state = 14},
  [348] = {.lex_state = 393},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 636},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 392},
  [363] = {.lex_state = 392},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 392},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 20},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 14},
  [388] = {.lex_state = 14},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 631},
  [392] = {.lex_state = 14},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 81},
  [395] = {.lex_state = 14},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 14},
  [399] = {.lex_state = 14},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 14},
  [402] = {.lex_state = 14},
  [403] = {.lex_state = 14},
  [404] = {.lex_state = 14},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 392},
  [407] = {.lex_state = 14},
  [408] = {.lex_state = 14},
  [409] = {.lex_state = 14},
  [410] = {.lex_state = 14},
  [411] = {.lex_state = 14},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 14},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 393},
  [423] = {.lex_state = 636},
  [424] = {.lex_state = 393},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 631},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 20},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 19},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 394},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 395},
  [442] = {.lex_state = 392},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 14},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 19},
  [447] = {.lex_state = 394},
  [448] = {.lex_state = 39},
  [449] = {.lex_state = 395},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 19},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 395},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 631},
  [461] = {.lex_state = 636},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_command] = STATE(430),
    [sym_new] = STATE(31),
    [sym_decorate] = STATE(31),
    [sym_set] = STATE(31),
    [sym_delete] = STATE(31),
    [sym_load] = STATE(31),
    [sym_unload] = STATE(31),
    [sym_save] = STATE(31),
    [sym_export] = STATE(31),
    [sym_list] = STATE(31),
    [aux_sym_command_repeat1] = STATE(31),
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
    STATE(6), 1,
      sym_font,
    STATE(55), 1,
      sym__align,
    STATE(63), 1,
      sym_valign,
    STATE(65), 1,
      sym_halign,
    STATE(171), 1,
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
    STATE(4), 1,
      sym_font,
    STATE(52), 1,
      sym__align,
    STATE(63), 1,
      sym_valign,
    STATE(65), 1,
      sym_halign,
    STATE(197), 1,
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
  [110] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(53), 1,
      sym_fontsize,
    STATE(56), 1,
      sym__align,
    STATE(63), 1,
      sym_valign,
    STATE(65), 1,
      sym_halign,
    STATE(191), 1,
      sym_colour,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(51), 4,
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
  [157] = 16,
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
    STATE(45), 1,
      sym__guide_id,
    STATE(167), 1,
      sym__label_id,
    STATE(210), 1,
      sym__decoration_id,
    STATE(230), 5,
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
  [216] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(79), 1,
      sym_fontsize,
    STATE(57), 1,
      sym__align,
    STATE(63), 1,
      sym_valign,
    STATE(65), 1,
      sym_halign,
    STATE(131), 1,
      sym_colour,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [263] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(56), 1,
      sym__align,
    STATE(63), 1,
      sym_valign,
    STATE(65), 1,
      sym_halign,
    STATE(191), 1,
      sym_colour,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(51), 4,
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
  [307] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(55), 1,
      sym__align,
    STATE(63), 1,
      sym_valign,
    STATE(65), 1,
      sym_halign,
    STATE(171), 1,
      sym_colour,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(51), 4,
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
  [351] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(57), 1,
      sym__align,
    STATE(63), 1,
      sym_valign,
    STATE(65), 1,
      sym_halign,
    STATE(131), 1,
      sym_colour,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [395] = 4,
    ACTIONS(85), 1,
      aux_sym_offset_token1,
    STATE(18), 1,
      sym_offset,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
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
  [429] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(51), 1,
      sym__align,
    STATE(63), 1,
      sym_valign,
    STATE(65), 1,
      sym_halign,
    STATE(128), 1,
      sym_colour,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(51), 4,
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
  [473] = 2,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(91), 17,
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
  [501] = 2,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(95), 17,
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
  [529] = 2,
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
  [557] = 2,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
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
  [585] = 2,
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
  [613] = 2,
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
  [641] = 2,
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
  [669] = 2,
    ACTIONS(119), 4,
      anon_sym_x,
      anon_sym_dx,
      sym_width,
      sym_angle,
    ACTIONS(117), 19,
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
  [697] = 2,
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
  [725] = 2,
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
  [753] = 2,
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
  [781] = 2,
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
  [809] = 2,
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
  [837] = 2,
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
  [865] = 2,
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
  [893] = 2,
    ACTIONS(151), 1,
      anon_sym_x,
    ACTIONS(149), 21,
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
  [920] = 2,
    ACTIONS(155), 1,
      sym_rgb,
    ACTIONS(153), 21,
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
  [947] = 2,
    ACTIONS(159), 1,
      anon_sym_x,
    ACTIONS(157), 21,
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
  [974] = 12,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_new,
    ACTIONS(169), 1,
      anon_sym_decorate,
    ACTIONS(172), 1,
      anon_sym_set,
    ACTIONS(175), 1,
      anon_sym_delete,
    ACTIONS(178), 1,
      anon_sym_load,
    ACTIONS(181), 1,
      anon_sym_unload,
    ACTIONS(184), 1,
      anon_sym_save,
    ACTIONS(187), 1,
      anon_sym_export,
    ACTIONS(190), 1,
      anon_sym_list,
    STATE(30), 10,
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
  [1020] = 12,
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
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym_comment,
    STATE(30), 10,
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
  [1066] = 2,
    ACTIONS(199), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(197), 16,
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
  [1089] = 10,
    ACTIONS(201), 1,
      anon_sym_module,
    ACTIONS(203), 1,
      anon_sym_input,
    ACTIONS(205), 1,
      anon_sym_output,
    ACTIONS(207), 1,
      aux_sym__new_parameter_token1,
    ACTIONS(209), 1,
      anon_sym_light,
    ACTIONS(211), 1,
      anon_sym_widget,
    ACTIONS(213), 1,
      anon_sym_decoration,
    ACTIONS(215), 1,
      anon_sym_guide,
    ACTIONS(217), 1,
      anon_sym_label,
    STATE(120), 9,
      sym__new_module,
      sym__new_input,
      sym__new_output,
      sym__new_parameter,
      sym__new_light,
      sym__new_widget,
      sym__new_decoration,
      sym_label,
      sym_guide,
  [1128] = 2,
    ACTIONS(221), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(219), 16,
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
  [1151] = 10,
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
    ACTIONS(223), 1,
      anon_sym_font,
    ACTIONS(225), 1,
      anon_sym_guide,
    STATE(184), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [1190] = 2,
    ACTIONS(229), 1,
      anon_sym_x,
    ACTIONS(227), 16,
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
  [1212] = 2,
    ACTIONS(233), 1,
      anon_sym_x,
    ACTIONS(231), 16,
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
  [1234] = 2,
    ACTIONS(237), 1,
      anon_sym_x,
    ACTIONS(235), 16,
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
  [1256] = 2,
    ACTIONS(241), 1,
      anon_sym_x,
    ACTIONS(239), 16,
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
  [1278] = 2,
    ACTIONS(245), 1,
      anon_sym_x,
    ACTIONS(243), 16,
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
  [1300] = 8,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(251), 1,
      anon_sym_vertical,
    ACTIONS(253), 1,
      anon_sym_horizontal,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
    STATE(292), 1,
      sym_identifier,
    STATE(168), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(247), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1334] = 10,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(261), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      aux_sym__guide_attr_token1,
    STATE(205), 1,
      sym__xy_attr,
    STATE(336), 1,
      sym__geometry_x_attr,
    STATE(414), 1,
      sym__relative_attr,
    STATE(421), 1,
      sym__guide_attr,
    ACTIONS(263), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(198), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1371] = 8,
    ACTIONS(267), 1,
      anon_sym_input2,
    ACTIONS(269), 1,
      anon_sym_output2,
    ACTIONS(271), 1,
      anon_sym_parameter,
    ACTIONS(273), 1,
      anon_sym_light2,
    ACTIONS(275), 1,
      anon_sym_widget2,
    STATE(376), 1,
      sym_x,
    ACTIONS(277), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(370), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1404] = 10,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(261), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      aux_sym__guide_attr_token1,
    STATE(187), 1,
      sym__xy_attr,
    STATE(336), 1,
      sym__geometry_x_attr,
    STATE(414), 1,
      sym__relative_attr,
    STATE(421), 1,
      sym__guide_attr,
    ACTIONS(263), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(198), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1441] = 7,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(265), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(279), 1,
      anon_sym_id,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(283), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(263), 4,
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
  [1472] = 10,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(261), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      aux_sym__guide_attr_token1,
    STATE(172), 1,
      sym__xy_attr,
    STATE(336), 1,
      sym__geometry_x_attr,
    STATE(414), 1,
      sym__relative_attr,
    STATE(421), 1,
      sym__guide_attr,
    ACTIONS(263), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(198), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1509] = 8,
    ACTIONS(267), 1,
      anon_sym_input2,
    ACTIONS(269), 1,
      anon_sym_output2,
    ACTIONS(271), 1,
      anon_sym_parameter,
    ACTIONS(273), 1,
      anon_sym_light2,
    ACTIONS(275), 1,
      anon_sym_widget2,
    STATE(473), 1,
      sym_x,
    ACTIONS(277), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(435), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1542] = 8,
    ACTIONS(267), 1,
      anon_sym_input2,
    ACTIONS(269), 1,
      anon_sym_output2,
    ACTIONS(271), 1,
      anon_sym_parameter,
    ACTIONS(273), 1,
      anon_sym_light2,
    ACTIONS(275), 1,
      anon_sym_widget2,
    STATE(474), 1,
      sym_x,
    ACTIONS(277), 5,
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
  [1575] = 6,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(251), 1,
      anon_sym_vertical,
    ACTIONS(253), 1,
      anon_sym_horizontal,
    STATE(41), 1,
      sym_identifier,
    STATE(194), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(247), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1603] = 1,
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
  [1621] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(127), 1,
      sym_colour,
    ACTIONS(285), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1644] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(191), 1,
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
  [1667] = 4,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym__scale,
    STATE(117), 1,
      sym_stretch,
    ACTIONS(287), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1690] = 8,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_AT,
    ACTIONS(295), 1,
      aux_sym_relative_token1,
    ACTIONS(297), 1,
      sym_angle,
    STATE(17), 1,
      sym_polar,
    STATE(349), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(277), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1721] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(131), 1,
      sym_colour,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1744] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(171), 1,
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
  [1767] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(128), 1,
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
  [1790] = 8,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(303), 1,
      aux_sym_relative_token1,
    ACTIONS(305), 1,
      sym_angle,
    STATE(415), 1,
      sym_x,
    STATE(416), 1,
      sym_polar,
    STATE(417), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(277), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1821] = 3,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    STATE(105), 1,
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
  [1842] = 3,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    STATE(108), 1,
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
  [1863] = 4,
    ACTIONS(311), 1,
      aux_sym_offset_token1,
    STATE(104), 1,
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
  [1886] = 8,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_AT,
    ACTIONS(317), 1,
      aux_sym_relative_token1,
    ACTIONS(319), 1,
      sym_angle,
    STATE(395), 1,
      sym_polar,
    STATE(459), 1,
      sym_x,
    STATE(256), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(277), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1917] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      sym_rgb,
    ACTIONS(321), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1938] = 8,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      aux_sym_relative_token1,
    ACTIONS(333), 1,
      sym_angle,
    STATE(90), 1,
      sym_polar,
    STATE(467), 1,
      sym_x,
    STATE(80), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(277), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1969] = 3,
    ACTIONS(325), 1,
      sym_rgb,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(321), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1990] = 2,
    ACTIONS(339), 1,
      sym_rgb,
    ACTIONS(337), 13,
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
  [2009] = 2,
    ACTIONS(343), 1,
      sym_rgb,
    ACTIONS(341), 13,
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
  [2028] = 3,
    ACTIONS(347), 1,
      anon_sym_light2,
    ACTIONS(349), 1,
      anon_sym_dark,
    ACTIONS(345), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2048] = 7,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(265), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym__x_attr,
    ACTIONS(263), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(202), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2076] = 3,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym_offset,
    ACTIONS(353), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2096] = 2,
    ACTIONS(357), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(355), 12,
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
  [2114] = 2,
    ACTIONS(361), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(359), 12,
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
  [2132] = 7,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(265), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__x_attr,
    ACTIONS(263), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(202), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2160] = 2,
    ACTIONS(365), 1,
      sym_rgb,
    ACTIONS(363), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2178] = 7,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(265), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym__x_attr,
    ACTIONS(263), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(202), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2206] = 1,
    ACTIONS(367), 13,
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
  [2222] = 3,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    STATE(115), 1,
      sym_offset,
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
  [2242] = 3,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_stretch,
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
  [2262] = 3,
    ACTIONS(377), 1,
      anon_sym_timestamp,
    ACTIONS(379), 1,
      anon_sym_gzip,
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
  [2282] = 4,
    ACTIONS(385), 1,
      aux_sym__input_id_token1,
    STATE(121), 1,
      sym_part,
    ACTIONS(381), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(383), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2304] = 1,
    ACTIONS(387), 12,
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
  [2319] = 2,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(389), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2336] = 2,
    ACTIONS(395), 1,
      anon_sym_COMMA,
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
  [2353] = 2,
    ACTIONS(399), 1,
      anon_sym_timestamp,
    ACTIONS(397), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2370] = 2,
    ACTIONS(403), 1,
      anon_sym_COMMA,
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
  [2387] = 2,
    ACTIONS(405), 1,
      anon_sym_COMMA,
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
  [2404] = 7,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(265), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym__y_attr,
    ACTIONS(283), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(199), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2431] = 8,
    ACTIONS(409), 1,
      anon_sym_input2,
    ACTIONS(411), 1,
      anon_sym_output2,
    ACTIONS(413), 1,
      anon_sym_parameter,
    ACTIONS(415), 1,
      anon_sym_light2,
    ACTIONS(417), 1,
      anon_sym_widget2,
    ACTIONS(419), 1,
      anon_sym_scale,
    ACTIONS(421), 1,
      anon_sym_stretch,
    STATE(427), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2460] = 1,
    ACTIONS(423), 12,
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
  [2475] = 2,
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
  [2492] = 7,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(265), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym__y_attr,
    ACTIONS(283), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(199), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2519] = 1,
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
  [2534] = 7,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(265), 1,
      aux_sym__guide_attr_token1,
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
    STATE(199), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2561] = 2,
    ACTIONS(427), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(429), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2578] = 2,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(389), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2595] = 2,
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
  [2612] = 2,
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
  [2629] = 2,
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
  [2646] = 2,
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
  [2663] = 2,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(131), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2680] = 2,
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
  [2697] = 1,
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
  [2712] = 2,
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
  [2729] = 2,
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
  [2746] = 1,
    ACTIONS(439), 12,
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
  [2761] = 2,
    ACTIONS(443), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(441), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2778] = 2,
    ACTIONS(445), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(447), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2795] = 1,
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
  [2810] = 1,
    ACTIONS(451), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2824] = 1,
    ACTIONS(453), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2838] = 1,
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
  [2852] = 1,
    ACTIONS(457), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2866] = 1,
    ACTIONS(459), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2880] = 1,
    ACTIONS(461), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2894] = 1,
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
  [2908] = 1,
    ACTIONS(465), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2922] = 1,
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
  [2936] = 2,
    ACTIONS(469), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(467), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2952] = 1,
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
  [2966] = 1,
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
  [2980] = 1,
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
  [2994] = 1,
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
  [3008] = 1,
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
  [3022] = 1,
    ACTIONS(479), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3036] = 1,
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
  [3050] = 1,
    ACTIONS(389), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3064] = 1,
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
  [3078] = 1,
    ACTIONS(285), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3092] = 1,
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
  [3106] = 1,
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
  [3120] = 1,
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
  [3134] = 1,
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
  [3148] = 1,
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
  [3162] = 1,
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
  [3176] = 1,
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
  [3190] = 1,
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
  [3204] = 5,
    STATE(63), 1,
      sym_valign,
    STATE(65), 1,
      sym_halign,
    STATE(187), 1,
      sym__align,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3226] = 1,
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
  [3240] = 1,
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
  [3254] = 1,
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
  [3268] = 1,
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
  [3282] = 1,
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
  [3296] = 1,
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
  [3310] = 1,
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
  [3324] = 1,
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
  [3338] = 1,
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
  [3352] = 1,
    ACTIONS(517), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3366] = 1,
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
  [3380] = 1,
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
  [3394] = 1,
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
  [3408] = 1,
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
  [3422] = 1,
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
  [3436] = 1,
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
  [3450] = 1,
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
  [3464] = 1,
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
  [3478] = 1,
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
  [3492] = 1,
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
  [3506] = 1,
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
  [3520] = 1,
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
  [3534] = 1,
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
  [3548] = 1,
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
  [3562] = 1,
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
  [3576] = 1,
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
  [3590] = 1,
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
  [3604] = 1,
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
  [3618] = 1,
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
  [3632] = 10,
    ACTIONS(557), 1,
      anon_sym_x,
    ACTIONS(559), 1,
      anon_sym_y,
    ACTIONS(561), 1,
      anon_sym_xy,
    ACTIONS(563), 1,
      anon_sym_text,
    ACTIONS(565), 1,
      anon_sym_font,
    ACTIONS(567), 1,
      anon_sym_size,
    ACTIONS(569), 1,
      anon_sym_halign,
    ACTIONS(571), 1,
      anon_sym_valign,
    ACTIONS(573), 1,
      anon_sym_align,
    ACTIONS(575), 2,
      anon_sym_colour,
      anon_sym_color,
  [3664] = 1,
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
  [3678] = 1,
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
  [3692] = 1,
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
  [3706] = 1,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3720] = 1,
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
  [3734] = 1,
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
  [3748] = 1,
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
  [3762] = 1,
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
  [3776] = 1,
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
  [3790] = 1,
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
  [3804] = 1,
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
  [3818] = 1,
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
  [3832] = 1,
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
  [3846] = 1,
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
  [3860] = 1,
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
  [3874] = 1,
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
  [3888] = 1,
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
  [3902] = 1,
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
  [3916] = 1,
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
  [3930] = 1,
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
  [3944] = 1,
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
  [3958] = 1,
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
  [3972] = 1,
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
  [3986] = 1,
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
  [4000] = 1,
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
  [4014] = 1,
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
  [4028] = 1,
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
  [4042] = 1,
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
  [4056] = 1,
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
  [4070] = 1,
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
  [4084] = 1,
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
  [4098] = 1,
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
  [4112] = 1,
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
  [4126] = 1,
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
  [4140] = 1,
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
  [4154] = 1,
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
  [4168] = 2,
    ACTIONS(479), 1,
      aux_sym_offset_token1,
    ACTIONS(643), 10,
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
  [4184] = 1,
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
  [4198] = 6,
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
    STATE(390), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [4221] = 6,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    ACTIONS(647), 1,
      anon_sym_AT,
    ACTIONS(651), 1,
      anon_sym_origin,
    ACTIONS(653), 1,
      aux_sym_origin_token1,
    STATE(163), 1,
      sym_offset,
    ACTIONS(649), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4243] = 2,
    ACTIONS(477), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(655), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4257] = 2,
    ACTIONS(117), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(119), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4271] = 8,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_x,
    ACTIONS(661), 1,
      anon_sym_y,
    ACTIONS(663), 1,
      anon_sym_xy,
    ACTIONS(665), 1,
      anon_sym_dx,
    ACTIONS(667), 1,
      anon_sym_dy,
    ACTIONS(669), 1,
      anon_sym_dxy,
    STATE(146), 2,
      sym__scale,
      sym_stretch,
  [4297] = 6,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    ACTIONS(671), 1,
      anon_sym_AT,
    ACTIONS(673), 1,
      anon_sym_origin,
    ACTIONS(675), 1,
      aux_sym_origin_token1,
    STATE(166), 1,
      sym_offset,
    ACTIONS(649), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4318] = 5,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    STATE(469), 1,
      sym__offset,
    STATE(463), 2,
      sym_polar,
      sym__relative,
  [4335] = 6,
    ACTIONS(681), 1,
      anon_sym_input2,
    ACTIONS(683), 1,
      anon_sym_output2,
    ACTIONS(685), 1,
      anon_sym_parameter,
    ACTIONS(687), 1,
      anon_sym_light2,
    ACTIONS(689), 1,
      anon_sym_widget2,
    ACTIONS(691), 1,
      anon_sym_label,
  [4354] = 5,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym__offset,
    STATE(464), 2,
      sym_polar,
      sym__relative,
  [4371] = 5,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym__offset,
    STATE(452), 2,
      sym_polar,
      sym__relative,
  [4388] = 5,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym__offset,
    STATE(454), 2,
      sym_polar,
      sym__relative,
  [4405] = 5,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym__offset,
    STATE(456), 2,
      sym_polar,
      sym__relative,
  [4422] = 2,
    STATE(74), 1,
      sym_valign,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4432] = 5,
    ACTIONS(701), 1,
      aux_sym__input_id_token1,
    ACTIONS(703), 1,
      anon_sym_none,
    ACTIONS(705), 1,
      sym_rgb,
    ACTIONS(707), 1,
      sym_rgba,
    STATE(126), 1,
      sym_name,
  [4448] = 4,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    STATE(469), 1,
      sym__offset,
    STATE(354), 2,
      sym_polar,
      sym__relative,
  [4462] = 4,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    STATE(469), 1,
      sym__offset,
    STATE(355), 2,
      sym_polar,
      sym__relative,
  [4476] = 3,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    STATE(268), 1,
      sym_offset,
    ACTIONS(81), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [4488] = 2,
    STATE(265), 1,
      sym_y,
    ACTIONS(709), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4498] = 2,
    STATE(266), 1,
      sym_y,
    ACTIONS(709), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4508] = 2,
    STATE(74), 1,
      sym_halign,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4518] = 5,
    ACTIONS(711), 1,
      anon_sym_input2,
    ACTIONS(713), 1,
      anon_sym_output2,
    ACTIONS(715), 1,
      anon_sym_parameter,
    ACTIONS(717), 1,
      anon_sym_light2,
    ACTIONS(719), 1,
      anon_sym_widget2,
  [4534] = 5,
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
  [4550] = 4,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    STATE(469), 1,
      sym__offset,
    STATE(351), 2,
      sym_polar,
      sym__relative,
  [4564] = 4,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    STATE(469), 1,
      sym__offset,
    STATE(352), 2,
      sym_polar,
      sym__relative,
  [4578] = 5,
    ACTIONS(731), 1,
      anon_sym_name,
    ACTIONS(733), 1,
      anon_sym_x,
    ACTIONS(735), 1,
      anon_sym_y,
    ACTIONS(737), 1,
      anon_sym_xy,
    ACTIONS(739), 1,
      anon_sym_part,
  [4594] = 2,
    STATE(187), 1,
      sym_valign,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4604] = 2,
    STATE(187), 1,
      sym_halign,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4614] = 4,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    STATE(469), 1,
      sym__offset,
    STATE(353), 2,
      sym_polar,
      sym__relative,
  [4628] = 5,
    ACTIONS(741), 1,
      anon_sym_AT,
    ACTIONS(743), 1,
      aux_sym__originx_token1,
    ACTIONS(745), 1,
      aux_sym__originy_token1,
    STATE(397), 1,
      sym__originy,
    STATE(400), 1,
      sym__originx,
  [4644] = 2,
    STATE(270), 1,
      sym_y,
    ACTIONS(709), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4654] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(747), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4664] = 4,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    STATE(469), 1,
      sym__offset,
    STATE(350), 2,
      sym_polar,
      sym__relative,
  [4678] = 5,
    ACTIONS(749), 1,
      anon_sym_input2,
    ACTIONS(751), 1,
      anon_sym_output2,
    ACTIONS(753), 1,
      anon_sym_parameter,
    ACTIONS(755), 1,
      anon_sym_light2,
    ACTIONS(757), 1,
      anon_sym_widget2,
  [4694] = 2,
    STATE(364), 1,
      sym_y,
    ACTIONS(709), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4704] = 2,
    STATE(98), 1,
      sym_y,
    ACTIONS(759), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4714] = 2,
    STATE(401), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4724] = 3,
    ACTIONS(763), 1,
      anon_sym_module2,
    ACTIONS(765), 1,
      anon_sym_panel,
    STATE(119), 2,
      sym__module_export,
      sym_panel,
  [4735] = 4,
    ACTIONS(767), 1,
      anon_sym_DQUOTE,
    ACTIONS(769), 1,
      anon_sym_SQUOTE,
    ACTIONS(771), 1,
      aux_sym__string_token1,
    STATE(54), 1,
      sym__string,
  [4748] = 3,
    ACTIONS(773), 1,
      anon_sym_project,
    ACTIONS(775), 1,
      anon_sym_script,
    STATE(111), 2,
      sym_project,
      sym_script,
  [4759] = 4,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    ACTIONS(779), 1,
      anon_sym_SQUOTE,
    ACTIONS(781), 1,
      aux_sym__string_token1,
    STATE(187), 1,
      sym__string,
  [4772] = 2,
    STATE(182), 1,
      sym__geometry_y_attr,
    ACTIONS(783), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4781] = 4,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(787), 1,
      aux_sym__offset_attr_token1,
    STATE(371), 1,
      sym__offset_attr,
    STATE(372), 1,
      sym__offset_xy_attr,
  [4794] = 3,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    ACTIONS(791), 1,
      aux_sym__guide_id_token1,
    STATE(299), 1,
      sym__component_id,
  [4804] = 3,
    ACTIONS(793), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(177), 1,
      sym__new_component,
  [4814] = 3,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    ACTIONS(795), 1,
      aux_sym_origin_token1,
    STATE(112), 1,
      sym_offset,
  [4824] = 3,
    ACTIONS(797), 1,
      anon_sym_font,
    ACTIONS(799), 1,
      anon_sym_project,
    ACTIONS(801), 1,
      anon_sym_script,
  [4834] = 3,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    ACTIONS(803), 1,
      aux_sym_origin_token1,
    STATE(114), 1,
      sym_offset,
  [4844] = 3,
    ACTIONS(787), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      sym__offset_attr,
  [4854] = 3,
    ACTIONS(787), 1,
      aux_sym__offset_attr_token1,
    STATE(172), 1,
      sym__offset_dxy_attr,
    STATE(428), 1,
      sym__offset_attr,
  [4864] = 3,
    ACTIONS(787), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      sym__offset_attr,
  [4874] = 3,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(53), 1,
      sym_name,
    STATE(157), 1,
      sym_decoration,
  [4884] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(187), 1,
      sym_colour,
  [4894] = 3,
    ACTIONS(811), 1,
      aux_sym__label_id_token1,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
  [4904] = 3,
    ACTIONS(81), 1,
      aux_sym__input_id_token1,
    ACTIONS(817), 1,
      aux_sym_offset_token1,
    STATE(408), 1,
      sym_offset,
  [4914] = 3,
    ACTIONS(819), 1,
      anon_sym_name,
    ACTIONS(821), 1,
      anon_sym_height,
    ACTIONS(823), 1,
      anon_sym_width,
  [4924] = 3,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(53), 1,
      sym_name,
    STATE(186), 1,
      sym_decoration,
  [4934] = 3,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      sym_offset,
  [4944] = 3,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(827), 1,
      aux_sym_absolute_token1,
    STATE(378), 1,
      sym_polar,
  [4954] = 3,
    ACTIONS(297), 1,
      sym_angle,
    ACTIONS(829), 1,
      aux_sym_absolute_token1,
    STATE(16), 1,
      sym_polar,
  [4964] = 3,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      sym_polar,
  [4974] = 3,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      sym_polar,
  [4984] = 3,
    ACTIONS(793), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(181), 1,
      sym__new_component,
  [4994] = 1,
    ACTIONS(113), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [5000] = 3,
    ACTIONS(333), 1,
      sym_angle,
    ACTIONS(835), 1,
      aux_sym_absolute_token1,
    STATE(96), 1,
      sym_polar,
  [5010] = 3,
    ACTIONS(305), 1,
      sym_angle,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      sym_polar,
  [5020] = 3,
    ACTIONS(793), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(179), 1,
      sym__new_component,
  [5030] = 3,
    ACTIONS(319), 1,
      sym_angle,
    ACTIONS(839), 1,
      aux_sym_absolute_token1,
    STATE(398), 1,
      sym_polar,
  [5040] = 1,
    ACTIONS(841), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [5046] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(255), 1,
      sym_name,
    STATE(380), 1,
      sym__component_x_attr,
  [5056] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(255), 1,
      sym_name,
    STATE(375), 1,
      sym__component_x_attr,
  [5066] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(255), 1,
      sym_name,
    STATE(374), 1,
      sym__component_x_attr,
  [5076] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(255), 1,
      sym_name,
    STATE(373), 1,
      sym__component_x_attr,
  [5086] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(255), 1,
      sym_name,
    STATE(369), 1,
      sym__component_x_attr,
  [5096] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
    STATE(368), 1,
      sym__component_y_attr,
  [5106] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
    STATE(367), 1,
      sym__component_y_attr,
  [5116] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
    STATE(366), 1,
      sym__component_y_attr,
  [5126] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
    STATE(405), 1,
      sym__component_y_attr,
  [5136] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
    STATE(338), 1,
      sym__component_y_attr,
  [5146] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(247), 1,
      sym_name,
    STATE(339), 1,
      sym__component_xy_attr,
  [5156] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(247), 1,
      sym_name,
    STATE(340), 1,
      sym__component_xy_attr,
  [5166] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(247), 1,
      sym_name,
    STATE(341), 1,
      sym__component_xy_attr,
  [5176] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(247), 1,
      sym_name,
    STATE(342), 1,
      sym__component_xy_attr,
  [5186] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(247), 1,
      sym_name,
    STATE(343), 1,
      sym__component_xy_attr,
  [5196] = 3,
    ACTIONS(793), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(178), 1,
      sym__new_component,
  [5206] = 3,
    ACTIONS(793), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(176), 1,
      sym__new_component,
  [5216] = 2,
    ACTIONS(259), 1,
      aux_sym__offset_attr_token1,
    STATE(183), 1,
      sym__relative_attr,
  [5223] = 2,
    ACTIONS(255), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
  [5230] = 2,
    ACTIONS(845), 1,
      aux_sym__guide_attr_token1,
    STATE(180), 1,
      sym__guide_attr,
  [5237] = 2,
    ACTIONS(847), 1,
      sym_height,
    ACTIONS(849), 1,
      sym_width,
  [5244] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(294), 1,
      sym_name,
  [5251] = 2,
    ACTIONS(851), 1,
      sym_rgb,
    ACTIONS(853), 1,
      sym_rgba,
  [5258] = 2,
    ACTIONS(855), 1,
      aux_sym_absolute_token1,
    STATE(404), 1,
      sym_radius,
  [5265] = 2,
    ACTIONS(857), 1,
      aux_sym_absolute_token1,
    STATE(101), 1,
      sym_radius,
  [5272] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(32), 1,
      sym_name,
  [5279] = 2,
    ACTIONS(787), 1,
      aux_sym__offset_attr_token1,
    STATE(173), 1,
      sym__offset_attr,
  [5286] = 2,
    ACTIONS(859), 1,
      aux_sym_absolute_token1,
    STATE(26), 1,
      sym_radius,
  [5293] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(188), 1,
      sym_name,
  [5300] = 2,
    ACTIONS(223), 1,
      anon_sym_font,
    STATE(134), 1,
      sym__font_id,
  [5307] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
  [5314] = 1,
    ACTIONS(117), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [5319] = 2,
    ACTIONS(861), 1,
      aux_sym__absolute_attr_token1,
    STATE(429), 1,
      sym__absolute_x_attr,
  [5326] = 1,
    ACTIONS(863), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5331] = 2,
    ACTIONS(865), 1,
      aux_sym__guide_attr_token1,
    STATE(200), 1,
      sym_identifier,
  [5338] = 2,
    ACTIONS(743), 1,
      aux_sym__originx_token1,
    STATE(135), 1,
      sym__originx,
  [5345] = 2,
    ACTIONS(745), 1,
      aux_sym__originy_token1,
    STATE(135), 1,
      sym__originy,
  [5352] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_name,
  [5359] = 2,
    ACTIONS(867), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_part,
  [5366] = 2,
    ACTIONS(787), 1,
      aux_sym__offset_attr_token1,
    STATE(393), 1,
      sym__offset_attr,
  [5373] = 2,
    ACTIONS(869), 1,
      aux_sym__input_id_token1,
    STATE(187), 1,
      sym_font,
  [5380] = 2,
    ACTIONS(679), 1,
      aux_sym_offset_token1,
    STATE(359), 1,
      sym__offset,
  [5387] = 2,
    ACTIONS(871), 1,
      aux_sym_absolute_token1,
    STATE(332), 1,
      sym_radius,
  [5394] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(237), 1,
      sym_name,
  [5401] = 2,
    ACTIONS(419), 1,
      anon_sym_scale,
    ACTIONS(421), 1,
      anon_sym_stretch,
  [5408] = 2,
    ACTIONS(787), 1,
      aux_sym__offset_attr_token1,
    STATE(170), 1,
      sym__offset_attr,
  [5415] = 1,
    ACTIONS(873), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [5420] = 2,
    ACTIONS(787), 1,
      aux_sym__offset_attr_token1,
    STATE(165), 1,
      sym__offset_attr,
  [5427] = 2,
    ACTIONS(875), 1,
      anon_sym_svg,
    STATE(153), 1,
      sym_svg,
  [5434] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
  [5441] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(216), 1,
      sym_name,
  [5448] = 2,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(879), 1,
      sym_width,
  [5455] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(221), 1,
      sym_name,
  [5462] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_name,
  [5469] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(212), 1,
      sym_name,
  [5476] = 2,
    ACTIONS(881), 1,
      aux_sym__absolute_attr_token1,
    STATE(139), 1,
      sym__absolute_y_attr,
  [5483] = 1,
    ACTIONS(129), 2,
      anon_sym_with,
      anon_sym_RPAREN,
  [5488] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(220), 1,
      sym_name,
  [5495] = 1,
    ACTIONS(145), 2,
      anon_sym_with,
      anon_sym_RPAREN,
  [5500] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(214), 1,
      sym_name,
  [5507] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(233), 1,
      sym_name,
  [5514] = 2,
    ACTIONS(809), 1,
      aux_sym__input_id_token1,
    STATE(229), 1,
      sym_name,
  [5521] = 1,
    ACTIONS(883), 1,
      anon_sym_COMMA,
  [5525] = 1,
    ACTIONS(885), 1,
      sym_rgb,
  [5529] = 1,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
  [5533] = 1,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
  [5537] = 1,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
  [5541] = 1,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
  [5545] = 1,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
  [5549] = 1,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
  [5553] = 1,
    ACTIONS(97), 1,
      anon_sym_with,
  [5557] = 1,
    ACTIONS(899), 1,
      aux_sym_absolute_token1,
  [5561] = 1,
    ACTIONS(901), 1,
      aux_sym_relative_token1,
  [5565] = 1,
    ACTIONS(903), 1,
      aux_sym__input_id_token1,
  [5569] = 1,
    ACTIONS(905), 1,
      aux_sym__scale_token1,
  [5573] = 1,
    ACTIONS(907), 1,
      anon_sym_COMMA,
  [5577] = 1,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
  [5581] = 1,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
  [5585] = 1,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
  [5589] = 1,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
  [5593] = 1,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
  [5597] = 1,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
  [5601] = 1,
    ACTIONS(921), 1,
      aux_sym__label_id_token3,
  [5605] = 1,
    ACTIONS(923), 1,
      anon_sym_SQUOTE,
  [5609] = 1,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
  [5613] = 1,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
  [5617] = 1,
    ACTIONS(427), 1,
      anon_sym_with,
  [5621] = 1,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
  [5625] = 1,
    ACTIONS(929), 1,
      aux_sym_origin_token1,
  [5629] = 1,
    ACTIONS(931), 1,
      aux_sym_origin_token1,
  [5633] = 1,
    ACTIONS(433), 1,
      anon_sym_with,
  [5637] = 1,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
  [5641] = 1,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [5645] = 1,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
  [5649] = 1,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
  [5653] = 1,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
  [5657] = 1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [5661] = 1,
    ACTIONS(945), 1,
      anon_sym_COMMA,
  [5665] = 1,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
  [5669] = 1,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
  [5673] = 1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [5677] = 1,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
  [5681] = 1,
    ACTIONS(955), 1,
      anon_sym_COMMA,
  [5685] = 1,
    ACTIONS(957), 1,
      anon_sym_COMMA,
  [5689] = 1,
    ACTIONS(105), 1,
      anon_sym_with,
  [5693] = 1,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [5697] = 1,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
  [5701] = 1,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
  [5705] = 1,
    ACTIONS(965), 1,
      sym_fontsize,
  [5709] = 1,
    ACTIONS(967), 1,
      anon_sym_COMMA,
  [5713] = 1,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
  [5717] = 1,
    ACTIONS(971), 1,
      aux_sym__guide_id_token1,
  [5721] = 1,
    ACTIONS(445), 1,
      anon_sym_with,
  [5725] = 1,
    ACTIONS(973), 1,
      aux_sym__input_id_token1,
  [5729] = 1,
    ACTIONS(975), 1,
      aux_sym__input_id_token1,
  [5733] = 1,
    ACTIONS(963), 1,
      anon_sym_SQUOTE,
  [5737] = 1,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
  [5741] = 1,
    ACTIONS(979), 1,
      aux_sym__label_id_token2,
  [5745] = 1,
    ACTIONS(981), 1,
      aux_sym__input_id_token1,
  [5749] = 1,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
  [5753] = 1,
    ACTIONS(985), 1,
      aux_sym__absolute_attr_token1,
  [5757] = 1,
    ACTIONS(109), 1,
      aux_sym__input_id_token1,
  [5761] = 1,
    ACTIONS(987), 1,
      anon_sym_COMMA,
  [5765] = 1,
    ACTIONS(989), 1,
      anon_sym_COMMA,
  [5769] = 1,
    ACTIONS(105), 1,
      aux_sym__input_id_token1,
  [5773] = 1,
    ACTIONS(101), 1,
      aux_sym__input_id_token1,
  [5777] = 1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
  [5781] = 1,
    ACTIONS(433), 1,
      aux_sym__input_id_token1,
  [5785] = 1,
    ACTIONS(97), 1,
      aux_sym__input_id_token1,
  [5789] = 1,
    ACTIONS(129), 1,
      aux_sym__input_id_token1,
  [5793] = 1,
    ACTIONS(145), 1,
      aux_sym__input_id_token1,
  [5797] = 1,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
  [5801] = 1,
    ACTIONS(995), 1,
      aux_sym_origin_token1,
  [5805] = 1,
    ACTIONS(121), 1,
      aux_sym__input_id_token1,
  [5809] = 1,
    ACTIONS(113), 1,
      aux_sym__input_id_token1,
  [5813] = 1,
    ACTIONS(445), 1,
      aux_sym__input_id_token1,
  [5817] = 1,
    ACTIONS(427), 1,
      aux_sym__input_id_token1,
  [5821] = 1,
    ACTIONS(997), 1,
      aux_sym__input_id_token1,
  [5825] = 1,
    ACTIONS(885), 1,
      sym_rgba,
  [5829] = 1,
    ACTIONS(999), 1,
      aux_sym__input_id_token1,
  [5833] = 1,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
  [5837] = 1,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
  [5841] = 1,
    ACTIONS(109), 1,
      anon_sym_with,
  [5845] = 1,
    ACTIONS(1005), 1,
      anon_sym_with,
  [5849] = 1,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
  [5853] = 1,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
  [5857] = 1,
    ACTIONS(421), 1,
      anon_sym_stretch,
  [5861] = 1,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
  [5865] = 1,
    ACTIONS(1013), 1,
      aux_sym__scale_token1,
  [5869] = 1,
    ACTIONS(1015), 1,
      aux_sym__label_id_token3,
  [5873] = 1,
    ACTIONS(1017), 1,
      aux_sym__scale_token1,
  [5877] = 1,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
  [5881] = 1,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
  [5885] = 1,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
  [5889] = 1,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
  [5893] = 1,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
  [5897] = 1,
    ACTIONS(1029), 1,
      ts_builtin_sym_end,
  [5901] = 1,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
  [5905] = 1,
    ACTIONS(1033), 1,
      aux_sym__label_id_token2,
  [5909] = 1,
    ACTIONS(1035), 1,
      anon_sym_gzip,
  [5913] = 1,
    ACTIONS(1037), 1,
      aux_sym__guide_id_token1,
  [5917] = 1,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
  [5921] = 1,
    ACTIONS(1041), 1,
      aux_sym_relative_token1,
  [5925] = 1,
    ACTIONS(1035), 1,
      anon_sym_timestamp,
  [5929] = 1,
    ACTIONS(1043), 1,
      sym_width,
  [5933] = 1,
    ACTIONS(1045), 1,
      anon_sym_DQUOTE,
  [5937] = 1,
    ACTIONS(1045), 1,
      anon_sym_SQUOTE,
  [5941] = 1,
    ACTIONS(1047), 1,
      aux_sym_absolute_token1,
  [5945] = 1,
    ACTIONS(1049), 1,
      aux_sym_origin_token1,
  [5949] = 1,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
  [5953] = 1,
    ACTIONS(1053), 1,
      aux_sym__input_id_token1,
  [5957] = 1,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [5961] = 1,
    ACTIONS(1057), 1,
      aux_sym_relative_token1,
  [5965] = 1,
    ACTIONS(1059), 1,
      sym_width,
  [5969] = 1,
    ACTIONS(1043), 1,
      sym_height,
  [5973] = 1,
    ACTIONS(1061), 1,
      aux_sym_absolute_token1,
  [5977] = 1,
    ACTIONS(121), 1,
      anon_sym_with,
  [5981] = 1,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
  [5985] = 1,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
  [5989] = 1,
    ACTIONS(1067), 1,
      aux_sym_relative_token1,
  [5993] = 1,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
  [5997] = 1,
    ACTIONS(1071), 1,
      aux_sym_absolute_token1,
  [6001] = 1,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
  [6005] = 1,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
  [6009] = 1,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
  [6013] = 1,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
  [6017] = 1,
    ACTIONS(1081), 1,
      aux_sym__label_id_token2,
  [6021] = 1,
    ACTIONS(1083), 1,
      aux_sym__label_id_token3,
  [6025] = 1,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
  [6029] = 1,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
  [6033] = 1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [6037] = 1,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
  [6041] = 1,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
  [6045] = 1,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
  [6049] = 1,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
  [6053] = 1,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
  [6057] = 1,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
  [6061] = 1,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
  [6065] = 1,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
  [6069] = 1,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
  [6073] = 1,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 157,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 263,
  [SMALL_STATE(8)] = 307,
  [SMALL_STATE(9)] = 351,
  [SMALL_STATE(10)] = 395,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 473,
  [SMALL_STATE(13)] = 501,
  [SMALL_STATE(14)] = 529,
  [SMALL_STATE(15)] = 557,
  [SMALL_STATE(16)] = 585,
  [SMALL_STATE(17)] = 613,
  [SMALL_STATE(18)] = 641,
  [SMALL_STATE(19)] = 669,
  [SMALL_STATE(20)] = 697,
  [SMALL_STATE(21)] = 725,
  [SMALL_STATE(22)] = 753,
  [SMALL_STATE(23)] = 781,
  [SMALL_STATE(24)] = 809,
  [SMALL_STATE(25)] = 837,
  [SMALL_STATE(26)] = 865,
  [SMALL_STATE(27)] = 893,
  [SMALL_STATE(28)] = 920,
  [SMALL_STATE(29)] = 947,
  [SMALL_STATE(30)] = 974,
  [SMALL_STATE(31)] = 1020,
  [SMALL_STATE(32)] = 1066,
  [SMALL_STATE(33)] = 1089,
  [SMALL_STATE(34)] = 1128,
  [SMALL_STATE(35)] = 1151,
  [SMALL_STATE(36)] = 1190,
  [SMALL_STATE(37)] = 1212,
  [SMALL_STATE(38)] = 1234,
  [SMALL_STATE(39)] = 1256,
  [SMALL_STATE(40)] = 1278,
  [SMALL_STATE(41)] = 1300,
  [SMALL_STATE(42)] = 1334,
  [SMALL_STATE(43)] = 1371,
  [SMALL_STATE(44)] = 1404,
  [SMALL_STATE(45)] = 1441,
  [SMALL_STATE(46)] = 1472,
  [SMALL_STATE(47)] = 1509,
  [SMALL_STATE(48)] = 1542,
  [SMALL_STATE(49)] = 1575,
  [SMALL_STATE(50)] = 1603,
  [SMALL_STATE(51)] = 1621,
  [SMALL_STATE(52)] = 1644,
  [SMALL_STATE(53)] = 1667,
  [SMALL_STATE(54)] = 1690,
  [SMALL_STATE(55)] = 1721,
  [SMALL_STATE(56)] = 1744,
  [SMALL_STATE(57)] = 1767,
  [SMALL_STATE(58)] = 1790,
  [SMALL_STATE(59)] = 1821,
  [SMALL_STATE(60)] = 1842,
  [SMALL_STATE(61)] = 1863,
  [SMALL_STATE(62)] = 1886,
  [SMALL_STATE(63)] = 1917,
  [SMALL_STATE(64)] = 1938,
  [SMALL_STATE(65)] = 1969,
  [SMALL_STATE(66)] = 1990,
  [SMALL_STATE(67)] = 2009,
  [SMALL_STATE(68)] = 2028,
  [SMALL_STATE(69)] = 2048,
  [SMALL_STATE(70)] = 2076,
  [SMALL_STATE(71)] = 2096,
  [SMALL_STATE(72)] = 2114,
  [SMALL_STATE(73)] = 2132,
  [SMALL_STATE(74)] = 2160,
  [SMALL_STATE(75)] = 2178,
  [SMALL_STATE(76)] = 2206,
  [SMALL_STATE(77)] = 2222,
  [SMALL_STATE(78)] = 2242,
  [SMALL_STATE(79)] = 2262,
  [SMALL_STATE(80)] = 2282,
  [SMALL_STATE(81)] = 2304,
  [SMALL_STATE(82)] = 2319,
  [SMALL_STATE(83)] = 2336,
  [SMALL_STATE(84)] = 2353,
  [SMALL_STATE(85)] = 2370,
  [SMALL_STATE(86)] = 2387,
  [SMALL_STATE(87)] = 2404,
  [SMALL_STATE(88)] = 2431,
  [SMALL_STATE(89)] = 2460,
  [SMALL_STATE(90)] = 2475,
  [SMALL_STATE(91)] = 2492,
  [SMALL_STATE(92)] = 2519,
  [SMALL_STATE(93)] = 2534,
  [SMALL_STATE(94)] = 2561,
  [SMALL_STATE(95)] = 2578,
  [SMALL_STATE(96)] = 2595,
  [SMALL_STATE(97)] = 2612,
  [SMALL_STATE(98)] = 2629,
  [SMALL_STATE(99)] = 2646,
  [SMALL_STATE(100)] = 2663,
  [SMALL_STATE(101)] = 2680,
  [SMALL_STATE(102)] = 2697,
  [SMALL_STATE(103)] = 2712,
  [SMALL_STATE(104)] = 2729,
  [SMALL_STATE(105)] = 2746,
  [SMALL_STATE(106)] = 2761,
  [SMALL_STATE(107)] = 2778,
  [SMALL_STATE(108)] = 2795,
  [SMALL_STATE(109)] = 2810,
  [SMALL_STATE(110)] = 2824,
  [SMALL_STATE(111)] = 2838,
  [SMALL_STATE(112)] = 2852,
  [SMALL_STATE(113)] = 2866,
  [SMALL_STATE(114)] = 2880,
  [SMALL_STATE(115)] = 2894,
  [SMALL_STATE(116)] = 2908,
  [SMALL_STATE(117)] = 2922,
  [SMALL_STATE(118)] = 2936,
  [SMALL_STATE(119)] = 2952,
  [SMALL_STATE(120)] = 2966,
  [SMALL_STATE(121)] = 2980,
  [SMALL_STATE(122)] = 2994,
  [SMALL_STATE(123)] = 3008,
  [SMALL_STATE(124)] = 3022,
  [SMALL_STATE(125)] = 3036,
  [SMALL_STATE(126)] = 3050,
  [SMALL_STATE(127)] = 3064,
  [SMALL_STATE(128)] = 3078,
  [SMALL_STATE(129)] = 3092,
  [SMALL_STATE(130)] = 3106,
  [SMALL_STATE(131)] = 3120,
  [SMALL_STATE(132)] = 3134,
  [SMALL_STATE(133)] = 3148,
  [SMALL_STATE(134)] = 3162,
  [SMALL_STATE(135)] = 3176,
  [SMALL_STATE(136)] = 3190,
  [SMALL_STATE(137)] = 3204,
  [SMALL_STATE(138)] = 3226,
  [SMALL_STATE(139)] = 3240,
  [SMALL_STATE(140)] = 3254,
  [SMALL_STATE(141)] = 3268,
  [SMALL_STATE(142)] = 3282,
  [SMALL_STATE(143)] = 3296,
  [SMALL_STATE(144)] = 3310,
  [SMALL_STATE(145)] = 3324,
  [SMALL_STATE(146)] = 3338,
  [SMALL_STATE(147)] = 3352,
  [SMALL_STATE(148)] = 3366,
  [SMALL_STATE(149)] = 3380,
  [SMALL_STATE(150)] = 3394,
  [SMALL_STATE(151)] = 3408,
  [SMALL_STATE(152)] = 3422,
  [SMALL_STATE(153)] = 3436,
  [SMALL_STATE(154)] = 3450,
  [SMALL_STATE(155)] = 3464,
  [SMALL_STATE(156)] = 3478,
  [SMALL_STATE(157)] = 3492,
  [SMALL_STATE(158)] = 3506,
  [SMALL_STATE(159)] = 3520,
  [SMALL_STATE(160)] = 3534,
  [SMALL_STATE(161)] = 3548,
  [SMALL_STATE(162)] = 3562,
  [SMALL_STATE(163)] = 3576,
  [SMALL_STATE(164)] = 3590,
  [SMALL_STATE(165)] = 3604,
  [SMALL_STATE(166)] = 3618,
  [SMALL_STATE(167)] = 3632,
  [SMALL_STATE(168)] = 3664,
  [SMALL_STATE(169)] = 3678,
  [SMALL_STATE(170)] = 3692,
  [SMALL_STATE(171)] = 3706,
  [SMALL_STATE(172)] = 3720,
  [SMALL_STATE(173)] = 3734,
  [SMALL_STATE(174)] = 3748,
  [SMALL_STATE(175)] = 3762,
  [SMALL_STATE(176)] = 3776,
  [SMALL_STATE(177)] = 3790,
  [SMALL_STATE(178)] = 3804,
  [SMALL_STATE(179)] = 3818,
  [SMALL_STATE(180)] = 3832,
  [SMALL_STATE(181)] = 3846,
  [SMALL_STATE(182)] = 3860,
  [SMALL_STATE(183)] = 3874,
  [SMALL_STATE(184)] = 3888,
  [SMALL_STATE(185)] = 3902,
  [SMALL_STATE(186)] = 3916,
  [SMALL_STATE(187)] = 3930,
  [SMALL_STATE(188)] = 3944,
  [SMALL_STATE(189)] = 3958,
  [SMALL_STATE(190)] = 3972,
  [SMALL_STATE(191)] = 3986,
  [SMALL_STATE(192)] = 4000,
  [SMALL_STATE(193)] = 4014,
  [SMALL_STATE(194)] = 4028,
  [SMALL_STATE(195)] = 4042,
  [SMALL_STATE(196)] = 4056,
  [SMALL_STATE(197)] = 4070,
  [SMALL_STATE(198)] = 4084,
  [SMALL_STATE(199)] = 4098,
  [SMALL_STATE(200)] = 4112,
  [SMALL_STATE(201)] = 4126,
  [SMALL_STATE(202)] = 4140,
  [SMALL_STATE(203)] = 4154,
  [SMALL_STATE(204)] = 4168,
  [SMALL_STATE(205)] = 4184,
  [SMALL_STATE(206)] = 4198,
  [SMALL_STATE(207)] = 4221,
  [SMALL_STATE(208)] = 4243,
  [SMALL_STATE(209)] = 4257,
  [SMALL_STATE(210)] = 4271,
  [SMALL_STATE(211)] = 4297,
  [SMALL_STATE(212)] = 4318,
  [SMALL_STATE(213)] = 4335,
  [SMALL_STATE(214)] = 4354,
  [SMALL_STATE(215)] = 4371,
  [SMALL_STATE(216)] = 4388,
  [SMALL_STATE(217)] = 4405,
  [SMALL_STATE(218)] = 4422,
  [SMALL_STATE(219)] = 4432,
  [SMALL_STATE(220)] = 4448,
  [SMALL_STATE(221)] = 4462,
  [SMALL_STATE(222)] = 4476,
  [SMALL_STATE(223)] = 4488,
  [SMALL_STATE(224)] = 4498,
  [SMALL_STATE(225)] = 4508,
  [SMALL_STATE(226)] = 4518,
  [SMALL_STATE(227)] = 4534,
  [SMALL_STATE(228)] = 4550,
  [SMALL_STATE(229)] = 4564,
  [SMALL_STATE(230)] = 4578,
  [SMALL_STATE(231)] = 4594,
  [SMALL_STATE(232)] = 4604,
  [SMALL_STATE(233)] = 4614,
  [SMALL_STATE(234)] = 4628,
  [SMALL_STATE(235)] = 4644,
  [SMALL_STATE(236)] = 4654,
  [SMALL_STATE(237)] = 4664,
  [SMALL_STATE(238)] = 4678,
  [SMALL_STATE(239)] = 4694,
  [SMALL_STATE(240)] = 4704,
  [SMALL_STATE(241)] = 4714,
  [SMALL_STATE(242)] = 4724,
  [SMALL_STATE(243)] = 4735,
  [SMALL_STATE(244)] = 4748,
  [SMALL_STATE(245)] = 4759,
  [SMALL_STATE(246)] = 4772,
  [SMALL_STATE(247)] = 4781,
  [SMALL_STATE(248)] = 4794,
  [SMALL_STATE(249)] = 4804,
  [SMALL_STATE(250)] = 4814,
  [SMALL_STATE(251)] = 4824,
  [SMALL_STATE(252)] = 4834,
  [SMALL_STATE(253)] = 4844,
  [SMALL_STATE(254)] = 4854,
  [SMALL_STATE(255)] = 4864,
  [SMALL_STATE(256)] = 4874,
  [SMALL_STATE(257)] = 4884,
  [SMALL_STATE(258)] = 4894,
  [SMALL_STATE(259)] = 4904,
  [SMALL_STATE(260)] = 4914,
  [SMALL_STATE(261)] = 4924,
  [SMALL_STATE(262)] = 4934,
  [SMALL_STATE(263)] = 4944,
  [SMALL_STATE(264)] = 4954,
  [SMALL_STATE(265)] = 4964,
  [SMALL_STATE(266)] = 4974,
  [SMALL_STATE(267)] = 4984,
  [SMALL_STATE(268)] = 4994,
  [SMALL_STATE(269)] = 5000,
  [SMALL_STATE(270)] = 5010,
  [SMALL_STATE(271)] = 5020,
  [SMALL_STATE(272)] = 5030,
  [SMALL_STATE(273)] = 5040,
  [SMALL_STATE(274)] = 5046,
  [SMALL_STATE(275)] = 5056,
  [SMALL_STATE(276)] = 5066,
  [SMALL_STATE(277)] = 5076,
  [SMALL_STATE(278)] = 5086,
  [SMALL_STATE(279)] = 5096,
  [SMALL_STATE(280)] = 5106,
  [SMALL_STATE(281)] = 5116,
  [SMALL_STATE(282)] = 5126,
  [SMALL_STATE(283)] = 5136,
  [SMALL_STATE(284)] = 5146,
  [SMALL_STATE(285)] = 5156,
  [SMALL_STATE(286)] = 5166,
  [SMALL_STATE(287)] = 5176,
  [SMALL_STATE(288)] = 5186,
  [SMALL_STATE(289)] = 5196,
  [SMALL_STATE(290)] = 5206,
  [SMALL_STATE(291)] = 5216,
  [SMALL_STATE(292)] = 5223,
  [SMALL_STATE(293)] = 5230,
  [SMALL_STATE(294)] = 5237,
  [SMALL_STATE(295)] = 5244,
  [SMALL_STATE(296)] = 5251,
  [SMALL_STATE(297)] = 5258,
  [SMALL_STATE(298)] = 5265,
  [SMALL_STATE(299)] = 5272,
  [SMALL_STATE(300)] = 5279,
  [SMALL_STATE(301)] = 5286,
  [SMALL_STATE(302)] = 5293,
  [SMALL_STATE(303)] = 5300,
  [SMALL_STATE(304)] = 5307,
  [SMALL_STATE(305)] = 5314,
  [SMALL_STATE(306)] = 5319,
  [SMALL_STATE(307)] = 5326,
  [SMALL_STATE(308)] = 5331,
  [SMALL_STATE(309)] = 5338,
  [SMALL_STATE(310)] = 5345,
  [SMALL_STATE(311)] = 5352,
  [SMALL_STATE(312)] = 5359,
  [SMALL_STATE(313)] = 5366,
  [SMALL_STATE(314)] = 5373,
  [SMALL_STATE(315)] = 5380,
  [SMALL_STATE(316)] = 5387,
  [SMALL_STATE(317)] = 5394,
  [SMALL_STATE(318)] = 5401,
  [SMALL_STATE(319)] = 5408,
  [SMALL_STATE(320)] = 5415,
  [SMALL_STATE(321)] = 5420,
  [SMALL_STATE(322)] = 5427,
  [SMALL_STATE(323)] = 5434,
  [SMALL_STATE(324)] = 5441,
  [SMALL_STATE(325)] = 5448,
  [SMALL_STATE(326)] = 5455,
  [SMALL_STATE(327)] = 5462,
  [SMALL_STATE(328)] = 5469,
  [SMALL_STATE(329)] = 5476,
  [SMALL_STATE(330)] = 5483,
  [SMALL_STATE(331)] = 5488,
  [SMALL_STATE(332)] = 5495,
  [SMALL_STATE(333)] = 5500,
  [SMALL_STATE(334)] = 5507,
  [SMALL_STATE(335)] = 5514,
  [SMALL_STATE(336)] = 5521,
  [SMALL_STATE(337)] = 5525,
  [SMALL_STATE(338)] = 5529,
  [SMALL_STATE(339)] = 5533,
  [SMALL_STATE(340)] = 5537,
  [SMALL_STATE(341)] = 5541,
  [SMALL_STATE(342)] = 5545,
  [SMALL_STATE(343)] = 5549,
  [SMALL_STATE(344)] = 5553,
  [SMALL_STATE(345)] = 5557,
  [SMALL_STATE(346)] = 5561,
  [SMALL_STATE(347)] = 5565,
  [SMALL_STATE(348)] = 5569,
  [SMALL_STATE(349)] = 5573,
  [SMALL_STATE(350)] = 5577,
  [SMALL_STATE(351)] = 5581,
  [SMALL_STATE(352)] = 5585,
  [SMALL_STATE(353)] = 5589,
  [SMALL_STATE(354)] = 5593,
  [SMALL_STATE(355)] = 5597,
  [SMALL_STATE(356)] = 5601,
  [SMALL_STATE(357)] = 5605,
  [SMALL_STATE(358)] = 5609,
  [SMALL_STATE(359)] = 5613,
  [SMALL_STATE(360)] = 5617,
  [SMALL_STATE(361)] = 5621,
  [SMALL_STATE(362)] = 5625,
  [SMALL_STATE(363)] = 5629,
  [SMALL_STATE(364)] = 5633,
  [SMALL_STATE(365)] = 5637,
  [SMALL_STATE(366)] = 5641,
  [SMALL_STATE(367)] = 5645,
  [SMALL_STATE(368)] = 5649,
  [SMALL_STATE(369)] = 5653,
  [SMALL_STATE(370)] = 5657,
  [SMALL_STATE(371)] = 5661,
  [SMALL_STATE(372)] = 5665,
  [SMALL_STATE(373)] = 5669,
  [SMALL_STATE(374)] = 5673,
  [SMALL_STATE(375)] = 5677,
  [SMALL_STATE(376)] = 5681,
  [SMALL_STATE(377)] = 5685,
  [SMALL_STATE(378)] = 5689,
  [SMALL_STATE(379)] = 5693,
  [SMALL_STATE(380)] = 5697,
  [SMALL_STATE(381)] = 5701,
  [SMALL_STATE(382)] = 5705,
  [SMALL_STATE(383)] = 5709,
  [SMALL_STATE(384)] = 5713,
  [SMALL_STATE(385)] = 5717,
  [SMALL_STATE(386)] = 5721,
  [SMALL_STATE(387)] = 5725,
  [SMALL_STATE(388)] = 5729,
  [SMALL_STATE(389)] = 5733,
  [SMALL_STATE(390)] = 5737,
  [SMALL_STATE(391)] = 5741,
  [SMALL_STATE(392)] = 5745,
  [SMALL_STATE(393)] = 5749,
  [SMALL_STATE(394)] = 5753,
  [SMALL_STATE(395)] = 5757,
  [SMALL_STATE(396)] = 5761,
  [SMALL_STATE(397)] = 5765,
  [SMALL_STATE(398)] = 5769,
  [SMALL_STATE(399)] = 5773,
  [SMALL_STATE(400)] = 5777,
  [SMALL_STATE(401)] = 5781,
  [SMALL_STATE(402)] = 5785,
  [SMALL_STATE(403)] = 5789,
  [SMALL_STATE(404)] = 5793,
  [SMALL_STATE(405)] = 5797,
  [SMALL_STATE(406)] = 5801,
  [SMALL_STATE(407)] = 5805,
  [SMALL_STATE(408)] = 5809,
  [SMALL_STATE(409)] = 5813,
  [SMALL_STATE(410)] = 5817,
  [SMALL_STATE(411)] = 5821,
  [SMALL_STATE(412)] = 5825,
  [SMALL_STATE(413)] = 5829,
  [SMALL_STATE(414)] = 5833,
  [SMALL_STATE(415)] = 5837,
  [SMALL_STATE(416)] = 5841,
  [SMALL_STATE(417)] = 5845,
  [SMALL_STATE(418)] = 5849,
  [SMALL_STATE(419)] = 5853,
  [SMALL_STATE(420)] = 5857,
  [SMALL_STATE(421)] = 5861,
  [SMALL_STATE(422)] = 5865,
  [SMALL_STATE(423)] = 5869,
  [SMALL_STATE(424)] = 5873,
  [SMALL_STATE(425)] = 5877,
  [SMALL_STATE(426)] = 5881,
  [SMALL_STATE(427)] = 5885,
  [SMALL_STATE(428)] = 5889,
  [SMALL_STATE(429)] = 5893,
  [SMALL_STATE(430)] = 5897,
  [SMALL_STATE(431)] = 5901,
  [SMALL_STATE(432)] = 5905,
  [SMALL_STATE(433)] = 5909,
  [SMALL_STATE(434)] = 5913,
  [SMALL_STATE(435)] = 5917,
  [SMALL_STATE(436)] = 5921,
  [SMALL_STATE(437)] = 5925,
  [SMALL_STATE(438)] = 5929,
  [SMALL_STATE(439)] = 5933,
  [SMALL_STATE(440)] = 5937,
  [SMALL_STATE(441)] = 5941,
  [SMALL_STATE(442)] = 5945,
  [SMALL_STATE(443)] = 5949,
  [SMALL_STATE(444)] = 5953,
  [SMALL_STATE(445)] = 5957,
  [SMALL_STATE(446)] = 5961,
  [SMALL_STATE(447)] = 5965,
  [SMALL_STATE(448)] = 5969,
  [SMALL_STATE(449)] = 5973,
  [SMALL_STATE(450)] = 5977,
  [SMALL_STATE(451)] = 5981,
  [SMALL_STATE(452)] = 5985,
  [SMALL_STATE(453)] = 5989,
  [SMALL_STATE(454)] = 5993,
  [SMALL_STATE(455)] = 5997,
  [SMALL_STATE(456)] = 6001,
  [SMALL_STATE(457)] = 6005,
  [SMALL_STATE(458)] = 6009,
  [SMALL_STATE(459)] = 6013,
  [SMALL_STATE(460)] = 6017,
  [SMALL_STATE(461)] = 6021,
  [SMALL_STATE(462)] = 6025,
  [SMALL_STATE(463)] = 6029,
  [SMALL_STATE(464)] = 6033,
  [SMALL_STATE(465)] = 6037,
  [SMALL_STATE(466)] = 6041,
  [SMALL_STATE(467)] = 6045,
  [SMALL_STATE(468)] = 6049,
  [SMALL_STATE(469)] = 6053,
  [SMALL_STATE(470)] = 6057,
  [SMALL_STATE(471)] = 6061,
  [SMALL_STATE(472)] = 6065,
  [SMALL_STATE(473)] = 6069,
  [SMALL_STATE(474)] = 6073,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_radius, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_radius, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polar, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_polar, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(33),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(58),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(35),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(251),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(303),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(244),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(242),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(273),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 6),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 5),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 13),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 13),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 14),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 28),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 12),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 9),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 22),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 21),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 20),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 19),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 22),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 21),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 22),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 21),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 11),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_dxy_attr, 3, .production_id = 18),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_output, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_parameter, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_light, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 17),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_widget, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 17),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 17),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 16),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 9),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 14),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 11),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 17),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1029] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
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
