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
#define STATE_COUNT 480
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
  [47] = 45,
  [48] = 45,
  [49] = 14,
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
  [60] = 11,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 26,
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
  [81] = 25,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 24,
  [89] = 14,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 13,
  [97] = 26,
  [98] = 25,
  [99] = 15,
  [100] = 100,
  [101] = 17,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 16,
  [106] = 75,
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
  [184] = 130,
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
  [197] = 131,
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
  [213] = 12,
  [214] = 128,
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
  [227] = 11,
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
  [243] = 230,
  [244] = 230,
  [245] = 245,
  [246] = 237,
  [247] = 247,
  [248] = 237,
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
  [266] = 264,
  [267] = 263,
  [268] = 17,
  [269] = 269,
  [270] = 264,
  [271] = 271,
  [272] = 11,
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
  [289] = 263,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 263,
  [294] = 294,
  [295] = 12,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 12,
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
  [321] = 318,
  [322] = 322,
  [323] = 323,
  [324] = 318,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 318,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
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
  [358] = 358,
  [359] = 359,
  [360] = 107,
  [361] = 361,
  [362] = 13,
  [363] = 363,
  [364] = 92,
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
  [378] = 378,
  [379] = 15,
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
  [398] = 16,
  [399] = 399,
  [400] = 400,
  [401] = 15,
  [402] = 14,
  [403] = 103,
  [404] = 404,
  [405] = 92,
  [406] = 13,
  [407] = 26,
  [408] = 25,
  [409] = 409,
  [410] = 410,
  [411] = 24,
  [412] = 17,
  [413] = 103,
  [414] = 107,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 16,
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
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 390,
  [440] = 367,
  [441] = 383,
  [442] = 442,
  [443] = 443,
  [444] = 369,
  [445] = 368,
  [446] = 363,
  [447] = 447,
  [448] = 400,
  [449] = 449,
  [450] = 367,
  [451] = 383,
  [452] = 24,
  [453] = 453,
  [454] = 363,
  [455] = 455,
  [456] = 400,
  [457] = 457,
  [458] = 383,
  [459] = 459,
  [460] = 363,
  [461] = 461,
  [462] = 423,
  [463] = 422,
  [464] = 419,
  [465] = 342,
  [466] = 409,
  [467] = 378,
  [468] = 468,
  [469] = 469,
  [470] = 423,
  [471] = 422,
  [472] = 419,
  [473] = 378,
  [474] = 474,
  [475] = 423,
  [476] = 422,
  [477] = 378,
  [478] = 376,
  [479] = 376,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(399);
      if (lookahead == '"') ADVANCE(638);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(643);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == ')') ADVANCE(413);
      if (lookahead == ',') ADVANCE(403);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '0') ADVANCE(448);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '@') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'g') ADVANCE(350);
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(79);
      if (lookahead == 'w') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(420);
      if (lookahead == 'y') ADVANCE(421);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(401);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(410);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(404);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(407);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(405);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(408);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(638);
      if (lookahead == '\'') ADVANCE(643);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(696);
      if (lookahead != 0) ADVANCE(697);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(640);
      if (lookahead == '\'') ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(636);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(566);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(390);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == ')') ADVANCE(413);
      if (lookahead == '@') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(566);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == '@') ADVANCE(458);
      if (lookahead == 'b') ADVANCE(531);
      if (lookahead == 'm') ADVANCE(516);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == '@') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == '@') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(413);
      if (lookahead == '@') ADVANCE(458);
      if (lookahead == 'b') ADVANCE(256);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == 'w') ADVANCE(194);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(413);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead == 'i') ADVANCE(526);
      if (lookahead == 'l') ADVANCE(500);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead == 'w') ADVANCE(519);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(676);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(676);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(695);
      if (lookahead == 'm') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'U') ADVANCE(688);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '5') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'H') ADVANCE(690);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 176) ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(699);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == '8') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'U') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '5') ADVANCE(50);
      if (lookahead == 'H') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == '5') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == '5') ADVANCE(235);
      END_STATE();
    case 45:
      if (lookahead == '5') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == '5') ADVANCE(235);
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 47:
      if (lookahead == ';') ADVANCE(400);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(660);
      END_STATE();
    case 49:
      if (lookahead == '@') ADVANCE(458);
      if (lookahead == 'b') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'm') ADVANCE(516);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 50:
      if (lookahead == 'H') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'H') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'H') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 'H') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(432);
      if (lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(530);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'm') ADVANCE(516);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == 'v') ADVANCE(505);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(325);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(649);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(653);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(679);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(432);
      if (lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 152:
      if (lookahead == 'f') ADVANCE(313);
      END_STATE();
    case 153:
      if (lookahead == 'f') ADVANCE(326);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(686);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(702);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(145);
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 169:
      if (lookahead == 'h') ADVANCE(659);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(411);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(419);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(674);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(332);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 200:
      if (lookahead == 'j') ADVANCE(118);
      END_STATE();
    case 201:
      if (lookahead == 'k') ADVANCE(687);
      END_STATE();
    case 202:
      if (lookahead == 'k') ADVANCE(160);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(635);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(685);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(691);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(693);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(487);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(676);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(695);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(689);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(688);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(459);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(678);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(698);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(699);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(476);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 233:
      if (lookahead == 'm') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(675);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 275:
      if (lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 276:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 277:
      if (lookahead == 'p') ADVANCE(667);
      END_STATE();
    case 278:
      if (lookahead == 'p') ADVANCE(666);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(678);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 304:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 305:
      if (lookahead == 's') ADVANCE(663);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(664);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(651);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 349:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 350:
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'z') ADVANCE(186);
      END_STATE();
    case 351:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 352:
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 353:
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 354:
      if (lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 355:
      if (lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 356:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 357:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 358:
      if (lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 359:
      if (lookahead == 'v') ADVANCE(114);
      END_STATE();
    case 360:
      if (lookahead == 'w') ADVANCE(1);
      END_STATE();
    case 361:
      if (lookahead == 'x') ADVANCE(282);
      END_STATE();
    case 362:
      if (lookahead == 'x') ADVANCE(315);
      END_STATE();
    case 363:
      if (lookahead == 'z') ADVANCE(115);
      END_STATE();
    case 364:
      if (lookahead == 'z') ADVANCE(271);
      END_STATE();
    case 365:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(676);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 366:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(676);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(695);
      if (lookahead == 'm') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(699);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(370)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 371:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 372:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 373:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(560);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(683);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(684);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(682);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 391:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 392:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 393:
      if (eof) ADVANCE(399);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == ')') ADVANCE(413);
      if (lookahead == ',') ADVANCE(403);
      if (lookahead == '0') ADVANCE(24);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(569);
      if (lookahead == 'c') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(579);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == 'l') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(596);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(597);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 't') ADVANCE(610);
      if (lookahead == 'u') ADVANCE(604);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(393)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 394:
      if (eof) ADVANCE(399);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(579);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == 'l') ADVANCE(598);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'u') ADVANCE(604);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 395:
      if (eof) ADVANCE(399);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == ')') ADVANCE(413);
      if (lookahead == ',') ADVANCE(403);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'g') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == 'w') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(420);
      if (lookahead == 'y') ADVANCE(421);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 396:
      if (eof) ADVANCE(399);
      if (lookahead == ')') ADVANCE(413);
      if (lookahead == ',') ADVANCE(403);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '@') ADVANCE(458);
      if (lookahead == 'b') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'g') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == 'w') ADVANCE(183);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 397:
      if (eof) ADVANCE(399);
      if (lookahead == ',') ADVANCE(403);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(253);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 398:
      if (eof) ADVANCE(399);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__new_parameter_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_module2);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(422);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_dx);
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_dy);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_dxy);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_input2);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_input2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_output2);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_output2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_light2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_light2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_widget2);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_widget2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == 'H') ADVANCE(447);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(453);
      if (lookahead == 'H') ADVANCE(447);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'H') ADVANCE(447);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(456);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(447);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(457);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(447);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(447);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(447);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(447);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(462);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(459);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(463);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(459);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == 'H') ADVANCE(476);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == 'H') ADVANCE(476);
      if (lookahead == 'm') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(476);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 176) ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(476);
      if (lookahead == 'm') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == 'i') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(558);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == 'H') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == 'o') ADVANCE(627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(608);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(640);
      if (lookahead == '\'') ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(637);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(697);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(637);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(642);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(697);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(637);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_decoration2);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(235);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == '\'') ADVANCE(644);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(697);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == '5') ADVANCE(235);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 393},
  [3] = {.lex_state = 393},
  [4] = {.lex_state = 395},
  [5] = {.lex_state = 395},
  [6] = {.lex_state = 395},
  [7] = {.lex_state = 395},
  [8] = {.lex_state = 395},
  [9] = {.lex_state = 395},
  [10] = {.lex_state = 395},
  [11] = {.lex_state = 393},
  [12] = {.lex_state = 395},
  [13] = {.lex_state = 393},
  [14] = {.lex_state = 393},
  [15] = {.lex_state = 393},
  [16] = {.lex_state = 393},
  [17] = {.lex_state = 393},
  [18] = {.lex_state = 393},
  [19] = {.lex_state = 393},
  [20] = {.lex_state = 393},
  [21] = {.lex_state = 393},
  [22] = {.lex_state = 393},
  [23] = {.lex_state = 393},
  [24] = {.lex_state = 393},
  [25] = {.lex_state = 393},
  [26] = {.lex_state = 393},
  [27] = {.lex_state = 395},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 396},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 395},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 80},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 396},
  [50] = {.lex_state = 80},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 395},
  [54] = {.lex_state = 395},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 396},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 394},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 395},
  [74] = {.lex_state = 396},
  [75] = {.lex_state = 398},
  [76] = {.lex_state = 396},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 397},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 396},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 395},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 394},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 394},
  [89] = {.lex_state = 394},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 394},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 395},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 394},
  [97] = {.lex_state = 394},
  [98] = {.lex_state = 394},
  [99] = {.lex_state = 394},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 394},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 394},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 394},
  [106] = {.lex_state = 397},
  [107] = {.lex_state = 394},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 396},
  [114] = {.lex_state = 18},
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
  [137] = {.lex_state = 395},
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
  [184] = {.lex_state = 49},
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
  [197] = {.lex_state = 80},
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
  [212] = {.lex_state = 395},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 22},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 22},
  [218] = {.lex_state = 393},
  [219] = {.lex_state = 395},
  [220] = {.lex_state = 393},
  [221] = {.lex_state = 16},
  [222] = {.lex_state = 393},
  [223] = {.lex_state = 393},
  [224] = {.lex_state = 393},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 395},
  [227] = {.lex_state = 22},
  [228] = {.lex_state = 393},
  [229] = {.lex_state = 393},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 396},
  [232] = {.lex_state = 395},
  [233] = {.lex_state = 393},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 393},
  [236] = {.lex_state = 395},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 395},
  [239] = {.lex_state = 395},
  [240] = {.lex_state = 393},
  [241] = {.lex_state = 395},
  [242] = {.lex_state = 393},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 18},
  [246] = {.lex_state = 18},
  [247] = {.lex_state = 395},
  [248] = {.lex_state = 18},
  [249] = {.lex_state = 395},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 11},
  [254] = {.lex_state = 396},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 14},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 393},
  [259] = {.lex_state = 393},
  [260] = {.lex_state = 23},
  [261] = {.lex_state = 23},
  [262] = {.lex_state = 21},
  [263] = {.lex_state = 80},
  [264] = {.lex_state = 393},
  [265] = {.lex_state = 23},
  [266] = {.lex_state = 393},
  [267] = {.lex_state = 80},
  [268] = {.lex_state = 396},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 393},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 14},
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
  [289] = {.lex_state = 80},
  [290] = {.lex_state = 396},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 393},
  [293] = {.lex_state = 80},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 16},
  [296] = {.lex_state = 14},
  [297] = {.lex_state = 14},
  [298] = {.lex_state = 14},
  [299] = {.lex_state = 14},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 23},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 370},
  [305] = {.lex_state = 370},
  [306] = {.lex_state = 14},
  [307] = {.lex_state = 23},
  [308] = {.lex_state = 394},
  [309] = {.lex_state = 14},
  [310] = {.lex_state = 23},
  [311] = {.lex_state = 14},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 14},
  [314] = {.lex_state = 14},
  [315] = {.lex_state = 14},
  [316] = {.lex_state = 393},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 80},
  [319] = {.lex_state = 14},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 80},
  [322] = {.lex_state = 23},
  [323] = {.lex_state = 23},
  [324] = {.lex_state = 80},
  [325] = {.lex_state = 23},
  [326] = {.lex_state = 14},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 80},
  [329] = {.lex_state = 395},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 14},
  [332] = {.lex_state = 393},
  [333] = {.lex_state = 14},
  [334] = {.lex_state = 14},
  [335] = {.lex_state = 14},
  [336] = {.lex_state = 14},
  [337] = {.lex_state = 14},
  [338] = {.lex_state = 13},
  [339] = {.lex_state = 396},
  [340] = {.lex_state = 396},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 641},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 14},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 395},
  [356] = {.lex_state = 14},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 80},
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
  [374] = {.lex_state = 393},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 393},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 20},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 394},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 21},
  [391] = {.lex_state = 14},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 14},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 14},
  [399] = {.lex_state = 393},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 14},
  [402] = {.lex_state = 14},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 14},
  [405] = {.lex_state = 14},
  [406] = {.lex_state = 14},
  [407] = {.lex_state = 14},
  [408] = {.lex_state = 14},
  [409] = {.lex_state = 646},
  [410] = {.lex_state = 16},
  [411] = {.lex_state = 14},
  [412] = {.lex_state = 14},
  [413] = {.lex_state = 14},
  [414] = {.lex_state = 14},
  [415] = {.lex_state = 14},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 14},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 14},
  [425] = {.lex_state = 14},
  [426] = {.lex_state = 13},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 395},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 21},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 20},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 80},
  [447] = {.lex_state = 393},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 14},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 20},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 393},
  [454] = {.lex_state = 80},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 80},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 641},
  [466] = {.lex_state = 646},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 646},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 641},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
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
    [sym_command] = STATE(435),
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
    STATE(4), 1,
      sym_font,
    STATE(57), 1,
      sym__align,
    STATE(67), 1,
      sym_valign,
    STATE(68), 1,
      sym_halign,
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
  [55] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(45), 1,
      sym_fontsize,
    STATE(6), 1,
      sym_font,
    STATE(61), 1,
      sym__align,
    STATE(67), 1,
      sym_valign,
    STATE(68), 1,
      sym_halign,
    STATE(190), 1,
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
    STATE(55), 1,
      sym__align,
    STATE(67), 1,
      sym_valign,
    STATE(68), 1,
      sym_halign,
    STATE(203), 1,
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
    STATE(46), 1,
      sym__guide_id,
    STATE(185), 1,
      sym__label_id,
    STATE(216), 1,
      sym__decoration_id,
    STATE(234), 5,
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
  [216] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(79), 1,
      sym_fontsize,
    STATE(62), 1,
      sym__align,
    STATE(67), 1,
      sym_valign,
    STATE(68), 1,
      sym_halign,
    STATE(142), 1,
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
    STATE(61), 1,
      sym__align,
    STATE(67), 1,
      sym_valign,
    STATE(68), 1,
      sym_halign,
    STATE(190), 1,
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
  [307] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(55), 1,
      sym__align,
    STATE(67), 1,
      sym_valign,
    STATE(68), 1,
      sym_halign,
    STATE(203), 1,
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
  [351] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(62), 1,
      sym__align,
    STATE(67), 1,
      sym_valign,
    STATE(68), 1,
      sym_halign,
    STATE(142), 1,
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
  [395] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(66), 1,
      sym__align,
    STATE(67), 1,
      sym_valign,
    STATE(68), 1,
      sym_halign,
    STATE(138), 1,
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
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [439] = 4,
    ACTIONS(87), 1,
      aux_sym_offset_token1,
    STATE(17), 1,
      sym_offset,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(85), 17,
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
  [473] = 2,
    ACTIONS(91), 4,
      anon_sym_x,
      anon_sym_dx,
      sym_width,
      sym_angle,
    ACTIONS(89), 19,
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
      sym_rgb,
    ACTIONS(149), 21,
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
  [920] = 2,
    ACTIONS(155), 1,
      anon_sym_x,
    ACTIONS(153), 21,
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
  [1089] = 11,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(205), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(211), 1,
      sym_angle,
    STATE(208), 1,
      sym__xy_attr,
    STATE(341), 1,
      sym__geometry_x_attr,
    STATE(416), 1,
      sym__relative_attr,
    STATE(418), 1,
      sym__guide_attr,
    ACTIONS(207), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(211), 5,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym_polar,
  [1130] = 10,
    ACTIONS(213), 1,
      anon_sym_module,
    ACTIONS(215), 1,
      anon_sym_input,
    ACTIONS(217), 1,
      anon_sym_output,
    ACTIONS(219), 1,
      aux_sym__new_parameter_token1,
    ACTIONS(221), 1,
      anon_sym_light,
    ACTIONS(223), 1,
      anon_sym_widget,
    ACTIONS(225), 1,
      anon_sym_decoration,
    ACTIONS(227), 1,
      anon_sym_guide,
    ACTIONS(229), 1,
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
  [1169] = 11,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(205), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(211), 1,
      sym_angle,
    STATE(179), 1,
      sym__xy_attr,
    STATE(341), 1,
      sym__geometry_x_attr,
    STATE(416), 1,
      sym__relative_attr,
    STATE(418), 1,
      sym__guide_attr,
    ACTIONS(207), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(211), 5,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym_polar,
  [1210] = 11,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(205), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(211), 1,
      sym_angle,
    STATE(205), 1,
      sym__xy_attr,
    STATE(341), 1,
      sym__geometry_x_attr,
    STATE(416), 1,
      sym__relative_attr,
    STATE(418), 1,
      sym__guide_attr,
    ACTIONS(207), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(211), 5,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym_polar,
  [1251] = 10,
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
    ACTIONS(231), 1,
      anon_sym_font,
    ACTIONS(233), 1,
      anon_sym_guide,
    STATE(192), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [1290] = 2,
    ACTIONS(237), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(235), 16,
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
  [1313] = 8,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(243), 1,
      anon_sym_vertical,
    ACTIONS(245), 1,
      anon_sym_horizontal,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
    STATE(332), 1,
      sym_identifier,
    STATE(168), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(239), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1347] = 2,
    ACTIONS(251), 1,
      anon_sym_x,
    ACTIONS(249), 16,
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
  [1369] = 2,
    ACTIONS(255), 1,
      anon_sym_x,
    ACTIONS(253), 16,
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
  [1391] = 2,
    ACTIONS(259), 1,
      anon_sym_x,
    ACTIONS(257), 16,
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
  [1413] = 2,
    ACTIONS(263), 1,
      anon_sym_x,
    ACTIONS(261), 16,
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
  [1435] = 2,
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
  [1457] = 8,
    ACTIONS(269), 1,
      anon_sym_input2,
    ACTIONS(271), 1,
      anon_sym_output2,
    ACTIONS(273), 1,
      anon_sym_parameter,
    ACTIONS(275), 1,
      anon_sym_light2,
    ACTIONS(277), 1,
      anon_sym_widget2,
    STATE(376), 1,
      sym_x,
    ACTIONS(279), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(367), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1490] = 7,
    ACTIONS(209), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(281), 1,
      anon_sym_id,
    ACTIONS(283), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(285), 1,
      anon_sym_AT,
    ACTIONS(287), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(207), 4,
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
  [1521] = 8,
    ACTIONS(269), 1,
      anon_sym_input2,
    ACTIONS(271), 1,
      anon_sym_output2,
    ACTIONS(273), 1,
      anon_sym_parameter,
    ACTIONS(275), 1,
      anon_sym_light2,
    ACTIONS(277), 1,
      anon_sym_widget2,
    STATE(478), 1,
      sym_x,
    ACTIONS(279), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(440), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1554] = 8,
    ACTIONS(269), 1,
      anon_sym_input2,
    ACTIONS(271), 1,
      anon_sym_output2,
    ACTIONS(273), 1,
      anon_sym_parameter,
    ACTIONS(275), 1,
      anon_sym_light2,
    ACTIONS(277), 1,
      anon_sym_widget2,
    STATE(479), 1,
      sym_x,
    ACTIONS(279), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(450), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1587] = 1,
    ACTIONS(97), 15,
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
  [1605] = 6,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(243), 1,
      anon_sym_vertical,
    ACTIONS(245), 1,
      anon_sym_horizontal,
    STATE(39), 1,
      sym_identifier,
    STATE(204), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(239), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1633] = 4,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym__scale,
    STATE(115), 1,
      sym_stretch,
    ACTIONS(289), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1656] = 2,
    ACTIONS(295), 1,
      sym_rgb,
    ACTIONS(293), 13,
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
  [1675] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(109), 1,
      sym_offset,
    ACTIONS(297), 12,
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
  [1696] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(108), 1,
      sym_offset,
    ACTIONS(299), 12,
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
  [1717] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(190), 1,
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
  [1740] = 8,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_AT,
    ACTIONS(305), 1,
      aux_sym_relative_token1,
    STATE(419), 1,
      sym_x,
    STATE(420), 1,
      sym_polar,
    STATE(421), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(279), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1771] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(203), 1,
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
  [1794] = 2,
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
  [1813] = 8,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_AT,
    ACTIONS(315), 1,
      aux_sym_relative_token1,
    ACTIONS(317), 1,
      sym_angle,
    STATE(398), 1,
      sym_polar,
    STATE(464), 1,
      sym_x,
    STATE(273), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(279), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1844] = 4,
    ACTIONS(319), 1,
      aux_sym_offset_token1,
    STATE(101), 1,
      sym_offset,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(85), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1867] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(142), 1,
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
  [1890] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(138), 1,
      sym_colour,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1913] = 8,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      aux_sym_relative_token1,
    ACTIONS(327), 1,
      sym_angle,
    STATE(16), 1,
      sym_polar,
    STATE(365), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(279), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1944] = 8,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      aux_sym_relative_token1,
    ACTIONS(335), 1,
      sym_angle,
    STATE(105), 1,
      sym_polar,
    STATE(472), 1,
      sym_x,
    STATE(86), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(279), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1975] = 2,
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
  [1994] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(134), 1,
      sym_colour,
    ACTIONS(341), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2017] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      sym_rgb,
    ACTIONS(343), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2038] = 3,
    ACTIONS(347), 1,
      sym_rgb,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(343), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2059] = 1,
    ACTIONS(145), 13,
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
  [2075] = 3,
    ACTIONS(353), 1,
      anon_sym_light2,
    ACTIONS(355), 1,
      anon_sym_dark,
    ACTIONS(351), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2095] = 1,
    ACTIONS(357), 13,
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
  [2111] = 7,
    ACTIONS(209), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(283), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(285), 1,
      anon_sym_AT,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__x_attr,
    ACTIONS(207), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2139] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym_offset,
    ACTIONS(361), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2159] = 1,
    ACTIONS(363), 13,
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
  [2175] = 2,
    ACTIONS(367), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(365), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2193] = 3,
    ACTIONS(211), 1,
      sym_angle,
    STATE(149), 1,
      sym_polar,
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
  [2213] = 7,
    ACTIONS(209), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(283), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(285), 1,
      anon_sym_AT,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym__x_attr,
    ACTIONS(207), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2241] = 2,
    ACTIONS(373), 1,
      sym_rgb,
    ACTIONS(371), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2259] = 2,
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
  [2277] = 3,
    ACTIONS(381), 1,
      anon_sym_timestamp,
    ACTIONS(383), 1,
      anon_sym_gzip,
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
  [2297] = 1,
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
  [2313] = 3,
    ACTIONS(211), 1,
      sym_angle,
    STATE(152), 1,
      sym_polar,
    ACTIONS(385), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2333] = 7,
    ACTIONS(209), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(283), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(285), 1,
      anon_sym_AT,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym__x_attr,
    ACTIONS(207), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2361] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(132), 1,
      sym_offset,
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
  [2381] = 3,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_stretch,
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
  [2401] = 4,
    ACTIONS(397), 1,
      aux_sym__input_id_token1,
    STATE(139), 1,
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
  [2423] = 7,
    ACTIONS(209), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(283), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(285), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym__y_attr,
    ACTIONS(287), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2450] = 2,
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
  [2467] = 2,
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
  [2484] = 2,
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
  [2501] = 2,
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
  [2518] = 2,
    ACTIONS(407), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(409), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2535] = 2,
    ACTIONS(413), 1,
      anon_sym_COMMA,
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
  [2552] = 8,
    ACTIONS(415), 1,
      anon_sym_input2,
    ACTIONS(417), 1,
      anon_sym_output2,
    ACTIONS(419), 1,
      anon_sym_parameter,
    ACTIONS(421), 1,
      anon_sym_light2,
    ACTIONS(423), 1,
      anon_sym_widget2,
    ACTIONS(425), 1,
      anon_sym_scale,
    ACTIONS(427), 1,
      anon_sym_stretch,
    STATE(427), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2581] = 2,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(429), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2598] = 2,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(95), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2615] = 2,
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
  [2632] = 2,
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
  [2649] = 2,
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
  [2666] = 2,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(429), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2683] = 2,
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
  [2700] = 1,
    ACTIONS(435), 12,
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
  [2715] = 2,
    ACTIONS(437), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(439), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2732] = 1,
    ACTIONS(441), 12,
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
  [2747] = 2,
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
  [2764] = 2,
    ACTIONS(443), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(365), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2781] = 2,
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
  [2798] = 1,
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
  [2813] = 1,
    ACTIONS(451), 12,
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
  [2828] = 1,
    ACTIONS(453), 12,
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
  [2843] = 2,
    ACTIONS(457), 1,
      anon_sym_timestamp,
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
  [2860] = 7,
    ACTIONS(209), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(283), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(285), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym__y_attr,
    ACTIONS(287), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2887] = 1,
    ACTIONS(459), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2902] = 7,
    ACTIONS(209), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(283), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(285), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__y_attr,
    ACTIONS(287), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2929] = 1,
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
  [2943] = 1,
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
  [2957] = 1,
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
  [2971] = 1,
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
  [2985] = 1,
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
  [2999] = 1,
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
  [3013] = 1,
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
  [3027] = 1,
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
  [3041] = 1,
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
  [3055] = 1,
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
  [3069] = 1,
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
  [3083] = 1,
    ACTIONS(429), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3097] = 1,
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
  [3111] = 1,
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
  [3125] = 1,
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
  [3139] = 1,
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
  [3153] = 1,
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
  [3167] = 1,
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
  [3181] = 1,
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
  [3195] = 1,
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
  [3209] = 1,
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
  [3223] = 1,
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
  [3237] = 5,
    STATE(67), 1,
      sym_valign,
    STATE(68), 1,
      sym_halign,
    STATE(208), 1,
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
  [3259] = 1,
    ACTIONS(341), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3273] = 1,
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
  [3287] = 1,
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
  [3301] = 1,
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
  [3315] = 1,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3329] = 1,
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
  [3343] = 1,
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
  [3357] = 1,
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
  [3371] = 1,
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
  [3385] = 1,
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
  [3399] = 1,
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
  [3413] = 1,
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
  [3427] = 1,
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
  [3441] = 1,
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
  [3455] = 1,
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
  [3469] = 1,
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
  [3483] = 1,
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
  [3497] = 1,
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
  [3511] = 1,
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
  [3525] = 1,
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
  [3539] = 1,
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
  [3553] = 1,
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
  [3567] = 1,
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
  [3581] = 1,
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
  [3595] = 1,
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
  [3609] = 1,
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
  [3623] = 1,
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
  [3637] = 1,
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
  [3651] = 1,
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
  [3665] = 1,
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
  [3679] = 1,
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
  [3693] = 1,
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
  [3707] = 1,
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
  [3721] = 1,
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
  [3735] = 1,
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
  [3749] = 1,
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
  [3763] = 1,
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
  [3777] = 1,
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
  [3791] = 1,
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
  [3805] = 1,
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
  [3819] = 1,
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
  [3833] = 1,
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
  [3847] = 1,
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
  [3861] = 1,
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
  [3875] = 1,
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
  [3889] = 1,
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
  [3903] = 2,
    ACTIONS(485), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(587), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3919] = 10,
    ACTIONS(589), 1,
      anon_sym_x,
    ACTIONS(591), 1,
      anon_sym_y,
    ACTIONS(593), 1,
      anon_sym_xy,
    ACTIONS(595), 1,
      anon_sym_text,
    ACTIONS(597), 1,
      anon_sym_font,
    ACTIONS(599), 1,
      anon_sym_size,
    ACTIONS(601), 1,
      anon_sym_halign,
    ACTIONS(603), 1,
      anon_sym_valign,
    ACTIONS(605), 1,
      anon_sym_align,
    ACTIONS(607), 2,
      anon_sym_colour,
      anon_sym_color,
  [3951] = 1,
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
  [3965] = 1,
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
  [3979] = 1,
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
  [3993] = 1,
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
  [4007] = 1,
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
  [4021] = 1,
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
  [4035] = 1,
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
  [4049] = 1,
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
  [4063] = 1,
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
  [4077] = 1,
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
  [4091] = 1,
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
  [4105] = 2,
    ACTIONS(487), 1,
      aux_sym_offset_token1,
    ACTIONS(629), 10,
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
  [4121] = 1,
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
  [4135] = 1,
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
  [4149] = 1,
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
  [4163] = 1,
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
  [4177] = 1,
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
  [4191] = 1,
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
  [4205] = 1,
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
  [4219] = 1,
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
  [4233] = 1,
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
  [4247] = 1,
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
  [4261] = 1,
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
  [4275] = 1,
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
  [4289] = 1,
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
  [4303] = 1,
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
  [4317] = 6,
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
    STATE(436), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [4340] = 2,
    ACTIONS(89), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(91), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4354] = 2,
    ACTIONS(481), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(657), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4368] = 6,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    ACTIONS(659), 1,
      anon_sym_AT,
    ACTIONS(663), 1,
      anon_sym_origin,
    ACTIONS(665), 1,
      aux_sym_origin_token1,
    STATE(163), 1,
      sym_offset,
    ACTIONS(661), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4390] = 8,
    ACTIONS(667), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_x,
    ACTIONS(671), 1,
      anon_sym_y,
    ACTIONS(673), 1,
      anon_sym_xy,
    ACTIONS(675), 1,
      anon_sym_dx,
    ACTIONS(677), 1,
      anon_sym_dy,
    ACTIONS(679), 1,
      anon_sym_dxy,
    STATE(146), 2,
      sym__scale,
      sym_stretch,
  [4416] = 6,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    ACTIONS(681), 1,
      anon_sym_AT,
    ACTIONS(683), 1,
      anon_sym_origin,
    ACTIONS(685), 1,
      aux_sym_origin_token1,
    STATE(166), 1,
      sym_offset,
    ACTIONS(661), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4437] = 5,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    STATE(370), 1,
      sym__offset,
    STATE(459), 2,
      sym_polar,
      sym__relative,
  [4454] = 6,
    ACTIONS(691), 1,
      anon_sym_input2,
    ACTIONS(693), 1,
      anon_sym_output2,
    ACTIONS(695), 1,
      anon_sym_parameter,
    ACTIONS(697), 1,
      anon_sym_light2,
    ACTIONS(699), 1,
      anon_sym_widget2,
    ACTIONS(701), 1,
      anon_sym_label,
  [4473] = 5,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym__offset,
    STATE(469), 2,
      sym_polar,
      sym__relative,
  [4490] = 5,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 1,
      aux_sym__offset_attr_token1,
    STATE(372), 1,
      sym__offset_attr,
    STATE(373), 2,
      sym__offset_xy_attr,
      sym_polar,
  [4507] = 5,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym__offset,
    STATE(461), 2,
      sym_polar,
      sym__relative,
  [4524] = 5,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym__offset,
    STATE(455), 2,
      sym_polar,
      sym__relative,
  [4541] = 5,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym__offset,
    STATE(457), 2,
      sym_polar,
      sym__relative,
  [4558] = 5,
    ACTIONS(715), 1,
      aux_sym__input_id_token1,
    ACTIONS(717), 1,
      anon_sym_none,
    ACTIONS(719), 1,
      sym_rgb,
    ACTIONS(721), 1,
      sym_rgba,
    STATE(126), 1,
      sym_name,
  [4574] = 2,
    STATE(208), 1,
      sym_valign,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4584] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(268), 1,
      sym_offset,
    ACTIONS(83), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [4596] = 4,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    STATE(370), 1,
      sym__offset,
    STATE(350), 2,
      sym_polar,
      sym__relative,
  [4610] = 4,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    STATE(370), 1,
      sym__offset,
    STATE(349), 2,
      sym_polar,
      sym__relative,
  [4624] = 2,
    STATE(266), 1,
      sym_y,
    ACTIONS(723), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4634] = 5,
    ACTIONS(725), 1,
      anon_sym_AT,
    ACTIONS(727), 1,
      aux_sym__originx_token1,
    ACTIONS(729), 1,
      aux_sym__originy_token1,
    STATE(437), 1,
      sym__originy,
    STATE(443), 1,
      sym__originx,
  [4650] = 5,
    ACTIONS(731), 1,
      anon_sym_input2,
    ACTIONS(733), 1,
      anon_sym_output2,
    ACTIONS(735), 1,
      anon_sym_parameter,
    ACTIONS(737), 1,
      anon_sym_light2,
    ACTIONS(739), 1,
      anon_sym_widget2,
  [4666] = 4,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    STATE(370), 1,
      sym__offset,
    STATE(353), 2,
      sym_polar,
      sym__relative,
  [4680] = 5,
    ACTIONS(741), 1,
      anon_sym_name,
    ACTIONS(743), 1,
      anon_sym_x,
    ACTIONS(745), 1,
      anon_sym_y,
    ACTIONS(747), 1,
      anon_sym_xy,
    ACTIONS(749), 1,
      anon_sym_part,
  [4696] = 4,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    STATE(370), 1,
      sym__offset,
    STATE(352), 2,
      sym_polar,
      sym__relative,
  [4710] = 2,
    STATE(78), 1,
      sym_halign,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4720] = 2,
    STATE(364), 1,
      sym_y,
    ACTIONS(723), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4730] = 5,
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
  [4746] = 2,
    STATE(78), 1,
      sym_valign,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4756] = 4,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    STATE(370), 1,
      sym__offset,
    STATE(351), 2,
      sym_polar,
      sym__relative,
  [4770] = 2,
    STATE(208), 1,
      sym_halign,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4780] = 4,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    STATE(370), 1,
      sym__offset,
    STATE(354), 2,
      sym_polar,
      sym__relative,
  [4794] = 2,
    STATE(264), 1,
      sym_y,
    ACTIONS(723), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4804] = 2,
    STATE(270), 1,
      sym_y,
    ACTIONS(723), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4814] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(761), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4824] = 2,
    STATE(405), 1,
      sym_y,
    ACTIONS(763), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4834] = 5,
    ACTIONS(765), 1,
      anon_sym_input2,
    ACTIONS(767), 1,
      anon_sym_output2,
    ACTIONS(769), 1,
      anon_sym_parameter,
    ACTIONS(771), 1,
      anon_sym_light2,
    ACTIONS(773), 1,
      anon_sym_widget2,
  [4850] = 2,
    STATE(92), 1,
      sym_y,
    ACTIONS(775), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4860] = 2,
    STATE(82), 1,
      sym__geometry_y_attr,
    ACTIONS(777), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4869] = 3,
    ACTIONS(779), 1,
      anon_sym_project,
    ACTIONS(781), 1,
      anon_sym_script,
    STATE(202), 2,
      sym_project,
      sym_script,
  [4880] = 3,
    ACTIONS(783), 1,
      anon_sym_module2,
    ACTIONS(785), 1,
      anon_sym_panel,
    STATE(121), 2,
      sym__module_export,
      sym_panel,
  [4891] = 4,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      aux_sym__string_token1,
    STATE(63), 1,
      sym__string,
  [4904] = 4,
    ACTIONS(793), 1,
      anon_sym_DQUOTE,
    ACTIONS(795), 1,
      anon_sym_SQUOTE,
    ACTIONS(797), 1,
      aux_sym__string_token1,
    STATE(208), 1,
      sym__string,
  [4917] = 4,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(799), 1,
      aux_sym__absolute_attr_token1,
    STATE(117), 1,
      sym_polar,
    STATE(438), 1,
      sym__absolute_x_attr,
  [4930] = 3,
    ACTIONS(801), 1,
      aux_sym__label_id_token1,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    ACTIONS(805), 1,
      anon_sym_SQUOTE,
  [4940] = 3,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(136), 1,
      sym__new_component,
  [4950] = 3,
    ACTIONS(809), 1,
      anon_sym_font,
    ACTIONS(811), 1,
      anon_sym_project,
    ACTIONS(813), 1,
      anon_sym_script,
  [4960] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    ACTIONS(815), 1,
      aux_sym_origin_token1,
    STATE(123), 1,
      sym_offset,
  [4970] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    ACTIONS(817), 1,
      aux_sym_origin_token1,
    STATE(125), 1,
      sym_offset,
  [4980] = 3,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    ACTIONS(821), 1,
      aux_sym__offset_attr_token1,
    STATE(366), 1,
      sym__offset_attr,
  [4990] = 3,
    ACTIONS(821), 1,
      aux_sym__offset_attr_token1,
    STATE(179), 1,
      sym__offset_dxy_attr,
    STATE(428), 1,
      sym__offset_attr,
  [5000] = 3,
    ACTIONS(823), 1,
      anon_sym_LPAREN,
    ACTIONS(825), 1,
      aux_sym__guide_id_token1,
    STATE(326), 1,
      sym__component_id,
  [5010] = 3,
    ACTIONS(327), 1,
      sym_angle,
    ACTIONS(827), 1,
      aux_sym_absolute_token1,
    STATE(15), 1,
      sym_polar,
  [5020] = 3,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_polar,
  [5030] = 3,
    ACTIONS(821), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      sym__offset_attr,
  [5040] = 3,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      sym_polar,
  [5050] = 3,
    ACTIONS(335), 1,
      sym_angle,
    ACTIONS(835), 1,
      aux_sym_absolute_token1,
    STATE(99), 1,
      sym_polar,
  [5060] = 1,
    ACTIONS(109), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [5066] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(51), 1,
      sym_name,
    STATE(186), 1,
      sym_decoration,
  [5076] = 3,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      sym_polar,
  [5086] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(208), 1,
      sym_colour,
  [5096] = 3,
    ACTIONS(83), 1,
      aux_sym__input_id_token1,
    ACTIONS(841), 1,
      aux_sym_offset_token1,
    STATE(412), 1,
      sym_offset,
  [5106] = 3,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(51), 1,
      sym_name,
    STATE(157), 1,
      sym_decoration,
  [5116] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(265), 1,
      sym_name,
    STATE(394), 1,
      sym__component_x_attr,
  [5126] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(265), 1,
      sym_name,
    STATE(393), 1,
      sym__component_x_attr,
  [5136] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(265), 1,
      sym_name,
    STATE(392), 1,
      sym__component_x_attr,
  [5146] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(265), 1,
      sym_name,
    STATE(389), 1,
      sym__component_x_attr,
  [5156] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(265), 1,
      sym_name,
    STATE(387), 1,
      sym__component_x_attr,
  [5166] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(260), 1,
      sym_name,
    STATE(386), 1,
      sym__component_y_attr,
  [5176] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(260), 1,
      sym_name,
    STATE(385), 1,
      sym__component_y_attr,
  [5186] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(260), 1,
      sym_name,
    STATE(384), 1,
      sym__component_y_attr,
  [5196] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(260), 1,
      sym_name,
    STATE(380), 1,
      sym__component_y_attr,
  [5206] = 3,
    ACTIONS(843), 1,
      aux_sym__input_id_token1,
    STATE(260), 1,
      sym_name,
    STATE(375), 1,
      sym__component_y_attr,
  [5216] = 3,
    ACTIONS(845), 1,
      aux_sym__input_id_token1,
    STATE(221), 1,
      sym_name,
    STATE(371), 1,
      sym__component_xy_attr,
  [5226] = 3,
    ACTIONS(845), 1,
      aux_sym__input_id_token1,
    STATE(221), 1,
      sym_name,
    STATE(343), 1,
      sym__component_xy_attr,
  [5236] = 3,
    ACTIONS(845), 1,
      aux_sym__input_id_token1,
    STATE(221), 1,
      sym_name,
    STATE(344), 1,
      sym__component_xy_attr,
  [5246] = 3,
    ACTIONS(845), 1,
      aux_sym__input_id_token1,
    STATE(221), 1,
      sym_name,
    STATE(345), 1,
      sym__component_xy_attr,
  [5256] = 3,
    ACTIONS(845), 1,
      aux_sym__input_id_token1,
    STATE(221), 1,
      sym_name,
    STATE(346), 1,
      sym__component_xy_attr,
  [5266] = 3,
    ACTIONS(317), 1,
      sym_angle,
    ACTIONS(847), 1,
      aux_sym_absolute_token1,
    STATE(401), 1,
      sym_polar,
  [5276] = 1,
    ACTIONS(849), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [5282] = 3,
    ACTIONS(851), 1,
      anon_sym_name,
    ACTIONS(853), 1,
      anon_sym_height,
    ACTIONS(855), 1,
      anon_sym_width,
  [5292] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    ACTIONS(857), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      sym_offset,
  [5302] = 3,
    ACTIONS(211), 1,
      sym_angle,
    ACTIONS(859), 1,
      aux_sym_absolute_token1,
    STATE(379), 1,
      sym_polar,
  [5312] = 3,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(189), 1,
      sym__new_component,
  [5322] = 2,
    ACTIONS(91), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      sym_angle,
  [5330] = 3,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(187), 1,
      sym__new_component,
  [5340] = 3,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(178), 1,
      sym__new_component,
  [5350] = 3,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(135), 1,
      sym__new_component,
  [5360] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(220), 1,
      sym_name,
  [5367] = 2,
    ACTIONS(861), 1,
      sym_rgb,
    ACTIONS(863), 1,
      sym_rgba,
  [5374] = 2,
    ACTIONS(821), 1,
      aux_sym__offset_attr_token1,
    STATE(191), 1,
      sym__offset_attr,
  [5381] = 2,
    ACTIONS(425), 1,
      anon_sym_scale,
    ACTIONS(427), 1,
      anon_sym_stretch,
  [5388] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(308), 1,
      sym_name,
  [5395] = 2,
    ACTIONS(865), 1,
      aux_sym__guide_attr_token1,
    STATE(76), 1,
      sym__guide_attr,
  [5402] = 2,
    ACTIONS(867), 1,
      aux_sym__guide_attr_token1,
    STATE(200), 1,
      sym_identifier,
  [5409] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(229), 1,
      sym_name,
  [5416] = 2,
    ACTIONS(283), 1,
      aux_sym__offset_attr_token1,
    STATE(196), 1,
      sym__relative_attr,
  [5423] = 2,
    ACTIONS(869), 1,
      sym_height,
    ACTIONS(871), 1,
      sym_width,
  [5430] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(242), 1,
      sym_name,
  [5437] = 1,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [5442] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
  [5449] = 1,
    ACTIONS(873), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [5454] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_name,
  [5461] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(233), 1,
      sym_name,
  [5468] = 2,
    ACTIONS(875), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_part,
  [5475] = 2,
    ACTIONS(689), 1,
      aux_sym_offset_token1,
    STATE(359), 1,
      sym__offset,
  [5482] = 2,
    ACTIONS(877), 1,
      aux_sym__input_id_token1,
    STATE(208), 1,
      sym_font,
  [5489] = 2,
    ACTIONS(879), 1,
      aux_sym_absolute_token1,
    STATE(408), 1,
      sym_radius,
  [5496] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(188), 1,
      sym_name,
  [5503] = 2,
    ACTIONS(881), 1,
      anon_sym_svg,
    STATE(153), 1,
      sym_svg,
  [5510] = 2,
    ACTIONS(883), 1,
      aux_sym_absolute_token1,
    STATE(98), 1,
      sym_radius,
  [5517] = 2,
    ACTIONS(821), 1,
      aux_sym__offset_attr_token1,
    STATE(396), 1,
      sym__offset_attr,
  [5524] = 2,
    ACTIONS(821), 1,
      aux_sym__offset_attr_token1,
    STATE(177), 1,
      sym__offset_attr,
  [5531] = 2,
    ACTIONS(885), 1,
      aux_sym_absolute_token1,
    STATE(25), 1,
      sym_radius,
  [5538] = 2,
    ACTIONS(821), 1,
      aux_sym__offset_attr_token1,
    STATE(176), 1,
      sym__offset_attr,
  [5545] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(32), 1,
      sym_name,
  [5552] = 2,
    ACTIONS(231), 1,
      anon_sym_font,
    STATE(199), 1,
      sym__font_id,
  [5559] = 2,
    ACTIONS(887), 1,
      aux_sym_absolute_token1,
    STATE(81), 1,
      sym_radius,
  [5566] = 2,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      sym_width,
  [5573] = 1,
    ACTIONS(893), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5578] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(235), 1,
      sym_name,
  [5585] = 2,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
  [5592] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(240), 1,
      sym_name,
  [5599] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(222), 1,
      sym_name,
  [5606] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(224), 1,
      sym_name,
  [5613] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
  [5620] = 2,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
    STATE(218), 1,
      sym_name,
  [5627] = 2,
    ACTIONS(895), 1,
      aux_sym__absolute_attr_token1,
    STATE(154), 1,
      sym__absolute_y_attr,
  [5634] = 2,
    ACTIONS(727), 1,
      aux_sym__originx_token1,
    STATE(119), 1,
      sym__originx,
  [5641] = 2,
    ACTIONS(729), 1,
      aux_sym__originy_token1,
    STATE(119), 1,
      sym__originy,
  [5648] = 1,
    ACTIONS(897), 1,
      anon_sym_COMMA,
  [5652] = 1,
    ACTIONS(899), 1,
      aux_sym__label_id_token2,
  [5656] = 1,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
  [5660] = 1,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
  [5664] = 1,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
  [5668] = 1,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
  [5672] = 1,
    ACTIONS(909), 1,
      anon_sym_COMMA,
  [5676] = 1,
    ACTIONS(911), 1,
      aux_sym__scale_token1,
  [5680] = 1,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
  [5684] = 1,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
  [5688] = 1,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
  [5692] = 1,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
  [5696] = 1,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
  [5700] = 1,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
  [5704] = 1,
    ACTIONS(925), 1,
      sym_width,
  [5708] = 1,
    ACTIONS(927), 1,
      aux_sym__input_id_token1,
  [5712] = 1,
    ACTIONS(929), 1,
      anon_sym_SQUOTE,
  [5716] = 1,
    ACTIONS(929), 1,
      anon_sym_DQUOTE,
  [5720] = 1,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
  [5724] = 1,
    ACTIONS(445), 1,
      anon_sym_with,
  [5728] = 1,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
  [5732] = 1,
    ACTIONS(93), 1,
      anon_sym_with,
  [5736] = 1,
    ACTIONS(935), 1,
      aux_sym_absolute_token1,
  [5740] = 1,
    ACTIONS(407), 1,
      anon_sym_with,
  [5744] = 1,
    ACTIONS(937), 1,
      anon_sym_COMMA,
  [5748] = 1,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
  [5752] = 1,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
  [5756] = 1,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
  [5760] = 1,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
  [5764] = 1,
    ACTIONS(945), 1,
      anon_sym_COMMA,
  [5768] = 1,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
  [5772] = 1,
    ACTIONS(949), 1,
      anon_sym_COMMA,
  [5776] = 1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [5780] = 1,
    ACTIONS(953), 1,
      aux_sym_origin_token1,
  [5784] = 1,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
  [5788] = 1,
    ACTIONS(957), 1,
      anon_sym_COMMA,
  [5792] = 1,
    ACTIONS(959), 1,
      aux_sym_origin_token1,
  [5796] = 1,
    ACTIONS(961), 1,
      anon_sym_COMMA,
  [5800] = 1,
    ACTIONS(101), 1,
      anon_sym_with,
  [5804] = 1,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
  [5808] = 1,
    ACTIONS(965), 1,
      anon_sym_COMMA,
  [5812] = 1,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
  [5816] = 1,
    ACTIONS(969), 1,
      aux_sym_relative_token1,
  [5820] = 1,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
  [5824] = 1,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [5828] = 1,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [5832] = 1,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
  [5836] = 1,
    ACTIONS(925), 1,
      sym_height,
  [5840] = 1,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
  [5844] = 1,
    ACTIONS(981), 1,
      aux_sym__guide_id_token1,
  [5848] = 1,
    ACTIONS(983), 1,
      aux_sym__input_id_token1,
  [5852] = 1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [5856] = 1,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
  [5860] = 1,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
  [5864] = 1,
    ACTIONS(991), 1,
      aux_sym__input_id_token1,
  [5868] = 1,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
  [5872] = 1,
    ACTIONS(995), 1,
      sym_rgba,
  [5876] = 1,
    ACTIONS(105), 1,
      aux_sym__input_id_token1,
  [5880] = 1,
    ACTIONS(997), 1,
      sym_fontsize,
  [5884] = 1,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
  [5888] = 1,
    ACTIONS(101), 1,
      aux_sym__input_id_token1,
  [5892] = 1,
    ACTIONS(97), 1,
      aux_sym__input_id_token1,
  [5896] = 1,
    ACTIONS(437), 1,
      anon_sym_with,
  [5900] = 1,
    ACTIONS(1001), 1,
      aux_sym__input_id_token1,
  [5904] = 1,
    ACTIONS(407), 1,
      aux_sym__input_id_token1,
  [5908] = 1,
    ACTIONS(93), 1,
      aux_sym__input_id_token1,
  [5912] = 1,
    ACTIONS(145), 1,
      aux_sym__input_id_token1,
  [5916] = 1,
    ACTIONS(141), 1,
      aux_sym__input_id_token1,
  [5920] = 1,
    ACTIONS(1003), 1,
      aux_sym__label_id_token3,
  [5924] = 1,
    ACTIONS(995), 1,
      sym_rgb,
  [5928] = 1,
    ACTIONS(137), 1,
      aux_sym__input_id_token1,
  [5932] = 1,
    ACTIONS(109), 1,
      aux_sym__input_id_token1,
  [5936] = 1,
    ACTIONS(437), 1,
      aux_sym__input_id_token1,
  [5940] = 1,
    ACTIONS(445), 1,
      aux_sym__input_id_token1,
  [5944] = 1,
    ACTIONS(1005), 1,
      aux_sym__input_id_token1,
  [5948] = 1,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
  [5952] = 1,
    ACTIONS(1009), 1,
      aux_sym__input_id_token1,
  [5956] = 1,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
  [5960] = 1,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
  [5964] = 1,
    ACTIONS(105), 1,
      anon_sym_with,
  [5968] = 1,
    ACTIONS(1015), 1,
      anon_sym_with,
  [5972] = 1,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
  [5976] = 1,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
  [5980] = 1,
    ACTIONS(1021), 1,
      aux_sym__scale_token1,
  [5984] = 1,
    ACTIONS(1023), 1,
      aux_sym__scale_token1,
  [5988] = 1,
    ACTIONS(1025), 1,
      aux_sym__absolute_attr_token1,
  [5992] = 1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
  [5996] = 1,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
  [6000] = 1,
    ACTIONS(427), 1,
      anon_sym_stretch,
  [6004] = 1,
    ACTIONS(1031), 1,
      anon_sym_gzip,
  [6008] = 1,
    ACTIONS(1031), 1,
      anon_sym_timestamp,
  [6012] = 1,
    ACTIONS(1033), 1,
      sym_width,
  [6016] = 1,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
  [6020] = 1,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
  [6024] = 1,
    ACTIONS(1039), 1,
      ts_builtin_sym_end,
  [6028] = 1,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
  [6032] = 1,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
  [6036] = 1,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
  [6040] = 1,
    ACTIONS(1047), 1,
      aux_sym__guide_id_token1,
  [6044] = 1,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
  [6048] = 1,
    ACTIONS(1051), 1,
      aux_sym_relative_token1,
  [6052] = 1,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
  [6056] = 1,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
  [6060] = 1,
    ACTIONS(1057), 1,
      anon_sym_DQUOTE,
  [6064] = 1,
    ACTIONS(1057), 1,
      anon_sym_SQUOTE,
  [6068] = 1,
    ACTIONS(1059), 1,
      aux_sym_absolute_token1,
  [6072] = 1,
    ACTIONS(1061), 1,
      aux_sym_origin_token1,
  [6076] = 1,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
  [6080] = 1,
    ACTIONS(1065), 1,
      aux_sym__input_id_token1,
  [6084] = 1,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
  [6088] = 1,
    ACTIONS(1069), 1,
      aux_sym_relative_token1,
  [6092] = 1,
    ACTIONS(137), 1,
      anon_sym_with,
  [6096] = 1,
    ACTIONS(1071), 1,
      aux_sym_origin_token1,
  [6100] = 1,
    ACTIONS(1073), 1,
      aux_sym_absolute_token1,
  [6104] = 1,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
  [6108] = 1,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
  [6112] = 1,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
  [6116] = 1,
    ACTIONS(1081), 1,
      aux_sym_relative_token1,
  [6120] = 1,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
  [6124] = 1,
    ACTIONS(1085), 1,
      aux_sym_absolute_token1,
  [6128] = 1,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
  [6132] = 1,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
  [6136] = 1,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
  [6140] = 1,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
  [6144] = 1,
    ACTIONS(1095), 1,
      aux_sym__label_id_token2,
  [6148] = 1,
    ACTIONS(1097), 1,
      aux_sym__label_id_token3,
  [6152] = 1,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
  [6156] = 1,
    ACTIONS(1101), 1,
      aux_sym__label_id_token3,
  [6160] = 1,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
  [6164] = 1,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
  [6168] = 1,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
  [6172] = 1,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
  [6176] = 1,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
  [6180] = 1,
    ACTIONS(1113), 1,
      aux_sym__label_id_token2,
  [6184] = 1,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
  [6188] = 1,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
  [6192] = 1,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
  [6196] = 1,
    ACTIONS(1121), 1,
      anon_sym_COMMA,
  [6200] = 1,
    ACTIONS(1123), 1,
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
  [SMALL_STATE(11)] = 439,
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
  [SMALL_STATE(34)] = 1130,
  [SMALL_STATE(35)] = 1169,
  [SMALL_STATE(36)] = 1210,
  [SMALL_STATE(37)] = 1251,
  [SMALL_STATE(38)] = 1290,
  [SMALL_STATE(39)] = 1313,
  [SMALL_STATE(40)] = 1347,
  [SMALL_STATE(41)] = 1369,
  [SMALL_STATE(42)] = 1391,
  [SMALL_STATE(43)] = 1413,
  [SMALL_STATE(44)] = 1435,
  [SMALL_STATE(45)] = 1457,
  [SMALL_STATE(46)] = 1490,
  [SMALL_STATE(47)] = 1521,
  [SMALL_STATE(48)] = 1554,
  [SMALL_STATE(49)] = 1587,
  [SMALL_STATE(50)] = 1605,
  [SMALL_STATE(51)] = 1633,
  [SMALL_STATE(52)] = 1656,
  [SMALL_STATE(53)] = 1675,
  [SMALL_STATE(54)] = 1696,
  [SMALL_STATE(55)] = 1717,
  [SMALL_STATE(56)] = 1740,
  [SMALL_STATE(57)] = 1771,
  [SMALL_STATE(58)] = 1794,
  [SMALL_STATE(59)] = 1813,
  [SMALL_STATE(60)] = 1844,
  [SMALL_STATE(61)] = 1867,
  [SMALL_STATE(62)] = 1890,
  [SMALL_STATE(63)] = 1913,
  [SMALL_STATE(64)] = 1944,
  [SMALL_STATE(65)] = 1975,
  [SMALL_STATE(66)] = 1994,
  [SMALL_STATE(67)] = 2017,
  [SMALL_STATE(68)] = 2038,
  [SMALL_STATE(69)] = 2059,
  [SMALL_STATE(70)] = 2075,
  [SMALL_STATE(71)] = 2095,
  [SMALL_STATE(72)] = 2111,
  [SMALL_STATE(73)] = 2139,
  [SMALL_STATE(74)] = 2159,
  [SMALL_STATE(75)] = 2175,
  [SMALL_STATE(76)] = 2193,
  [SMALL_STATE(77)] = 2213,
  [SMALL_STATE(78)] = 2241,
  [SMALL_STATE(79)] = 2259,
  [SMALL_STATE(80)] = 2277,
  [SMALL_STATE(81)] = 2297,
  [SMALL_STATE(82)] = 2313,
  [SMALL_STATE(83)] = 2333,
  [SMALL_STATE(84)] = 2361,
  [SMALL_STATE(85)] = 2381,
  [SMALL_STATE(86)] = 2401,
  [SMALL_STATE(87)] = 2423,
  [SMALL_STATE(88)] = 2450,
  [SMALL_STATE(89)] = 2467,
  [SMALL_STATE(90)] = 2484,
  [SMALL_STATE(91)] = 2501,
  [SMALL_STATE(92)] = 2518,
  [SMALL_STATE(93)] = 2535,
  [SMALL_STATE(94)] = 2552,
  [SMALL_STATE(95)] = 2581,
  [SMALL_STATE(96)] = 2598,
  [SMALL_STATE(97)] = 2615,
  [SMALL_STATE(98)] = 2632,
  [SMALL_STATE(99)] = 2649,
  [SMALL_STATE(100)] = 2666,
  [SMALL_STATE(101)] = 2683,
  [SMALL_STATE(102)] = 2700,
  [SMALL_STATE(103)] = 2715,
  [SMALL_STATE(104)] = 2732,
  [SMALL_STATE(105)] = 2747,
  [SMALL_STATE(106)] = 2764,
  [SMALL_STATE(107)] = 2781,
  [SMALL_STATE(108)] = 2798,
  [SMALL_STATE(109)] = 2813,
  [SMALL_STATE(110)] = 2828,
  [SMALL_STATE(111)] = 2843,
  [SMALL_STATE(112)] = 2860,
  [SMALL_STATE(113)] = 2887,
  [SMALL_STATE(114)] = 2902,
  [SMALL_STATE(115)] = 2929,
  [SMALL_STATE(116)] = 2943,
  [SMALL_STATE(117)] = 2957,
  [SMALL_STATE(118)] = 2971,
  [SMALL_STATE(119)] = 2985,
  [SMALL_STATE(120)] = 2999,
  [SMALL_STATE(121)] = 3013,
  [SMALL_STATE(122)] = 3027,
  [SMALL_STATE(123)] = 3041,
  [SMALL_STATE(124)] = 3055,
  [SMALL_STATE(125)] = 3069,
  [SMALL_STATE(126)] = 3083,
  [SMALL_STATE(127)] = 3097,
  [SMALL_STATE(128)] = 3111,
  [SMALL_STATE(129)] = 3125,
  [SMALL_STATE(130)] = 3139,
  [SMALL_STATE(131)] = 3153,
  [SMALL_STATE(132)] = 3167,
  [SMALL_STATE(133)] = 3181,
  [SMALL_STATE(134)] = 3195,
  [SMALL_STATE(135)] = 3209,
  [SMALL_STATE(136)] = 3223,
  [SMALL_STATE(137)] = 3237,
  [SMALL_STATE(138)] = 3259,
  [SMALL_STATE(139)] = 3273,
  [SMALL_STATE(140)] = 3287,
  [SMALL_STATE(141)] = 3301,
  [SMALL_STATE(142)] = 3315,
  [SMALL_STATE(143)] = 3329,
  [SMALL_STATE(144)] = 3343,
  [SMALL_STATE(145)] = 3357,
  [SMALL_STATE(146)] = 3371,
  [SMALL_STATE(147)] = 3385,
  [SMALL_STATE(148)] = 3399,
  [SMALL_STATE(149)] = 3413,
  [SMALL_STATE(150)] = 3427,
  [SMALL_STATE(151)] = 3441,
  [SMALL_STATE(152)] = 3455,
  [SMALL_STATE(153)] = 3469,
  [SMALL_STATE(154)] = 3483,
  [SMALL_STATE(155)] = 3497,
  [SMALL_STATE(156)] = 3511,
  [SMALL_STATE(157)] = 3525,
  [SMALL_STATE(158)] = 3539,
  [SMALL_STATE(159)] = 3553,
  [SMALL_STATE(160)] = 3567,
  [SMALL_STATE(161)] = 3581,
  [SMALL_STATE(162)] = 3595,
  [SMALL_STATE(163)] = 3609,
  [SMALL_STATE(164)] = 3623,
  [SMALL_STATE(165)] = 3637,
  [SMALL_STATE(166)] = 3651,
  [SMALL_STATE(167)] = 3665,
  [SMALL_STATE(168)] = 3679,
  [SMALL_STATE(169)] = 3693,
  [SMALL_STATE(170)] = 3707,
  [SMALL_STATE(171)] = 3721,
  [SMALL_STATE(172)] = 3735,
  [SMALL_STATE(173)] = 3749,
  [SMALL_STATE(174)] = 3763,
  [SMALL_STATE(175)] = 3777,
  [SMALL_STATE(176)] = 3791,
  [SMALL_STATE(177)] = 3805,
  [SMALL_STATE(178)] = 3819,
  [SMALL_STATE(179)] = 3833,
  [SMALL_STATE(180)] = 3847,
  [SMALL_STATE(181)] = 3861,
  [SMALL_STATE(182)] = 3875,
  [SMALL_STATE(183)] = 3889,
  [SMALL_STATE(184)] = 3903,
  [SMALL_STATE(185)] = 3919,
  [SMALL_STATE(186)] = 3951,
  [SMALL_STATE(187)] = 3965,
  [SMALL_STATE(188)] = 3979,
  [SMALL_STATE(189)] = 3993,
  [SMALL_STATE(190)] = 4007,
  [SMALL_STATE(191)] = 4021,
  [SMALL_STATE(192)] = 4035,
  [SMALL_STATE(193)] = 4049,
  [SMALL_STATE(194)] = 4063,
  [SMALL_STATE(195)] = 4077,
  [SMALL_STATE(196)] = 4091,
  [SMALL_STATE(197)] = 4105,
  [SMALL_STATE(198)] = 4121,
  [SMALL_STATE(199)] = 4135,
  [SMALL_STATE(200)] = 4149,
  [SMALL_STATE(201)] = 4163,
  [SMALL_STATE(202)] = 4177,
  [SMALL_STATE(203)] = 4191,
  [SMALL_STATE(204)] = 4205,
  [SMALL_STATE(205)] = 4219,
  [SMALL_STATE(206)] = 4233,
  [SMALL_STATE(207)] = 4247,
  [SMALL_STATE(208)] = 4261,
  [SMALL_STATE(209)] = 4275,
  [SMALL_STATE(210)] = 4289,
  [SMALL_STATE(211)] = 4303,
  [SMALL_STATE(212)] = 4317,
  [SMALL_STATE(213)] = 4340,
  [SMALL_STATE(214)] = 4354,
  [SMALL_STATE(215)] = 4368,
  [SMALL_STATE(216)] = 4390,
  [SMALL_STATE(217)] = 4416,
  [SMALL_STATE(218)] = 4437,
  [SMALL_STATE(219)] = 4454,
  [SMALL_STATE(220)] = 4473,
  [SMALL_STATE(221)] = 4490,
  [SMALL_STATE(222)] = 4507,
  [SMALL_STATE(223)] = 4524,
  [SMALL_STATE(224)] = 4541,
  [SMALL_STATE(225)] = 4558,
  [SMALL_STATE(226)] = 4574,
  [SMALL_STATE(227)] = 4584,
  [SMALL_STATE(228)] = 4596,
  [SMALL_STATE(229)] = 4610,
  [SMALL_STATE(230)] = 4624,
  [SMALL_STATE(231)] = 4634,
  [SMALL_STATE(232)] = 4650,
  [SMALL_STATE(233)] = 4666,
  [SMALL_STATE(234)] = 4680,
  [SMALL_STATE(235)] = 4696,
  [SMALL_STATE(236)] = 4710,
  [SMALL_STATE(237)] = 4720,
  [SMALL_STATE(238)] = 4730,
  [SMALL_STATE(239)] = 4746,
  [SMALL_STATE(240)] = 4756,
  [SMALL_STATE(241)] = 4770,
  [SMALL_STATE(242)] = 4780,
  [SMALL_STATE(243)] = 4794,
  [SMALL_STATE(244)] = 4804,
  [SMALL_STATE(245)] = 4814,
  [SMALL_STATE(246)] = 4824,
  [SMALL_STATE(247)] = 4834,
  [SMALL_STATE(248)] = 4850,
  [SMALL_STATE(249)] = 4860,
  [SMALL_STATE(250)] = 4869,
  [SMALL_STATE(251)] = 4880,
  [SMALL_STATE(252)] = 4891,
  [SMALL_STATE(253)] = 4904,
  [SMALL_STATE(254)] = 4917,
  [SMALL_STATE(255)] = 4930,
  [SMALL_STATE(256)] = 4940,
  [SMALL_STATE(257)] = 4950,
  [SMALL_STATE(258)] = 4960,
  [SMALL_STATE(259)] = 4970,
  [SMALL_STATE(260)] = 4980,
  [SMALL_STATE(261)] = 4990,
  [SMALL_STATE(262)] = 5000,
  [SMALL_STATE(263)] = 5010,
  [SMALL_STATE(264)] = 5020,
  [SMALL_STATE(265)] = 5030,
  [SMALL_STATE(266)] = 5040,
  [SMALL_STATE(267)] = 5050,
  [SMALL_STATE(268)] = 5060,
  [SMALL_STATE(269)] = 5066,
  [SMALL_STATE(270)] = 5076,
  [SMALL_STATE(271)] = 5086,
  [SMALL_STATE(272)] = 5096,
  [SMALL_STATE(273)] = 5106,
  [SMALL_STATE(274)] = 5116,
  [SMALL_STATE(275)] = 5126,
  [SMALL_STATE(276)] = 5136,
  [SMALL_STATE(277)] = 5146,
  [SMALL_STATE(278)] = 5156,
  [SMALL_STATE(279)] = 5166,
  [SMALL_STATE(280)] = 5176,
  [SMALL_STATE(281)] = 5186,
  [SMALL_STATE(282)] = 5196,
  [SMALL_STATE(283)] = 5206,
  [SMALL_STATE(284)] = 5216,
  [SMALL_STATE(285)] = 5226,
  [SMALL_STATE(286)] = 5236,
  [SMALL_STATE(287)] = 5246,
  [SMALL_STATE(288)] = 5256,
  [SMALL_STATE(289)] = 5266,
  [SMALL_STATE(290)] = 5276,
  [SMALL_STATE(291)] = 5282,
  [SMALL_STATE(292)] = 5292,
  [SMALL_STATE(293)] = 5302,
  [SMALL_STATE(294)] = 5312,
  [SMALL_STATE(295)] = 5322,
  [SMALL_STATE(296)] = 5330,
  [SMALL_STATE(297)] = 5340,
  [SMALL_STATE(298)] = 5350,
  [SMALL_STATE(299)] = 5360,
  [SMALL_STATE(300)] = 5367,
  [SMALL_STATE(301)] = 5374,
  [SMALL_STATE(302)] = 5381,
  [SMALL_STATE(303)] = 5388,
  [SMALL_STATE(304)] = 5395,
  [SMALL_STATE(305)] = 5402,
  [SMALL_STATE(306)] = 5409,
  [SMALL_STATE(307)] = 5416,
  [SMALL_STATE(308)] = 5423,
  [SMALL_STATE(309)] = 5430,
  [SMALL_STATE(310)] = 5437,
  [SMALL_STATE(311)] = 5442,
  [SMALL_STATE(312)] = 5449,
  [SMALL_STATE(313)] = 5454,
  [SMALL_STATE(314)] = 5461,
  [SMALL_STATE(315)] = 5468,
  [SMALL_STATE(316)] = 5475,
  [SMALL_STATE(317)] = 5482,
  [SMALL_STATE(318)] = 5489,
  [SMALL_STATE(319)] = 5496,
  [SMALL_STATE(320)] = 5503,
  [SMALL_STATE(321)] = 5510,
  [SMALL_STATE(322)] = 5517,
  [SMALL_STATE(323)] = 5524,
  [SMALL_STATE(324)] = 5531,
  [SMALL_STATE(325)] = 5538,
  [SMALL_STATE(326)] = 5545,
  [SMALL_STATE(327)] = 5552,
  [SMALL_STATE(328)] = 5559,
  [SMALL_STATE(329)] = 5566,
  [SMALL_STATE(330)] = 5573,
  [SMALL_STATE(331)] = 5578,
  [SMALL_STATE(332)] = 5585,
  [SMALL_STATE(333)] = 5592,
  [SMALL_STATE(334)] = 5599,
  [SMALL_STATE(335)] = 5606,
  [SMALL_STATE(336)] = 5613,
  [SMALL_STATE(337)] = 5620,
  [SMALL_STATE(338)] = 5627,
  [SMALL_STATE(339)] = 5634,
  [SMALL_STATE(340)] = 5641,
  [SMALL_STATE(341)] = 5648,
  [SMALL_STATE(342)] = 5652,
  [SMALL_STATE(343)] = 5656,
  [SMALL_STATE(344)] = 5660,
  [SMALL_STATE(345)] = 5664,
  [SMALL_STATE(346)] = 5668,
  [SMALL_STATE(347)] = 5672,
  [SMALL_STATE(348)] = 5676,
  [SMALL_STATE(349)] = 5680,
  [SMALL_STATE(350)] = 5684,
  [SMALL_STATE(351)] = 5688,
  [SMALL_STATE(352)] = 5692,
  [SMALL_STATE(353)] = 5696,
  [SMALL_STATE(354)] = 5700,
  [SMALL_STATE(355)] = 5704,
  [SMALL_STATE(356)] = 5708,
  [SMALL_STATE(357)] = 5712,
  [SMALL_STATE(358)] = 5716,
  [SMALL_STATE(359)] = 5720,
  [SMALL_STATE(360)] = 5724,
  [SMALL_STATE(361)] = 5728,
  [SMALL_STATE(362)] = 5732,
  [SMALL_STATE(363)] = 5736,
  [SMALL_STATE(364)] = 5740,
  [SMALL_STATE(365)] = 5744,
  [SMALL_STATE(366)] = 5748,
  [SMALL_STATE(367)] = 5752,
  [SMALL_STATE(368)] = 5756,
  [SMALL_STATE(369)] = 5760,
  [SMALL_STATE(370)] = 5764,
  [SMALL_STATE(371)] = 5768,
  [SMALL_STATE(372)] = 5772,
  [SMALL_STATE(373)] = 5776,
  [SMALL_STATE(374)] = 5780,
  [SMALL_STATE(375)] = 5784,
  [SMALL_STATE(376)] = 5788,
  [SMALL_STATE(377)] = 5792,
  [SMALL_STATE(378)] = 5796,
  [SMALL_STATE(379)] = 5800,
  [SMALL_STATE(380)] = 5804,
  [SMALL_STATE(381)] = 5808,
  [SMALL_STATE(382)] = 5812,
  [SMALL_STATE(383)] = 5816,
  [SMALL_STATE(384)] = 5820,
  [SMALL_STATE(385)] = 5824,
  [SMALL_STATE(386)] = 5828,
  [SMALL_STATE(387)] = 5832,
  [SMALL_STATE(388)] = 5836,
  [SMALL_STATE(389)] = 5840,
  [SMALL_STATE(390)] = 5844,
  [SMALL_STATE(391)] = 5848,
  [SMALL_STATE(392)] = 5852,
  [SMALL_STATE(393)] = 5856,
  [SMALL_STATE(394)] = 5860,
  [SMALL_STATE(395)] = 5864,
  [SMALL_STATE(396)] = 5868,
  [SMALL_STATE(397)] = 5872,
  [SMALL_STATE(398)] = 5876,
  [SMALL_STATE(399)] = 5880,
  [SMALL_STATE(400)] = 5884,
  [SMALL_STATE(401)] = 5888,
  [SMALL_STATE(402)] = 5892,
  [SMALL_STATE(403)] = 5896,
  [SMALL_STATE(404)] = 5900,
  [SMALL_STATE(405)] = 5904,
  [SMALL_STATE(406)] = 5908,
  [SMALL_STATE(407)] = 5912,
  [SMALL_STATE(408)] = 5916,
  [SMALL_STATE(409)] = 5920,
  [SMALL_STATE(410)] = 5924,
  [SMALL_STATE(411)] = 5928,
  [SMALL_STATE(412)] = 5932,
  [SMALL_STATE(413)] = 5936,
  [SMALL_STATE(414)] = 5940,
  [SMALL_STATE(415)] = 5944,
  [SMALL_STATE(416)] = 5948,
  [SMALL_STATE(417)] = 5952,
  [SMALL_STATE(418)] = 5956,
  [SMALL_STATE(419)] = 5960,
  [SMALL_STATE(420)] = 5964,
  [SMALL_STATE(421)] = 5968,
  [SMALL_STATE(422)] = 5972,
  [SMALL_STATE(423)] = 5976,
  [SMALL_STATE(424)] = 5980,
  [SMALL_STATE(425)] = 5984,
  [SMALL_STATE(426)] = 5988,
  [SMALL_STATE(427)] = 5992,
  [SMALL_STATE(428)] = 5996,
  [SMALL_STATE(429)] = 6000,
  [SMALL_STATE(430)] = 6004,
  [SMALL_STATE(431)] = 6008,
  [SMALL_STATE(432)] = 6012,
  [SMALL_STATE(433)] = 6016,
  [SMALL_STATE(434)] = 6020,
  [SMALL_STATE(435)] = 6024,
  [SMALL_STATE(436)] = 6028,
  [SMALL_STATE(437)] = 6032,
  [SMALL_STATE(438)] = 6036,
  [SMALL_STATE(439)] = 6040,
  [SMALL_STATE(440)] = 6044,
  [SMALL_STATE(441)] = 6048,
  [SMALL_STATE(442)] = 6052,
  [SMALL_STATE(443)] = 6056,
  [SMALL_STATE(444)] = 6060,
  [SMALL_STATE(445)] = 6064,
  [SMALL_STATE(446)] = 6068,
  [SMALL_STATE(447)] = 6072,
  [SMALL_STATE(448)] = 6076,
  [SMALL_STATE(449)] = 6080,
  [SMALL_STATE(450)] = 6084,
  [SMALL_STATE(451)] = 6088,
  [SMALL_STATE(452)] = 6092,
  [SMALL_STATE(453)] = 6096,
  [SMALL_STATE(454)] = 6100,
  [SMALL_STATE(455)] = 6104,
  [SMALL_STATE(456)] = 6108,
  [SMALL_STATE(457)] = 6112,
  [SMALL_STATE(458)] = 6116,
  [SMALL_STATE(459)] = 6120,
  [SMALL_STATE(460)] = 6124,
  [SMALL_STATE(461)] = 6128,
  [SMALL_STATE(462)] = 6132,
  [SMALL_STATE(463)] = 6136,
  [SMALL_STATE(464)] = 6140,
  [SMALL_STATE(465)] = 6144,
  [SMALL_STATE(466)] = 6148,
  [SMALL_STATE(467)] = 6152,
  [SMALL_STATE(468)] = 6156,
  [SMALL_STATE(469)] = 6160,
  [SMALL_STATE(470)] = 6164,
  [SMALL_STATE(471)] = 6168,
  [SMALL_STATE(472)] = 6172,
  [SMALL_STATE(473)] = 6176,
  [SMALL_STATE(474)] = 6180,
  [SMALL_STATE(475)] = 6184,
  [SMALL_STATE(476)] = 6188,
  [SMALL_STATE(477)] = 6192,
  [SMALL_STATE(478)] = 6196,
  [SMALL_STATE(479)] = 6200,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polar, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_polar, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_radius, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_radius, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(34),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(56),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(37),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(257),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(327),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(250),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(251),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(290),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 17),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 17),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 5),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 6),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 2, .production_id = 9),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 13),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 14),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 13),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_output, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 28),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 12),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 4, .production_id = 17),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 4, .production_id = 17),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 9),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 22),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 21),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 20),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 19),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 22),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 21),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 22),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 11),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_parameter, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 21),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_light, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_widget, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_dxy_attr, 3, .production_id = 18),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 17),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 16),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 9),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 14),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 11),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 17),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1039] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
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
