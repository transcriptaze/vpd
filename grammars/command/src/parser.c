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
#define STATE_COUNT 433
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 198
#define ALIAS_COUNT 1
#define TOKEN_COUNT 103
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
  sym_command = 103,
  sym_new = 104,
  sym__new_module = 105,
  sym__new_input = 106,
  sym__new_output = 107,
  sym__new_parameter = 108,
  sym__new_light = 109,
  sym__new_widget = 110,
  sym__new_component = 111,
  sym__new_decoration = 112,
  sym_decorate = 113,
  sym__new_xy = 114,
  sym_set = 115,
  sym__module_attr = 116,
  sym__component_attr = 117,
  sym__label_attr = 118,
  sym__decoration_attr = 119,
  sym__guideline_attr = 120,
  sym__x_attr = 121,
  sym__y_attr = 122,
  sym__xy_attr = 123,
  sym__offset_attr = 124,
  sym__offset_xy_attr = 125,
  sym__offset_dxy_attr = 126,
  sym__absolute_attr = 127,
  sym__absolute_x_attr = 128,
  sym__absolute_y_attr = 129,
  sym__absolute_xy_attr = 130,
  sym__relative_attr = 131,
  sym__relative_xy_attr = 132,
  sym__geometry_x_attr = 133,
  sym__geometry_y_attr = 134,
  sym__geometry_xy_attr = 135,
  sym__guide_attr = 136,
  sym__guide_xy_attr = 137,
  sym__component_x_attr = 138,
  sym__component_y_attr = 139,
  sym__component_xy_attr = 140,
  sym_delete = 141,
  sym__guide_id = 142,
  sym__input_id = 143,
  sym__output_id = 144,
  sym__parameter_id = 145,
  sym__light_id = 146,
  sym__widget_id = 147,
  sym__label_id = 148,
  sym__decoration_id = 149,
  sym__font_id = 150,
  sym__component_id = 151,
  sym_load = 152,
  sym_unload = 153,
  sym_save = 154,
  sym_export = 155,
  sym__module_export = 156,
  sym_list = 157,
  sym_project = 158,
  sym_script = 159,
  sym__input = 160,
  sym__output = 161,
  sym__parameter = 162,
  sym__light = 163,
  sym__widget = 164,
  sym_label = 165,
  sym_font = 166,
  sym__align = 167,
  sym_halign = 168,
  sym_valign = 169,
  sym_colour = 170,
  sym_decoration = 171,
  sym__scale = 172,
  sym_stretch = 173,
  sym_origin = 174,
  sym__originx = 175,
  sym__originy = 176,
  sym_background = 177,
  sym_panel = 178,
  sym_svg = 179,
  sym_name = 180,
  sym_part = 181,
  sym_guide = 182,
  sym_identifier = 183,
  sym_vertical = 184,
  sym_horizontal = 185,
  sym_geometry = 186,
  sym_offset = 187,
  sym__offset = 188,
  sym_guideline = 189,
  sym__string = 190,
  sym_absolute = 191,
  sym_relative = 192,
  sym__decorate = 193,
  sym__relative = 194,
  sym_x = 195,
  sym_y = 196,
  aux_sym_command_repeat1 = 197,
  alias_sym_dy = 198,
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
  [aux_sym_absolute_token1] = "x",
  [aux_sym_relative_token1] = "x",
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
  [sym_relative] = "relative",
  [sym__decorate] = "decorate",
  [sym__relative] = "_relative",
  [sym_x] = "x",
  [sym_y] = "y",
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
  [aux_sym_absolute_token1] = sym_x,
  [aux_sym_relative_token1] = sym_x,
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
  [sym_relative] = sym_relative,
  [sym__decorate] = sym_decorate,
  [sym__relative] = sym__relative,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
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
    .visible = true,
    .named = true,
  },
  [aux_sym_relative_token1] = {
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
  [48] = 11,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 17,
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
  [70] = 17,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 19,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 20,
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
  [94] = 18,
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
  [114] = 98,
  [115] = 113,
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
  [194] = 193,
  [195] = 193,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 108,
  [200] = 24,
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
  [213] = 204,
  [214] = 204,
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
  [229] = 11,
  [230] = 11,
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
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
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
  [292] = 24,
  [293] = 293,
  [294] = 294,
  [295] = 295,
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
  [321] = 321,
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
  [334] = 18,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 20,
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
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 19,
  [370] = 370,
  [371] = 75,
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
  [385] = 17,
  [386] = 386,
  [387] = 75,
  [388] = 19,
  [389] = 389,
  [390] = 390,
  [391] = 20,
  [392] = 18,
  [393] = 393,
  [394] = 394,
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
  [405] = 399,
  [406] = 395,
  [407] = 390,
  [408] = 408,
  [409] = 374,
  [410] = 373,
  [411] = 370,
  [412] = 395,
  [413] = 390,
  [414] = 414,
  [415] = 370,
  [416] = 390,
  [417] = 370,
  [418] = 418,
  [419] = 418,
  [420] = 408,
  [421] = 397,
  [422] = 396,
  [423] = 394,
  [424] = 424,
  [425] = 418,
  [426] = 408,
  [427] = 394,
  [428] = 418,
  [429] = 394,
  [430] = 424,
  [431] = 424,
  [432] = 424,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(374);
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == ',') ADVANCE(378);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '0') ADVANCE(418);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '@') ADVANCE(424);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(158);
      if (lookahead == 'x') ADVANCE(395);
      if (lookahead == 'y') ADVANCE(396);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(376);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(385);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(379);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(382);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(377);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(380);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(383);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == 's') ADVANCE(601);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(632);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(576);
      if (lookahead == '\'') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(572);
      if (lookahead != 0) ADVANCE(573);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(549);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == '@') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == '@') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(477);
      if (lookahead == 'm') ADVANCE(467);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == '@') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(612);
      if (lookahead == 'm') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(612);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '2') ADVANCE(31);
      if (lookahead == 'H') ADVANCE(625);
      if (lookahead == 'U') ADVANCE(624);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '5') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == 'H') ADVANCE(625);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == 'H') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == 'H') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(626);
      if (lookahead == 'p') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '8') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(625);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == 'H') ADVANCE(625);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(635);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '5') ADVANCE(212);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 35:
      if (lookahead == '5') ADVANCE(211);
      END_STATE();
    case 36:
      if (lookahead == '5') ADVANCE(211);
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 37:
      if (lookahead == ';') ADVANCE(375);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(596);
      END_STATE();
    case 39:
      if (lookahead == '@') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(477);
      if (lookahead == 'c') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(467);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 40:
      if (lookahead == '@') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(407);
      if (lookahead == 'y') ADVANCE(408);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == 'v') ADVANCE(132);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(477);
      if (lookahead == 'c') ADVANCE(458);
      if (lookahead == 'h') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(467);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == 'v') ADVANCE(462);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(585);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(589);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(615);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(407);
      if (lookahead == 'y') ADVANCE(408);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(292);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(622);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(595);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(386);
      END_STATE();
    case 148:
      if (lookahead == 'h') ADVANCE(394);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(610);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(310);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 176:
      if (lookahead == 'j') ADVANCE(99);
      END_STATE();
    case 177:
      if (lookahead == 'k') ADVANCE(623);
      END_STATE();
    case 178:
      if (lookahead == 'k') ADVANCE(137);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(621);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(417);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(612);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(631);
      END_STATE();
    case 199:
      if (lookahead == 'm') ADVANCE(625);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(624);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(425);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(614);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(495);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(634);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(440);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(635);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(611);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(584);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 255:
      if (lookahead == 'p') ADVANCE(603);
      END_STATE();
    case 256:
      if (lookahead == 'p') ADVANCE(602);
      END_STATE();
    case 257:
      if (lookahead == 'p') ADVANCE(614);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 260:
      if (lookahead == 'p') ADVANCE(301);
      END_STATE();
    case 261:
      if (lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 262:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 263:
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 264:
      if (lookahead == 'p') ADVANCE(333);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(599);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 327:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 328:
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == 'z') ADVANCE(164);
      END_STATE();
    case 329:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 330:
      if (lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 331:
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 332:
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 333:
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 334:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 335:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 336:
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 337:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 338:
      if (lookahead == 'w') ADVANCE(1);
      END_STATE();
    case 339:
      if (lookahead == 'x') ADVANCE(262);
      END_STATE();
    case 340:
      if (lookahead == 'x') ADVANCE(294);
      END_STATE();
    case 341:
      if (lookahead == 'z') ADVANCE(96);
      END_STATE();
    case 342:
      if (lookahead == 'z') ADVANCE(249);
      END_STATE();
    case 343:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(612);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(612);
      if (lookahead == 'm') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(635);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(347)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 348:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 349:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      END_STATE();
    case 350:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 351:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 352:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 353:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 354:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(619);
      END_STATE();
    case 355:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(620);
      END_STATE();
    case 356:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(618);
      END_STATE();
    case 357:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 358:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 359:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      END_STATE();
    case 360:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 361:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      END_STATE();
    case 362:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 363:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 364:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      END_STATE();
    case 365:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      END_STATE();
    case 366:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 367:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 368:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 369:
      if (eof) ADVANCE(374);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == ',') ADVANCE(378);
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(505);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead == 'm') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 't') ADVANCE(546);
      if (lookahead == 'u') ADVANCE(540);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(369)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 370:
      if (eof) ADVANCE(374);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 'u') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(370)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 371:
      if (eof) ADVANCE(374);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == ',') ADVANCE(378);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(160);
      if (lookahead == 'x') ADVANCE(395);
      if (lookahead == 'y') ADVANCE(396);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(371)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 372:
      if (eof) ADVANCE(374);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ',') ADVANCE(378);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '@') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(251);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(168);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(372)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 373:
      if (eof) ADVANCE(374);
      if (lookahead == ',') ADVANCE(378);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(230);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(373)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__new_parameter_token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_module2);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(397);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_dx);
      if (lookahead == 'y') ADVANCE(409);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_dy);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_dxy);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_input2);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_output2);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_light2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_widget2);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == 'H') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == 'H') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(442);
      if (lookahead == 'H') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(494);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(497);
      if (lookahead == 'H') ADVANCE(495);
      if (lookahead == 'm') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(495);
      if (lookahead == 'm') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(567);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(544);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(576);
      if (lookahead == '\'') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(633);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(578);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(633);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(583);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_decoration2);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(211);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(575);
      if (lookahead == '\'') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 369},
  [3] = {.lex_state = 369},
  [4] = {.lex_state = 371},
  [5] = {.lex_state = 371},
  [6] = {.lex_state = 371},
  [7] = {.lex_state = 371},
  [8] = {.lex_state = 371},
  [9] = {.lex_state = 371},
  [10] = {.lex_state = 371},
  [11] = {.lex_state = 369},
  [12] = {.lex_state = 369},
  [13] = {.lex_state = 369},
  [14] = {.lex_state = 369},
  [15] = {.lex_state = 369},
  [16] = {.lex_state = 369},
  [17] = {.lex_state = 369},
  [18] = {.lex_state = 369},
  [19] = {.lex_state = 369},
  [20] = {.lex_state = 369},
  [21] = {.lex_state = 369},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 371},
  [25] = {.lex_state = 371},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 372},
  [30] = {.lex_state = 371},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 67},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 370},
  [49] = {.lex_state = 371},
  [50] = {.lex_state = 371},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 372},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 371},
  [59] = {.lex_state = 370},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 373},
  [69] = {.lex_state = 371},
  [70] = {.lex_state = 370},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 370},
  [75] = {.lex_state = 370},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 371},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 370},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 373},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 370},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 67},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 39},
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
  [132] = {.lex_state = 371},
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
  [193] = {.lex_state = 371},
  [194] = {.lex_state = 371},
  [195] = {.lex_state = 371},
  [196] = {.lex_state = 371},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 40},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 19},
  [201] = {.lex_state = 40},
  [202] = {.lex_state = 371},
  [203] = {.lex_state = 371},
  [204] = {.lex_state = 18},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 371},
  [207] = {.lex_state = 371},
  [208] = {.lex_state = 371},
  [209] = {.lex_state = 372},
  [210] = {.lex_state = 371},
  [211] = {.lex_state = 371},
  [212] = {.lex_state = 371},
  [213] = {.lex_state = 18},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 11},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 371},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 369},
  [223] = {.lex_state = 369},
  [224] = {.lex_state = 369},
  [225] = {.lex_state = 369},
  [226] = {.lex_state = 369},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 371},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 369},
  [233] = {.lex_state = 369},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 20},
  [236] = {.lex_state = 369},
  [237] = {.lex_state = 369},
  [238] = {.lex_state = 369},
  [239] = {.lex_state = 369},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 369},
  [242] = {.lex_state = 369},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 14},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 369},
  [249] = {.lex_state = 14},
  [250] = {.lex_state = 14},
  [251] = {.lex_state = 14},
  [252] = {.lex_state = 14},
  [253] = {.lex_state = 14},
  [254] = {.lex_state = 14},
  [255] = {.lex_state = 14},
  [256] = {.lex_state = 14},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 14},
  [259] = {.lex_state = 14},
  [260] = {.lex_state = 14},
  [261] = {.lex_state = 14},
  [262] = {.lex_state = 372},
  [263] = {.lex_state = 14},
  [264] = {.lex_state = 14},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 14},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 14},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 17},
  [273] = {.lex_state = 14},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 372},
  [282] = {.lex_state = 17},
  [283] = {.lex_state = 372},
  [284] = {.lex_state = 347},
  [285] = {.lex_state = 14},
  [286] = {.lex_state = 372},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 347},
  [289] = {.lex_state = 14},
  [290] = {.lex_state = 14},
  [291] = {.lex_state = 17},
  [292] = {.lex_state = 17},
  [293] = {.lex_state = 14},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 14},
  [296] = {.lex_state = 17},
  [297] = {.lex_state = 17},
  [298] = {.lex_state = 371},
  [299] = {.lex_state = 371},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 372},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 369},
  [307] = {.lex_state = 14},
  [308] = {.lex_state = 369},
  [309] = {.lex_state = 67},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 369},
  [331] = {.lex_state = 369},
  [332] = {.lex_state = 14},
  [333] = {.lex_state = 67},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 371},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 67},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 372},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 370},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 369},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 369},
  [378] = {.lex_state = 372},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 369},
  [383] = {.lex_state = 582},
  [384] = {.lex_state = 577},
  [385] = {.lex_state = 14},
  [386] = {.lex_state = 371},
  [387] = {.lex_state = 14},
  [388] = {.lex_state = 14},
  [389] = {.lex_state = 371},
  [390] = {.lex_state = 19},
  [391] = {.lex_state = 14},
  [392] = {.lex_state = 14},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 582},
  [397] = {.lex_state = 577},
  [398] = {.lex_state = 14},
  [399] = {.lex_state = 20},
  [400] = {.lex_state = 14},
  [401] = {.lex_state = 14},
  [402] = {.lex_state = 14},
  [403] = {.lex_state = 14},
  [404] = {.lex_state = 14},
  [405] = {.lex_state = 20},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 19},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 370},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 19},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 370},
  [416] = {.lex_state = 19},
  [417] = {.lex_state = 370},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 577},
  [422] = {.lex_state = 582},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 370},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 370},
  [431] = {.lex_state = 370},
  [432] = {.lex_state = 370},
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
    [sym_command] = STATE(376),
    [sym_new] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym_set] = STATE(27),
    [sym_delete] = STATE(27),
    [sym_load] = STATE(27),
    [sym_unload] = STATE(27),
    [sym_save] = STATE(27),
    [sym_export] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_command_repeat1] = STATE(27),
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
    STATE(43), 1,
      sym_valign,
    STATE(46), 1,
      sym__align,
    STATE(52), 1,
      sym_halign,
    STATE(127), 1,
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
    STATE(43), 1,
      sym_valign,
    STATE(47), 1,
      sym__align,
    STATE(52), 1,
      sym_halign,
    STATE(130), 1,
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
    STATE(43), 1,
      sym_valign,
    STATE(52), 1,
      sym_halign,
    STATE(54), 1,
      sym__align,
    STATE(159), 1,
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
    STATE(41), 1,
      sym__guide_id,
    STATE(134), 1,
      sym__label_id,
    STATE(197), 1,
      sym__decoration_id,
    STATE(215), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(187), 7,
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
    STATE(43), 1,
      sym_valign,
    STATE(45), 1,
      sym__align,
    STATE(52), 1,
      sym_halign,
    STATE(103), 1,
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
    STATE(43), 1,
      sym_valign,
    STATE(46), 1,
      sym__align,
    STATE(52), 1,
      sym_halign,
    STATE(127), 1,
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
  [307] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(43), 1,
      sym_valign,
    STATE(51), 1,
      sym__align,
    STATE(52), 1,
      sym_halign,
    STATE(120), 1,
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
  [351] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(43), 1,
      sym_valign,
    STATE(52), 1,
      sym_halign,
    STATE(54), 1,
      sym__align,
    STATE(159), 1,
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
  [395] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(43), 1,
      sym_valign,
    STATE(45), 1,
      sym__align,
    STATE(52), 1,
      sym_halign,
    STATE(103), 1,
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
  [439] = 4,
    ACTIONS(87), 1,
      aux_sym_offset_token1,
    STATE(18), 1,
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
    ACTIONS(131), 1,
      anon_sym_x,
    ACTIONS(129), 21,
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
  [780] = 2,
    ACTIONS(135), 1,
      anon_sym_x,
    ACTIONS(133), 21,
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
  [807] = 2,
    ACTIONS(139), 3,
      anon_sym_x,
      anon_sym_dx,
      sym_width,
    ACTIONS(137), 19,
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
  [834] = 2,
    ACTIONS(143), 1,
      sym_rgb,
    ACTIONS(141), 21,
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
  [861] = 12,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_new,
    ACTIONS(153), 1,
      anon_sym_decorate,
    ACTIONS(156), 1,
      anon_sym_set,
    ACTIONS(159), 1,
      anon_sym_delete,
    ACTIONS(162), 1,
      anon_sym_load,
    ACTIONS(165), 1,
      anon_sym_unload,
    ACTIONS(168), 1,
      anon_sym_save,
    ACTIONS(171), 1,
      anon_sym_export,
    ACTIONS(174), 1,
      anon_sym_list,
    STATE(26), 10,
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
  [907] = 12,
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
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      sym_comment,
    STATE(26), 10,
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
  [953] = 2,
    ACTIONS(183), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(181), 16,
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
  [976] = 10,
    ACTIONS(185), 1,
      anon_sym_module,
    ACTIONS(187), 1,
      anon_sym_input,
    ACTIONS(189), 1,
      anon_sym_output,
    ACTIONS(191), 1,
      aux_sym__new_parameter_token1,
    ACTIONS(193), 1,
      anon_sym_light,
    ACTIONS(195), 1,
      anon_sym_widget,
    ACTIONS(197), 1,
      anon_sym_decoration,
    ACTIONS(199), 1,
      anon_sym_guide,
    ACTIONS(201), 1,
      anon_sym_label,
    STATE(155), 9,
      sym__new_module,
      sym__new_input,
      sym__new_output,
      sym__new_parameter,
      sym__new_light,
      sym__new_widget,
      sym__new_decoration,
      sym_label,
      sym_guide,
  [1015] = 10,
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
    ACTIONS(203), 1,
      anon_sym_font,
    ACTIONS(205), 1,
      anon_sym_guide,
    STATE(176), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [1054] = 2,
    ACTIONS(209), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(207), 16,
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
  [1077] = 2,
    ACTIONS(213), 1,
      anon_sym_x,
    ACTIONS(211), 16,
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
  [1099] = 8,
    ACTIONS(217), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(219), 1,
      anon_sym_vertical,
    ACTIONS(221), 1,
      anon_sym_horizontal,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(164), 1,
      sym_offset,
    STATE(308), 1,
      sym_identifier,
    STATE(163), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(215), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1133] = 2,
    ACTIONS(227), 1,
      anon_sym_x,
    ACTIONS(225), 16,
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
  [1155] = 2,
    ACTIONS(231), 1,
      anon_sym_x,
    ACTIONS(229), 16,
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
  [1177] = 2,
    ACTIONS(235), 1,
      anon_sym_x,
    ACTIONS(233), 16,
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
  [1199] = 2,
    ACTIONS(239), 1,
      anon_sym_x,
    ACTIONS(237), 16,
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
  [1221] = 10,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    STATE(184), 1,
      sym__xy_attr,
    STATE(357), 1,
      sym__guide_attr,
    STATE(358), 1,
      sym__geometry_x_attr,
    STATE(361), 1,
      sym__relative_attr,
    ACTIONS(247), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(149), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1258] = 10,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    STATE(179), 1,
      sym__xy_attr,
    STATE(357), 1,
      sym__guide_attr,
    STATE(358), 1,
      sym__geometry_x_attr,
    STATE(361), 1,
      sym__relative_attr,
    ACTIONS(247), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(149), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1295] = 10,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    STATE(131), 1,
      sym__xy_attr,
    STATE(357), 1,
      sym__guide_attr,
    STATE(358), 1,
      sym__geometry_x_attr,
    STATE(361), 1,
      sym__relative_attr,
    ACTIONS(247), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(149), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1332] = 7,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(251), 1,
      anon_sym_id,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(255), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(247), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(125), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1363] = 6,
    ACTIONS(217), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(219), 1,
      anon_sym_vertical,
    ACTIONS(221), 1,
      anon_sym_horizontal,
    STATE(33), 1,
      sym_identifier,
    STATE(101), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(215), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1391] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      sym_rgb,
    ACTIONS(257), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1412] = 2,
    ACTIONS(265), 1,
      sym_rgb,
    ACTIONS(263), 13,
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
  [1431] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(127), 1,
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
  [1454] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(159), 1,
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
  [1477] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(103), 1,
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
  [1500] = 4,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(94), 1,
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
  [1523] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(95), 1,
      sym_offset,
    ACTIONS(269), 12,
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
  [1544] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(71), 1,
      sym_offset,
    ACTIONS(271), 12,
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
  [1565] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(117), 1,
      sym_colour,
    ACTIONS(273), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1588] = 3,
    ACTIONS(261), 1,
      sym_rgb,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(257), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1609] = 2,
    ACTIONS(279), 1,
      sym_rgb,
    ACTIONS(277), 13,
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
  [1628] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(120), 1,
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
  [1651] = 4,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym__scale,
    STATE(97), 1,
      sym_stretch,
    ACTIONS(281), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1674] = 2,
    ACTIONS(287), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(285), 12,
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
  [1692] = 1,
    ACTIONS(109), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_with,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1708] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(140), 1,
      sym_offset,
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
  [1728] = 4,
    ACTIONS(295), 1,
      aux_sym__input_id_token1,
    STATE(96), 1,
      sym_part,
    ACTIONS(291), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(293), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1750] = 3,
    ACTIONS(299), 1,
      anon_sym_light2,
    ACTIONS(301), 1,
      anon_sym_dark,
    ACTIONS(297), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1770] = 2,
    ACTIONS(305), 1,
      sym_rgb,
    ACTIONS(303), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1788] = 7,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym__x_attr,
    ACTIONS(247), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(118), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1816] = 7,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym__x_attr,
    ACTIONS(247), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(118), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1844] = 3,
    ACTIONS(311), 1,
      anon_sym_timestamp,
    ACTIONS(313), 1,
      anon_sym_gzip,
    ACTIONS(309), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1864] = 3,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_stretch,
    ACTIONS(315), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1884] = 7,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym__x_attr,
    ACTIONS(247), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(118), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1912] = 1,
    ACTIONS(319), 13,
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
  [1928] = 2,
    ACTIONS(323), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(321), 12,
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
  [1946] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(154), 1,
      sym_offset,
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
  [1966] = 2,
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
  [1983] = 1,
    ACTIONS(327), 12,
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
  [1998] = 2,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(329), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2015] = 7,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym__y_attr,
    ACTIONS(255), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(100), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2042] = 2,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(119), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2059] = 2,
    ACTIONS(335), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(337), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2076] = 6,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(345), 1,
      aux_sym_relative_token1,
    STATE(372), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(343), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2101] = 8,
    ACTIONS(347), 1,
      anon_sym_input2,
    ACTIONS(349), 1,
      anon_sym_output2,
    ACTIONS(351), 1,
      anon_sym_parameter,
    ACTIONS(353), 1,
      anon_sym_light2,
    ACTIONS(355), 1,
      anon_sym_widget2,
    ACTIONS(357), 1,
      anon_sym_scale,
    ACTIONS(359), 1,
      anon_sym_stretch,
    STATE(355), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2130] = 7,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym__y_attr,
    ACTIONS(255), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(100), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2157] = 1,
    ACTIONS(361), 12,
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
  [2172] = 6,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      aux_sym_relative_token1,
    STATE(426), 1,
      sym_x,
    STATE(59), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(343), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2197] = 2,
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
  [2214] = 1,
    ACTIONS(369), 12,
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
  [2229] = 2,
    ACTIONS(373), 1,
      aux_sym__geometry_x_attr_token1,
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
  [2246] = 2,
    ACTIONS(377), 1,
      anon_sym_COMMA,
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
  [2263] = 7,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(249), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym__y_attr,
    ACTIONS(255), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(100), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2290] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_AT,
    ACTIONS(383), 1,
      aux_sym_relative_token1,
    STATE(420), 1,
      sym_x,
    STATE(234), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(343), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2315] = 2,
    ACTIONS(385), 1,
      anon_sym_COMMA,
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
  [2332] = 2,
    ACTIONS(389), 1,
      anon_sym_timestamp,
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
  [2349] = 6,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      aux_sym_relative_token1,
    STATE(408), 1,
      sym_x,
    STATE(414), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(343), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2374] = 1,
    ACTIONS(397), 12,
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
  [2389] = 2,
    ACTIONS(401), 1,
      anon_sym_COMMA,
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
  [2406] = 2,
    ACTIONS(403), 1,
      anon_sym_COMMA,
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
  [2423] = 1,
    ACTIONS(405), 12,
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
  [2438] = 2,
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
  [2455] = 1,
    ACTIONS(407), 12,
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
  [2470] = 1,
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
  [2484] = 1,
    ACTIONS(315), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2498] = 2,
    ACTIONS(413), 1,
      aux_sym_offset_token1,
    ACTIONS(411), 10,
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
  [2514] = 1,
    ACTIONS(415), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2528] = 1,
    ACTIONS(417), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2542] = 1,
    ACTIONS(419), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2556] = 1,
    ACTIONS(421), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2570] = 1,
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
  [2584] = 1,
    ACTIONS(423), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2598] = 1,
    ACTIONS(425), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2612] = 1,
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
  [2626] = 1,
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
  [2640] = 1,
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
  [2654] = 1,
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
  [2668] = 1,
    ACTIONS(435), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2682] = 1,
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
  [2696] = 1,
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
  [2710] = 1,
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
  [2724] = 1,
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
  [2738] = 2,
    ACTIONS(441), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(443), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2754] = 1,
    ACTIONS(445), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2768] = 1,
    ACTIONS(447), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2782] = 1,
    ACTIONS(449), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2796] = 1,
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
  [2810] = 1,
    ACTIONS(273), 11,
      ts_builtin_sym_end,
      sym_comment,
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
  [2852] = 1,
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
  [2866] = 1,
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
  [2880] = 1,
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
  [2894] = 1,
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
  [2908] = 1,
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
  [2922] = 1,
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
  [2936] = 1,
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
  [2950] = 1,
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
  [2964] = 1,
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
  [2978] = 5,
    STATE(43), 1,
      sym_valign,
    STATE(52), 1,
      sym_halign,
    STATE(179), 1,
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
  [3000] = 1,
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
  [3014] = 10,
    ACTIONS(471), 1,
      anon_sym_x,
    ACTIONS(473), 1,
      anon_sym_y,
    ACTIONS(475), 1,
      anon_sym_xy,
    ACTIONS(477), 1,
      anon_sym_text,
    ACTIONS(479), 1,
      anon_sym_font,
    ACTIONS(481), 1,
      anon_sym_size,
    ACTIONS(483), 1,
      anon_sym_halign,
    ACTIONS(485), 1,
      anon_sym_valign,
    ACTIONS(487), 1,
      anon_sym_align,
    ACTIONS(489), 2,
      anon_sym_colour,
      anon_sym_color,
  [3046] = 1,
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
  [3060] = 1,
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
  [3074] = 1,
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
  [3088] = 1,
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
  [3102] = 1,
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
  [3116] = 1,
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
  [3130] = 1,
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
  [3144] = 1,
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
  [3158] = 1,
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
  [3172] = 1,
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
  [3186] = 1,
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
  [3200] = 1,
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
  [3214] = 1,
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
  [3228] = 1,
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
  [3242] = 1,
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
  [3256] = 1,
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
  [3270] = 1,
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
  [3284] = 1,
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
  [3298] = 1,
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
  [3312] = 1,
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
  [3326] = 1,
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
  [3340] = 1,
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
  [3354] = 1,
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
  [3368] = 1,
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
  [3382] = 1,
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
  [3396] = 1,
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
  [3410] = 1,
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
  [3424] = 1,
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
  [3438] = 1,
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
  [3452] = 1,
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
  [3466] = 1,
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
  [3480] = 1,
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
  [3494] = 1,
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
  [3508] = 1,
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
  [3522] = 1,
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
  [3536] = 1,
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
  [3550] = 1,
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
  [3564] = 1,
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
  [3578] = 1,
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
  [3592] = 1,
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
  [3606] = 1,
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
  [3620] = 1,
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
  [3634] = 1,
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
  [3648] = 1,
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
  [3662] = 1,
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
  [3676] = 1,
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
  [3690] = 1,
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
  [3704] = 1,
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
  [3718] = 1,
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
  [3732] = 1,
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
  [3746] = 1,
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
  [3760] = 1,
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
  [3774] = 1,
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
  [3788] = 1,
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
  [3802] = 1,
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
  [3816] = 1,
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
  [3830] = 1,
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
  [3844] = 1,
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
  [3858] = 6,
    ACTIONS(347), 1,
      anon_sym_input2,
    ACTIONS(349), 1,
      anon_sym_output2,
    ACTIONS(351), 1,
      anon_sym_parameter,
    ACTIONS(353), 1,
      anon_sym_light2,
    ACTIONS(355), 1,
      anon_sym_widget2,
    STATE(406), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3881] = 6,
    ACTIONS(347), 1,
      anon_sym_input2,
    ACTIONS(349), 1,
      anon_sym_output2,
    ACTIONS(351), 1,
      anon_sym_parameter,
    ACTIONS(353), 1,
      anon_sym_light2,
    ACTIONS(355), 1,
      anon_sym_widget2,
    STATE(395), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3904] = 6,
    ACTIONS(347), 1,
      anon_sym_input2,
    ACTIONS(349), 1,
      anon_sym_output2,
    ACTIONS(351), 1,
      anon_sym_parameter,
    ACTIONS(353), 1,
      anon_sym_light2,
    ACTIONS(355), 1,
      anon_sym_widget2,
    STATE(412), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3927] = 6,
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
    STATE(365), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [3950] = 8,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(607), 1,
      anon_sym_x,
    ACTIONS(609), 1,
      anon_sym_y,
    ACTIONS(611), 1,
      anon_sym_xy,
    ACTIONS(613), 1,
      anon_sym_dx,
    ACTIONS(615), 1,
      anon_sym_dy,
    ACTIONS(617), 1,
      anon_sym_dxy,
    STATE(141), 2,
      sym__scale,
      sym_stretch,
  [3976] = 6,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(619), 1,
      anon_sym_AT,
    ACTIONS(623), 1,
      anon_sym_origin,
    ACTIONS(625), 1,
      aux_sym_origin_token1,
    STATE(158), 1,
      sym_offset,
    ACTIONS(621), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3998] = 2,
    ACTIONS(431), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(627), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4011] = 2,
    ACTIONS(137), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(139), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4024] = 6,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(629), 1,
      anon_sym_AT,
    ACTIONS(631), 1,
      anon_sym_origin,
    ACTIONS(633), 1,
      aux_sym_origin_token1,
    STATE(161), 1,
      sym_offset,
    ACTIONS(621), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4045] = 6,
    ACTIONS(635), 1,
      anon_sym_input2,
    ACTIONS(637), 1,
      anon_sym_output2,
    ACTIONS(639), 1,
      anon_sym_parameter,
    ACTIONS(641), 1,
      anon_sym_light2,
    ACTIONS(643), 1,
      anon_sym_widget2,
    ACTIONS(645), 1,
      anon_sym_label,
  [4064] = 5,
    ACTIONS(647), 1,
      anon_sym_input2,
    ACTIONS(649), 1,
      anon_sym_output2,
    ACTIONS(651), 1,
      anon_sym_parameter,
    ACTIONS(653), 1,
      anon_sym_light2,
    ACTIONS(655), 1,
      anon_sym_widget2,
  [4080] = 2,
    STATE(371), 1,
      sym_y,
    ACTIONS(657), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4090] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(659), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4100] = 2,
    STATE(179), 1,
      sym_valign,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4110] = 5,
    ACTIONS(661), 1,
      anon_sym_input2,
    ACTIONS(663), 1,
      anon_sym_output2,
    ACTIONS(665), 1,
      anon_sym_parameter,
    ACTIONS(667), 1,
      anon_sym_light2,
    ACTIONS(669), 1,
      anon_sym_widget2,
  [4126] = 5,
    ACTIONS(671), 1,
      anon_sym_input2,
    ACTIONS(673), 1,
      anon_sym_output2,
    ACTIONS(675), 1,
      anon_sym_parameter,
    ACTIONS(677), 1,
      anon_sym_light2,
    ACTIONS(679), 1,
      anon_sym_widget2,
  [4142] = 5,
    ACTIONS(681), 1,
      anon_sym_AT,
    ACTIONS(683), 1,
      aux_sym__originx_token1,
    ACTIONS(685), 1,
      aux_sym__originy_token1,
    STATE(379), 1,
      sym__originy,
    STATE(380), 1,
      sym__originx,
  [4158] = 2,
    STATE(179), 1,
      sym_halign,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4168] = 2,
    STATE(61), 1,
      sym_halign,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4178] = 2,
    STATE(61), 1,
      sym_valign,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4188] = 2,
    STATE(387), 1,
      sym_y,
    ACTIONS(687), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4198] = 2,
    STATE(75), 1,
      sym_y,
    ACTIONS(689), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4208] = 5,
    ACTIONS(691), 1,
      anon_sym_name,
    ACTIONS(693), 1,
      anon_sym_x,
    ACTIONS(695), 1,
      anon_sym_y,
    ACTIONS(697), 1,
      anon_sym_xy,
    ACTIONS(699), 1,
      anon_sym_part,
  [4224] = 5,
    ACTIONS(701), 1,
      aux_sym__input_id_token1,
    ACTIONS(703), 1,
      anon_sym_none,
    ACTIONS(705), 1,
      sym_rgb,
    ACTIONS(707), 1,
      sym_rgba,
    STATE(122), 1,
      sym_name,
  [4240] = 4,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    ACTIONS(711), 1,
      aux_sym__offset_attr_token1,
    STATE(359), 1,
      sym__offset_attr,
    STATE(360), 1,
      sym__offset_xy_attr,
  [4253] = 4,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    ACTIONS(715), 1,
      anon_sym_SQUOTE,
    ACTIONS(717), 1,
      aux_sym__string_token1,
    STATE(179), 1,
      sym__string,
  [4266] = 3,
    ACTIONS(719), 1,
      anon_sym_project,
    ACTIONS(721), 1,
      anon_sym_script,
    STATE(165), 2,
      sym_project,
      sym_script,
  [4277] = 2,
    STATE(110), 1,
      sym__geometry_y_attr,
    ACTIONS(723), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4286] = 4,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      aux_sym__string_token1,
    STATE(76), 1,
      sym__string,
  [4299] = 4,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(342), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4312] = 4,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4325] = 4,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4338] = 4,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4351] = 4,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4364] = 3,
    ACTIONS(743), 1,
      anon_sym_module2,
    ACTIONS(745), 1,
      anon_sym_panel,
    STATE(153), 2,
      sym__module_export,
      sym_panel,
  [4375] = 3,
    ACTIONS(711), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      sym__offset_attr,
  [4385] = 3,
    ACTIONS(83), 1,
      aux_sym__input_id_token1,
    ACTIONS(749), 1,
      aux_sym_offset_token1,
    STATE(392), 1,
      sym_offset,
  [4395] = 3,
    ACTIONS(83), 1,
      anon_sym_with,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(334), 1,
      sym_offset,
  [4405] = 3,
    ACTIONS(711), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym__offset_attr,
  [4415] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(753), 1,
      aux_sym_origin_token1,
    STATE(133), 1,
      sym_offset,
  [4425] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(755), 1,
      aux_sym_origin_token1,
    STATE(139), 1,
      sym_offset,
  [4435] = 3,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(55), 1,
      sym_name,
    STATE(152), 1,
      sym_decoration,
  [4445] = 3,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    ACTIONS(761), 1,
      aux_sym__guide_id_token1,
    STATE(289), 1,
      sym__component_id,
  [4455] = 3,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(340), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4465] = 3,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(339), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4475] = 3,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(338), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4485] = 3,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(337), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4495] = 3,
    ACTIONS(711), 1,
      aux_sym__offset_attr_token1,
    STATE(184), 1,
      sym__offset_dxy_attr,
    STATE(354), 1,
      sym__offset_attr,
  [4505] = 3,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(336), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4515] = 3,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(335), 1,
      sym__relative,
    STATE(349), 1,
      sym__offset,
  [4525] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(179), 1,
      sym_colour,
  [4535] = 3,
    ACTIONS(763), 1,
      aux_sym__label_id_token1,
    ACTIONS(765), 1,
      anon_sym_DQUOTE,
    ACTIONS(767), 1,
      anon_sym_SQUOTE,
  [4545] = 3,
    ACTIONS(769), 1,
      anon_sym_font,
    ACTIONS(771), 1,
      anon_sym_project,
    ACTIONS(773), 1,
      anon_sym_script,
  [4555] = 3,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(55), 1,
      sym_name,
    STATE(178), 1,
      sym_decoration,
  [4565] = 3,
    ACTIONS(775), 1,
      anon_sym_name,
    ACTIONS(777), 1,
      anon_sym_height,
    ACTIONS(779), 1,
      anon_sym_width,
  [4575] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      sym_offset,
  [4585] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_name,
    STATE(325), 1,
      sym__component_xy_attr,
  [4595] = 3,
    ACTIONS(785), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(135), 1,
      sym__new_component,
  [4605] = 3,
    ACTIONS(785), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(136), 1,
      sym__new_component,
  [4615] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_name,
    STATE(324), 1,
      sym__component_xy_attr,
  [4625] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_name,
    STATE(323), 1,
      sym__component_xy_attr,
  [4635] = 3,
    ACTIONS(785), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(137), 1,
      sym__new_component,
  [4645] = 3,
    ACTIONS(785), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(143), 1,
      sym__new_component,
  [4655] = 3,
    ACTIONS(785), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(144), 1,
      sym__new_component,
  [4665] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_name,
    STATE(322), 1,
      sym__component_xy_attr,
  [4675] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_name,
    STATE(320), 1,
      sym__component_xy_attr,
  [4685] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
    STATE(319), 1,
      sym__component_y_attr,
  [4695] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
    STATE(318), 1,
      sym__component_y_attr,
  [4705] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
    STATE(317), 1,
      sym__component_y_attr,
  [4715] = 1,
    ACTIONS(787), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [4721] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
    STATE(316), 1,
      sym__component_y_attr,
  [4731] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
    STATE(314), 1,
      sym__component_y_attr,
  [4741] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(231), 1,
      sym_name,
    STATE(315), 1,
      sym__component_x_attr,
  [4751] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(231), 1,
      sym_name,
    STATE(310), 1,
      sym__component_x_attr,
  [4761] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(231), 1,
      sym_name,
    STATE(311), 1,
      sym__component_x_attr,
  [4771] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(231), 1,
      sym_name,
    STATE(312), 1,
      sym__component_x_attr,
  [4781] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(231), 1,
      sym_name,
    STATE(313), 1,
      sym__component_x_attr,
  [4791] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(239), 1,
      sym_name,
  [4798] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(238), 1,
      sym_name,
  [4805] = 2,
    ACTIONS(711), 1,
      aux_sym__offset_attr_token1,
    STATE(381), 1,
      sym__offset_attr,
  [4812] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(131), 1,
      sym_name,
  [4819] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(298), 1,
      sym_name,
  [4826] = 2,
    ACTIONS(789), 1,
      aux_sym__input_id_token1,
    STATE(131), 1,
      sym_part,
  [4833] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(226), 1,
      sym_name,
  [4840] = 2,
    ACTIONS(791), 1,
      aux_sym__input_id_token1,
    STATE(179), 1,
      sym_font,
  [4847] = 1,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4852] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(236), 1,
      sym_name,
  [4859] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(180), 1,
      sym_name,
  [4866] = 2,
    ACTIONS(685), 1,
      aux_sym__originy_token1,
    STATE(119), 1,
      sym__originy,
  [4873] = 2,
    ACTIONS(243), 1,
      aux_sym__offset_attr_token1,
    STATE(109), 1,
      sym__relative_attr,
  [4880] = 2,
    ACTIONS(683), 1,
      aux_sym__originx_token1,
    STATE(119), 1,
      sym__originx,
  [4887] = 2,
    ACTIONS(795), 1,
      aux_sym__guide_attr_token1,
    STATE(111), 1,
      sym__guide_attr,
  [4894] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(237), 1,
      sym_name,
  [4901] = 2,
    ACTIONS(797), 1,
      aux_sym__absolute_attr_token1,
    STATE(181), 1,
      sym__absolute_y_attr,
  [4908] = 2,
    ACTIONS(799), 1,
      sym_rgb,
    ACTIONS(801), 1,
      sym_rgba,
  [4915] = 2,
    ACTIONS(803), 1,
      aux_sym__guide_attr_token1,
    STATE(192), 1,
      sym_identifier,
  [4922] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(31), 1,
      sym_name,
  [4929] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(222), 1,
      sym_name,
  [4936] = 2,
    ACTIONS(711), 1,
      aux_sym__offset_attr_token1,
    STATE(126), 1,
      sym__offset_attr,
  [4943] = 1,
    ACTIONS(137), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [4948] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(241), 1,
      sym_name,
  [4955] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(242), 1,
      sym_name,
  [4962] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
  [4969] = 2,
    ACTIONS(711), 1,
      aux_sym__offset_attr_token1,
    STATE(174), 1,
      sym__offset_attr,
  [4976] = 2,
    ACTIONS(711), 1,
      aux_sym__offset_attr_token1,
    STATE(173), 1,
      sym__offset_attr,
  [4983] = 2,
    ACTIONS(805), 1,
      sym_height,
    ACTIONS(807), 1,
      sym_width,
  [4990] = 2,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      sym_width,
  [4997] = 2,
    ACTIONS(813), 1,
      anon_sym_svg,
    STATE(148), 1,
      sym_svg,
  [5004] = 1,
    ACTIONS(815), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [5009] = 2,
    ACTIONS(357), 1,
      anon_sym_scale,
    ACTIONS(359), 1,
      anon_sym_stretch,
  [5016] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(224), 1,
      sym_name,
  [5023] = 2,
    ACTIONS(817), 1,
      aux_sym__absolute_attr_token1,
    STATE(329), 1,
      sym__absolute_x_attr,
  [5030] = 2,
    ACTIONS(203), 1,
      anon_sym_font,
    STATE(166), 1,
      sym__font_id,
  [5037] = 2,
    ACTIONS(733), 1,
      aux_sym_offset_token1,
    STATE(345), 1,
      sym__offset,
  [5044] = 2,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(225), 1,
      sym_name,
  [5051] = 2,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(164), 1,
      sym_offset,
  [5058] = 1,
    ACTIONS(819), 1,
      aux_sym__scale_token1,
  [5062] = 1,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [5066] = 1,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [5070] = 1,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [5074] = 1,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [5078] = 1,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
  [5082] = 1,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [5086] = 1,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [5090] = 1,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [5094] = 1,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [5098] = 1,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [5102] = 1,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [5106] = 1,
    ACTIONS(843), 1,
      anon_sym_COMMA,
  [5110] = 1,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
  [5114] = 1,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
  [5118] = 1,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
  [5122] = 1,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
  [5126] = 1,
    ACTIONS(359), 1,
      anon_sym_stretch,
  [5130] = 1,
    ACTIONS(853), 1,
      anon_sym_COMMA,
  [5134] = 1,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
  [5138] = 1,
    ACTIONS(857), 1,
      anon_sym_COMMA,
  [5142] = 1,
    ACTIONS(859), 1,
      aux_sym_origin_token1,
  [5146] = 1,
    ACTIONS(861), 1,
      aux_sym_origin_token1,
  [5150] = 1,
    ACTIONS(863), 1,
      aux_sym__input_id_token1,
  [5154] = 1,
    ACTIONS(865), 1,
      aux_sym__scale_token1,
  [5158] = 1,
    ACTIONS(113), 1,
      anon_sym_with,
  [5162] = 1,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
  [5166] = 1,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
  [5170] = 1,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
  [5174] = 1,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
  [5178] = 1,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
  [5182] = 1,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
  [5186] = 1,
    ACTIONS(121), 1,
      anon_sym_with,
  [5190] = 1,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
  [5194] = 1,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
  [5198] = 1,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
  [5202] = 1,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
  [5206] = 1,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
  [5210] = 1,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
  [5214] = 1,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
  [5218] = 1,
    ACTIONS(893), 1,
      anon_sym_COMMA,
  [5222] = 1,
    ACTIONS(895), 1,
      sym_width,
  [5226] = 1,
    ACTIONS(897), 1,
      anon_sym_timestamp,
  [5230] = 1,
    ACTIONS(897), 1,
      anon_sym_gzip,
  [5234] = 1,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
  [5238] = 1,
    ACTIONS(901), 1,
      anon_sym_COMMA,
  [5242] = 1,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
  [5246] = 1,
    ACTIONS(905), 1,
      aux_sym__scale_token1,
  [5250] = 1,
    ACTIONS(907), 1,
      anon_sym_COMMA,
  [5254] = 1,
    ACTIONS(909), 1,
      anon_sym_COMMA,
  [5258] = 1,
    ACTIONS(911), 1,
      anon_sym_COMMA,
  [5262] = 1,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
  [5266] = 1,
    ACTIONS(915), 1,
      anon_sym_COMMA,
  [5270] = 1,
    ACTIONS(917), 1,
      sym_rgba,
  [5274] = 1,
    ACTIONS(917), 1,
      sym_rgb,
  [5278] = 1,
    ACTIONS(919), 1,
      anon_sym_COMMA,
  [5282] = 1,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
  [5286] = 1,
    ACTIONS(923), 1,
      anon_sym_SQUOTE,
  [5290] = 1,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
  [5294] = 1,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
  [5298] = 1,
    ACTIONS(117), 1,
      anon_sym_with,
  [5302] = 1,
    ACTIONS(927), 1,
      aux_sym_absolute_token1,
  [5306] = 1,
    ACTIONS(335), 1,
      anon_sym_with,
  [5310] = 1,
    ACTIONS(929), 1,
      anon_sym_COMMA,
  [5314] = 1,
    ACTIONS(931), 1,
      anon_sym_SQUOTE,
  [5318] = 1,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
  [5322] = 1,
    ACTIONS(933), 1,
      aux_sym_origin_token1,
  [5326] = 1,
    ACTIONS(935), 1,
      ts_builtin_sym_end,
  [5330] = 1,
    ACTIONS(937), 1,
      sym_fontsize,
  [5334] = 1,
    ACTIONS(939), 1,
      aux_sym__absolute_attr_token1,
  [5338] = 1,
    ACTIONS(941), 1,
      anon_sym_COMMA,
  [5342] = 1,
    ACTIONS(943), 1,
      anon_sym_COMMA,
  [5346] = 1,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
  [5350] = 1,
    ACTIONS(947), 1,
      aux_sym_origin_token1,
  [5354] = 1,
    ACTIONS(949), 1,
      aux_sym__label_id_token3,
  [5358] = 1,
    ACTIONS(951), 1,
      aux_sym__label_id_token2,
  [5362] = 1,
    ACTIONS(109), 1,
      aux_sym__input_id_token1,
  [5366] = 1,
    ACTIONS(953), 1,
      sym_width,
  [5370] = 1,
    ACTIONS(335), 1,
      aux_sym__input_id_token1,
  [5374] = 1,
    ACTIONS(117), 1,
      aux_sym__input_id_token1,
  [5378] = 1,
    ACTIONS(953), 1,
      sym_height,
  [5382] = 1,
    ACTIONS(955), 1,
      aux_sym_relative_token1,
  [5386] = 1,
    ACTIONS(121), 1,
      aux_sym__input_id_token1,
  [5390] = 1,
    ACTIONS(113), 1,
      aux_sym__input_id_token1,
  [5394] = 1,
    ACTIONS(957), 1,
      anon_sym_COMMA,
  [5398] = 1,
    ACTIONS(959), 1,
      anon_sym_COMMA,
  [5402] = 1,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
  [5406] = 1,
    ACTIONS(963), 1,
      aux_sym__label_id_token3,
  [5410] = 1,
    ACTIONS(965), 1,
      aux_sym__label_id_token2,
  [5414] = 1,
    ACTIONS(967), 1,
      aux_sym__input_id_token1,
  [5418] = 1,
    ACTIONS(969), 1,
      aux_sym__guide_id_token1,
  [5422] = 1,
    ACTIONS(971), 1,
      aux_sym__input_id_token1,
  [5426] = 1,
    ACTIONS(973), 1,
      aux_sym__input_id_token1,
  [5430] = 1,
    ACTIONS(975), 1,
      aux_sym__input_id_token1,
  [5434] = 1,
    ACTIONS(977), 1,
      aux_sym__input_id_token1,
  [5438] = 1,
    ACTIONS(979), 1,
      aux_sym__input_id_token1,
  [5442] = 1,
    ACTIONS(981), 1,
      aux_sym__guide_id_token1,
  [5446] = 1,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
  [5450] = 1,
    ACTIONS(985), 1,
      aux_sym_relative_token1,
  [5454] = 1,
    ACTIONS(987), 1,
      anon_sym_COMMA,
  [5458] = 1,
    ACTIONS(989), 1,
      anon_sym_DQUOTE,
  [5462] = 1,
    ACTIONS(989), 1,
      anon_sym_SQUOTE,
  [5466] = 1,
    ACTIONS(991), 1,
      aux_sym_absolute_token1,
  [5470] = 1,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
  [5474] = 1,
    ACTIONS(995), 1,
      aux_sym_relative_token1,
  [5478] = 1,
    ACTIONS(997), 1,
      anon_sym_with,
  [5482] = 1,
    ACTIONS(999), 1,
      aux_sym_absolute_token1,
  [5486] = 1,
    ACTIONS(1001), 1,
      aux_sym_relative_token1,
  [5490] = 1,
    ACTIONS(1003), 1,
      aux_sym_absolute_token1,
  [5494] = 1,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
  [5498] = 1,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
  [5502] = 1,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
  [5506] = 1,
    ACTIONS(1011), 1,
      aux_sym__label_id_token2,
  [5510] = 1,
    ACTIONS(1013), 1,
      aux_sym__label_id_token3,
  [5514] = 1,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
  [5518] = 1,
    ACTIONS(1017), 1,
      aux_sym_absolute_token1,
  [5522] = 1,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
  [5526] = 1,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
  [5530] = 1,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
  [5534] = 1,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
  [5538] = 1,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
  [5542] = 1,
    ACTIONS(1029), 1,
      aux_sym_absolute_token1,
  [5546] = 1,
    ACTIONS(1031), 1,
      aux_sym_absolute_token1,
  [5550] = 1,
    ACTIONS(1033), 1,
      aux_sym_absolute_token1,
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
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 807,
  [SMALL_STATE(25)] = 834,
  [SMALL_STATE(26)] = 861,
  [SMALL_STATE(27)] = 907,
  [SMALL_STATE(28)] = 953,
  [SMALL_STATE(29)] = 976,
  [SMALL_STATE(30)] = 1015,
  [SMALL_STATE(31)] = 1054,
  [SMALL_STATE(32)] = 1077,
  [SMALL_STATE(33)] = 1099,
  [SMALL_STATE(34)] = 1133,
  [SMALL_STATE(35)] = 1155,
  [SMALL_STATE(36)] = 1177,
  [SMALL_STATE(37)] = 1199,
  [SMALL_STATE(38)] = 1221,
  [SMALL_STATE(39)] = 1258,
  [SMALL_STATE(40)] = 1295,
  [SMALL_STATE(41)] = 1332,
  [SMALL_STATE(42)] = 1363,
  [SMALL_STATE(43)] = 1391,
  [SMALL_STATE(44)] = 1412,
  [SMALL_STATE(45)] = 1431,
  [SMALL_STATE(46)] = 1454,
  [SMALL_STATE(47)] = 1477,
  [SMALL_STATE(48)] = 1500,
  [SMALL_STATE(49)] = 1523,
  [SMALL_STATE(50)] = 1544,
  [SMALL_STATE(51)] = 1565,
  [SMALL_STATE(52)] = 1588,
  [SMALL_STATE(53)] = 1609,
  [SMALL_STATE(54)] = 1628,
  [SMALL_STATE(55)] = 1651,
  [SMALL_STATE(56)] = 1674,
  [SMALL_STATE(57)] = 1692,
  [SMALL_STATE(58)] = 1708,
  [SMALL_STATE(59)] = 1728,
  [SMALL_STATE(60)] = 1750,
  [SMALL_STATE(61)] = 1770,
  [SMALL_STATE(62)] = 1788,
  [SMALL_STATE(63)] = 1816,
  [SMALL_STATE(64)] = 1844,
  [SMALL_STATE(65)] = 1864,
  [SMALL_STATE(66)] = 1884,
  [SMALL_STATE(67)] = 1912,
  [SMALL_STATE(68)] = 1928,
  [SMALL_STATE(69)] = 1946,
  [SMALL_STATE(70)] = 1966,
  [SMALL_STATE(71)] = 1983,
  [SMALL_STATE(72)] = 1998,
  [SMALL_STATE(73)] = 2015,
  [SMALL_STATE(74)] = 2042,
  [SMALL_STATE(75)] = 2059,
  [SMALL_STATE(76)] = 2076,
  [SMALL_STATE(77)] = 2101,
  [SMALL_STATE(78)] = 2130,
  [SMALL_STATE(79)] = 2157,
  [SMALL_STATE(80)] = 2172,
  [SMALL_STATE(81)] = 2197,
  [SMALL_STATE(82)] = 2214,
  [SMALL_STATE(83)] = 2229,
  [SMALL_STATE(84)] = 2246,
  [SMALL_STATE(85)] = 2263,
  [SMALL_STATE(86)] = 2290,
  [SMALL_STATE(87)] = 2315,
  [SMALL_STATE(88)] = 2332,
  [SMALL_STATE(89)] = 2349,
  [SMALL_STATE(90)] = 2374,
  [SMALL_STATE(91)] = 2389,
  [SMALL_STATE(92)] = 2406,
  [SMALL_STATE(93)] = 2423,
  [SMALL_STATE(94)] = 2438,
  [SMALL_STATE(95)] = 2455,
  [SMALL_STATE(96)] = 2470,
  [SMALL_STATE(97)] = 2484,
  [SMALL_STATE(98)] = 2498,
  [SMALL_STATE(99)] = 2514,
  [SMALL_STATE(100)] = 2528,
  [SMALL_STATE(101)] = 2542,
  [SMALL_STATE(102)] = 2556,
  [SMALL_STATE(103)] = 2570,
  [SMALL_STATE(104)] = 2584,
  [SMALL_STATE(105)] = 2598,
  [SMALL_STATE(106)] = 2612,
  [SMALL_STATE(107)] = 2626,
  [SMALL_STATE(108)] = 2640,
  [SMALL_STATE(109)] = 2654,
  [SMALL_STATE(110)] = 2668,
  [SMALL_STATE(111)] = 2682,
  [SMALL_STATE(112)] = 2696,
  [SMALL_STATE(113)] = 2710,
  [SMALL_STATE(114)] = 2724,
  [SMALL_STATE(115)] = 2738,
  [SMALL_STATE(116)] = 2754,
  [SMALL_STATE(117)] = 2768,
  [SMALL_STATE(118)] = 2782,
  [SMALL_STATE(119)] = 2796,
  [SMALL_STATE(120)] = 2810,
  [SMALL_STATE(121)] = 2824,
  [SMALL_STATE(122)] = 2838,
  [SMALL_STATE(123)] = 2852,
  [SMALL_STATE(124)] = 2866,
  [SMALL_STATE(125)] = 2880,
  [SMALL_STATE(126)] = 2894,
  [SMALL_STATE(127)] = 2908,
  [SMALL_STATE(128)] = 2922,
  [SMALL_STATE(129)] = 2936,
  [SMALL_STATE(130)] = 2950,
  [SMALL_STATE(131)] = 2964,
  [SMALL_STATE(132)] = 2978,
  [SMALL_STATE(133)] = 3000,
  [SMALL_STATE(134)] = 3014,
  [SMALL_STATE(135)] = 3046,
  [SMALL_STATE(136)] = 3060,
  [SMALL_STATE(137)] = 3074,
  [SMALL_STATE(138)] = 3088,
  [SMALL_STATE(139)] = 3102,
  [SMALL_STATE(140)] = 3116,
  [SMALL_STATE(141)] = 3130,
  [SMALL_STATE(142)] = 3144,
  [SMALL_STATE(143)] = 3158,
  [SMALL_STATE(144)] = 3172,
  [SMALL_STATE(145)] = 3186,
  [SMALL_STATE(146)] = 3200,
  [SMALL_STATE(147)] = 3214,
  [SMALL_STATE(148)] = 3228,
  [SMALL_STATE(149)] = 3242,
  [SMALL_STATE(150)] = 3256,
  [SMALL_STATE(151)] = 3270,
  [SMALL_STATE(152)] = 3284,
  [SMALL_STATE(153)] = 3298,
  [SMALL_STATE(154)] = 3312,
  [SMALL_STATE(155)] = 3326,
  [SMALL_STATE(156)] = 3340,
  [SMALL_STATE(157)] = 3354,
  [SMALL_STATE(158)] = 3368,
  [SMALL_STATE(159)] = 3382,
  [SMALL_STATE(160)] = 3396,
  [SMALL_STATE(161)] = 3410,
  [SMALL_STATE(162)] = 3424,
  [SMALL_STATE(163)] = 3438,
  [SMALL_STATE(164)] = 3452,
  [SMALL_STATE(165)] = 3466,
  [SMALL_STATE(166)] = 3480,
  [SMALL_STATE(167)] = 3494,
  [SMALL_STATE(168)] = 3508,
  [SMALL_STATE(169)] = 3522,
  [SMALL_STATE(170)] = 3536,
  [SMALL_STATE(171)] = 3550,
  [SMALL_STATE(172)] = 3564,
  [SMALL_STATE(173)] = 3578,
  [SMALL_STATE(174)] = 3592,
  [SMALL_STATE(175)] = 3606,
  [SMALL_STATE(176)] = 3620,
  [SMALL_STATE(177)] = 3634,
  [SMALL_STATE(178)] = 3648,
  [SMALL_STATE(179)] = 3662,
  [SMALL_STATE(180)] = 3676,
  [SMALL_STATE(181)] = 3690,
  [SMALL_STATE(182)] = 3704,
  [SMALL_STATE(183)] = 3718,
  [SMALL_STATE(184)] = 3732,
  [SMALL_STATE(185)] = 3746,
  [SMALL_STATE(186)] = 3760,
  [SMALL_STATE(187)] = 3774,
  [SMALL_STATE(188)] = 3788,
  [SMALL_STATE(189)] = 3802,
  [SMALL_STATE(190)] = 3816,
  [SMALL_STATE(191)] = 3830,
  [SMALL_STATE(192)] = 3844,
  [SMALL_STATE(193)] = 3858,
  [SMALL_STATE(194)] = 3881,
  [SMALL_STATE(195)] = 3904,
  [SMALL_STATE(196)] = 3927,
  [SMALL_STATE(197)] = 3950,
  [SMALL_STATE(198)] = 3976,
  [SMALL_STATE(199)] = 3998,
  [SMALL_STATE(200)] = 4011,
  [SMALL_STATE(201)] = 4024,
  [SMALL_STATE(202)] = 4045,
  [SMALL_STATE(203)] = 4064,
  [SMALL_STATE(204)] = 4080,
  [SMALL_STATE(205)] = 4090,
  [SMALL_STATE(206)] = 4100,
  [SMALL_STATE(207)] = 4110,
  [SMALL_STATE(208)] = 4126,
  [SMALL_STATE(209)] = 4142,
  [SMALL_STATE(210)] = 4158,
  [SMALL_STATE(211)] = 4168,
  [SMALL_STATE(212)] = 4178,
  [SMALL_STATE(213)] = 4188,
  [SMALL_STATE(214)] = 4198,
  [SMALL_STATE(215)] = 4208,
  [SMALL_STATE(216)] = 4224,
  [SMALL_STATE(217)] = 4240,
  [SMALL_STATE(218)] = 4253,
  [SMALL_STATE(219)] = 4266,
  [SMALL_STATE(220)] = 4277,
  [SMALL_STATE(221)] = 4286,
  [SMALL_STATE(222)] = 4299,
  [SMALL_STATE(223)] = 4312,
  [SMALL_STATE(224)] = 4325,
  [SMALL_STATE(225)] = 4338,
  [SMALL_STATE(226)] = 4351,
  [SMALL_STATE(227)] = 4364,
  [SMALL_STATE(228)] = 4375,
  [SMALL_STATE(229)] = 4385,
  [SMALL_STATE(230)] = 4395,
  [SMALL_STATE(231)] = 4405,
  [SMALL_STATE(232)] = 4415,
  [SMALL_STATE(233)] = 4425,
  [SMALL_STATE(234)] = 4435,
  [SMALL_STATE(235)] = 4445,
  [SMALL_STATE(236)] = 4455,
  [SMALL_STATE(237)] = 4465,
  [SMALL_STATE(238)] = 4475,
  [SMALL_STATE(239)] = 4485,
  [SMALL_STATE(240)] = 4495,
  [SMALL_STATE(241)] = 4505,
  [SMALL_STATE(242)] = 4515,
  [SMALL_STATE(243)] = 4525,
  [SMALL_STATE(244)] = 4535,
  [SMALL_STATE(245)] = 4545,
  [SMALL_STATE(246)] = 4555,
  [SMALL_STATE(247)] = 4565,
  [SMALL_STATE(248)] = 4575,
  [SMALL_STATE(249)] = 4585,
  [SMALL_STATE(250)] = 4595,
  [SMALL_STATE(251)] = 4605,
  [SMALL_STATE(252)] = 4615,
  [SMALL_STATE(253)] = 4625,
  [SMALL_STATE(254)] = 4635,
  [SMALL_STATE(255)] = 4645,
  [SMALL_STATE(256)] = 4655,
  [SMALL_STATE(257)] = 4665,
  [SMALL_STATE(258)] = 4675,
  [SMALL_STATE(259)] = 4685,
  [SMALL_STATE(260)] = 4695,
  [SMALL_STATE(261)] = 4705,
  [SMALL_STATE(262)] = 4715,
  [SMALL_STATE(263)] = 4721,
  [SMALL_STATE(264)] = 4731,
  [SMALL_STATE(265)] = 4741,
  [SMALL_STATE(266)] = 4751,
  [SMALL_STATE(267)] = 4761,
  [SMALL_STATE(268)] = 4771,
  [SMALL_STATE(269)] = 4781,
  [SMALL_STATE(270)] = 4791,
  [SMALL_STATE(271)] = 4798,
  [SMALL_STATE(272)] = 4805,
  [SMALL_STATE(273)] = 4812,
  [SMALL_STATE(274)] = 4819,
  [SMALL_STATE(275)] = 4826,
  [SMALL_STATE(276)] = 4833,
  [SMALL_STATE(277)] = 4840,
  [SMALL_STATE(278)] = 4847,
  [SMALL_STATE(279)] = 4852,
  [SMALL_STATE(280)] = 4859,
  [SMALL_STATE(281)] = 4866,
  [SMALL_STATE(282)] = 4873,
  [SMALL_STATE(283)] = 4880,
  [SMALL_STATE(284)] = 4887,
  [SMALL_STATE(285)] = 4894,
  [SMALL_STATE(286)] = 4901,
  [SMALL_STATE(287)] = 4908,
  [SMALL_STATE(288)] = 4915,
  [SMALL_STATE(289)] = 4922,
  [SMALL_STATE(290)] = 4929,
  [SMALL_STATE(291)] = 4936,
  [SMALL_STATE(292)] = 4943,
  [SMALL_STATE(293)] = 4948,
  [SMALL_STATE(294)] = 4955,
  [SMALL_STATE(295)] = 4962,
  [SMALL_STATE(296)] = 4969,
  [SMALL_STATE(297)] = 4976,
  [SMALL_STATE(298)] = 4983,
  [SMALL_STATE(299)] = 4990,
  [SMALL_STATE(300)] = 4997,
  [SMALL_STATE(301)] = 5004,
  [SMALL_STATE(302)] = 5009,
  [SMALL_STATE(303)] = 5016,
  [SMALL_STATE(304)] = 5023,
  [SMALL_STATE(305)] = 5030,
  [SMALL_STATE(306)] = 5037,
  [SMALL_STATE(307)] = 5044,
  [SMALL_STATE(308)] = 5051,
  [SMALL_STATE(309)] = 5058,
  [SMALL_STATE(310)] = 5062,
  [SMALL_STATE(311)] = 5066,
  [SMALL_STATE(312)] = 5070,
  [SMALL_STATE(313)] = 5074,
  [SMALL_STATE(314)] = 5078,
  [SMALL_STATE(315)] = 5082,
  [SMALL_STATE(316)] = 5086,
  [SMALL_STATE(317)] = 5090,
  [SMALL_STATE(318)] = 5094,
  [SMALL_STATE(319)] = 5098,
  [SMALL_STATE(320)] = 5102,
  [SMALL_STATE(321)] = 5106,
  [SMALL_STATE(322)] = 5110,
  [SMALL_STATE(323)] = 5114,
  [SMALL_STATE(324)] = 5118,
  [SMALL_STATE(325)] = 5122,
  [SMALL_STATE(326)] = 5126,
  [SMALL_STATE(327)] = 5130,
  [SMALL_STATE(328)] = 5134,
  [SMALL_STATE(329)] = 5138,
  [SMALL_STATE(330)] = 5142,
  [SMALL_STATE(331)] = 5146,
  [SMALL_STATE(332)] = 5150,
  [SMALL_STATE(333)] = 5154,
  [SMALL_STATE(334)] = 5158,
  [SMALL_STATE(335)] = 5162,
  [SMALL_STATE(336)] = 5166,
  [SMALL_STATE(337)] = 5170,
  [SMALL_STATE(338)] = 5174,
  [SMALL_STATE(339)] = 5178,
  [SMALL_STATE(340)] = 5182,
  [SMALL_STATE(341)] = 5186,
  [SMALL_STATE(342)] = 5190,
  [SMALL_STATE(343)] = 5194,
  [SMALL_STATE(344)] = 5198,
  [SMALL_STATE(345)] = 5202,
  [SMALL_STATE(346)] = 5206,
  [SMALL_STATE(347)] = 5210,
  [SMALL_STATE(348)] = 5214,
  [SMALL_STATE(349)] = 5218,
  [SMALL_STATE(350)] = 5222,
  [SMALL_STATE(351)] = 5226,
  [SMALL_STATE(352)] = 5230,
  [SMALL_STATE(353)] = 5234,
  [SMALL_STATE(354)] = 5238,
  [SMALL_STATE(355)] = 5242,
  [SMALL_STATE(356)] = 5246,
  [SMALL_STATE(357)] = 5250,
  [SMALL_STATE(358)] = 5254,
  [SMALL_STATE(359)] = 5258,
  [SMALL_STATE(360)] = 5262,
  [SMALL_STATE(361)] = 5266,
  [SMALL_STATE(362)] = 5270,
  [SMALL_STATE(363)] = 5274,
  [SMALL_STATE(364)] = 5278,
  [SMALL_STATE(365)] = 5282,
  [SMALL_STATE(366)] = 5286,
  [SMALL_STATE(367)] = 5290,
  [SMALL_STATE(368)] = 5294,
  [SMALL_STATE(369)] = 5298,
  [SMALL_STATE(370)] = 5302,
  [SMALL_STATE(371)] = 5306,
  [SMALL_STATE(372)] = 5310,
  [SMALL_STATE(373)] = 5314,
  [SMALL_STATE(374)] = 5318,
  [SMALL_STATE(375)] = 5322,
  [SMALL_STATE(376)] = 5326,
  [SMALL_STATE(377)] = 5330,
  [SMALL_STATE(378)] = 5334,
  [SMALL_STATE(379)] = 5338,
  [SMALL_STATE(380)] = 5342,
  [SMALL_STATE(381)] = 5346,
  [SMALL_STATE(382)] = 5350,
  [SMALL_STATE(383)] = 5354,
  [SMALL_STATE(384)] = 5358,
  [SMALL_STATE(385)] = 5362,
  [SMALL_STATE(386)] = 5366,
  [SMALL_STATE(387)] = 5370,
  [SMALL_STATE(388)] = 5374,
  [SMALL_STATE(389)] = 5378,
  [SMALL_STATE(390)] = 5382,
  [SMALL_STATE(391)] = 5386,
  [SMALL_STATE(392)] = 5390,
  [SMALL_STATE(393)] = 5394,
  [SMALL_STATE(394)] = 5398,
  [SMALL_STATE(395)] = 5402,
  [SMALL_STATE(396)] = 5406,
  [SMALL_STATE(397)] = 5410,
  [SMALL_STATE(398)] = 5414,
  [SMALL_STATE(399)] = 5418,
  [SMALL_STATE(400)] = 5422,
  [SMALL_STATE(401)] = 5426,
  [SMALL_STATE(402)] = 5430,
  [SMALL_STATE(403)] = 5434,
  [SMALL_STATE(404)] = 5438,
  [SMALL_STATE(405)] = 5442,
  [SMALL_STATE(406)] = 5446,
  [SMALL_STATE(407)] = 5450,
  [SMALL_STATE(408)] = 5454,
  [SMALL_STATE(409)] = 5458,
  [SMALL_STATE(410)] = 5462,
  [SMALL_STATE(411)] = 5466,
  [SMALL_STATE(412)] = 5470,
  [SMALL_STATE(413)] = 5474,
  [SMALL_STATE(414)] = 5478,
  [SMALL_STATE(415)] = 5482,
  [SMALL_STATE(416)] = 5486,
  [SMALL_STATE(417)] = 5490,
  [SMALL_STATE(418)] = 5494,
  [SMALL_STATE(419)] = 5498,
  [SMALL_STATE(420)] = 5502,
  [SMALL_STATE(421)] = 5506,
  [SMALL_STATE(422)] = 5510,
  [SMALL_STATE(423)] = 5514,
  [SMALL_STATE(424)] = 5518,
  [SMALL_STATE(425)] = 5522,
  [SMALL_STATE(426)] = 5526,
  [SMALL_STATE(427)] = 5530,
  [SMALL_STATE(428)] = 5534,
  [SMALL_STATE(429)] = 5538,
  [SMALL_STATE(430)] = 5542,
  [SMALL_STATE(431)] = 5546,
  [SMALL_STATE(432)] = 5550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(89),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(245),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(305),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(219),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(227),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(262),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 16),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 14),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 17),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 17),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 17),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 22),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 28),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 21),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_dxy_attr, 3, .production_id = 18),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_widget, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_light, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_parameter, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 13),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_output, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 13),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 12),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 21),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 22),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 11),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 9),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 22),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 21),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 9),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 20),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 19),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 14),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 11),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [935] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 17),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
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
