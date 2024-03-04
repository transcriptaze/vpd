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
#define STATE_COUNT 406
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 189
#define ALIAS_COUNT 1
#define TOKEN_COUNT 94
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 28

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_input = 3,
  anon_sym_COMMA = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_set = 7,
  anon_sym_module = 8,
  anon_sym_name = 9,
  anon_sym_height = 10,
  anon_sym_width = 11,
  anon_sym_x = 12,
  anon_sym_y = 13,
  anon_sym_xy = 14,
  anon_sym_part = 15,
  anon_sym_text = 16,
  anon_sym_font = 17,
  anon_sym_size = 18,
  anon_sym_halign = 19,
  anon_sym_valign = 20,
  anon_sym_align = 21,
  anon_sym_colour = 22,
  anon_sym_color = 23,
  anon_sym_id = 24,
  anon_sym_output = 25,
  anon_sym_parameter = 26,
  anon_sym_light = 27,
  anon_sym_widget = 28,
  aux_sym__offset_attr_token1 = 29,
  anon_sym_AT = 30,
  aux_sym__absolute_attr_token1 = 31,
  anon_sym_left = 32,
  anon_sym_centre = 33,
  anon_sym_center = 34,
  anon_sym_right = 35,
  aux_sym__geometry_x_attr_token1 = 36,
  anon_sym_top = 37,
  anon_sym_middle = 38,
  anon_sym_bottom = 39,
  aux_sym__guide_attr_token1 = 40,
  aux_sym__guide_attr_token2 = 41,
  anon_sym_decoration = 42,
  anon_sym_decorate = 43,
  anon_sym_with = 44,
  anon_sym_delete = 45,
  anon_sym_guide = 46,
  aux_sym__guide_id_token1 = 47,
  aux_sym__input_id_token1 = 48,
  anon_sym_label = 49,
  aux_sym__label_id_token1 = 50,
  anon_sym_DQUOTE = 51,
  aux_sym__label_id_token2 = 52,
  anon_sym_SQUOTE = 53,
  aux_sym__label_id_token3 = 54,
  anon_sym_load = 55,
  anon_sym_project = 56,
  anon_sym_script = 57,
  anon_sym_unload = 58,
  anon_sym_save = 59,
  anon_sym_export = 60,
  anon_sym_DOTh = 61,
  anon_sym_GT_GT = 62,
  anon_sym_list = 63,
  anon_sym_fonts = 64,
  anon_sym_parts = 65,
  anon_sym_decorations = 66,
  anon_sym_timestamp = 67,
  anon_sym_gzip = 68,
  aux_sym_parameter_token1 = 69,
  sym_fontsize = 70,
  anon_sym_baseline = 71,
  anon_sym_scale = 72,
  aux_sym__scale_token1 = 73,
  anon_sym_stretch = 74,
  anon_sym_origin = 75,
  aux_sym_origin_token1 = 76,
  aux_sym__originx_token1 = 77,
  aux_sym__originy_token1 = 78,
  anon_sym_background = 79,
  anon_sym_none = 80,
  sym_rgb = 81,
  sym_rgba = 82,
  anon_sym_panel = 83,
  anon_sym_svg = 84,
  anon_sym_dark = 85,
  sym_height = 86,
  sym_width = 87,
  anon_sym_vertical = 88,
  anon_sym_horizontal = 89,
  aux_sym_offset_token1 = 90,
  aux_sym__string_token1 = 91,
  aux_sym_absolute_token1 = 92,
  aux_sym_relative_token1 = 93,
  sym_command = 94,
  sym_new = 95,
  sym__new_input = 96,
  sym__new_component = 97,
  sym__new_xy = 98,
  sym_set = 99,
  sym__module_attr = 100,
  sym__component_attr = 101,
  sym__label_attr = 102,
  sym__decoration_attr = 103,
  sym__guideline_attr = 104,
  sym__x_attr = 105,
  sym__y_attr = 106,
  sym__xy_attr = 107,
  sym__offset_attr = 108,
  sym__offset_xy_attr = 109,
  sym__absolute_attr = 110,
  sym__absolute_x_attr = 111,
  sym__absolute_y_attr = 112,
  sym__absolute_xy_attr = 113,
  sym__relative_attr = 114,
  sym__relative_xy_attr = 115,
  sym__geometry_x_attr = 116,
  sym__geometry_y_attr = 117,
  sym__geometry_xy_attr = 118,
  sym__guide_attr = 119,
  sym__guide_xy_attr = 120,
  sym__component_x_attr = 121,
  sym__component_y_attr = 122,
  sym__component_xy_attr = 123,
  sym__new_decoration = 124,
  sym_decorate = 125,
  sym_delete = 126,
  sym__guide_id = 127,
  sym__input_id = 128,
  sym__output_id = 129,
  sym__parameter_id = 130,
  sym__light_id = 131,
  sym__widget_id = 132,
  sym__label_id = 133,
  sym__decoration_id = 134,
  sym__font_id = 135,
  sym__component_id = 136,
  sym_load = 137,
  sym_unload = 138,
  sym_save = 139,
  sym_export = 140,
  sym__module_export = 141,
  sym_list = 142,
  sym_project = 143,
  sym_script = 144,
  sym__input = 145,
  sym__output = 146,
  sym__parameter = 147,
  sym__light = 148,
  sym__widget = 149,
  sym_module = 150,
  sym_output = 151,
  sym_parameter = 152,
  sym_light = 153,
  sym_widget = 154,
  sym__component = 155,
  sym_label = 156,
  sym_font = 157,
  sym__align = 158,
  sym_halign = 159,
  sym_valign = 160,
  sym_colour = 161,
  sym_decoration = 162,
  sym__scale = 163,
  sym_stretch = 164,
  sym_origin = 165,
  sym__originx = 166,
  sym__originy = 167,
  sym_background = 168,
  sym_panel = 169,
  sym_svg = 170,
  sym_name = 171,
  sym_part = 172,
  sym_guide = 173,
  sym_identifier = 174,
  sym_vertical = 175,
  sym_horizontal = 176,
  sym_geometry = 177,
  sym_offset = 178,
  sym__offset = 179,
  sym_guideline = 180,
  sym__string = 181,
  sym_absolute = 182,
  sym_relative = 183,
  sym__decorate = 184,
  sym__relative = 185,
  sym_x = 186,
  sym_y = 187,
  aux_sym_command_repeat1 = 188,
  alias_sym_dy = 189,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_input] = "input",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_set] = "set",
  [anon_sym_module] = "module",
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
  [anon_sym_id] = "id",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
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
  [anon_sym_decoration] = "decoration",
  [anon_sym_decorate] = "decorate",
  [anon_sym_with] = "with",
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
  [aux_sym_parameter_token1] = "parameter_token1",
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
  [sym__new_input] = "input",
  [sym__new_component] = "_new_component",
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
  [sym__new_decoration] = "decoration",
  [sym_decorate] = "decorate",
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
  [sym_module] = "module",
  [sym_output] = "output",
  [sym_parameter] = "parameter",
  [sym_light] = "light",
  [sym_widget] = "widget",
  [sym__component] = "_component",
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
  [anon_sym_input] = anon_sym_input,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_module] = anon_sym_module,
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
  [anon_sym_id] = anon_sym_id,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
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
  [anon_sym_decoration] = anon_sym_decoration,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_with] = anon_sym_with,
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
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
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
  [sym__new_input] = sym__new_input,
  [sym__new_component] = sym__new_component,
  [sym__new_xy] = sym__new_xy,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
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
  [sym__new_decoration] = sym_decoration,
  [sym_decorate] = sym_decorate,
  [sym_delete] = sym_delete,
  [sym__guide_id] = sym_guide,
  [sym__input_id] = sym__new_input,
  [sym__output_id] = sym_output,
  [sym__parameter_id] = sym_parameter,
  [sym__light_id] = sym_light,
  [sym__widget_id] = sym_widget,
  [sym__label_id] = sym_label,
  [sym__decoration_id] = sym_decoration,
  [sym__font_id] = sym_font,
  [sym__component_id] = sym__component_id,
  [sym_load] = sym_load,
  [sym_unload] = sym_unload,
  [sym_save] = sym_save,
  [sym_export] = sym_export,
  [sym__module_export] = sym_module,
  [sym_list] = sym_list,
  [sym_project] = sym_project,
  [sym_script] = sym_script,
  [sym__input] = sym__new_input,
  [sym__output] = sym_output,
  [sym__parameter] = sym_parameter,
  [sym__light] = sym_light,
  [sym__widget] = sym_widget,
  [sym_module] = sym_module,
  [sym_output] = sym_output,
  [sym_parameter] = sym_parameter,
  [sym_light] = sym_light,
  [sym_widget] = sym_widget,
  [sym__component] = sym__component,
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
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_module] = {
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
  [anon_sym_id] = {
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
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
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
  [sym__new_input] = {
    .visible = true,
    .named = true,
  },
  [sym__new_component] = {
    .visible = false,
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
  [sym__new_decoration] = {
    .visible = true,
    .named = true,
  },
  [sym_decorate] = {
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
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_light] = {
    .visible = true,
    .named = true,
  },
  [sym_widget] = {
    .visible = true,
    .named = true,
  },
  [sym__component] = {
    .visible = false,
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
    [1] = sym_font,
  },
  [2] = {
    [1] = sym_project,
  },
  [3] = {
    [1] = sym_script,
  },
  [4] = {
    [0] = aux_sym__originx_token1,
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
    [0] = sym_absolute,
  },
  [9] = {
    [2] = sym_x,
  },
  [10] = {
    [2] = sym_y,
  },
  [11] = {
    [1] = sym_light,
  },
  [12] = {
    [1] = sym_absolute,
  },
  [13] = {
    [1] = aux_sym__string_token1,
  },
  [14] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [15] = {
    [0] = sym_x,
    [2] = sym_y,
  },
  [16] = {
    [3] = sym_y,
  },
  [17] = {
    [2] = sym_output,
  },
  [18] = {
    [2] = sym_parameter,
  },
  [19] = {
    [2] = sym_light,
  },
  [20] = {
    [2] = sym_widget,
  },
  [21] = {
    [2] = alias_sym_dy,
  },
  [22] = {
    [1] = sym__new_input,
  },
  [23] = {
    [1] = sym_output,
  },
  [24] = {
    [1] = sym_parameter,
  },
  [25] = {
    [1] = sym_widget,
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
    sym_light,
    sym_output,
    sym_parameter,
    sym_widget,
  sym__component_y_attr, 5,
    sym__new_input,
    sym_light,
    sym_output,
    sym_parameter,
    sym_widget,
  sym__component_xy_attr, 5,
    sym__new_input,
    sym_light,
    sym_output,
    sym_parameter,
    sym_widget,
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
  [49] = 10,
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 21,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 19,
  [80] = 80,
  [81] = 81,
  [82] = 21,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 12,
  [90] = 20,
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
  [101] = 97,
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
  [163] = 98,
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
  [196] = 96,
  [197] = 197,
  [198] = 27,
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
  [266] = 27,
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
  [396] = 330,
  [397] = 377,
  [398] = 379,
  [399] = 385,
  [400] = 333,
  [401] = 327,
  [402] = 362,
  [403] = 353,
  [404] = 390,
  [405] = 324,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(339);
      if (lookahead == '"') ADVANCE(530);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(535);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == ',') ADVANCE(344);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'v') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(136);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == 'y') ADVANCE(354);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(530);
      if (lookahead == '\'') ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(590);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '"') ADVANCE(532);
      if (lookahead == '\'') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(528);
      if (lookahead != 0) ADVANCE(529);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(431);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'U') ADVANCE(582);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '5') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(584);
      if (lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'm') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(589);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '8') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(593);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(187);
      END_STATE();
    case 26:
      if (lookahead == '5') ADVANCE(187);
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 27:
      if (lookahead == ';') ADVANCE(340);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(551);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(431);
      if (lookahead == 'c') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 30:
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(209);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(431);
      if (lookahead == 'c') ADVANCE(412);
      if (lookahead == 'h') ADVANCE(432);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(540);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(544);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(573);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(265);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(278);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(580);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(550);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(455);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(352);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(568);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(269);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(270);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(278);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 153:
      if (lookahead == 'j') ADVANCE(84);
      END_STATE();
    case 154:
      if (lookahead == 'k') ADVANCE(581);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(579);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(587);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(371);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(560);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(570);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(589);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(583);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(582);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(379);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(572);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(592);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(394);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(593);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(561);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(558);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(557);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(556);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == 'z') ADVANCE(141);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 302:
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 303:
      if (lookahead == 'w') ADVANCE(341);
      END_STATE();
    case 304:
      if (lookahead == 'x') ADVANCE(236);
      END_STATE();
    case 305:
      if (lookahead == 'x') ADVANCE(267);
      END_STATE();
    case 306:
      if (lookahead == 'z') ADVANCE(81);
      END_STATE();
    case 307:
      if (lookahead == 'z') ADVANCE(223);
      END_STATE();
    case 308:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(589);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(593);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 319:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(577);
      END_STATE();
    case 320:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(578);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(576);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 323:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 324:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 325:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 326:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 327:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 328:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 329:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 330:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 331:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 332:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 333:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 334:
      if (eof) ADVANCE(339);
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == ',') ADVANCE(344);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(461);
      if (lookahead == 'c') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'm') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(489);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead == 'u') ADVANCE(496);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(334)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 335:
      if (eof) ADVANCE(339);
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 'u') ADVANCE(496);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(335)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 336:
      if (eof) ADVANCE(339);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == ',') ADVANCE(344);
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == 'y') ADVANCE(354);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(336)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 337:
      if (eof) ADVANCE(339);
      if (lookahead == '#') ADVANCE(331);
      if (lookahead == ',') ADVANCE(344);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(145);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(337)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 338:
      if (eof) ADVANCE(339);
      if (lookahead == ',') ADVANCE(344);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(206);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(338)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(355);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(376);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'h') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'h') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'h') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'h') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'H') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'r') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(500);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(532);
      if (lookahead == '\'') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(591);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(529);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(534);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(591);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(529);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(187);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(531);
      if (lookahead == '\'') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(591);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(591);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 334},
  [3] = {.lex_state = 334},
  [4] = {.lex_state = 336},
  [5] = {.lex_state = 336},
  [6] = {.lex_state = 336},
  [7] = {.lex_state = 336},
  [8] = {.lex_state = 336},
  [9] = {.lex_state = 336},
  [10] = {.lex_state = 334},
  [11] = {.lex_state = 336},
  [12] = {.lex_state = 334},
  [13] = {.lex_state = 334},
  [14] = {.lex_state = 334},
  [15] = {.lex_state = 334},
  [16] = {.lex_state = 334},
  [17] = {.lex_state = 334},
  [18] = {.lex_state = 334},
  [19] = {.lex_state = 334},
  [20] = {.lex_state = 334},
  [21] = {.lex_state = 334},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 336},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 336},
  [28] = {.lex_state = 337},
  [29] = {.lex_state = 336},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 336},
  [47] = {.lex_state = 336},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 335},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 337},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 338},
  [62] = {.lex_state = 335},
  [63] = {.lex_state = 336},
  [64] = {.lex_state = 336},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 335},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 335},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 335},
  [79] = {.lex_state = 335},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 335},
  [83] = {.lex_state = 338},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 335},
  [90] = {.lex_state = 335},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 29},
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
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 336},
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
  [163] = {.lex_state = 55},
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
  [179] = {.lex_state = 9},
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
  [190] = {.lex_state = 336},
  [191] = {.lex_state = 336},
  [192] = {.lex_state = 336},
  [193] = {.lex_state = 336},
  [194] = {.lex_state = 336},
  [195] = {.lex_state = 30},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 30},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 336},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 336},
  [203] = {.lex_state = 336},
  [204] = {.lex_state = 336},
  [205] = {.lex_state = 337},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 336},
  [209] = {.lex_state = 336},
  [210] = {.lex_state = 336},
  [211] = {.lex_state = 336},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 334},
  [215] = {.lex_state = 334},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 336},
  [219] = {.lex_state = 334},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 334},
  [222] = {.lex_state = 334},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 334},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 334},
  [230] = {.lex_state = 334},
  [231] = {.lex_state = 338},
  [232] = {.lex_state = 334},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 334},
  [235] = {.lex_state = 334},
  [236] = {.lex_state = 334},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 334},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 334},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 7},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 312},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 312},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 7},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 334},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 334},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 336},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 337},
  [298] = {.lex_state = 337},
  [299] = {.lex_state = 337},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 337},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
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
  [322] = {.lex_state = 336},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 55},
  [325] = {.lex_state = 337},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 533},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 335},
  [330] = {.lex_state = 10},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 55},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 4},
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
  [357] = {.lex_state = 335},
  [358] = {.lex_state = 335},
  [359] = {.lex_state = 334},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 538},
  [363] = {.lex_state = 334},
  [364] = {.lex_state = 334},
  [365] = {.lex_state = 337},
  [366] = {.lex_state = 4},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 4},
  [373] = {.lex_state = 334},
  [374] = {.lex_state = 334},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 538},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 533},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 336},
  [387] = {.lex_state = 336},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 10},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 9},
  [400] = {.lex_state = 55},
  [401] = {.lex_state = 533},
  [402] = {.lex_state = 538},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 55},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
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
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
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
    [anon_sym_decoration] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [aux_sym_parameter_token1] = ACTIONS(1),
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
    [sym_command] = STATE(388),
    [sym_new] = STATE(25),
    [sym_set] = STATE(25),
    [sym_decorate] = STATE(25),
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
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_decorate] = ACTIONS(11),
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
    STATE(5), 1,
      sym_font,
    STATE(44), 1,
      sym__align,
    STATE(50), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(127), 1,
      sym_colour,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_comment,
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
    ACTIONS(27), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
      sym__align,
    STATE(50), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(151), 1,
      sym_colour,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_comment,
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
    ACTIONS(43), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [110] = 16,
    ACTIONS(47), 1,
      anon_sym_input,
    ACTIONS(49), 1,
      anon_sym_module,
    ACTIONS(51), 1,
      anon_sym_output,
    ACTIONS(53), 1,
      anon_sym_parameter,
    ACTIONS(55), 1,
      anon_sym_light,
    ACTIONS(57), 1,
      anon_sym_widget,
    ACTIONS(59), 1,
      anon_sym_decoration,
    ACTIONS(61), 1,
      anon_sym_guide,
    ACTIONS(63), 1,
      anon_sym_label,
    ACTIONS(65), 1,
      anon_sym_origin,
    ACTIONS(67), 1,
      anon_sym_background,
    STATE(38), 1,
      sym__guide_id,
    STATE(142), 1,
      sym__label_id,
    STATE(200), 1,
      sym__decoration_id,
    STATE(201), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(139), 7,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__decoration_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
  [169] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(75), 1,
      sym_fontsize,
    STATE(48), 1,
      sym__align,
    STATE(50), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(103), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(69), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [216] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(79), 1,
      sym_fontsize,
    STATE(45), 1,
      sym__align,
    STATE(50), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(141), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
    STATE(50), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(53), 1,
      sym__align,
    STATE(100), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
    STATE(44), 1,
      sym__align,
    STATE(50), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(127), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
    STATE(48), 1,
      sym__align,
    STATE(50), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(103), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(69), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [395] = 4,
    ACTIONS(87), 1,
      aux_sym_offset_token1,
    STATE(20), 1,
      sym_offset,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(85), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
    STATE(45), 1,
      sym__align,
    STATE(50), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(141), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [473] = 2,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(91), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(95), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(99), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(103), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(107), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(111), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(115), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(119), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(123), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(127), 19,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
  [780] = 2,
    ACTIONS(135), 1,
      sym_rgb,
    ACTIONS(133), 21,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
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
  [834] = 12,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_decorate,
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
      sym_set,
      sym_decorate,
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
      anon_sym_set,
    ACTIONS(156), 1,
      anon_sym_decorate,
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
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_unload,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [926] = 2,
    ACTIONS(179), 2,
      anon_sym_x,
      sym_width,
    ACTIONS(177), 17,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_height,
      aux_sym_offset_token1,
  [950] = 10,
    ACTIONS(181), 1,
      anon_sym_input,
    ACTIONS(183), 1,
      anon_sym_module,
    ACTIONS(185), 1,
      anon_sym_output,
    ACTIONS(187), 1,
      anon_sym_light,
    ACTIONS(189), 1,
      anon_sym_widget,
    ACTIONS(191), 1,
      anon_sym_decoration,
    ACTIONS(193), 1,
      anon_sym_guide,
    ACTIONS(195), 1,
      anon_sym_label,
    ACTIONS(197), 1,
      aux_sym_parameter_token1,
    STATE(104), 9,
      sym__new_input,
      sym__new_decoration,
      sym_module,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [989] = 10,
    ACTIONS(47), 1,
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
      anon_sym_decoration,
    ACTIONS(63), 1,
      anon_sym_label,
    ACTIONS(199), 1,
      anon_sym_font,
    ACTIONS(201), 1,
      anon_sym_guide,
    STATE(146), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [1028] = 2,
    ACTIONS(205), 1,
      anon_sym_x,
    ACTIONS(203), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
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
  [1050] = 2,
    ACTIONS(209), 1,
      anon_sym_x,
    ACTIONS(207), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
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
  [1072] = 2,
    ACTIONS(213), 1,
      anon_sym_x,
    ACTIONS(211), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
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
  [1094] = 8,
    ACTIONS(217), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(219), 1,
      anon_sym_vertical,
    ACTIONS(221), 1,
      anon_sym_horizontal,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym_offset,
    STATE(292), 1,
      sym_identifier,
    STATE(158), 4,
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
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
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
  [1150] = 2,
    ACTIONS(231), 1,
      anon_sym_x,
    ACTIONS(229), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
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
  [1172] = 10,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(182), 1,
      sym__xy_attr,
    STATE(323), 1,
      sym__relative_attr,
    STATE(326), 1,
      sym__geometry_x_attr,
    STATE(392), 1,
      sym__guide_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(189), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1209] = 10,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(187), 1,
      sym__xy_attr,
    STATE(323), 1,
      sym__relative_attr,
    STATE(326), 1,
      sym__geometry_x_attr,
    STATE(392), 1,
      sym__guide_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(189), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1246] = 7,
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
    STATE(110), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1277] = 6,
    ACTIONS(217), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(219), 1,
      anon_sym_vertical,
    ACTIONS(221), 1,
      anon_sym_horizontal,
    STATE(33), 1,
      sym_identifier,
    STATE(145), 4,
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
  [1305] = 2,
    ACTIONS(251), 1,
      anon_sym_x,
    ACTIONS(249), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1325] = 2,
    ACTIONS(255), 1,
      anon_sym_x,
    ACTIONS(253), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1345] = 4,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym__scale,
    STATE(128), 1,
      sym_stretch,
    ACTIONS(257), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1368] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(141), 1,
      sym_colour,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1391] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(103), 1,
      sym_colour,
    ACTIONS(69), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1414] = 4,
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
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1437] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(88), 1,
      sym_offset,
    ACTIONS(261), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1458] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(84), 1,
      sym_offset,
    ACTIONS(263), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1479] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(100), 1,
      sym_colour,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1502] = 4,
    ACTIONS(265), 1,
      aux_sym_offset_token1,
    STATE(90), 1,
      sym_offset,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(85), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1525] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      sym_rgb,
    ACTIONS(267), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1546] = 3,
    ACTIONS(271), 1,
      sym_rgb,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(267), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1567] = 2,
    ACTIONS(277), 1,
      sym_rgb,
    ACTIONS(275), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1586] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(99), 1,
      sym_colour,
    ACTIONS(279), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1609] = 2,
    ACTIONS(283), 1,
      sym_rgb,
    ACTIONS(281), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1628] = 3,
    ACTIONS(287), 1,
      anon_sym_timestamp,
    ACTIONS(289), 1,
      anon_sym_gzip,
    ACTIONS(285), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1648] = 3,
    ACTIONS(293), 1,
      anon_sym_light,
    ACTIONS(295), 1,
      anon_sym_dark,
    ACTIONS(291), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1668] = 3,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_stretch,
    ACTIONS(297), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
    STATE(182), 1,
      sym__x_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(184), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1716] = 2,
    ACTIONS(305), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(303), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1734] = 2,
    ACTIONS(309), 1,
      sym_rgb,
    ACTIONS(307), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1752] = 2,
    ACTIONS(313), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(311), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1770] = 4,
    ACTIONS(319), 1,
      aux_sym__input_id_token1,
    STATE(129), 1,
      sym_part,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(317), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1792] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(149), 1,
      sym_offset,
    ACTIONS(321), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1812] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(162), 1,
      sym_offset,
    ACTIONS(323), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1832] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym__x_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(184), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1860] = 4,
    ACTIONS(319), 1,
      aux_sym__input_id_token1,
    STATE(166), 1,
      sym_part,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(327), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1882] = 1,
    ACTIONS(329), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1898] = 4,
    ACTIONS(319), 1,
      aux_sym__input_id_token1,
    STATE(168), 1,
      sym_part,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(333), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1920] = 1,
    ACTIONS(125), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1935] = 1,
    ACTIONS(335), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1950] = 2,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(337), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1967] = 6,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(347), 1,
      aux_sym_relative_token1,
    STATE(380), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(345), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1992] = 2,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(337), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2009] = 2,
    ACTIONS(353), 1,
      anon_sym_timestamp,
    ACTIONS(351), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2026] = 1,
    ACTIONS(355), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2041] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym__y_attr,
    ACTIONS(247), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(186), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2068] = 2,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(359), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2085] = 2,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(365), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2102] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(119), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2119] = 6,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
      aux_sym_relative_token1,
    STATE(317), 1,
      sym_x,
    STATE(68), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(345), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2144] = 2,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(373), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2161] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(127), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2178] = 2,
    ACTIONS(379), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(377), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2195] = 1,
    ACTIONS(381), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2210] = 1,
    ACTIONS(383), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2225] = 1,
    ACTIONS(385), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2240] = 2,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(359), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2257] = 1,
    ACTIONS(389), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2272] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(91), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2289] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(123), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2306] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym__y_attr,
    ACTIONS(247), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(186), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2333] = 1,
    ACTIONS(391), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2348] = 1,
    ACTIONS(393), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2362] = 1,
    ACTIONS(395), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2376] = 1,
    ACTIONS(397), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2390] = 1,
    ACTIONS(399), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2404] = 1,
    ACTIONS(401), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2418] = 1,
    ACTIONS(403), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2432] = 1,
    ACTIONS(405), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2446] = 1,
    ACTIONS(279), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2460] = 2,
    ACTIONS(401), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(407), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2476] = 1,
    ACTIONS(409), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2490] = 1,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2504] = 1,
    ACTIONS(411), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2518] = 1,
    ACTIONS(413), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2532] = 1,
    ACTIONS(415), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2546] = 1,
    ACTIONS(337), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2560] = 1,
    ACTIONS(417), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2574] = 1,
    ACTIONS(419), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2588] = 1,
    ACTIONS(421), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2602] = 1,
    ACTIONS(423), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2616] = 1,
    ACTIONS(425), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2630] = 1,
    ACTIONS(427), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2644] = 1,
    ACTIONS(429), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2658] = 1,
    ACTIONS(431), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2672] = 1,
    ACTIONS(433), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2686] = 1,
    ACTIONS(435), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2700] = 5,
    STATE(50), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(187), 1,
      sym__align,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2722] = 1,
    ACTIONS(437), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2736] = 1,
    ACTIONS(439), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2750] = 1,
    ACTIONS(441), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2764] = 1,
    ACTIONS(443), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2778] = 1,
    ACTIONS(445), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2792] = 1,
    ACTIONS(447), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2806] = 1,
    ACTIONS(449), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2820] = 1,
    ACTIONS(451), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2834] = 1,
    ACTIONS(69), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2848] = 1,
    ACTIONS(297), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2862] = 1,
    ACTIONS(453), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2876] = 1,
    ACTIONS(455), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2890] = 1,
    ACTIONS(457), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2904] = 1,
    ACTIONS(459), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2918] = 1,
    ACTIONS(461), 11,
      ts_builtin_sym_end,
      sym_comment,
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
    ACTIONS(463), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2946] = 1,
    ACTIONS(465), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2960] = 1,
    ACTIONS(467), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2974] = 1,
    ACTIONS(469), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2988] = 1,
    ACTIONS(471), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3002] = 1,
    ACTIONS(473), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3016] = 1,
    ACTIONS(475), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3030] = 1,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3044] = 10,
    ACTIONS(477), 1,
      anon_sym_x,
    ACTIONS(479), 1,
      anon_sym_y,
    ACTIONS(481), 1,
      anon_sym_xy,
    ACTIONS(483), 1,
      anon_sym_text,
    ACTIONS(485), 1,
      anon_sym_font,
    ACTIONS(487), 1,
      anon_sym_size,
    ACTIONS(489), 1,
      anon_sym_halign,
    ACTIONS(491), 1,
      anon_sym_valign,
    ACTIONS(493), 1,
      anon_sym_align,
    ACTIONS(495), 2,
      anon_sym_colour,
      anon_sym_color,
  [3076] = 1,
    ACTIONS(497), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3090] = 1,
    ACTIONS(499), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3104] = 1,
    ACTIONS(501), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3118] = 1,
    ACTIONS(503), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3132] = 1,
    ACTIONS(505), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3146] = 1,
    ACTIONS(507), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3160] = 1,
    ACTIONS(509), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3174] = 1,
    ACTIONS(511), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3188] = 1,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3202] = 1,
    ACTIONS(513), 11,
      ts_builtin_sym_end,
      sym_comment,
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
    ACTIONS(515), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3230] = 1,
    ACTIONS(517), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3244] = 1,
    ACTIONS(519), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3258] = 1,
    ACTIONS(521), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3272] = 1,
    ACTIONS(523), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3286] = 1,
    ACTIONS(525), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3300] = 1,
    ACTIONS(527), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3314] = 1,
    ACTIONS(529), 11,
      ts_builtin_sym_end,
      sym_comment,
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
    ACTIONS(531), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3342] = 1,
    ACTIONS(533), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3356] = 2,
    ACTIONS(403), 1,
      aux_sym_offset_token1,
    ACTIONS(535), 10,
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
  [3372] = 1,
    ACTIONS(537), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3386] = 1,
    ACTIONS(539), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3400] = 1,
    ACTIONS(541), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3414] = 1,
    ACTIONS(543), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3428] = 1,
    ACTIONS(545), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3442] = 1,
    ACTIONS(547), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3456] = 1,
    ACTIONS(549), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3470] = 1,
    ACTIONS(551), 11,
      ts_builtin_sym_end,
      sym_comment,
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
    ACTIONS(553), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3498] = 1,
    ACTIONS(555), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3512] = 1,
    ACTIONS(557), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3526] = 1,
    ACTIONS(559), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3540] = 1,
    ACTIONS(561), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3554] = 1,
    ACTIONS(563), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3568] = 1,
    ACTIONS(565), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3582] = 6,
    ACTIONS(369), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
      aux_sym_relative_token1,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_x,
    STATE(66), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(345), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3606] = 1,
    ACTIONS(569), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
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
      anon_sym_set,
      anon_sym_decorate,
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
      anon_sym_set,
      anon_sym_decorate,
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
      anon_sym_set,
      anon_sym_decorate,
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
      anon_sym_set,
      anon_sym_decorate,
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
      anon_sym_set,
      anon_sym_decorate,
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
      anon_sym_set,
      anon_sym_decorate,
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
      anon_sym_set,
      anon_sym_decorate,
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
      anon_sym_set,
      anon_sym_decorate,
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
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3746] = 6,
    ACTIONS(589), 1,
      anon_sym_input,
    ACTIONS(591), 1,
      anon_sym_output,
    ACTIONS(593), 1,
      anon_sym_parameter,
    ACTIONS(595), 1,
      anon_sym_light,
    ACTIONS(597), 1,
      anon_sym_widget,
    STATE(337), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3769] = 6,
    ACTIONS(47), 1,
      anon_sym_input,
    ACTIONS(51), 1,
      anon_sym_output,
    ACTIONS(53), 1,
      anon_sym_parameter,
    ACTIONS(55), 1,
      anon_sym_light,
    ACTIONS(57), 1,
      anon_sym_widget,
    STATE(382), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [3792] = 6,
    ACTIONS(589), 1,
      anon_sym_input,
    ACTIONS(591), 1,
      anon_sym_output,
    ACTIONS(593), 1,
      anon_sym_parameter,
    ACTIONS(595), 1,
      anon_sym_light,
    ACTIONS(597), 1,
      anon_sym_widget,
    STATE(332), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3815] = 6,
    ACTIONS(589), 1,
      anon_sym_input,
    ACTIONS(591), 1,
      anon_sym_output,
    ACTIONS(593), 1,
      anon_sym_parameter,
    ACTIONS(595), 1,
      anon_sym_light,
    ACTIONS(597), 1,
      anon_sym_widget,
    STATE(383), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3838] = 6,
    ACTIONS(589), 1,
      anon_sym_input,
    ACTIONS(591), 1,
      anon_sym_output,
    ACTIONS(593), 1,
      anon_sym_parameter,
    ACTIONS(595), 1,
      anon_sym_light,
    ACTIONS(597), 1,
      anon_sym_widget,
    STATE(391), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3861] = 6,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(599), 1,
      anon_sym_AT,
    ACTIONS(603), 1,
      anon_sym_origin,
    ACTIONS(605), 1,
      aux_sym_origin_token1,
    STATE(153), 1,
      sym_offset,
    ACTIONS(601), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3883] = 2,
    ACTIONS(399), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(607), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3896] = 6,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(609), 1,
      anon_sym_AT,
    ACTIONS(611), 1,
      anon_sym_origin,
    ACTIONS(613), 1,
      aux_sym_origin_token1,
    STATE(156), 1,
      sym_offset,
    ACTIONS(601), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3917] = 2,
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
  [3930] = 6,
    ACTIONS(615), 1,
      anon_sym_input,
    ACTIONS(617), 1,
      anon_sym_output,
    ACTIONS(619), 1,
      anon_sym_parameter,
    ACTIONS(621), 1,
      anon_sym_light,
    ACTIONS(623), 1,
      anon_sym_widget,
    ACTIONS(625), 1,
      anon_sym_label,
  [3949] = 5,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(627), 1,
      anon_sym_x,
    ACTIONS(629), 1,
      anon_sym_y,
    ACTIONS(631), 1,
      anon_sym_xy,
    STATE(124), 2,
      sym__scale,
      sym_stretch,
  [3966] = 5,
    ACTIONS(633), 1,
      anon_sym_name,
    ACTIONS(635), 1,
      anon_sym_x,
    ACTIONS(637), 1,
      anon_sym_y,
    ACTIONS(639), 1,
      anon_sym_xy,
    ACTIONS(641), 1,
      anon_sym_part,
  [3982] = 5,
    ACTIONS(643), 1,
      anon_sym_input,
    ACTIONS(645), 1,
      anon_sym_output,
    ACTIONS(647), 1,
      anon_sym_parameter,
    ACTIONS(649), 1,
      anon_sym_light,
    ACTIONS(651), 1,
      anon_sym_widget,
  [3998] = 2,
    STATE(187), 1,
      sym_halign,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4008] = 2,
    STATE(187), 1,
      sym_valign,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4018] = 5,
    ACTIONS(653), 1,
      anon_sym_AT,
    ACTIONS(655), 1,
      aux_sym__originx_token1,
    ACTIONS(657), 1,
      aux_sym__originy_token1,
    STATE(367), 1,
      sym__originy,
    STATE(371), 1,
      sym__originx,
  [4034] = 2,
    STATE(78), 1,
      sym_y,
    ACTIONS(659), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4044] = 5,
    ACTIONS(661), 1,
      aux_sym__input_id_token1,
    ACTIONS(663), 1,
      anon_sym_none,
    ACTIONS(665), 1,
      sym_rgb,
    ACTIONS(667), 1,
      sym_rgba,
    STATE(107), 1,
      sym_name,
  [4060] = 2,
    STATE(60), 1,
      sym_valign,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4070] = 5,
    ACTIONS(669), 1,
      anon_sym_input,
    ACTIONS(671), 1,
      anon_sym_output,
    ACTIONS(673), 1,
      anon_sym_parameter,
    ACTIONS(675), 1,
      anon_sym_light,
    ACTIONS(677), 1,
      anon_sym_widget,
  [4086] = 5,
    ACTIONS(679), 1,
      anon_sym_input,
    ACTIONS(681), 1,
      anon_sym_output,
    ACTIONS(683), 1,
      anon_sym_parameter,
    ACTIONS(685), 1,
      anon_sym_light,
    ACTIONS(687), 1,
      anon_sym_widget,
  [4102] = 2,
    STATE(60), 1,
      sym_halign,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4112] = 2,
    STATE(62), 1,
      sym_y,
    ACTIONS(659), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4122] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(689), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4132] = 4,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    STATE(344), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4145] = 4,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4158] = 3,
    ACTIONS(697), 1,
      anon_sym_project,
    ACTIONS(699), 1,
      anon_sym_script,
    STATE(155), 2,
      sym_project,
      sym_script,
  [4169] = 4,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      anon_sym_SQUOTE,
    ACTIONS(705), 1,
      aux_sym__string_token1,
    STATE(187), 1,
      sym__string,
  [4182] = 2,
    STATE(137), 1,
      sym__geometry_y_attr,
    ACTIONS(707), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4191] = 4,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4204] = 4,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    ACTIONS(713), 1,
      anon_sym_SQUOTE,
    ACTIONS(715), 1,
      aux_sym__string_token1,
    STATE(72), 1,
      sym__string,
  [4217] = 4,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4230] = 4,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4243] = 4,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    ACTIONS(723), 1,
      aux_sym__offset_attr_token1,
    STATE(304), 1,
      sym__offset_attr,
    STATE(361), 1,
      sym__offset_xy_attr,
  [4256] = 3,
    ACTIONS(725), 1,
      anon_sym_module,
    ACTIONS(727), 1,
      anon_sym_panel,
    STATE(176), 2,
      sym__module_export,
      sym_panel,
  [4267] = 3,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    STATE(343), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4277] = 3,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(42), 1,
      sym_name,
    STATE(130), 1,
      sym_decoration,
  [4287] = 3,
    ACTIONS(731), 1,
      anon_sym_font,
    ACTIONS(733), 1,
      anon_sym_project,
    ACTIONS(735), 1,
      anon_sym_script,
  [4297] = 3,
    ACTIONS(723), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      sym__offset_attr,
  [4307] = 3,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    STATE(342), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4317] = 3,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    STATE(341), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4327] = 1,
    ACTIONS(739), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [4333] = 3,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    STATE(340), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4343] = 3,
    ACTIONS(741), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(185), 1,
      sym__new_component,
  [4353] = 3,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    STATE(339), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4363] = 3,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    STATE(338), 1,
      sym__relative,
    STATE(352), 1,
      sym__offset,
  [4373] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    STATE(389), 1,
      sym_offset,
  [4383] = 3,
    ACTIONS(741), 1,
      aux_sym__input_id_token1,
    STATE(179), 1,
      sym_name,
    STATE(181), 1,
      sym__component,
  [4393] = 3,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(42), 1,
      sym_name,
    STATE(144), 1,
      sym_decoration,
  [4403] = 3,
    ACTIONS(741), 1,
      aux_sym__input_id_token1,
    STATE(172), 1,
      sym__component,
    STATE(179), 1,
      sym_name,
  [4413] = 3,
    ACTIONS(741), 1,
      aux_sym__input_id_token1,
    STATE(171), 1,
      sym__component,
    STATE(179), 1,
      sym_name,
  [4423] = 3,
    ACTIONS(741), 1,
      aux_sym__input_id_token1,
    STATE(95), 1,
      sym__component,
    STATE(179), 1,
      sym_name,
  [4433] = 3,
    ACTIONS(745), 1,
      aux_sym__label_id_token1,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
    ACTIONS(749), 1,
      anon_sym_SQUOTE,
  [4443] = 3,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      aux_sym__guide_id_token1,
    STATE(293), 1,
      sym__component_id,
  [4453] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
    STATE(315), 1,
      sym__component_y_attr,
  [4463] = 3,
    ACTIONS(723), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(349), 1,
      sym__offset_attr,
  [4473] = 3,
    ACTIONS(759), 1,
      anon_sym_name,
    ACTIONS(761), 1,
      anon_sym_height,
    ACTIONS(763), 1,
      anon_sym_width,
  [4483] = 3,
    ACTIONS(723), 1,
      aux_sym__offset_attr_token1,
    STATE(173), 1,
      sym__offset_xy_attr,
    STATE(304), 1,
      sym__offset_attr,
  [4493] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(187), 1,
      sym_colour,
  [4503] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(765), 1,
      aux_sym_origin_token1,
    STATE(157), 1,
      sym_offset,
  [4513] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
    STATE(321), 1,
      sym__component_xy_attr,
  [4523] = 3,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    ACTIONS(767), 1,
      aux_sym_origin_token1,
    STATE(161), 1,
      sym_offset,
  [4533] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
    STATE(320), 1,
      sym__component_xy_attr,
  [4543] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
    STATE(319), 1,
      sym__component_xy_attr,
  [4553] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
    STATE(318), 1,
      sym__component_xy_attr,
  [4563] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(223), 1,
      sym_name,
    STATE(316), 1,
      sym__component_xy_attr,
  [4573] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(245), 1,
      sym_name,
    STATE(305), 1,
      sym__component_x_attr,
  [4583] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(245), 1,
      sym_name,
    STATE(306), 1,
      sym__component_x_attr,
  [4593] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(245), 1,
      sym_name,
    STATE(307), 1,
      sym__component_x_attr,
  [4603] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(245), 1,
      sym_name,
    STATE(308), 1,
      sym__component_x_attr,
  [4613] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(245), 1,
      sym_name,
    STATE(309), 1,
      sym__component_x_attr,
  [4623] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
    STATE(310), 1,
      sym__component_y_attr,
  [4633] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
    STATE(312), 1,
      sym__component_y_attr,
  [4643] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
    STATE(313), 1,
      sym__component_y_attr,
  [4653] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(228), 1,
      sym_name,
    STATE(314), 1,
      sym__component_y_attr,
  [4663] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(232), 1,
      sym_name,
  [4670] = 1,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [4675] = 2,
    ACTIONS(769), 1,
      aux_sym__input_id_token1,
    STATE(187), 1,
      sym_font,
  [4682] = 2,
    ACTIONS(771), 1,
      anon_sym_svg,
    STATE(135), 1,
      sym_svg,
  [4689] = 2,
    ACTIONS(773), 1,
      aux_sym__input_id_token1,
    STATE(182), 1,
      sym_part,
  [4696] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(182), 1,
      sym_name,
  [4703] = 2,
    ACTIONS(775), 1,
      aux_sym__guide_attr_token1,
    STATE(177), 1,
      sym_identifier,
  [4710] = 2,
    ACTIONS(777), 1,
      anon_sym_scale,
    ACTIONS(779), 1,
      anon_sym_stretch,
  [4717] = 2,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    STATE(138), 1,
      sym__relative_attr,
  [4724] = 2,
    ACTIONS(781), 1,
      aux_sym__guide_attr_token1,
    STATE(136), 1,
      sym__guide_attr,
  [4731] = 2,
    ACTIONS(783), 1,
      sym_rgb,
    ACTIONS(785), 1,
      sym_rgba,
  [4738] = 2,
    ACTIONS(723), 1,
      aux_sym__offset_attr_token1,
    STATE(175), 1,
      sym__offset_attr,
  [4745] = 2,
    ACTIONS(723), 1,
      aux_sym__offset_attr_token1,
    STATE(174), 1,
      sym__offset_attr,
  [4752] = 2,
    ACTIONS(723), 1,
      aux_sym__offset_attr_token1,
    STATE(86), 1,
      sym__offset_attr,
  [4759] = 1,
    ACTIONS(787), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4764] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(225), 1,
      sym_name,
  [4771] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(222), 1,
      sym_name,
  [4778] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(221), 1,
      sym_name,
  [4785] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(229), 1,
      sym_name,
  [4792] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(219), 1,
      sym_name,
  [4799] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
  [4806] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(230), 1,
      sym_name,
  [4813] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(214), 1,
      sym_name,
  [4820] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
  [4827] = 2,
    ACTIONS(693), 1,
      aux_sym_offset_token1,
    STATE(369), 1,
      sym__offset,
  [4834] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(235), 1,
      sym_name,
  [4841] = 1,
    ACTIONS(789), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [4846] = 2,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym_offset,
  [4853] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(41), 1,
      sym_name,
  [4860] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(295), 1,
      sym_name,
  [4867] = 2,
    ACTIONS(791), 1,
      sym_height,
    ACTIONS(793), 1,
      sym_width,
  [4874] = 2,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    STATE(165), 1,
      sym_name,
  [4881] = 2,
    ACTIONS(795), 1,
      aux_sym__absolute_attr_token1,
    STATE(356), 1,
      sym__absolute_x_attr,
  [4888] = 2,
    ACTIONS(797), 1,
      aux_sym__absolute_attr_token1,
    STATE(106), 1,
      sym__absolute_y_attr,
  [4895] = 2,
    ACTIONS(655), 1,
      aux_sym__originx_token1,
    STATE(148), 1,
      sym__originx,
  [4902] = 2,
    ACTIONS(199), 1,
      anon_sym_font,
    STATE(154), 1,
      sym__font_id,
  [4909] = 2,
    ACTIONS(657), 1,
      aux_sym__originy_token1,
    STATE(148), 1,
      sym__originy,
  [4916] = 1,
    ACTIONS(799), 1,
      anon_sym_COMMA,
  [4920] = 1,
    ACTIONS(801), 1,
      anon_sym_COMMA,
  [4924] = 1,
    ACTIONS(803), 1,
      anon_sym_COMMA,
  [4928] = 1,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
  [4932] = 1,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
  [4936] = 1,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
  [4940] = 1,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
  [4944] = 1,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
  [4948] = 1,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
  [4952] = 1,
    ACTIONS(817), 1,
      anon_sym_gzip,
  [4956] = 1,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
  [4960] = 1,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [4964] = 1,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [4968] = 1,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [4972] = 1,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [4976] = 1,
    ACTIONS(829), 1,
      anon_sym_COMMA,
  [4980] = 1,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [4984] = 1,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [4988] = 1,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [4992] = 1,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [4996] = 1,
    ACTIONS(839), 1,
      sym_width,
  [5000] = 1,
    ACTIONS(841), 1,
      anon_sym_COMMA,
  [5004] = 1,
    ACTIONS(843), 1,
      aux_sym_absolute_token1,
  [5008] = 1,
    ACTIONS(845), 1,
      sym_rgb,
  [5012] = 1,
    ACTIONS(847), 1,
      anon_sym_COMMA,
  [5016] = 1,
    ACTIONS(849), 1,
      aux_sym__label_id_token2,
  [5020] = 1,
    ACTIONS(851), 1,
      aux_sym__input_id_token1,
  [5024] = 1,
    ACTIONS(853), 1,
      aux_sym__scale_token1,
  [5028] = 1,
    ACTIONS(855), 1,
      aux_sym__guide_id_token1,
  [5032] = 1,
    ACTIONS(857), 1,
      anon_sym_COMMA,
  [5036] = 1,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
  [5040] = 1,
    ACTIONS(861), 1,
      aux_sym_absolute_token1,
  [5044] = 1,
    ACTIONS(863), 1,
      aux_sym__input_id_token1,
  [5048] = 1,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
  [5052] = 1,
    ACTIONS(867), 1,
      aux_sym__input_id_token1,
  [5056] = 1,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
  [5060] = 1,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
  [5064] = 1,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
  [5068] = 1,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
  [5072] = 1,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
  [5076] = 1,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
  [5080] = 1,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
  [5084] = 1,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
  [5088] = 1,
    ACTIONS(885), 1,
      aux_sym__input_id_token1,
  [5092] = 1,
    ACTIONS(887), 1,
      aux_sym__input_id_token1,
  [5096] = 1,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
  [5100] = 1,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
  [5104] = 1,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
  [5108] = 1,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
  [5112] = 1,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
  [5116] = 1,
    ACTIONS(899), 1,
      anon_sym_COMMA,
  [5120] = 1,
    ACTIONS(901), 1,
      anon_sym_COMMA,
  [5124] = 1,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
  [5128] = 1,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
  [5132] = 1,
    ACTIONS(907), 1,
      anon_sym_COMMA,
  [5136] = 1,
    ACTIONS(909), 1,
      aux_sym__scale_token1,
  [5140] = 1,
    ACTIONS(911), 1,
      aux_sym__scale_token1,
  [5144] = 1,
    ACTIONS(913), 1,
      sym_fontsize,
  [5148] = 1,
    ACTIONS(915), 1,
      anon_sym_with,
  [5152] = 1,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
  [5156] = 1,
    ACTIONS(919), 1,
      aux_sym__label_id_token3,
  [5160] = 1,
    ACTIONS(921), 1,
      aux_sym_origin_token1,
  [5164] = 1,
    ACTIONS(923), 1,
      aux_sym_origin_token1,
  [5168] = 1,
    ACTIONS(925), 1,
      aux_sym__absolute_attr_token1,
  [5172] = 1,
    ACTIONS(927), 1,
      aux_sym__input_id_token1,
  [5176] = 1,
    ACTIONS(929), 1,
      anon_sym_COMMA,
  [5180] = 1,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
  [5184] = 1,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
  [5188] = 1,
    ACTIONS(779), 1,
      anon_sym_stretch,
  [5192] = 1,
    ACTIONS(935), 1,
      anon_sym_COMMA,
  [5196] = 1,
    ACTIONS(937), 1,
      aux_sym__input_id_token1,
  [5200] = 1,
    ACTIONS(939), 1,
      aux_sym_origin_token1,
  [5204] = 1,
    ACTIONS(941), 1,
      aux_sym_origin_token1,
  [5208] = 1,
    ACTIONS(845), 1,
      sym_rgba,
  [5212] = 1,
    ACTIONS(943), 1,
      anon_sym_LPAREN,
  [5216] = 1,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
  [5220] = 1,
    ACTIONS(947), 1,
      aux_sym__label_id_token3,
  [5224] = 1,
    ACTIONS(945), 1,
      anon_sym_SQUOTE,
  [5228] = 1,
    ACTIONS(949), 1,
      anon_sym_COMMA,
  [5232] = 1,
    ACTIONS(951), 1,
      aux_sym__label_id_token2,
  [5236] = 1,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
  [5240] = 1,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
  [5244] = 1,
    ACTIONS(957), 1,
      anon_sym_DQUOTE,
  [5248] = 1,
    ACTIONS(959), 1,
      aux_sym_relative_token1,
  [5252] = 1,
    ACTIONS(961), 1,
      sym_width,
  [5256] = 1,
    ACTIONS(961), 1,
      sym_height,
  [5260] = 1,
    ACTIONS(963), 1,
      ts_builtin_sym_end,
  [5264] = 1,
    ACTIONS(965), 1,
      anon_sym_COMMA,
  [5268] = 1,
    ACTIONS(967), 1,
      anon_sym_COMMA,
  [5272] = 1,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
  [5276] = 1,
    ACTIONS(971), 1,
      anon_sym_COMMA,
  [5280] = 1,
    ACTIONS(957), 1,
      anon_sym_SQUOTE,
  [5284] = 1,
    ACTIONS(973), 1,
      anon_sym_COMMA,
  [5288] = 1,
    ACTIONS(817), 1,
      anon_sym_timestamp,
  [5292] = 1,
    ACTIONS(975), 1,
      aux_sym__guide_id_token1,
  [5296] = 1,
    ACTIONS(977), 1,
      anon_sym_DQUOTE,
  [5300] = 1,
    ACTIONS(977), 1,
      anon_sym_SQUOTE,
  [5304] = 1,
    ACTIONS(979), 1,
      aux_sym_relative_token1,
  [5308] = 1,
    ACTIONS(981), 1,
      aux_sym_absolute_token1,
  [5312] = 1,
    ACTIONS(983), 1,
      aux_sym__label_id_token2,
  [5316] = 1,
    ACTIONS(985), 1,
      aux_sym__label_id_token3,
  [5320] = 1,
    ACTIONS(987), 1,
      anon_sym_COMMA,
  [5324] = 1,
    ACTIONS(989), 1,
      anon_sym_COMMA,
  [5328] = 1,
    ACTIONS(991), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 169,
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
  [SMALL_STATE(38)] = 1246,
  [SMALL_STATE(39)] = 1277,
  [SMALL_STATE(40)] = 1305,
  [SMALL_STATE(41)] = 1325,
  [SMALL_STATE(42)] = 1345,
  [SMALL_STATE(43)] = 1368,
  [SMALL_STATE(44)] = 1391,
  [SMALL_STATE(45)] = 1414,
  [SMALL_STATE(46)] = 1437,
  [SMALL_STATE(47)] = 1458,
  [SMALL_STATE(48)] = 1479,
  [SMALL_STATE(49)] = 1502,
  [SMALL_STATE(50)] = 1525,
  [SMALL_STATE(51)] = 1546,
  [SMALL_STATE(52)] = 1567,
  [SMALL_STATE(53)] = 1586,
  [SMALL_STATE(54)] = 1609,
  [SMALL_STATE(55)] = 1628,
  [SMALL_STATE(56)] = 1648,
  [SMALL_STATE(57)] = 1668,
  [SMALL_STATE(58)] = 1688,
  [SMALL_STATE(59)] = 1716,
  [SMALL_STATE(60)] = 1734,
  [SMALL_STATE(61)] = 1752,
  [SMALL_STATE(62)] = 1770,
  [SMALL_STATE(63)] = 1792,
  [SMALL_STATE(64)] = 1812,
  [SMALL_STATE(65)] = 1832,
  [SMALL_STATE(66)] = 1860,
  [SMALL_STATE(67)] = 1882,
  [SMALL_STATE(68)] = 1898,
  [SMALL_STATE(69)] = 1920,
  [SMALL_STATE(70)] = 1935,
  [SMALL_STATE(71)] = 1950,
  [SMALL_STATE(72)] = 1967,
  [SMALL_STATE(73)] = 1992,
  [SMALL_STATE(74)] = 2009,
  [SMALL_STATE(75)] = 2026,
  [SMALL_STATE(76)] = 2041,
  [SMALL_STATE(77)] = 2068,
  [SMALL_STATE(78)] = 2085,
  [SMALL_STATE(79)] = 2102,
  [SMALL_STATE(80)] = 2119,
  [SMALL_STATE(81)] = 2144,
  [SMALL_STATE(82)] = 2161,
  [SMALL_STATE(83)] = 2178,
  [SMALL_STATE(84)] = 2195,
  [SMALL_STATE(85)] = 2210,
  [SMALL_STATE(86)] = 2225,
  [SMALL_STATE(87)] = 2240,
  [SMALL_STATE(88)] = 2257,
  [SMALL_STATE(89)] = 2272,
  [SMALL_STATE(90)] = 2289,
  [SMALL_STATE(91)] = 2306,
  [SMALL_STATE(92)] = 2333,
  [SMALL_STATE(93)] = 2348,
  [SMALL_STATE(94)] = 2362,
  [SMALL_STATE(95)] = 2376,
  [SMALL_STATE(96)] = 2390,
  [SMALL_STATE(97)] = 2404,
  [SMALL_STATE(98)] = 2418,
  [SMALL_STATE(99)] = 2432,
  [SMALL_STATE(100)] = 2446,
  [SMALL_STATE(101)] = 2460,
  [SMALL_STATE(102)] = 2476,
  [SMALL_STATE(103)] = 2490,
  [SMALL_STATE(104)] = 2504,
  [SMALL_STATE(105)] = 2518,
  [SMALL_STATE(106)] = 2532,
  [SMALL_STATE(107)] = 2546,
  [SMALL_STATE(108)] = 2560,
  [SMALL_STATE(109)] = 2574,
  [SMALL_STATE(110)] = 2588,
  [SMALL_STATE(111)] = 2602,
  [SMALL_STATE(112)] = 2616,
  [SMALL_STATE(113)] = 2630,
  [SMALL_STATE(114)] = 2644,
  [SMALL_STATE(115)] = 2658,
  [SMALL_STATE(116)] = 2672,
  [SMALL_STATE(117)] = 2686,
  [SMALL_STATE(118)] = 2700,
  [SMALL_STATE(119)] = 2722,
  [SMALL_STATE(120)] = 2736,
  [SMALL_STATE(121)] = 2750,
  [SMALL_STATE(122)] = 2764,
  [SMALL_STATE(123)] = 2778,
  [SMALL_STATE(124)] = 2792,
  [SMALL_STATE(125)] = 2806,
  [SMALL_STATE(126)] = 2820,
  [SMALL_STATE(127)] = 2834,
  [SMALL_STATE(128)] = 2848,
  [SMALL_STATE(129)] = 2862,
  [SMALL_STATE(130)] = 2876,
  [SMALL_STATE(131)] = 2890,
  [SMALL_STATE(132)] = 2904,
  [SMALL_STATE(133)] = 2918,
  [SMALL_STATE(134)] = 2932,
  [SMALL_STATE(135)] = 2946,
  [SMALL_STATE(136)] = 2960,
  [SMALL_STATE(137)] = 2974,
  [SMALL_STATE(138)] = 2988,
  [SMALL_STATE(139)] = 3002,
  [SMALL_STATE(140)] = 3016,
  [SMALL_STATE(141)] = 3030,
  [SMALL_STATE(142)] = 3044,
  [SMALL_STATE(143)] = 3076,
  [SMALL_STATE(144)] = 3090,
  [SMALL_STATE(145)] = 3104,
  [SMALL_STATE(146)] = 3118,
  [SMALL_STATE(147)] = 3132,
  [SMALL_STATE(148)] = 3146,
  [SMALL_STATE(149)] = 3160,
  [SMALL_STATE(150)] = 3174,
  [SMALL_STATE(151)] = 3188,
  [SMALL_STATE(152)] = 3202,
  [SMALL_STATE(153)] = 3216,
  [SMALL_STATE(154)] = 3230,
  [SMALL_STATE(155)] = 3244,
  [SMALL_STATE(156)] = 3258,
  [SMALL_STATE(157)] = 3272,
  [SMALL_STATE(158)] = 3286,
  [SMALL_STATE(159)] = 3300,
  [SMALL_STATE(160)] = 3314,
  [SMALL_STATE(161)] = 3328,
  [SMALL_STATE(162)] = 3342,
  [SMALL_STATE(163)] = 3356,
  [SMALL_STATE(164)] = 3372,
  [SMALL_STATE(165)] = 3386,
  [SMALL_STATE(166)] = 3400,
  [SMALL_STATE(167)] = 3414,
  [SMALL_STATE(168)] = 3428,
  [SMALL_STATE(169)] = 3442,
  [SMALL_STATE(170)] = 3456,
  [SMALL_STATE(171)] = 3470,
  [SMALL_STATE(172)] = 3484,
  [SMALL_STATE(173)] = 3498,
  [SMALL_STATE(174)] = 3512,
  [SMALL_STATE(175)] = 3526,
  [SMALL_STATE(176)] = 3540,
  [SMALL_STATE(177)] = 3554,
  [SMALL_STATE(178)] = 3568,
  [SMALL_STATE(179)] = 3582,
  [SMALL_STATE(180)] = 3606,
  [SMALL_STATE(181)] = 3620,
  [SMALL_STATE(182)] = 3634,
  [SMALL_STATE(183)] = 3648,
  [SMALL_STATE(184)] = 3662,
  [SMALL_STATE(185)] = 3676,
  [SMALL_STATE(186)] = 3690,
  [SMALL_STATE(187)] = 3704,
  [SMALL_STATE(188)] = 3718,
  [SMALL_STATE(189)] = 3732,
  [SMALL_STATE(190)] = 3746,
  [SMALL_STATE(191)] = 3769,
  [SMALL_STATE(192)] = 3792,
  [SMALL_STATE(193)] = 3815,
  [SMALL_STATE(194)] = 3838,
  [SMALL_STATE(195)] = 3861,
  [SMALL_STATE(196)] = 3883,
  [SMALL_STATE(197)] = 3896,
  [SMALL_STATE(198)] = 3917,
  [SMALL_STATE(199)] = 3930,
  [SMALL_STATE(200)] = 3949,
  [SMALL_STATE(201)] = 3966,
  [SMALL_STATE(202)] = 3982,
  [SMALL_STATE(203)] = 3998,
  [SMALL_STATE(204)] = 4008,
  [SMALL_STATE(205)] = 4018,
  [SMALL_STATE(206)] = 4034,
  [SMALL_STATE(207)] = 4044,
  [SMALL_STATE(208)] = 4060,
  [SMALL_STATE(209)] = 4070,
  [SMALL_STATE(210)] = 4086,
  [SMALL_STATE(211)] = 4102,
  [SMALL_STATE(212)] = 4112,
  [SMALL_STATE(213)] = 4122,
  [SMALL_STATE(214)] = 4132,
  [SMALL_STATE(215)] = 4145,
  [SMALL_STATE(216)] = 4158,
  [SMALL_STATE(217)] = 4169,
  [SMALL_STATE(218)] = 4182,
  [SMALL_STATE(219)] = 4191,
  [SMALL_STATE(220)] = 4204,
  [SMALL_STATE(221)] = 4217,
  [SMALL_STATE(222)] = 4230,
  [SMALL_STATE(223)] = 4243,
  [SMALL_STATE(224)] = 4256,
  [SMALL_STATE(225)] = 4267,
  [SMALL_STATE(226)] = 4277,
  [SMALL_STATE(227)] = 4287,
  [SMALL_STATE(228)] = 4297,
  [SMALL_STATE(229)] = 4307,
  [SMALL_STATE(230)] = 4317,
  [SMALL_STATE(231)] = 4327,
  [SMALL_STATE(232)] = 4333,
  [SMALL_STATE(233)] = 4343,
  [SMALL_STATE(234)] = 4353,
  [SMALL_STATE(235)] = 4363,
  [SMALL_STATE(236)] = 4373,
  [SMALL_STATE(237)] = 4383,
  [SMALL_STATE(238)] = 4393,
  [SMALL_STATE(239)] = 4403,
  [SMALL_STATE(240)] = 4413,
  [SMALL_STATE(241)] = 4423,
  [SMALL_STATE(242)] = 4433,
  [SMALL_STATE(243)] = 4443,
  [SMALL_STATE(244)] = 4453,
  [SMALL_STATE(245)] = 4463,
  [SMALL_STATE(246)] = 4473,
  [SMALL_STATE(247)] = 4483,
  [SMALL_STATE(248)] = 4493,
  [SMALL_STATE(249)] = 4503,
  [SMALL_STATE(250)] = 4513,
  [SMALL_STATE(251)] = 4523,
  [SMALL_STATE(252)] = 4533,
  [SMALL_STATE(253)] = 4543,
  [SMALL_STATE(254)] = 4553,
  [SMALL_STATE(255)] = 4563,
  [SMALL_STATE(256)] = 4573,
  [SMALL_STATE(257)] = 4583,
  [SMALL_STATE(258)] = 4593,
  [SMALL_STATE(259)] = 4603,
  [SMALL_STATE(260)] = 4613,
  [SMALL_STATE(261)] = 4623,
  [SMALL_STATE(262)] = 4633,
  [SMALL_STATE(263)] = 4643,
  [SMALL_STATE(264)] = 4653,
  [SMALL_STATE(265)] = 4663,
  [SMALL_STATE(266)] = 4670,
  [SMALL_STATE(267)] = 4675,
  [SMALL_STATE(268)] = 4682,
  [SMALL_STATE(269)] = 4689,
  [SMALL_STATE(270)] = 4696,
  [SMALL_STATE(271)] = 4703,
  [SMALL_STATE(272)] = 4710,
  [SMALL_STATE(273)] = 4717,
  [SMALL_STATE(274)] = 4724,
  [SMALL_STATE(275)] = 4731,
  [SMALL_STATE(276)] = 4738,
  [SMALL_STATE(277)] = 4745,
  [SMALL_STATE(278)] = 4752,
  [SMALL_STATE(279)] = 4759,
  [SMALL_STATE(280)] = 4764,
  [SMALL_STATE(281)] = 4771,
  [SMALL_STATE(282)] = 4778,
  [SMALL_STATE(283)] = 4785,
  [SMALL_STATE(284)] = 4792,
  [SMALL_STATE(285)] = 4799,
  [SMALL_STATE(286)] = 4806,
  [SMALL_STATE(287)] = 4813,
  [SMALL_STATE(288)] = 4820,
  [SMALL_STATE(289)] = 4827,
  [SMALL_STATE(290)] = 4834,
  [SMALL_STATE(291)] = 4841,
  [SMALL_STATE(292)] = 4846,
  [SMALL_STATE(293)] = 4853,
  [SMALL_STATE(294)] = 4860,
  [SMALL_STATE(295)] = 4867,
  [SMALL_STATE(296)] = 4874,
  [SMALL_STATE(297)] = 4881,
  [SMALL_STATE(298)] = 4888,
  [SMALL_STATE(299)] = 4895,
  [SMALL_STATE(300)] = 4902,
  [SMALL_STATE(301)] = 4909,
  [SMALL_STATE(302)] = 4916,
  [SMALL_STATE(303)] = 4920,
  [SMALL_STATE(304)] = 4924,
  [SMALL_STATE(305)] = 4928,
  [SMALL_STATE(306)] = 4932,
  [SMALL_STATE(307)] = 4936,
  [SMALL_STATE(308)] = 4940,
  [SMALL_STATE(309)] = 4944,
  [SMALL_STATE(310)] = 4948,
  [SMALL_STATE(311)] = 4952,
  [SMALL_STATE(312)] = 4956,
  [SMALL_STATE(313)] = 4960,
  [SMALL_STATE(314)] = 4964,
  [SMALL_STATE(315)] = 4968,
  [SMALL_STATE(316)] = 4972,
  [SMALL_STATE(317)] = 4976,
  [SMALL_STATE(318)] = 4980,
  [SMALL_STATE(319)] = 4984,
  [SMALL_STATE(320)] = 4988,
  [SMALL_STATE(321)] = 4992,
  [SMALL_STATE(322)] = 4996,
  [SMALL_STATE(323)] = 5000,
  [SMALL_STATE(324)] = 5004,
  [SMALL_STATE(325)] = 5008,
  [SMALL_STATE(326)] = 5012,
  [SMALL_STATE(327)] = 5016,
  [SMALL_STATE(328)] = 5020,
  [SMALL_STATE(329)] = 5024,
  [SMALL_STATE(330)] = 5028,
  [SMALL_STATE(331)] = 5032,
  [SMALL_STATE(332)] = 5036,
  [SMALL_STATE(333)] = 5040,
  [SMALL_STATE(334)] = 5044,
  [SMALL_STATE(335)] = 5048,
  [SMALL_STATE(336)] = 5052,
  [SMALL_STATE(337)] = 5056,
  [SMALL_STATE(338)] = 5060,
  [SMALL_STATE(339)] = 5064,
  [SMALL_STATE(340)] = 5068,
  [SMALL_STATE(341)] = 5072,
  [SMALL_STATE(342)] = 5076,
  [SMALL_STATE(343)] = 5080,
  [SMALL_STATE(344)] = 5084,
  [SMALL_STATE(345)] = 5088,
  [SMALL_STATE(346)] = 5092,
  [SMALL_STATE(347)] = 5096,
  [SMALL_STATE(348)] = 5100,
  [SMALL_STATE(349)] = 5104,
  [SMALL_STATE(350)] = 5108,
  [SMALL_STATE(351)] = 5112,
  [SMALL_STATE(352)] = 5116,
  [SMALL_STATE(353)] = 5120,
  [SMALL_STATE(354)] = 5124,
  [SMALL_STATE(355)] = 5128,
  [SMALL_STATE(356)] = 5132,
  [SMALL_STATE(357)] = 5136,
  [SMALL_STATE(358)] = 5140,
  [SMALL_STATE(359)] = 5144,
  [SMALL_STATE(360)] = 5148,
  [SMALL_STATE(361)] = 5152,
  [SMALL_STATE(362)] = 5156,
  [SMALL_STATE(363)] = 5160,
  [SMALL_STATE(364)] = 5164,
  [SMALL_STATE(365)] = 5168,
  [SMALL_STATE(366)] = 5172,
  [SMALL_STATE(367)] = 5176,
  [SMALL_STATE(368)] = 5180,
  [SMALL_STATE(369)] = 5184,
  [SMALL_STATE(370)] = 5188,
  [SMALL_STATE(371)] = 5192,
  [SMALL_STATE(372)] = 5196,
  [SMALL_STATE(373)] = 5200,
  [SMALL_STATE(374)] = 5204,
  [SMALL_STATE(375)] = 5208,
  [SMALL_STATE(376)] = 5212,
  [SMALL_STATE(377)] = 5216,
  [SMALL_STATE(378)] = 5220,
  [SMALL_STATE(379)] = 5224,
  [SMALL_STATE(380)] = 5228,
  [SMALL_STATE(381)] = 5232,
  [SMALL_STATE(382)] = 5236,
  [SMALL_STATE(383)] = 5240,
  [SMALL_STATE(384)] = 5244,
  [SMALL_STATE(385)] = 5248,
  [SMALL_STATE(386)] = 5252,
  [SMALL_STATE(387)] = 5256,
  [SMALL_STATE(388)] = 5260,
  [SMALL_STATE(389)] = 5264,
  [SMALL_STATE(390)] = 5268,
  [SMALL_STATE(391)] = 5272,
  [SMALL_STATE(392)] = 5276,
  [SMALL_STATE(393)] = 5280,
  [SMALL_STATE(394)] = 5284,
  [SMALL_STATE(395)] = 5288,
  [SMALL_STATE(396)] = 5292,
  [SMALL_STATE(397)] = 5296,
  [SMALL_STATE(398)] = 5300,
  [SMALL_STATE(399)] = 5304,
  [SMALL_STATE(400)] = 5308,
  [SMALL_STATE(401)] = 5312,
  [SMALL_STATE(402)] = 5316,
  [SMALL_STATE(403)] = 5320,
  [SMALL_STATE(404)] = 5324,
  [SMALL_STATE(405)] = 5328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 16),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 16),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 22),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 22),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 10),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 10),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
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
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(335),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(227),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(300),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(216),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(224),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(231),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 15),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 14),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 13),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 27),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 8),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 20),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 19),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 18),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 17),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 18),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 17),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 18),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 17),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 15),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 15),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 15),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 5),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 12),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 12),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 11),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 9),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 8),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 13),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 4),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 21),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [963] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 4),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
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
