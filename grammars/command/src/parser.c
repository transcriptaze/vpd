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
#define STATE_COUNT 427
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 197
#define ALIAS_COUNT 1
#define TOKEN_COUNT 103
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 28

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
  sym__absolute_attr = 126,
  sym__absolute_x_attr = 127,
  sym__absolute_y_attr = 128,
  sym__absolute_xy_attr = 129,
  sym__relative_attr = 130,
  sym__relative_xy_attr = 131,
  sym__geometry_x_attr = 132,
  sym__geometry_y_attr = 133,
  sym__geometry_xy_attr = 134,
  sym__guide_attr = 135,
  sym__guide_xy_attr = 136,
  sym__component_x_attr = 137,
  sym__component_y_attr = 138,
  sym__component_xy_attr = 139,
  sym_delete = 140,
  sym__guide_id = 141,
  sym__input_id = 142,
  sym__output_id = 143,
  sym__parameter_id = 144,
  sym__light_id = 145,
  sym__widget_id = 146,
  sym__label_id = 147,
  sym__decoration_id = 148,
  sym__font_id = 149,
  sym__component_id = 150,
  sym_load = 151,
  sym_unload = 152,
  sym_save = 153,
  sym_export = 154,
  sym__module_export = 155,
  sym_list = 156,
  sym_project = 157,
  sym_script = 158,
  sym__input = 159,
  sym__output = 160,
  sym__parameter = 161,
  sym__light = 162,
  sym__widget = 163,
  sym_label = 164,
  sym_font = 165,
  sym__align = 166,
  sym_halign = 167,
  sym_valign = 168,
  sym_colour = 169,
  sym_decoration = 170,
  sym__scale = 171,
  sym_stretch = 172,
  sym_origin = 173,
  sym__originx = 174,
  sym__originy = 175,
  sym_background = 176,
  sym_panel = 177,
  sym_svg = 178,
  sym_name = 179,
  sym_part = 180,
  sym_guide = 181,
  sym_identifier = 182,
  sym_vertical = 183,
  sym_horizontal = 184,
  sym_geometry = 185,
  sym_offset = 186,
  sym__offset = 187,
  sym_guideline = 188,
  sym__string = 189,
  sym_absolute = 190,
  sym_relative = 191,
  sym__decorate = 192,
  sym__relative = 193,
  sym_x = 194,
  sym_y = 195,
  aux_sym_command_repeat1 = 196,
  alias_sym_dy = 197,
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
    [2] = sym_x,
  },
  [11] = {
    [1] = sym__new_light,
  },
  [12] = {
    [1] = sym_absolute,
  },
  [13] = {
    [1] = aux_sym__string_token1,
  },
  [14] = {
    [3] = sym_y,
  },
  [15] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [16] = {
    [0] = sym_x,
    [2] = sym_y,
  },
  [17] = {
    [2] = alias_sym_dy,
  },
  [18] = {
    [2] = sym__new_output,
  },
  [19] = {
    [2] = sym__new_parameter,
  },
  [20] = {
    [2] = sym__new_light,
  },
  [21] = {
    [2] = sym__new_widget,
  },
  [22] = {
    [1] = sym__new_input,
  },
  [23] = {
    [1] = sym__new_output,
  },
  [24] = {
    [1] = sym__new_parameter,
  },
  [25] = {
    [1] = sym__new_widget,
  },
  [26] = {
    [1] = sym_label,
  },
  [27] = {
    [2] = sym_x,
    [4] = sym_y,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__offset_attr, 3,
    sym__offset_attr,
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
  [45] = 8,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
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
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 19,
  [67] = 67,
  [68] = 68,
  [69] = 12,
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
  [82] = 21,
  [83] = 83,
  [84] = 19,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 13,
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
  [107] = 99,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 106,
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
  [191] = 190,
  [192] = 192,
  [193] = 190,
  [194] = 194,
  [195] = 105,
  [196] = 196,
  [197] = 27,
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
  [209] = 202,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 202,
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
  [230] = 8,
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
  [242] = 8,
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
  [279] = 27,
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
  [327] = 21,
  [328] = 328,
  [329] = 83,
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
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
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
  [379] = 19,
  [380] = 380,
  [381] = 83,
  [382] = 21,
  [383] = 383,
  [384] = 384,
  [385] = 12,
  [386] = 13,
  [387] = 13,
  [388] = 388,
  [389] = 12,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 383,
  [400] = 388,
  [401] = 378,
  [402] = 402,
  [403] = 334,
  [404] = 332,
  [405] = 328,
  [406] = 388,
  [407] = 378,
  [408] = 408,
  [409] = 328,
  [410] = 378,
  [411] = 328,
  [412] = 412,
  [413] = 330,
  [414] = 308,
  [415] = 402,
  [416] = 396,
  [417] = 384,
  [418] = 418,
  [419] = 330,
  [420] = 308,
  [421] = 384,
  [422] = 330,
  [423] = 384,
  [424] = 341,
  [425] = 341,
  [426] = 341,
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
  [8] = {.lex_state = 369},
  [9] = {.lex_state = 371},
  [10] = {.lex_state = 371},
  [11] = {.lex_state = 371},
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
  [23] = {.lex_state = 371},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 371},
  [28] = {.lex_state = 371},
  [29] = {.lex_state = 372},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 67},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 370},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 371},
  [51] = {.lex_state = 371},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 370},
  [60] = {.lex_state = 372},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 371},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 371},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 373},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 370},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 371},
  [82] = {.lex_state = 370},
  [83] = {.lex_state = 370},
  [84] = {.lex_state = 370},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 373},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 370},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 67},
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
  [114] = {.lex_state = 39},
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
  [190] = {.lex_state = 371},
  [191] = {.lex_state = 371},
  [192] = {.lex_state = 371},
  [193] = {.lex_state = 371},
  [194] = {.lex_state = 40},
  [195] = {.lex_state = 19},
  [196] = {.lex_state = 40},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 371},
  [200] = {.lex_state = 13},
  [201] = {.lex_state = 371},
  [202] = {.lex_state = 18},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 371},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 371},
  [207] = {.lex_state = 372},
  [208] = {.lex_state = 371},
  [209] = {.lex_state = 18},
  [210] = {.lex_state = 371},
  [211] = {.lex_state = 371},
  [212] = {.lex_state = 371},
  [213] = {.lex_state = 18},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 371},
  [217] = {.lex_state = 369},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 369},
  [221] = {.lex_state = 369},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 369},
  [224] = {.lex_state = 369},
  [225] = {.lex_state = 369},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 372},
  [230] = {.lex_state = 14},
  [231] = {.lex_state = 14},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 14},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 14},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 369},
  [241] = {.lex_state = 369},
  [242] = {.lex_state = 371},
  [243] = {.lex_state = 14},
  [244] = {.lex_state = 14},
  [245] = {.lex_state = 14},
  [246] = {.lex_state = 14},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 14},
  [249] = {.lex_state = 14},
  [250] = {.lex_state = 14},
  [251] = {.lex_state = 14},
  [252] = {.lex_state = 14},
  [253] = {.lex_state = 369},
  [254] = {.lex_state = 369},
  [255] = {.lex_state = 369},
  [256] = {.lex_state = 369},
  [257] = {.lex_state = 369},
  [258] = {.lex_state = 369},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 17},
  [262] = {.lex_state = 14},
  [263] = {.lex_state = 14},
  [264] = {.lex_state = 14},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 14},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 369},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 371},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 17},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 14},
  [282] = {.lex_state = 14},
  [283] = {.lex_state = 347},
  [284] = {.lex_state = 14},
  [285] = {.lex_state = 14},
  [286] = {.lex_state = 14},
  [287] = {.lex_state = 17},
  [288] = {.lex_state = 14},
  [289] = {.lex_state = 347},
  [290] = {.lex_state = 372},
  [291] = {.lex_state = 17},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 17},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 14},
  [296] = {.lex_state = 17},
  [297] = {.lex_state = 372},
  [298] = {.lex_state = 372},
  [299] = {.lex_state = 371},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 369},
  [302] = {.lex_state = 372},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 14},
  [305] = {.lex_state = 14},
  [306] = {.lex_state = 582},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
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
  [322] = {.lex_state = 67},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 370},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 67},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 370},
  [342] = {.lex_state = 369},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 14},
  [346] = {.lex_state = 369},
  [347] = {.lex_state = 14},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 372},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 369},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 372},
  [360] = {.lex_state = 371},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 369},
  [365] = {.lex_state = 369},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 14},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 577},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 371},
  [374] = {.lex_state = 371},
  [375] = {.lex_state = 67},
  [376] = {.lex_state = 14},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 19},
  [379] = {.lex_state = 14},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 14},
  [382] = {.lex_state = 14},
  [383] = {.lex_state = 20},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 14},
  [386] = {.lex_state = 14},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 582},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 14},
  [399] = {.lex_state = 20},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 19},
  [402] = {.lex_state = 577},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 370},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 19},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 370},
  [410] = {.lex_state = 19},
  [411] = {.lex_state = 370},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 577},
  [416] = {.lex_state = 582},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 14},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 370},
  [425] = {.lex_state = 370},
  [426] = {.lex_state = 370},
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
    [sym_command] = STATE(391),
    [sym_new] = STATE(25),
    [sym_decorate] = STATE(25),
    [sym_set] = STATE(25),
    [sym_delete] = STATE(25),
    [sym_load] = STATE(25),
    [sym_unload] = STATE(25),
    [sym_save] = STATE(25),
    [sym_export] = STATE(25),
    [sym_list] = STATE(25),
    [aux_sym_command_repeat1] = STATE(25),
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
    STATE(42), 1,
      sym_halign,
    STATE(47), 1,
      sym_valign,
    STATE(54), 1,
      sym__align,
    STATE(100), 1,
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
    STATE(42), 1,
      sym_halign,
    STATE(47), 1,
      sym_valign,
    STATE(52), 1,
      sym__align,
    STATE(156), 1,
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
    STATE(42), 1,
      sym_halign,
    STATE(46), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(178), 1,
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
    STATE(37), 1,
      sym__guide_id,
    STATE(181), 1,
      sym__label_id,
    STATE(198), 1,
      sym__decoration_id,
    STATE(205), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(165), 7,
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
    STATE(42), 1,
      sym_halign,
    STATE(47), 1,
      sym_valign,
    STATE(53), 1,
      sym__align,
    STATE(113), 1,
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
    STATE(42), 1,
      sym_halign,
    STATE(47), 1,
      sym_valign,
    STATE(53), 1,
      sym__align,
    STATE(113), 1,
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
  [307] = 4,
    ACTIONS(85), 1,
      aux_sym_offset_token1,
    STATE(13), 1,
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
  [341] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(42), 1,
      sym_halign,
    STATE(47), 1,
      sym_valign,
    STATE(52), 1,
      sym__align,
    STATE(156), 1,
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
  [385] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(42), 1,
      sym_halign,
    STATE(47), 1,
      sym_valign,
    STATE(49), 1,
      sym__align,
    STATE(111), 1,
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
  [429] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(42), 1,
      sym_halign,
    STATE(46), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(178), 1,
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
      sym_rgb,
    ACTIONS(133), 21,
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
  [807] = 2,
    ACTIONS(139), 1,
      anon_sym_x,
    ACTIONS(137), 21,
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
  [834] = 12,
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
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
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
  [880] = 12,
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
  [926] = 2,
    ACTIONS(179), 2,
      anon_sym_dx,
      sym_width,
    ACTIONS(177), 17,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_set,
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
  [950] = 10,
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
    ACTIONS(181), 1,
      anon_sym_font,
    ACTIONS(183), 1,
      anon_sym_guide,
    STATE(150), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [989] = 10,
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
    STATE(117), 9,
      sym__new_module,
      sym__new_input,
      sym__new_output,
      sym__new_parameter,
      sym__new_light,
      sym__new_widget,
      sym__new_decoration,
      sym_label,
      sym_guide,
  [1028] = 2,
    ACTIONS(205), 1,
      anon_sym_x,
    ACTIONS(203), 16,
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
  [1050] = 2,
    ACTIONS(209), 1,
      anon_sym_x,
    ACTIONS(207), 16,
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
  [1072] = 2,
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
  [1094] = 8,
    ACTIONS(217), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(219), 1,
      anon_sym_vertical,
    ACTIONS(221), 1,
      anon_sym_horizontal,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(161), 1,
      sym_offset,
    STATE(301), 1,
      sym_identifier,
    STATE(95), 4,
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
  [1128] = 2,
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
  [1150] = 2,
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
  [1172] = 10,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(167), 1,
      sym__xy_attr,
    STATE(369), 1,
      sym__guide_attr,
    STATE(372), 1,
      sym__geometry_x_attr,
    STATE(377), 1,
      sym__relative_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(169), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1209] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(243), 1,
      anon_sym_id,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(247), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(124), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1240] = 10,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(174), 1,
      sym__xy_attr,
    STATE(369), 1,
      sym__guide_attr,
    STATE(372), 1,
      sym__geometry_x_attr,
    STATE(377), 1,
      sym__relative_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(169), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1277] = 2,
    ACTIONS(251), 1,
      anon_sym_dx,
    ACTIONS(249), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_dy,
      anon_sym_dxy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1297] = 2,
    ACTIONS(255), 1,
      anon_sym_dx,
    ACTIONS(253), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_dy,
      anon_sym_dxy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1317] = 6,
    ACTIONS(217), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(219), 1,
      anon_sym_vertical,
    ACTIONS(221), 1,
      anon_sym_horizontal,
    STATE(33), 1,
      sym_identifier,
    STATE(102), 4,
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
  [1345] = 3,
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
  [1366] = 2,
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
  [1385] = 2,
    ACTIONS(269), 1,
      sym_rgb,
    ACTIONS(267), 13,
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
  [1404] = 4,
    ACTIONS(271), 1,
      aux_sym_offset_token1,
    STATE(93), 1,
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
  [1427] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(156), 1,
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
  [1450] = 3,
    ACTIONS(261), 1,
      sym_rgb,
    ACTIONS(273), 1,
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
  [1471] = 4,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__scale,
    STATE(115), 1,
      sym_stretch,
    ACTIONS(275), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1494] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(109), 1,
      sym_colour,
    ACTIONS(279), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1517] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(74), 1,
      sym_offset,
    ACTIONS(281), 12,
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
  [1538] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(73), 1,
      sym_offset,
    ACTIONS(283), 12,
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
  [1559] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(113), 1,
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
  [1582] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(111), 1,
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
  [1605] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(178), 1,
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
  [1628] = 3,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_stretch,
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
  [1648] = 3,
    ACTIONS(291), 1,
      anon_sym_timestamp,
    ACTIONS(293), 1,
      anon_sym_gzip,
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
  [1668] = 3,
    ACTIONS(297), 1,
      anon_sym_light2,
    ACTIONS(299), 1,
      anon_sym_dark,
    ACTIONS(295), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1688] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym__x_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(171), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1716] = 4,
    ACTIONS(307), 1,
      aux_sym__input_id_token1,
    STATE(116), 1,
      sym_part,
    ACTIONS(303), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(305), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1738] = 2,
    ACTIONS(311), 1,
      aux_sym__guide_attr_token2,
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
  [1756] = 2,
    ACTIONS(315), 1,
      sym_rgb,
    ACTIONS(313), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1774] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(108), 1,
      sym_offset,
    ACTIONS(317), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1794] = 1,
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
  [1810] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(151), 1,
      sym_offset,
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
  [1830] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym__x_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(171), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1858] = 1,
    ACTIONS(117), 13,
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
  [1874] = 2,
    ACTIONS(325), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(323), 12,
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
  [1892] = 2,
    ACTIONS(329), 1,
      anon_sym_COMMA,
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
  [1909] = 2,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(91), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1926] = 1,
    ACTIONS(331), 12,
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
  [1941] = 1,
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
  [1956] = 2,
    ACTIONS(337), 1,
      anon_sym_timestamp,
    ACTIONS(335), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1973] = 1,
    ACTIONS(339), 12,
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
  [1988] = 1,
    ACTIONS(341), 12,
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
  [2003] = 6,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      aux_sym_relative_token1,
    STATE(308), 1,
      sym_x,
    STATE(309), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(347), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2028] = 1,
    ACTIONS(351), 12,
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
  [2043] = 1,
    ACTIONS(353), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2058] = 2,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(355), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2075] = 2,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(355), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2092] = 6,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_AT,
    ACTIONS(365), 1,
      aux_sym_relative_token1,
    STATE(420), 1,
      sym_x,
    STATE(59), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(347), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2117] = 8,
    ACTIONS(367), 1,
      anon_sym_input2,
    ACTIONS(369), 1,
      anon_sym_output2,
    ACTIONS(371), 1,
      anon_sym_parameter,
    ACTIONS(373), 1,
      anon_sym_light2,
    ACTIONS(375), 1,
      anon_sym_widget2,
    ACTIONS(377), 1,
      anon_sym_scale,
    ACTIONS(379), 1,
      anon_sym_stretch,
    STATE(394), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2146] = 2,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(127), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2163] = 2,
    ACTIONS(381), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(383), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2180] = 2,
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
  [2197] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym__y_attr,
    ACTIONS(247), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(170), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2224] = 1,
    ACTIONS(387), 12,
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
  [2239] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym__y_attr,
    ACTIONS(247), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(170), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2266] = 6,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_AT,
    ACTIONS(393), 1,
      aux_sym_relative_token1,
    STATE(414), 1,
      sym_x,
    STATE(227), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(347), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2291] = 2,
    ACTIONS(397), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(395), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2308] = 2,
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
  [2325] = 2,
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
  [2342] = 6,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      anon_sym_AT,
    ACTIONS(409), 1,
      aux_sym_relative_token1,
    STATE(331), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(347), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2367] = 2,
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
  [2384] = 1,
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
  [2398] = 1,
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
  [2412] = 1,
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
  [2426] = 1,
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
  [2440] = 1,
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
  [2454] = 2,
    ACTIONS(423), 1,
      aux_sym_offset_token1,
    ACTIONS(421), 10,
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
  [2470] = 1,
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
  [2484] = 1,
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
  [2498] = 1,
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
  [2512] = 1,
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
  [2526] = 1,
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
  [2540] = 1,
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
  [2554] = 1,
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
  [2568] = 1,
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
  [2582] = 1,
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
  [2596] = 1,
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
  [2610] = 1,
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
  [2624] = 1,
    ACTIONS(279), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2638] = 1,
    ACTIONS(443), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2652] = 1,
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
  [2666] = 2,
    ACTIONS(435), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(445), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2682] = 1,
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
  [2696] = 1,
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
  [2710] = 1,
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
  [2724] = 1,
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
  [2738] = 1,
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
  [2752] = 1,
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
  [2766] = 1,
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
  [2780] = 1,
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
  [2794] = 1,
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
  [2808] = 1,
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
  [2822] = 1,
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
  [2836] = 1,
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
  [2850] = 1,
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
  [2864] = 1,
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
  [2878] = 1,
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
  [2892] = 1,
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
  [2906] = 1,
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
  [2920] = 5,
    STATE(42), 1,
      sym_halign,
    STATE(47), 1,
      sym_valign,
    STATE(167), 1,
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
  [2942] = 1,
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
  [2956] = 1,
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
  [2970] = 1,
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
  [2984] = 1,
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
  [2998] = 1,
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
  [3012] = 1,
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
  [3026] = 1,
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
  [3040] = 1,
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
  [3054] = 1,
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
  [3068] = 1,
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
  [3082] = 1,
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
  [3096] = 1,
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
  [3110] = 1,
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
  [3124] = 1,
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
  [3138] = 1,
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
  [3152] = 1,
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
  [3166] = 1,
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
  [3180] = 1,
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
  [3194] = 1,
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
  [3208] = 1,
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
  [3222] = 1,
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
  [3236] = 1,
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
  [3250] = 1,
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
  [3264] = 1,
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
  [3278] = 1,
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
  [3292] = 1,
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
  [3306] = 1,
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
  [3320] = 1,
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
  [3334] = 1,
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
  [3348] = 1,
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
  [3362] = 1,
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
  [3376] = 1,
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
  [3390] = 1,
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
  [3404] = 1,
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
  [3418] = 1,
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
  [3432] = 1,
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
  [3446] = 1,
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
  [3460] = 1,
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
  [3474] = 1,
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
  [3488] = 1,
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
  [3502] = 1,
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
  [3516] = 1,
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
  [3530] = 1,
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
  [3544] = 1,
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
  [3558] = 1,
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
  [3572] = 1,
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
  [3586] = 1,
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
  [3600] = 1,
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
  [3614] = 10,
    ACTIONS(569), 1,
      anon_sym_x,
    ACTIONS(571), 1,
      anon_sym_y,
    ACTIONS(573), 1,
      anon_sym_xy,
    ACTIONS(575), 1,
      anon_sym_text,
    ACTIONS(577), 1,
      anon_sym_font,
    ACTIONS(579), 1,
      anon_sym_size,
    ACTIONS(581), 1,
      anon_sym_halign,
    ACTIONS(583), 1,
      anon_sym_valign,
    ACTIONS(585), 1,
      anon_sym_align,
    ACTIONS(587), 2,
      anon_sym_colour,
      anon_sym_color,
  [3646] = 1,
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
  [3660] = 1,
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
  [3674] = 1,
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
  [3688] = 1,
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
  [3702] = 1,
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
  [3716] = 1,
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
  [3730] = 1,
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
  [3744] = 1,
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
  [3758] = 6,
    ACTIONS(367), 1,
      anon_sym_input2,
    ACTIONS(369), 1,
      anon_sym_output2,
    ACTIONS(371), 1,
      anon_sym_parameter,
    ACTIONS(373), 1,
      anon_sym_light2,
    ACTIONS(375), 1,
      anon_sym_widget2,
    STATE(406), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3781] = 6,
    ACTIONS(367), 1,
      anon_sym_input2,
    ACTIONS(369), 1,
      anon_sym_output2,
    ACTIONS(371), 1,
      anon_sym_parameter,
    ACTIONS(373), 1,
      anon_sym_light2,
    ACTIONS(375), 1,
      anon_sym_widget2,
    STATE(400), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3804] = 6,
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
    STATE(366), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [3827] = 6,
    ACTIONS(367), 1,
      anon_sym_input2,
    ACTIONS(369), 1,
      anon_sym_output2,
    ACTIONS(371), 1,
      anon_sym_parameter,
    ACTIONS(373), 1,
      anon_sym_light2,
    ACTIONS(375), 1,
      anon_sym_widget2,
    STATE(388), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3850] = 6,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(605), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_origin,
    ACTIONS(611), 1,
      aux_sym_origin_token1,
    STATE(155), 1,
      sym_offset,
    ACTIONS(607), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3872] = 2,
    ACTIONS(433), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(613), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3885] = 6,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(615), 1,
      anon_sym_AT,
    ACTIONS(617), 1,
      anon_sym_origin,
    ACTIONS(619), 1,
      aux_sym_origin_token1,
    STATE(158), 1,
      sym_offset,
    ACTIONS(607), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3906] = 2,
    ACTIONS(177), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(179), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3919] = 5,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_dx,
    ACTIONS(625), 1,
      anon_sym_dy,
    ACTIONS(627), 1,
      anon_sym_dxy,
    STATE(138), 2,
      sym__scale,
      sym_stretch,
  [3936] = 6,
    ACTIONS(629), 1,
      anon_sym_input2,
    ACTIONS(631), 1,
      anon_sym_output2,
    ACTIONS(633), 1,
      anon_sym_parameter,
    ACTIONS(635), 1,
      anon_sym_light2,
    ACTIONS(637), 1,
      anon_sym_widget2,
    ACTIONS(639), 1,
      anon_sym_label,
  [3955] = 5,
    ACTIONS(641), 1,
      aux_sym__input_id_token1,
    ACTIONS(643), 1,
      anon_sym_none,
    ACTIONS(645), 1,
      sym_rgb,
    ACTIONS(647), 1,
      sym_rgba,
    STATE(121), 1,
      sym_name,
  [3971] = 5,
    ACTIONS(649), 1,
      anon_sym_input2,
    ACTIONS(651), 1,
      anon_sym_output2,
    ACTIONS(653), 1,
      anon_sym_parameter,
    ACTIONS(655), 1,
      anon_sym_light2,
    ACTIONS(657), 1,
      anon_sym_widget2,
  [3987] = 2,
    STATE(381), 1,
      sym_y,
    ACTIONS(659), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3997] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(661), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4007] = 5,
    ACTIONS(663), 1,
      anon_sym_input2,
    ACTIONS(665), 1,
      anon_sym_output2,
    ACTIONS(667), 1,
      anon_sym_parameter,
    ACTIONS(669), 1,
      anon_sym_light2,
    ACTIONS(671), 1,
      anon_sym_widget2,
  [4023] = 5,
    ACTIONS(673), 1,
      anon_sym_name,
    ACTIONS(675), 1,
      anon_sym_x,
    ACTIONS(677), 1,
      anon_sym_y,
    ACTIONS(679), 1,
      anon_sym_xy,
    ACTIONS(681), 1,
      anon_sym_part,
  [4039] = 2,
    STATE(61), 1,
      sym_valign,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4049] = 5,
    ACTIONS(683), 1,
      anon_sym_AT,
    ACTIONS(685), 1,
      aux_sym__originx_token1,
    ACTIONS(687), 1,
      aux_sym__originy_token1,
    STATE(361), 1,
      sym__originy,
    STATE(362), 1,
      sym__originx,
  [4065] = 2,
    STATE(61), 1,
      sym_halign,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4075] = 2,
    STATE(83), 1,
      sym_y,
    ACTIONS(689), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4085] = 5,
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
  [4101] = 2,
    STATE(167), 1,
      sym_valign,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4111] = 2,
    STATE(167), 1,
      sym_halign,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4121] = 2,
    STATE(329), 1,
      sym_y,
    ACTIONS(701), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4131] = 4,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    ACTIONS(705), 1,
      anon_sym_SQUOTE,
    ACTIONS(707), 1,
      aux_sym__string_token1,
    STATE(167), 1,
      sym__string,
  [4144] = 4,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    ACTIONS(711), 1,
      anon_sym_SQUOTE,
    ACTIONS(713), 1,
      aux_sym__string_token1,
    STATE(92), 1,
      sym__string,
  [4157] = 2,
    STATE(172), 1,
      sym__geometry_y_attr,
    ACTIONS(715), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4166] = 4,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    STATE(392), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4179] = 3,
    ACTIONS(721), 1,
      anon_sym_module2,
    ACTIONS(723), 1,
      anon_sym_panel,
    STATE(179), 2,
      sym__module_export,
      sym_panel,
  [4190] = 3,
    ACTIONS(725), 1,
      anon_sym_project,
    ACTIONS(727), 1,
      anon_sym_script,
    STATE(187), 2,
      sym_project,
      sym_script,
  [4201] = 4,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4214] = 4,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4227] = 4,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    ACTIONS(735), 1,
      aux_sym__offset_attr_token1,
    STATE(356), 1,
      sym__offset_xy_attr,
    STATE(371), 1,
      sym__offset_attr,
  [4240] = 4,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4253] = 4,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4266] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(741), 1,
      aux_sym_origin_token1,
    STATE(101), 1,
      sym_offset,
  [4276] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(259), 1,
      sym_name,
    STATE(316), 1,
      sym__component_y_attr,
  [4286] = 3,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(48), 1,
      sym_name,
    STATE(149), 1,
      sym_decoration,
  [4296] = 3,
    ACTIONS(747), 1,
      anon_sym_font,
    ACTIONS(749), 1,
      anon_sym_project,
    ACTIONS(751), 1,
      anon_sym_script,
  [4306] = 1,
    ACTIONS(753), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [4312] = 3,
    ACTIONS(81), 1,
      aux_sym__input_id_token1,
    ACTIONS(755), 1,
      aux_sym_offset_token1,
    STATE(386), 1,
      sym_offset,
  [4322] = 3,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(48), 1,
      sym_name,
    STATE(175), 1,
      sym_decoration,
  [4332] = 3,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(141), 1,
      sym__new_component,
  [4342] = 3,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(140), 1,
      sym__new_component,
  [4352] = 3,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(160), 1,
      sym__new_component,
  [4362] = 3,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(96), 1,
      sym__new_component,
  [4372] = 3,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(97), 1,
      sym__new_component,
  [4382] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(167), 1,
      sym_colour,
  [4392] = 3,
    ACTIONS(735), 1,
      aux_sym__offset_attr_token1,
    STATE(154), 1,
      sym__offset_xy_attr,
    STATE(371), 1,
      sym__offset_attr,
  [4402] = 3,
    ACTIONS(759), 1,
      anon_sym_name,
    ACTIONS(761), 1,
      anon_sym_height,
    ACTIONS(763), 1,
      anon_sym_width,
  [4412] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(765), 1,
      aux_sym_origin_token1,
    STATE(104), 1,
      sym_offset,
  [4422] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      sym_offset,
  [4432] = 3,
    ACTIONS(81), 1,
      anon_sym_with,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(387), 1,
      sym_offset,
  [4442] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(259), 1,
      sym_name,
    STATE(317), 1,
      sym__component_y_attr,
  [4452] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(259), 1,
      sym_name,
    STATE(318), 1,
      sym__component_y_attr,
  [4462] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(259), 1,
      sym_name,
    STATE(319), 1,
      sym__component_y_attr,
  [4472] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(259), 1,
      sym_name,
    STATE(320), 1,
      sym__component_y_attr,
  [4482] = 3,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      aux_sym__guide_id_token1,
    STATE(282), 1,
      sym__component_id,
  [4492] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(222), 1,
      sym_name,
    STATE(321), 1,
      sym__component_xy_attr,
  [4502] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(222), 1,
      sym_name,
    STATE(323), 1,
      sym__component_xy_attr,
  [4512] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(222), 1,
      sym_name,
    STATE(324), 1,
      sym__component_xy_attr,
  [4522] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(222), 1,
      sym_name,
    STATE(325), 1,
      sym__component_xy_attr,
  [4532] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(222), 1,
      sym_name,
    STATE(326), 1,
      sym__component_xy_attr,
  [4542] = 3,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    STATE(335), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4552] = 3,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    STATE(336), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4562] = 3,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    STATE(337), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4572] = 3,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    STATE(338), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4582] = 3,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    STATE(339), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4592] = 3,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    STATE(340), 1,
      sym__relative,
    STATE(408), 1,
      sym__offset,
  [4602] = 3,
    ACTIONS(735), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      sym__offset_attr,
  [4612] = 3,
    ACTIONS(775), 1,
      aux_sym__label_id_token1,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    ACTIONS(779), 1,
      anon_sym_SQUOTE,
  [4622] = 3,
    ACTIONS(735), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      sym__offset_attr,
  [4632] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(261), 1,
      sym_name,
    STATE(311), 1,
      sym__component_x_attr,
  [4642] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(261), 1,
      sym_name,
    STATE(312), 1,
      sym__component_x_attr,
  [4652] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(261), 1,
      sym_name,
    STATE(313), 1,
      sym__component_x_attr,
  [4662] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(261), 1,
      sym_name,
    STATE(314), 1,
      sym__component_x_attr,
  [4672] = 3,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
    STATE(261), 1,
      sym_name,
    STATE(315), 1,
      sym__component_x_attr,
  [4682] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(270), 1,
      sym_name,
  [4689] = 2,
    ACTIONS(719), 1,
      aux_sym_offset_token1,
    STATE(343), 1,
      sym__offset,
  [4696] = 2,
    ACTIONS(783), 1,
      anon_sym_svg,
    STATE(145), 1,
      sym_svg,
  [4703] = 2,
    ACTIONS(785), 1,
      sym_height,
    ACTIONS(787), 1,
      sym_width,
  [4710] = 2,
    ACTIONS(377), 1,
      anon_sym_scale,
    ACTIONS(379), 1,
      anon_sym_stretch,
  [4717] = 1,
    ACTIONS(789), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4722] = 2,
    ACTIONS(181), 1,
      anon_sym_font,
    STATE(183), 1,
      sym__font_id,
  [4729] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
  [4736] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(224), 1,
      sym_name,
  [4743] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(221), 1,
      sym_name,
  [4750] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_name,
  [4757] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(220), 1,
      sym_name,
  [4764] = 1,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [4769] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(177), 1,
      sym_name,
  [4776] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
  [4783] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(39), 1,
      sym_name,
  [4790] = 2,
    ACTIONS(791), 1,
      aux_sym__guide_attr_token1,
    STATE(189), 1,
      sym_identifier,
  [4797] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(174), 1,
      sym_name,
  [4804] = 2,
    ACTIONS(793), 1,
      aux_sym__input_id_token1,
    STATE(174), 1,
      sym_part,
  [4811] = 2,
    ACTIONS(795), 1,
      aux_sym__input_id_token1,
    STATE(167), 1,
      sym_font,
  [4818] = 2,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    STATE(173), 1,
      sym__relative_attr,
  [4825] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(254), 1,
      sym_name,
  [4832] = 2,
    ACTIONS(797), 1,
      aux_sym__guide_attr_token1,
    STATE(166), 1,
      sym__guide_attr,
  [4839] = 2,
    ACTIONS(799), 1,
      aux_sym__absolute_attr_token1,
    STATE(357), 1,
      sym__absolute_x_attr,
  [4846] = 2,
    ACTIONS(735), 1,
      aux_sym__offset_attr_token1,
    STATE(164), 1,
      sym__offset_attr,
  [4853] = 2,
    ACTIONS(801), 1,
      sym_rgb,
    ACTIONS(803), 1,
      sym_rgba,
  [4860] = 2,
    ACTIONS(735), 1,
      aux_sym__offset_attr_token1,
    STATE(159), 1,
      sym__offset_attr,
  [4867] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(255), 1,
      sym_name,
  [4874] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(256), 1,
      sym_name,
  [4881] = 2,
    ACTIONS(735), 1,
      aux_sym__offset_attr_token1,
    STATE(77), 1,
      sym__offset_attr,
  [4888] = 2,
    ACTIONS(685), 1,
      aux_sym__originx_token1,
    STATE(98), 1,
      sym__originx,
  [4895] = 2,
    ACTIONS(687), 1,
      aux_sym__originy_token1,
    STATE(98), 1,
      sym__originy,
  [4902] = 2,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      sym_width,
  [4909] = 1,
    ACTIONS(809), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [4914] = 2,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(161), 1,
      sym_offset,
  [4921] = 2,
    ACTIONS(811), 1,
      aux_sym__absolute_attr_token1,
    STATE(118), 1,
      sym__absolute_y_attr,
  [4928] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(258), 1,
      sym_name,
  [4935] = 2,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
    STATE(257), 1,
      sym_name,
  [4942] = 1,
    ACTIONS(813), 1,
      aux_sym__input_id_token1,
  [4946] = 1,
    ACTIONS(815), 1,
      aux_sym__label_id_token3,
  [4950] = 1,
    ACTIONS(817), 1,
      anon_sym_SQUOTE,
  [4954] = 1,
    ACTIONS(819), 1,
      anon_sym_COMMA,
  [4958] = 1,
    ACTIONS(821), 1,
      anon_sym_with,
  [4962] = 1,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
  [4966] = 1,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [4970] = 1,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [4974] = 1,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [4978] = 1,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
  [4982] = 1,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [4986] = 1,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [4990] = 1,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [4994] = 1,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [4998] = 1,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [5002] = 1,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [5006] = 1,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
  [5010] = 1,
    ACTIONS(845), 1,
      aux_sym__scale_token1,
  [5014] = 1,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
  [5018] = 1,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
  [5022] = 1,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
  [5026] = 1,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
  [5030] = 1,
    ACTIONS(125), 1,
      anon_sym_with,
  [5034] = 1,
    ACTIONS(855), 1,
      aux_sym_absolute_token1,
  [5038] = 1,
    ACTIONS(381), 1,
      anon_sym_with,
  [5042] = 1,
    ACTIONS(857), 1,
      anon_sym_COMMA,
  [5046] = 1,
    ACTIONS(859), 1,
      anon_sym_COMMA,
  [5050] = 1,
    ACTIONS(861), 1,
      anon_sym_SQUOTE,
  [5054] = 1,
    ACTIONS(863), 1,
      aux_sym__scale_token1,
  [5058] = 1,
    ACTIONS(861), 1,
      anon_sym_DQUOTE,
  [5062] = 1,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
  [5066] = 1,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
  [5070] = 1,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
  [5074] = 1,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
  [5078] = 1,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
  [5082] = 1,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
  [5086] = 1,
    ACTIONS(877), 1,
      aux_sym_absolute_token1,
  [5090] = 1,
    ACTIONS(879), 1,
      aux_sym_origin_token1,
  [5094] = 1,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
  [5098] = 1,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
  [5102] = 1,
    ACTIONS(885), 1,
      aux_sym__input_id_token1,
  [5106] = 1,
    ACTIONS(887), 1,
      aux_sym_origin_token1,
  [5110] = 1,
    ACTIONS(889), 1,
      aux_sym__input_id_token1,
  [5114] = 1,
    ACTIONS(379), 1,
      anon_sym_stretch,
  [5118] = 1,
    ACTIONS(891), 1,
      sym_rgb,
  [5122] = 1,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
  [5126] = 1,
    ACTIONS(895), 1,
      anon_sym_COMMA,
  [5130] = 1,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
  [5134] = 1,
    ACTIONS(891), 1,
      sym_rgba,
  [5138] = 1,
    ACTIONS(899), 1,
      sym_fontsize,
  [5142] = 1,
    ACTIONS(901), 1,
      anon_sym_COMMA,
  [5146] = 1,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
  [5150] = 1,
    ACTIONS(905), 1,
      anon_sym_COMMA,
  [5154] = 1,
    ACTIONS(907), 1,
      anon_sym_COMMA,
  [5158] = 1,
    ACTIONS(909), 1,
      aux_sym__absolute_attr_token1,
  [5162] = 1,
    ACTIONS(911), 1,
      sym_width,
  [5166] = 1,
    ACTIONS(913), 1,
      anon_sym_COMMA,
  [5170] = 1,
    ACTIONS(915), 1,
      anon_sym_COMMA,
  [5174] = 1,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
  [5178] = 1,
    ACTIONS(919), 1,
      aux_sym_origin_token1,
  [5182] = 1,
    ACTIONS(921), 1,
      aux_sym_origin_token1,
  [5186] = 1,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
  [5190] = 1,
    ACTIONS(925), 1,
      aux_sym__input_id_token1,
  [5194] = 1,
    ACTIONS(927), 1,
      anon_sym_gzip,
  [5198] = 1,
    ACTIONS(929), 1,
      anon_sym_COMMA,
  [5202] = 1,
    ACTIONS(931), 1,
      aux_sym__label_id_token2,
  [5206] = 1,
    ACTIONS(933), 1,
      anon_sym_COMMA,
  [5210] = 1,
    ACTIONS(935), 1,
      anon_sym_COMMA,
  [5214] = 1,
    ACTIONS(937), 1,
      sym_width,
  [5218] = 1,
    ACTIONS(937), 1,
      sym_height,
  [5222] = 1,
    ACTIONS(939), 1,
      aux_sym__scale_token1,
  [5226] = 1,
    ACTIONS(941), 1,
      aux_sym__input_id_token1,
  [5230] = 1,
    ACTIONS(943), 1,
      anon_sym_COMMA,
  [5234] = 1,
    ACTIONS(945), 1,
      aux_sym_relative_token1,
  [5238] = 1,
    ACTIONS(117), 1,
      aux_sym__input_id_token1,
  [5242] = 1,
    ACTIONS(947), 1,
      anon_sym_COMMA,
  [5246] = 1,
    ACTIONS(381), 1,
      aux_sym__input_id_token1,
  [5250] = 1,
    ACTIONS(125), 1,
      aux_sym__input_id_token1,
  [5254] = 1,
    ACTIONS(949), 1,
      aux_sym__guide_id_token1,
  [5258] = 1,
    ACTIONS(951), 1,
      anon_sym_COMMA,
  [5262] = 1,
    ACTIONS(89), 1,
      aux_sym__input_id_token1,
  [5266] = 1,
    ACTIONS(93), 1,
      aux_sym__input_id_token1,
  [5270] = 1,
    ACTIONS(93), 1,
      anon_sym_with,
  [5274] = 1,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
  [5278] = 1,
    ACTIONS(89), 1,
      anon_sym_with,
  [5282] = 1,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
  [5286] = 1,
    ACTIONS(957), 1,
      ts_builtin_sym_end,
  [5290] = 1,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [5294] = 1,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
  [5298] = 1,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
  [5302] = 1,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
  [5306] = 1,
    ACTIONS(967), 1,
      aux_sym__label_id_token3,
  [5310] = 1,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
  [5314] = 1,
    ACTIONS(971), 1,
      aux_sym__input_id_token1,
  [5318] = 1,
    ACTIONS(973), 1,
      aux_sym__guide_id_token1,
  [5322] = 1,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [5326] = 1,
    ACTIONS(977), 1,
      aux_sym_relative_token1,
  [5330] = 1,
    ACTIONS(979), 1,
      aux_sym__label_id_token2,
  [5334] = 1,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
  [5338] = 1,
    ACTIONS(981), 1,
      anon_sym_SQUOTE,
  [5342] = 1,
    ACTIONS(983), 1,
      aux_sym_absolute_token1,
  [5346] = 1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [5350] = 1,
    ACTIONS(987), 1,
      aux_sym_relative_token1,
  [5354] = 1,
    ACTIONS(989), 1,
      anon_sym_COMMA,
  [5358] = 1,
    ACTIONS(991), 1,
      aux_sym_absolute_token1,
  [5362] = 1,
    ACTIONS(993), 1,
      aux_sym_relative_token1,
  [5366] = 1,
    ACTIONS(995), 1,
      aux_sym_absolute_token1,
  [5370] = 1,
    ACTIONS(927), 1,
      anon_sym_timestamp,
  [5374] = 1,
    ACTIONS(997), 1,
      anon_sym_COMMA,
  [5378] = 1,
    ACTIONS(999), 1,
      anon_sym_COMMA,
  [5382] = 1,
    ACTIONS(1001), 1,
      aux_sym__label_id_token2,
  [5386] = 1,
    ACTIONS(1003), 1,
      aux_sym__label_id_token3,
  [5390] = 1,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
  [5394] = 1,
    ACTIONS(1007), 1,
      aux_sym__input_id_token1,
  [5398] = 1,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
  [5402] = 1,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
  [5406] = 1,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
  [5410] = 1,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
  [5414] = 1,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
  [5418] = 1,
    ACTIONS(1019), 1,
      aux_sym_absolute_token1,
  [5422] = 1,
    ACTIONS(1021), 1,
      aux_sym_absolute_token1,
  [5426] = 1,
    ACTIONS(1023), 1,
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
  [SMALL_STATE(9)] = 341,
  [SMALL_STATE(10)] = 385,
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
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 807,
  [SMALL_STATE(25)] = 834,
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 926,
  [SMALL_STATE(28)] = 950,
  [SMALL_STATE(29)] = 989,
  [SMALL_STATE(30)] = 1028,
  [SMALL_STATE(31)] = 1050,
  [SMALL_STATE(32)] = 1072,
  [SMALL_STATE(33)] = 1094,
  [SMALL_STATE(34)] = 1128,
  [SMALL_STATE(35)] = 1150,
  [SMALL_STATE(36)] = 1172,
  [SMALL_STATE(37)] = 1209,
  [SMALL_STATE(38)] = 1240,
  [SMALL_STATE(39)] = 1277,
  [SMALL_STATE(40)] = 1297,
  [SMALL_STATE(41)] = 1317,
  [SMALL_STATE(42)] = 1345,
  [SMALL_STATE(43)] = 1366,
  [SMALL_STATE(44)] = 1385,
  [SMALL_STATE(45)] = 1404,
  [SMALL_STATE(46)] = 1427,
  [SMALL_STATE(47)] = 1450,
  [SMALL_STATE(48)] = 1471,
  [SMALL_STATE(49)] = 1494,
  [SMALL_STATE(50)] = 1517,
  [SMALL_STATE(51)] = 1538,
  [SMALL_STATE(52)] = 1559,
  [SMALL_STATE(53)] = 1582,
  [SMALL_STATE(54)] = 1605,
  [SMALL_STATE(55)] = 1628,
  [SMALL_STATE(56)] = 1648,
  [SMALL_STATE(57)] = 1668,
  [SMALL_STATE(58)] = 1688,
  [SMALL_STATE(59)] = 1716,
  [SMALL_STATE(60)] = 1738,
  [SMALL_STATE(61)] = 1756,
  [SMALL_STATE(62)] = 1774,
  [SMALL_STATE(63)] = 1794,
  [SMALL_STATE(64)] = 1810,
  [SMALL_STATE(65)] = 1830,
  [SMALL_STATE(66)] = 1858,
  [SMALL_STATE(67)] = 1874,
  [SMALL_STATE(68)] = 1892,
  [SMALL_STATE(69)] = 1909,
  [SMALL_STATE(70)] = 1926,
  [SMALL_STATE(71)] = 1941,
  [SMALL_STATE(72)] = 1956,
  [SMALL_STATE(73)] = 1973,
  [SMALL_STATE(74)] = 1988,
  [SMALL_STATE(75)] = 2003,
  [SMALL_STATE(76)] = 2028,
  [SMALL_STATE(77)] = 2043,
  [SMALL_STATE(78)] = 2058,
  [SMALL_STATE(79)] = 2075,
  [SMALL_STATE(80)] = 2092,
  [SMALL_STATE(81)] = 2117,
  [SMALL_STATE(82)] = 2146,
  [SMALL_STATE(83)] = 2163,
  [SMALL_STATE(84)] = 2180,
  [SMALL_STATE(85)] = 2197,
  [SMALL_STATE(86)] = 2224,
  [SMALL_STATE(87)] = 2239,
  [SMALL_STATE(88)] = 2266,
  [SMALL_STATE(89)] = 2291,
  [SMALL_STATE(90)] = 2308,
  [SMALL_STATE(91)] = 2325,
  [SMALL_STATE(92)] = 2342,
  [SMALL_STATE(93)] = 2367,
  [SMALL_STATE(94)] = 2384,
  [SMALL_STATE(95)] = 2398,
  [SMALL_STATE(96)] = 2412,
  [SMALL_STATE(97)] = 2426,
  [SMALL_STATE(98)] = 2440,
  [SMALL_STATE(99)] = 2454,
  [SMALL_STATE(100)] = 2470,
  [SMALL_STATE(101)] = 2484,
  [SMALL_STATE(102)] = 2498,
  [SMALL_STATE(103)] = 2512,
  [SMALL_STATE(104)] = 2526,
  [SMALL_STATE(105)] = 2540,
  [SMALL_STATE(106)] = 2554,
  [SMALL_STATE(107)] = 2568,
  [SMALL_STATE(108)] = 2582,
  [SMALL_STATE(109)] = 2596,
  [SMALL_STATE(110)] = 2610,
  [SMALL_STATE(111)] = 2624,
  [SMALL_STATE(112)] = 2638,
  [SMALL_STATE(113)] = 2652,
  [SMALL_STATE(114)] = 2666,
  [SMALL_STATE(115)] = 2682,
  [SMALL_STATE(116)] = 2696,
  [SMALL_STATE(117)] = 2710,
  [SMALL_STATE(118)] = 2724,
  [SMALL_STATE(119)] = 2738,
  [SMALL_STATE(120)] = 2752,
  [SMALL_STATE(121)] = 2766,
  [SMALL_STATE(122)] = 2780,
  [SMALL_STATE(123)] = 2794,
  [SMALL_STATE(124)] = 2808,
  [SMALL_STATE(125)] = 2822,
  [SMALL_STATE(126)] = 2836,
  [SMALL_STATE(127)] = 2850,
  [SMALL_STATE(128)] = 2864,
  [SMALL_STATE(129)] = 2878,
  [SMALL_STATE(130)] = 2892,
  [SMALL_STATE(131)] = 2906,
  [SMALL_STATE(132)] = 2920,
  [SMALL_STATE(133)] = 2942,
  [SMALL_STATE(134)] = 2956,
  [SMALL_STATE(135)] = 2970,
  [SMALL_STATE(136)] = 2984,
  [SMALL_STATE(137)] = 2998,
  [SMALL_STATE(138)] = 3012,
  [SMALL_STATE(139)] = 3026,
  [SMALL_STATE(140)] = 3040,
  [SMALL_STATE(141)] = 3054,
  [SMALL_STATE(142)] = 3068,
  [SMALL_STATE(143)] = 3082,
  [SMALL_STATE(144)] = 3096,
  [SMALL_STATE(145)] = 3110,
  [SMALL_STATE(146)] = 3124,
  [SMALL_STATE(147)] = 3138,
  [SMALL_STATE(148)] = 3152,
  [SMALL_STATE(149)] = 3166,
  [SMALL_STATE(150)] = 3180,
  [SMALL_STATE(151)] = 3194,
  [SMALL_STATE(152)] = 3208,
  [SMALL_STATE(153)] = 3222,
  [SMALL_STATE(154)] = 3236,
  [SMALL_STATE(155)] = 3250,
  [SMALL_STATE(156)] = 3264,
  [SMALL_STATE(157)] = 3278,
  [SMALL_STATE(158)] = 3292,
  [SMALL_STATE(159)] = 3306,
  [SMALL_STATE(160)] = 3320,
  [SMALL_STATE(161)] = 3334,
  [SMALL_STATE(162)] = 3348,
  [SMALL_STATE(163)] = 3362,
  [SMALL_STATE(164)] = 3376,
  [SMALL_STATE(165)] = 3390,
  [SMALL_STATE(166)] = 3404,
  [SMALL_STATE(167)] = 3418,
  [SMALL_STATE(168)] = 3432,
  [SMALL_STATE(169)] = 3446,
  [SMALL_STATE(170)] = 3460,
  [SMALL_STATE(171)] = 3474,
  [SMALL_STATE(172)] = 3488,
  [SMALL_STATE(173)] = 3502,
  [SMALL_STATE(174)] = 3516,
  [SMALL_STATE(175)] = 3530,
  [SMALL_STATE(176)] = 3544,
  [SMALL_STATE(177)] = 3558,
  [SMALL_STATE(178)] = 3572,
  [SMALL_STATE(179)] = 3586,
  [SMALL_STATE(180)] = 3600,
  [SMALL_STATE(181)] = 3614,
  [SMALL_STATE(182)] = 3646,
  [SMALL_STATE(183)] = 3660,
  [SMALL_STATE(184)] = 3674,
  [SMALL_STATE(185)] = 3688,
  [SMALL_STATE(186)] = 3702,
  [SMALL_STATE(187)] = 3716,
  [SMALL_STATE(188)] = 3730,
  [SMALL_STATE(189)] = 3744,
  [SMALL_STATE(190)] = 3758,
  [SMALL_STATE(191)] = 3781,
  [SMALL_STATE(192)] = 3804,
  [SMALL_STATE(193)] = 3827,
  [SMALL_STATE(194)] = 3850,
  [SMALL_STATE(195)] = 3872,
  [SMALL_STATE(196)] = 3885,
  [SMALL_STATE(197)] = 3906,
  [SMALL_STATE(198)] = 3919,
  [SMALL_STATE(199)] = 3936,
  [SMALL_STATE(200)] = 3955,
  [SMALL_STATE(201)] = 3971,
  [SMALL_STATE(202)] = 3987,
  [SMALL_STATE(203)] = 3997,
  [SMALL_STATE(204)] = 4007,
  [SMALL_STATE(205)] = 4023,
  [SMALL_STATE(206)] = 4039,
  [SMALL_STATE(207)] = 4049,
  [SMALL_STATE(208)] = 4065,
  [SMALL_STATE(209)] = 4075,
  [SMALL_STATE(210)] = 4085,
  [SMALL_STATE(211)] = 4101,
  [SMALL_STATE(212)] = 4111,
  [SMALL_STATE(213)] = 4121,
  [SMALL_STATE(214)] = 4131,
  [SMALL_STATE(215)] = 4144,
  [SMALL_STATE(216)] = 4157,
  [SMALL_STATE(217)] = 4166,
  [SMALL_STATE(218)] = 4179,
  [SMALL_STATE(219)] = 4190,
  [SMALL_STATE(220)] = 4201,
  [SMALL_STATE(221)] = 4214,
  [SMALL_STATE(222)] = 4227,
  [SMALL_STATE(223)] = 4240,
  [SMALL_STATE(224)] = 4253,
  [SMALL_STATE(225)] = 4266,
  [SMALL_STATE(226)] = 4276,
  [SMALL_STATE(227)] = 4286,
  [SMALL_STATE(228)] = 4296,
  [SMALL_STATE(229)] = 4306,
  [SMALL_STATE(230)] = 4312,
  [SMALL_STATE(231)] = 4322,
  [SMALL_STATE(232)] = 4332,
  [SMALL_STATE(233)] = 4342,
  [SMALL_STATE(234)] = 4352,
  [SMALL_STATE(235)] = 4362,
  [SMALL_STATE(236)] = 4372,
  [SMALL_STATE(237)] = 4382,
  [SMALL_STATE(238)] = 4392,
  [SMALL_STATE(239)] = 4402,
  [SMALL_STATE(240)] = 4412,
  [SMALL_STATE(241)] = 4422,
  [SMALL_STATE(242)] = 4432,
  [SMALL_STATE(243)] = 4442,
  [SMALL_STATE(244)] = 4452,
  [SMALL_STATE(245)] = 4462,
  [SMALL_STATE(246)] = 4472,
  [SMALL_STATE(247)] = 4482,
  [SMALL_STATE(248)] = 4492,
  [SMALL_STATE(249)] = 4502,
  [SMALL_STATE(250)] = 4512,
  [SMALL_STATE(251)] = 4522,
  [SMALL_STATE(252)] = 4532,
  [SMALL_STATE(253)] = 4542,
  [SMALL_STATE(254)] = 4552,
  [SMALL_STATE(255)] = 4562,
  [SMALL_STATE(256)] = 4572,
  [SMALL_STATE(257)] = 4582,
  [SMALL_STATE(258)] = 4592,
  [SMALL_STATE(259)] = 4602,
  [SMALL_STATE(260)] = 4612,
  [SMALL_STATE(261)] = 4622,
  [SMALL_STATE(262)] = 4632,
  [SMALL_STATE(263)] = 4642,
  [SMALL_STATE(264)] = 4652,
  [SMALL_STATE(265)] = 4662,
  [SMALL_STATE(266)] = 4672,
  [SMALL_STATE(267)] = 4682,
  [SMALL_STATE(268)] = 4689,
  [SMALL_STATE(269)] = 4696,
  [SMALL_STATE(270)] = 4703,
  [SMALL_STATE(271)] = 4710,
  [SMALL_STATE(272)] = 4717,
  [SMALL_STATE(273)] = 4722,
  [SMALL_STATE(274)] = 4729,
  [SMALL_STATE(275)] = 4736,
  [SMALL_STATE(276)] = 4743,
  [SMALL_STATE(277)] = 4750,
  [SMALL_STATE(278)] = 4757,
  [SMALL_STATE(279)] = 4764,
  [SMALL_STATE(280)] = 4769,
  [SMALL_STATE(281)] = 4776,
  [SMALL_STATE(282)] = 4783,
  [SMALL_STATE(283)] = 4790,
  [SMALL_STATE(284)] = 4797,
  [SMALL_STATE(285)] = 4804,
  [SMALL_STATE(286)] = 4811,
  [SMALL_STATE(287)] = 4818,
  [SMALL_STATE(288)] = 4825,
  [SMALL_STATE(289)] = 4832,
  [SMALL_STATE(290)] = 4839,
  [SMALL_STATE(291)] = 4846,
  [SMALL_STATE(292)] = 4853,
  [SMALL_STATE(293)] = 4860,
  [SMALL_STATE(294)] = 4867,
  [SMALL_STATE(295)] = 4874,
  [SMALL_STATE(296)] = 4881,
  [SMALL_STATE(297)] = 4888,
  [SMALL_STATE(298)] = 4895,
  [SMALL_STATE(299)] = 4902,
  [SMALL_STATE(300)] = 4909,
  [SMALL_STATE(301)] = 4914,
  [SMALL_STATE(302)] = 4921,
  [SMALL_STATE(303)] = 4928,
  [SMALL_STATE(304)] = 4935,
  [SMALL_STATE(305)] = 4942,
  [SMALL_STATE(306)] = 4946,
  [SMALL_STATE(307)] = 4950,
  [SMALL_STATE(308)] = 4954,
  [SMALL_STATE(309)] = 4958,
  [SMALL_STATE(310)] = 4962,
  [SMALL_STATE(311)] = 4966,
  [SMALL_STATE(312)] = 4970,
  [SMALL_STATE(313)] = 4974,
  [SMALL_STATE(314)] = 4978,
  [SMALL_STATE(315)] = 4982,
  [SMALL_STATE(316)] = 4986,
  [SMALL_STATE(317)] = 4990,
  [SMALL_STATE(318)] = 4994,
  [SMALL_STATE(319)] = 4998,
  [SMALL_STATE(320)] = 5002,
  [SMALL_STATE(321)] = 5006,
  [SMALL_STATE(322)] = 5010,
  [SMALL_STATE(323)] = 5014,
  [SMALL_STATE(324)] = 5018,
  [SMALL_STATE(325)] = 5022,
  [SMALL_STATE(326)] = 5026,
  [SMALL_STATE(327)] = 5030,
  [SMALL_STATE(328)] = 5034,
  [SMALL_STATE(329)] = 5038,
  [SMALL_STATE(330)] = 5042,
  [SMALL_STATE(331)] = 5046,
  [SMALL_STATE(332)] = 5050,
  [SMALL_STATE(333)] = 5054,
  [SMALL_STATE(334)] = 5058,
  [SMALL_STATE(335)] = 5062,
  [SMALL_STATE(336)] = 5066,
  [SMALL_STATE(337)] = 5070,
  [SMALL_STATE(338)] = 5074,
  [SMALL_STATE(339)] = 5078,
  [SMALL_STATE(340)] = 5082,
  [SMALL_STATE(341)] = 5086,
  [SMALL_STATE(342)] = 5090,
  [SMALL_STATE(343)] = 5094,
  [SMALL_STATE(344)] = 5098,
  [SMALL_STATE(345)] = 5102,
  [SMALL_STATE(346)] = 5106,
  [SMALL_STATE(347)] = 5110,
  [SMALL_STATE(348)] = 5114,
  [SMALL_STATE(349)] = 5118,
  [SMALL_STATE(350)] = 5122,
  [SMALL_STATE(351)] = 5126,
  [SMALL_STATE(352)] = 5130,
  [SMALL_STATE(353)] = 5134,
  [SMALL_STATE(354)] = 5138,
  [SMALL_STATE(355)] = 5142,
  [SMALL_STATE(356)] = 5146,
  [SMALL_STATE(357)] = 5150,
  [SMALL_STATE(358)] = 5154,
  [SMALL_STATE(359)] = 5158,
  [SMALL_STATE(360)] = 5162,
  [SMALL_STATE(361)] = 5166,
  [SMALL_STATE(362)] = 5170,
  [SMALL_STATE(363)] = 5174,
  [SMALL_STATE(364)] = 5178,
  [SMALL_STATE(365)] = 5182,
  [SMALL_STATE(366)] = 5186,
  [SMALL_STATE(367)] = 5190,
  [SMALL_STATE(368)] = 5194,
  [SMALL_STATE(369)] = 5198,
  [SMALL_STATE(370)] = 5202,
  [SMALL_STATE(371)] = 5206,
  [SMALL_STATE(372)] = 5210,
  [SMALL_STATE(373)] = 5214,
  [SMALL_STATE(374)] = 5218,
  [SMALL_STATE(375)] = 5222,
  [SMALL_STATE(376)] = 5226,
  [SMALL_STATE(377)] = 5230,
  [SMALL_STATE(378)] = 5234,
  [SMALL_STATE(379)] = 5238,
  [SMALL_STATE(380)] = 5242,
  [SMALL_STATE(381)] = 5246,
  [SMALL_STATE(382)] = 5250,
  [SMALL_STATE(383)] = 5254,
  [SMALL_STATE(384)] = 5258,
  [SMALL_STATE(385)] = 5262,
  [SMALL_STATE(386)] = 5266,
  [SMALL_STATE(387)] = 5270,
  [SMALL_STATE(388)] = 5274,
  [SMALL_STATE(389)] = 5278,
  [SMALL_STATE(390)] = 5282,
  [SMALL_STATE(391)] = 5286,
  [SMALL_STATE(392)] = 5290,
  [SMALL_STATE(393)] = 5294,
  [SMALL_STATE(394)] = 5298,
  [SMALL_STATE(395)] = 5302,
  [SMALL_STATE(396)] = 5306,
  [SMALL_STATE(397)] = 5310,
  [SMALL_STATE(398)] = 5314,
  [SMALL_STATE(399)] = 5318,
  [SMALL_STATE(400)] = 5322,
  [SMALL_STATE(401)] = 5326,
  [SMALL_STATE(402)] = 5330,
  [SMALL_STATE(403)] = 5334,
  [SMALL_STATE(404)] = 5338,
  [SMALL_STATE(405)] = 5342,
  [SMALL_STATE(406)] = 5346,
  [SMALL_STATE(407)] = 5350,
  [SMALL_STATE(408)] = 5354,
  [SMALL_STATE(409)] = 5358,
  [SMALL_STATE(410)] = 5362,
  [SMALL_STATE(411)] = 5366,
  [SMALL_STATE(412)] = 5370,
  [SMALL_STATE(413)] = 5374,
  [SMALL_STATE(414)] = 5378,
  [SMALL_STATE(415)] = 5382,
  [SMALL_STATE(416)] = 5386,
  [SMALL_STATE(417)] = 5390,
  [SMALL_STATE(418)] = 5394,
  [SMALL_STATE(419)] = 5398,
  [SMALL_STATE(420)] = 5402,
  [SMALL_STATE(421)] = 5406,
  [SMALL_STATE(422)] = 5410,
  [SMALL_STATE(423)] = 5414,
  [SMALL_STATE(424)] = 5418,
  [SMALL_STATE(425)] = 5422,
  [SMALL_STATE(426)] = 5426,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 22),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 22),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(75),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(228),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(273),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(219),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(218),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(229),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 16),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_light, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_widget, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 12),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 13),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 12),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 27),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 9),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 21),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 20),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 19),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 18),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 21),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 11),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 18),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 21),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_output, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 18),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 8),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_parameter, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 16),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 16),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 16),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 15),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 9),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 13),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 17),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [957] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
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
