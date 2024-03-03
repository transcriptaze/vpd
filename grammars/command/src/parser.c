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
#define STATE_COUNT 342
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 185
#define ALIAS_COUNT 1
#define TOKEN_COUNT 94
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 23

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_module = 4,
  anon_sym_name = 5,
  anon_sym_height = 6,
  anon_sym_width = 7,
  anon_sym_x = 8,
  anon_sym_y = 9,
  anon_sym_xy = 10,
  anon_sym_part = 11,
  anon_sym_text = 12,
  anon_sym_font = 13,
  anon_sym_size = 14,
  anon_sym_halign = 15,
  anon_sym_valign = 16,
  anon_sym_align = 17,
  anon_sym_colour = 18,
  anon_sym_color = 19,
  anon_sym_id = 20,
  aux_sym__offset_attr_token1 = 21,
  anon_sym_COMMA = 22,
  anon_sym_AT = 23,
  aux_sym__absolute_attr_token1 = 24,
  anon_sym_left = 25,
  anon_sym_centre = 26,
  anon_sym_center = 27,
  anon_sym_right = 28,
  aux_sym__geometry_x_attr_token1 = 29,
  anon_sym_top = 30,
  anon_sym_middle = 31,
  anon_sym_bottom = 32,
  aux_sym__guide_attr_token1 = 33,
  aux_sym__guide_attr_token2 = 34,
  anon_sym_decoration = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_decorate = 38,
  anon_sym_with = 39,
  anon_sym_delete = 40,
  anon_sym_guide = 41,
  aux_sym__guide_id_token1 = 42,
  anon_sym_input = 43,
  aux_sym__input_id_token1 = 44,
  anon_sym_output = 45,
  anon_sym_parameter = 46,
  anon_sym_light = 47,
  anon_sym_widget = 48,
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
  sym_set = 96,
  sym__module_attr = 97,
  sym__component_attr = 98,
  sym__label_attr = 99,
  sym__decoration_attr = 100,
  sym__guideline_attr = 101,
  sym__x_attr = 102,
  sym__y_attr = 103,
  sym__xy_attr = 104,
  sym__offset_attr = 105,
  sym__offset_xy_attr = 106,
  sym__absolute_attr = 107,
  sym__absolute_x_attr = 108,
  sym__absolute_y_attr = 109,
  sym__absolute_xy_attr = 110,
  sym__relative_attr = 111,
  sym__relative_xy_attr = 112,
  sym__geometry_x_attr = 113,
  sym__geometry_y_attr = 114,
  sym__geometry_xy_attr = 115,
  sym__guide_attr = 116,
  sym__guide_xy_attr = 117,
  sym__new_decoration = 118,
  sym_decorate = 119,
  sym_delete = 120,
  sym__guide_id = 121,
  sym__input_id = 122,
  sym__output_id = 123,
  sym__parameter_id = 124,
  sym__light_id = 125,
  sym__widget_id = 126,
  sym__label_id = 127,
  sym__decoration_id = 128,
  sym__font_id = 129,
  sym__component_id = 130,
  sym_load = 131,
  sym_unload = 132,
  sym_save = 133,
  sym_export = 134,
  sym__module_export = 135,
  sym_list = 136,
  sym_project = 137,
  sym_script = 138,
  sym__entity = 139,
  sym__input = 140,
  sym__output = 141,
  sym__parameter = 142,
  sym__light = 143,
  sym__widget = 144,
  sym_module = 145,
  sym_input = 146,
  sym_output = 147,
  sym_parameter = 148,
  sym_light = 149,
  sym_widget = 150,
  sym__component = 151,
  sym_label = 152,
  sym_font = 153,
  sym__align = 154,
  sym_halign = 155,
  sym_valign = 156,
  sym_colour = 157,
  sym_decoration = 158,
  sym__scale = 159,
  sym_stretch = 160,
  sym_origin = 161,
  sym__originx = 162,
  sym__originy = 163,
  sym_background = 164,
  sym_panel = 165,
  sym_svg = 166,
  sym_name = 167,
  sym_part = 168,
  sym_guide = 169,
  sym_identifier = 170,
  sym_vertical = 171,
  sym_horizontal = 172,
  sym_geometry = 173,
  sym_offset = 174,
  sym__offset = 175,
  sym_guideline = 176,
  sym__string = 177,
  sym_absolute = 178,
  sym_relative = 179,
  sym__decorate = 180,
  sym__relative = 181,
  sym_x = 182,
  sym_y = 183,
  aux_sym_command_repeat1 = 184,
  alias_sym_dy = 185,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
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
  [aux_sym__offset_attr_token1] = "offset",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_decorate] = "decorate",
  [anon_sym_with] = "with",
  [anon_sym_delete] = "delete",
  [anon_sym_guide] = "guide",
  [aux_sym__guide_id_token1] = "identifier",
  [anon_sym_input] = "input",
  [aux_sym__input_id_token1] = "_input_id_token1",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
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
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__component_attr] = "_component_attr",
  [sym__label_attr] = "_label_attr",
  [sym__decoration_attr] = "_decoration_attr",
  [sym__guideline_attr] = "_guideline_attr",
  [sym__x_attr] = "x",
  [sym__y_attr] = "y",
  [sym__xy_attr] = "xy",
  [sym__offset_attr] = "x",
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
  [sym__entity] = "_entity",
  [sym__input] = "input",
  [sym__output] = "output",
  [sym__parameter] = "parameter",
  [sym__light] = "light",
  [sym__widget] = "widget",
  [sym_module] = "module",
  [sym_input] = "input",
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
  [aux_sym__offset_attr_token1] = sym_offset,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_guide] = anon_sym_guide,
  [aux_sym__guide_id_token1] = sym_identifier,
  [anon_sym_input] = anon_sym_input,
  [aux_sym__input_id_token1] = aux_sym__input_id_token1,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
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
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym__component_attr] = sym__component_attr,
  [sym__label_attr] = sym__label_attr,
  [sym__decoration_attr] = sym__decoration_attr,
  [sym__guideline_attr] = sym__guideline_attr,
  [sym__x_attr] = sym_x,
  [sym__y_attr] = sym_y,
  [sym__xy_attr] = sym__xy_attr,
  [sym__offset_attr] = sym_x,
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
  [sym__new_decoration] = sym_decoration,
  [sym_decorate] = sym_decorate,
  [sym_delete] = sym_delete,
  [sym__guide_id] = sym_guide,
  [sym__input_id] = sym_input,
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
  [sym__entity] = sym__entity,
  [sym__input] = sym_input,
  [sym__output] = sym_output,
  [sym__parameter] = sym_parameter,
  [sym__light] = sym_light,
  [sym__widget] = sym_widget,
  [sym_module] = sym_module,
  [sym_input] = sym_input,
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
  [aux_sym__offset_attr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__input_id_token1] = {
    .visible = false,
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
    .visible = true,
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
  [sym__entity] = {
    .visible = false,
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
  [sym_input] = {
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
    [2] = sym_y,
  },
  [10] = {
    [1] = sym_light,
  },
  [11] = {
    [1] = sym_absolute,
  },
  [12] = {
    [1] = aux_sym__string_token1,
  },
  [13] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [14] = {
    [0] = sym_x,
    [2] = sym_y,
  },
  [15] = {
    [3] = sym_y,
  },
  [16] = {
    [2] = alias_sym_dy,
  },
  [17] = {
    [1] = sym_input,
  },
  [18] = {
    [1] = sym_output,
  },
  [19] = {
    [1] = sym_parameter,
  },
  [20] = {
    [1] = sym_widget,
  },
  [21] = {
    [1] = sym_label,
  },
  [22] = {
    [2] = sym_x,
    [4] = sym_y,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__offset_attr, 2,
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
  [44] = 11,
  [45] = 45,
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
  [66] = 66,
  [67] = 13,
  [68] = 68,
  [69] = 69,
  [70] = 12,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 18,
  [78] = 16,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 12,
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
  [163] = 89,
  [164] = 164,
  [165] = 165,
  [166] = 105,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 27,
  [177] = 136,
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
  [332] = 329,
  [333] = 301,
  [334] = 300,
  [335] = 265,
  [336] = 262,
  [337] = 322,
  [338] = 321,
  [339] = 303,
  [340] = 261,
  [341] = 304,
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
      if (lookahead == '(') ADVANCE(446);
      if (lookahead == ')') ADVANCE(447);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '0') ADVANCE(364);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '@') ADVANCE(371);
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
      if (lookahead == 'x') ADVANCE(349);
      if (lookahead == 'y') ADVANCE(350);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(365);
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
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(446);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'U') ADVANCE(582);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '5') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(584);
      if (lookahead == 'p') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'm') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(589);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '8') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'H') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(593);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(187);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(187);
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 25:
      if (lookahead == ';') ADVANCE(340);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(551);
      END_STATE();
    case 27:
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'b') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'b') ADVANCE(424);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(371);
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
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
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
      if (lookahead == 't') ADVANCE(352);
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
      if (lookahead == 'b') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == 'h') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == 'v') ADVANCE(409);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
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
      if (lookahead == 'd') ADVANCE(361);
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
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(448);
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
      if (lookahead == 'h') ADVANCE(450);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(348);
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
      if (lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(560);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(396);
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
      if (lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(572);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(442);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(592);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(387);
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
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(445);
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
      if (lookahead == 'p') ADVANCE(390);
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
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(524);
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
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(526);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
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
      if (lookahead == ')') ADVANCE(447);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(457);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead == 'n') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == 't') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(492);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(334)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 335:
      if (eof) ADVANCE(339);
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(469);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(492);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(335)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 336:
      if (eof) ADVANCE(339);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '(') ADVANCE(446);
      if (lookahead == ')') ADVANCE(447);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == ';') ADVANCE(25);
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
      if (lookahead == 'x') ADVANCE(349);
      if (lookahead == 'y') ADVANCE(350);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(336)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 337:
      if (eof) ADVANCE(339);
      if (lookahead == '#') ADVANCE(331);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '@') ADVANCE(371);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 338:
      if (eof) ADVANCE(339);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == ';') ADVANCE(25);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'H') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'H') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(372);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(372);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(389);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'r') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == 'H') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(496);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_widget);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
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
  [10] = {.lex_state = 336},
  [11] = {.lex_state = 334},
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
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 335},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 336},
  [52] = {.lex_state = 336},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 337},
  [56] = {.lex_state = 336},
  [57] = {.lex_state = 336},
  [58] = {.lex_state = 338},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 335},
  [63] = {.lex_state = 335},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 338},
  [67] = {.lex_state = 335},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 335},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 335},
  [78] = {.lex_state = 335},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 30},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 55},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 27},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 28},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 28},
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
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 336},
  [171] = {.lex_state = 336},
  [172] = {.lex_state = 336},
  [173] = {.lex_state = 336},
  [174] = {.lex_state = 29},
  [175] = {.lex_state = 29},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 336},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 336},
  [181] = {.lex_state = 336},
  [182] = {.lex_state = 28},
  [183] = {.lex_state = 337},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 28},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 336},
  [188] = {.lex_state = 336},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 334},
  [193] = {.lex_state = 334},
  [194] = {.lex_state = 334},
  [195] = {.lex_state = 334},
  [196] = {.lex_state = 336},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 334},
  [199] = {.lex_state = 334},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 338},
  [202] = {.lex_state = 334},
  [203] = {.lex_state = 334},
  [204] = {.lex_state = 334},
  [205] = {.lex_state = 27},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 334},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 334},
  [215] = {.lex_state = 334},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 334},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 334},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 312},
  [231] = {.lex_state = 27},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 312},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 27},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 337},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 337},
  [242] = {.lex_state = 27},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 27},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 334},
  [251] = {.lex_state = 334},
  [252] = {.lex_state = 337},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 336},
  [257] = {.lex_state = 337},
  [258] = {.lex_state = 533},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 55},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 7},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 334},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 336},
  [280] = {.lex_state = 335},
  [281] = {.lex_state = 335},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 335},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 337},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 55},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 334},
  [309] = {.lex_state = 334},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 334},
  [314] = {.lex_state = 337},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 334},
  [318] = {.lex_state = 538},
  [319] = {.lex_state = 336},
  [320] = {.lex_state = 336},
  [321] = {.lex_state = 538},
  [322] = {.lex_state = 533},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 8},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 7},
  [336] = {.lex_state = 55},
  [337] = {.lex_state = 533},
  [338] = {.lex_state = 538},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 55},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
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
    [aux_sym__offset_attr_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
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
    [sym_command] = STATE(331),
    [sym_new] = STATE(26),
    [sym_set] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym_delete] = STATE(26),
    [sym_load] = STATE(26),
    [sym_unload] = STATE(26),
    [sym_save] = STATE(26),
    [sym_export] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_command_repeat1] = STATE(26),
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
    STATE(4), 1,
      sym_font,
    STATE(42), 1,
      sym_halign,
    STATE(49), 1,
      sym__align,
    STATE(53), 1,
      sym_valign,
    STATE(157), 1,
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
    STATE(42), 1,
      sym_halign,
    STATE(50), 1,
      sym__align,
    STATE(53), 1,
      sym_valign,
    STATE(112), 1,
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
  [110] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(53), 1,
      sym_fontsize,
    STATE(42), 1,
      sym_halign,
    STATE(47), 1,
      sym__align,
    STATE(53), 1,
      sym_valign,
    STATE(106), 1,
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
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [157] = 16,
    ACTIONS(55), 1,
      anon_sym_module,
    ACTIONS(57), 1,
      anon_sym_decoration,
    ACTIONS(59), 1,
      anon_sym_guide,
    ACTIONS(61), 1,
      anon_sym_input,
    ACTIONS(63), 1,
      anon_sym_output,
    ACTIONS(65), 1,
      anon_sym_parameter,
    ACTIONS(67), 1,
      anon_sym_light,
    ACTIONS(69), 1,
      anon_sym_widget,
    ACTIONS(71), 1,
      anon_sym_label,
    ACTIONS(73), 1,
      anon_sym_origin,
    ACTIONS(75), 1,
      anon_sym_background,
    STATE(36), 1,
      sym__guide_id,
    STATE(141), 1,
      sym__label_id,
    STATE(179), 1,
      sym__decoration_id,
    STATE(186), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(154), 7,
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
    STATE(45), 1,
      sym__align,
    STATE(53), 1,
      sym_valign,
    STATE(91), 1,
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
    STATE(42), 1,
      sym_halign,
    STATE(49), 1,
      sym__align,
    STATE(53), 1,
      sym_valign,
    STATE(157), 1,
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
    STATE(42), 1,
      sym_halign,
    STATE(47), 1,
      sym__align,
    STATE(53), 1,
      sym_valign,
    STATE(106), 1,
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
    STATE(42), 1,
      sym_halign,
    STATE(48), 1,
      sym__align,
    STATE(53), 1,
      sym_valign,
    STATE(101), 1,
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
      anon_sym_set,
      anon_sym_decorate,
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
    STATE(42), 1,
      sym_halign,
    STATE(45), 1,
      sym__align,
    STATE(53), 1,
      sym_valign,
    STATE(91), 1,
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
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [439] = 4,
    ACTIONS(87), 1,
      aux_sym_offset_token1,
    STATE(16), 1,
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
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_new,
    ACTIONS(149), 1,
      anon_sym_set,
    ACTIONS(152), 1,
      anon_sym_decorate,
    ACTIONS(155), 1,
      anon_sym_delete,
    ACTIONS(158), 1,
      anon_sym_load,
    ACTIONS(161), 1,
      anon_sym_unload,
    ACTIONS(164), 1,
      anon_sym_save,
    ACTIONS(167), 1,
      anon_sym_export,
    ACTIONS(170), 1,
      anon_sym_list,
    STATE(25), 10,
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
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym_comment,
    STATE(25), 10,
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
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_module,
    ACTIONS(183), 1,
      anon_sym_decoration,
    ACTIONS(185), 1,
      anon_sym_guide,
    ACTIONS(187), 1,
      anon_sym_input,
    ACTIONS(189), 1,
      anon_sym_output,
    ACTIONS(191), 1,
      anon_sym_light,
    ACTIONS(193), 1,
      anon_sym_widget,
    ACTIONS(195), 1,
      anon_sym_label,
    ACTIONS(197), 1,
      aux_sym_parameter_token1,
    STATE(134), 10,
      sym__new_decoration,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [990] = 10,
    ACTIONS(57), 1,
      anon_sym_decoration,
    ACTIONS(61), 1,
      anon_sym_input,
    ACTIONS(63), 1,
      anon_sym_output,
    ACTIONS(65), 1,
      anon_sym_parameter,
    ACTIONS(67), 1,
      anon_sym_light,
    ACTIONS(69), 1,
      anon_sym_widget,
    ACTIONS(71), 1,
      anon_sym_label,
    ACTIONS(199), 1,
      anon_sym_font,
    ACTIONS(201), 1,
      anon_sym_guide,
    STATE(160), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [1029] = 2,
    ACTIONS(205), 1,
      anon_sym_x,
    ACTIONS(203), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_RPAREN,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1051] = 2,
    ACTIONS(209), 1,
      anon_sym_x,
    ACTIONS(207), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_RPAREN,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1073] = 2,
    ACTIONS(213), 1,
      anon_sym_x,
    ACTIONS(211), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_RPAREN,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1095] = 2,
    ACTIONS(217), 1,
      anon_sym_x,
    ACTIONS(215), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_RPAREN,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1117] = 8,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(223), 1,
      anon_sym_vertical,
    ACTIONS(225), 1,
      anon_sym_horizontal,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    STATE(149), 1,
      sym_offset,
    STATE(250), 1,
      sym_identifier,
    STATE(148), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(219), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1151] = 2,
    ACTIONS(231), 1,
      anon_sym_x,
    ACTIONS(229), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_RPAREN,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1173] = 7,
    ACTIONS(233), 1,
      anon_sym_id,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(241), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(109), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1204] = 9,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(243), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    STATE(158), 1,
      sym__xy_attr,
    STATE(283), 1,
      sym__guide_attr,
    STATE(284), 1,
      sym__geometry_x_attr,
    STATE(286), 1,
      sym__relative_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(153), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1238] = 9,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(243), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    STATE(142), 1,
      sym__xy_attr,
    STATE(283), 1,
      sym__guide_attr,
    STATE(284), 1,
      sym__geometry_x_attr,
    STATE(286), 1,
      sym__relative_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(153), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1272] = 6,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(223), 1,
      anon_sym_vertical,
    ACTIONS(225), 1,
      anon_sym_horizontal,
    STATE(34), 1,
      sym_identifier,
    STATE(92), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(219), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1300] = 2,
    ACTIONS(249), 1,
      anon_sym_x,
    ACTIONS(247), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_LPAREN,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1320] = 2,
    ACTIONS(253), 1,
      anon_sym_x,
    ACTIONS(251), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_LPAREN,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1340] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      sym_rgb,
    ACTIONS(255), 12,
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
  [1361] = 2,
    ACTIONS(263), 1,
      sym_rgb,
    ACTIONS(261), 13,
      ts_builtin_sym_end,
      sym_comment,
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
      sym_rgba,
  [1380] = 4,
    ACTIONS(265), 1,
      aux_sym_offset_token1,
    STATE(78), 1,
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
  [1403] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(157), 1,
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
  [1426] = 4,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__scale,
    STATE(165), 1,
      sym_stretch,
    ACTIONS(267), 11,
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
  [1449] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(101), 1,
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
  [1472] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(98), 1,
      sym_colour,
    ACTIONS(271), 11,
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
  [1495] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(106), 1,
      sym_colour,
    ACTIONS(47), 11,
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
  [1518] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(91), 1,
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
  [1541] = 3,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    STATE(75), 1,
      sym_offset,
    ACTIONS(273), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1562] = 3,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    STATE(76), 1,
      sym_offset,
    ACTIONS(275), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1583] = 3,
    ACTIONS(259), 1,
      sym_rgb,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(255), 12,
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
  [1604] = 2,
    ACTIONS(281), 1,
      sym_rgb,
    ACTIONS(279), 13,
      ts_builtin_sym_end,
      sym_comment,
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
      sym_rgba,
  [1623] = 2,
    ACTIONS(285), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(283), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1641] = 3,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    STATE(87), 1,
      sym_offset,
    ACTIONS(287), 11,
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
  [1661] = 3,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    STATE(139), 1,
      sym_offset,
    ACTIONS(289), 11,
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
  [1681] = 2,
    ACTIONS(293), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(291), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1699] = 2,
    ACTIONS(297), 1,
      sym_rgb,
    ACTIONS(295), 12,
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
  [1717] = 3,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_stretch,
    ACTIONS(299), 11,
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
  [1737] = 3,
    ACTIONS(305), 1,
      anon_sym_light,
    ACTIONS(307), 1,
      anon_sym_dark,
    ACTIONS(303), 11,
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
  [1757] = 4,
    ACTIONS(313), 1,
      aux_sym__input_id_token1,
    STATE(114), 1,
      sym_part,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(311), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1779] = 4,
    ACTIONS(313), 1,
      aux_sym__input_id_token1,
    STATE(162), 1,
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
  [1801] = 3,
    ACTIONS(321), 1,
      anon_sym_timestamp,
    ACTIONS(323), 1,
      anon_sym_gzip,
    ACTIONS(319), 11,
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
  [1821] = 2,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(325), 11,
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
  [1838] = 2,
    ACTIONS(331), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(329), 11,
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
  [1855] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(95), 10,
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
  [1872] = 1,
    ACTIONS(333), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1887] = 2,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(335), 11,
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
  [1904] = 2,
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
  [1921] = 1,
    ACTIONS(339), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_LPAREN,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1936] = 2,
    ACTIONS(343), 1,
      anon_sym_timestamp,
    ACTIONS(341), 11,
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
  [1953] = 1,
    ACTIONS(345), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1968] = 1,
    ACTIONS(347), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1983] = 1,
    ACTIONS(349), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [1998] = 1,
    ACTIONS(351), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2013] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(115), 10,
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
  [2030] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(107), 10,
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
  [2047] = 2,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(325), 11,
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
  [2064] = 6,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      aux_sym__guide_attr_token1,
    STATE(142), 1,
      sym__x_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(156), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2089] = 6,
    ACTIONS(355), 1,
      anon_sym_AT,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      aux_sym_relative_token1,
    STATE(299), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(357), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2114] = 6,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      aux_sym__guide_attr_token1,
    STATE(158), 1,
      sym__x_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(156), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2139] = 2,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(363), 11,
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
  [2156] = 2,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(363), 11,
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
  [2173] = 1,
    ACTIONS(89), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2188] = 1,
    ACTIONS(369), 12,
      ts_builtin_sym_end,
      sym_comment,
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
  [2203] = 1,
    ACTIONS(371), 11,
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
  [2217] = 1,
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
  [2231] = 2,
    ACTIONS(377), 1,
      aux_sym_offset_token1,
    ACTIONS(375), 10,
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
  [2247] = 1,
    ACTIONS(379), 11,
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
  [2261] = 1,
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
  [2275] = 1,
    ACTIONS(381), 11,
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
  [2289] = 1,
    ACTIONS(383), 11,
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
  [2303] = 6,
    ACTIONS(385), 1,
      anon_sym_AT,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      aux_sym_relative_token1,
    STATE(302), 1,
      sym_x,
    STATE(62), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(357), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2327] = 1,
    ACTIONS(391), 11,
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
  [2341] = 1,
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
  [2355] = 1,
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
  [2369] = 1,
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
  [2383] = 1,
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
  [2397] = 1,
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
  [2411] = 1,
    ACTIONS(271), 11,
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
  [2425] = 1,
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
  [2439] = 1,
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
  [2453] = 1,
    ACTIONS(407), 11,
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
  [2467] = 2,
    ACTIONS(411), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(409), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2483] = 1,
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
  [2497] = 1,
    ACTIONS(363), 11,
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
  [2511] = 1,
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
  [2525] = 1,
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
  [2539] = 1,
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
  [2553] = 6,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      aux_sym__guide_attr_token1,
    STATE(158), 1,
      sym__y_attr,
    ACTIONS(241), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(155), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2577] = 1,
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
  [2591] = 6,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      aux_sym__guide_attr_token1,
    STATE(142), 1,
      sym__y_attr,
    ACTIONS(241), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(155), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2615] = 1,
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
  [2629] = 1,
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
  [2643] = 1,
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
  [2657] = 1,
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
  [2671] = 5,
    STATE(42), 1,
      sym_halign,
    STATE(53), 1,
      sym_valign,
    STATE(142), 1,
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
  [2693] = 1,
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
  [2707] = 1,
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
  [2721] = 1,
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
  [2735] = 1,
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
  [2749] = 1,
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
  [2763] = 1,
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
  [2777] = 1,
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
  [2791] = 1,
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
  [2805] = 1,
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
  [2819] = 1,
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
  [2833] = 1,
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
  [2847] = 1,
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
  [2861] = 1,
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
  [2875] = 1,
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
  [2889] = 1,
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
  [2903] = 1,
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
  [2917] = 1,
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
  [2931] = 1,
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
  [2945] = 1,
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
  [2959] = 1,
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
  [2973] = 1,
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
  [2987] = 1,
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
  [3001] = 10,
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
  [3033] = 1,
    ACTIONS(491), 11,
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
  [3047] = 1,
    ACTIONS(493), 11,
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
  [3061] = 1,
    ACTIONS(495), 11,
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
  [3075] = 1,
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
  [3089] = 1,
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
  [3103] = 1,
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
  [3117] = 1,
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
  [3131] = 1,
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
  [3145] = 1,
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
  [3159] = 1,
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
  [3173] = 1,
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
  [3187] = 1,
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
  [3201] = 1,
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
  [3215] = 1,
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
  [3229] = 1,
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
  [3243] = 1,
    ACTIONS(47), 11,
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
  [3257] = 1,
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
  [3271] = 1,
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
  [3285] = 1,
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
  [3299] = 1,
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
  [3313] = 1,
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
  [3327] = 1,
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
  [3341] = 1,
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
  [3355] = 1,
    ACTIONS(299), 11,
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
  [3369] = 1,
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
  [3383] = 1,
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
  [3397] = 1,
    ACTIONS(535), 11,
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
  [3411] = 1,
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
  [3425] = 6,
    ACTIONS(539), 1,
      anon_sym_input,
    ACTIONS(541), 1,
      anon_sym_output,
    ACTIONS(543), 1,
      anon_sym_parameter,
    ACTIONS(545), 1,
      anon_sym_light,
    ACTIONS(547), 1,
      anon_sym_widget,
    STATE(312), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3448] = 6,
    ACTIONS(539), 1,
      anon_sym_input,
    ACTIONS(541), 1,
      anon_sym_output,
    ACTIONS(543), 1,
      anon_sym_parameter,
    ACTIONS(545), 1,
      anon_sym_light,
    ACTIONS(547), 1,
      anon_sym_widget,
    STATE(310), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3471] = 6,
    ACTIONS(61), 1,
      anon_sym_input,
    ACTIONS(63), 1,
      anon_sym_output,
    ACTIONS(65), 1,
      anon_sym_parameter,
    ACTIONS(67), 1,
      anon_sym_light,
    ACTIONS(69), 1,
      anon_sym_widget,
    STATE(292), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [3494] = 6,
    ACTIONS(539), 1,
      anon_sym_input,
    ACTIONS(541), 1,
      anon_sym_output,
    ACTIONS(543), 1,
      anon_sym_parameter,
    ACTIONS(545), 1,
      anon_sym_light,
    ACTIONS(547), 1,
      anon_sym_widget,
    STATE(264), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3517] = 6,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    ACTIONS(549), 1,
      anon_sym_AT,
    ACTIONS(553), 1,
      anon_sym_origin,
    ACTIONS(555), 1,
      aux_sym_origin_token1,
    STATE(143), 1,
      sym_offset,
    ACTIONS(551), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3539] = 6,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    ACTIONS(557), 1,
      anon_sym_AT,
    ACTIONS(559), 1,
      anon_sym_origin,
    ACTIONS(561), 1,
      aux_sym_origin_token1,
    STATE(146), 1,
      sym_offset,
    ACTIONS(551), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3560] = 2,
    ACTIONS(177), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(179), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3573] = 2,
    ACTIONS(461), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(563), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3586] = 6,
    ACTIONS(565), 1,
      anon_sym_input,
    ACTIONS(567), 1,
      anon_sym_output,
    ACTIONS(569), 1,
      anon_sym_parameter,
    ACTIONS(571), 1,
      anon_sym_light,
    ACTIONS(573), 1,
      anon_sym_widget,
    ACTIONS(575), 1,
      anon_sym_label,
  [3605] = 5,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      anon_sym_x,
    ACTIONS(579), 1,
      anon_sym_y,
    ACTIONS(581), 1,
      anon_sym_xy,
    STATE(124), 2,
      sym__scale,
      sym_stretch,
  [3622] = 2,
    STATE(59), 1,
      sym_valign,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3632] = 2,
    STATE(59), 1,
      sym_halign,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3642] = 2,
    STATE(63), 1,
      sym_y,
    ACTIONS(583), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3652] = 5,
    ACTIONS(585), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      aux_sym__originx_token1,
    ACTIONS(589), 1,
      aux_sym__originy_token1,
    STATE(315), 1,
      sym__originy,
    STATE(316), 1,
      sym__originx,
  [3668] = 5,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    ACTIONS(593), 1,
      anon_sym_none,
    ACTIONS(595), 1,
      sym_rgb,
    ACTIONS(597), 1,
      sym_rgba,
    STATE(107), 1,
      sym_name,
  [3684] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(599), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3694] = 5,
    ACTIONS(601), 1,
      anon_sym_name,
    ACTIONS(603), 1,
      anon_sym_x,
    ACTIONS(605), 1,
      anon_sym_y,
    ACTIONS(607), 1,
      anon_sym_xy,
    ACTIONS(609), 1,
      anon_sym_part,
  [3710] = 2,
    STATE(142), 1,
      sym_halign,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3720] = 2,
    STATE(142), 1,
      sym_valign,
    ACTIONS(51), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3730] = 3,
    ACTIONS(611), 1,
      anon_sym_module,
    ACTIONS(613), 1,
      anon_sym_panel,
    STATE(168), 2,
      sym__module_export,
      sym_panel,
  [3741] = 3,
    ACTIONS(615), 1,
      anon_sym_project,
    ACTIONS(617), 1,
      anon_sym_script,
    STATE(152), 2,
      sym_project,
      sym_script,
  [3752] = 4,
    ACTIONS(619), 1,
      anon_sym_DQUOTE,
    ACTIONS(621), 1,
      anon_sym_SQUOTE,
    ACTIONS(623), 1,
      aux_sym__string_token1,
    STATE(81), 1,
      sym__string,
  [3765] = 4,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    STATE(272), 1,
      sym__offset,
    STATE(277), 1,
      sym__relative,
  [3778] = 4,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym__offset,
    STATE(276), 1,
      sym__relative,
  [3791] = 4,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym__offset,
    STATE(274), 1,
      sym__relative,
  [3804] = 4,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym__offset,
    STATE(275), 1,
      sym__relative,
  [3817] = 2,
    STATE(123), 1,
      sym__geometry_y_attr,
    ACTIONS(635), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3826] = 4,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
    ACTIONS(639), 1,
      anon_sym_SQUOTE,
    ACTIONS(641), 1,
      aux_sym__string_token1,
    STATE(142), 1,
      sym__string,
  [3839] = 4,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym__offset,
    STATE(273), 1,
      sym__relative,
  [3852] = 3,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    STATE(272), 1,
      sym__offset,
    STATE(293), 1,
      sym__relative,
  [3862] = 3,
    ACTIONS(645), 1,
      aux_sym__input_id_token1,
    STATE(94), 1,
      sym_name,
    STATE(99), 1,
      sym__component,
  [3872] = 1,
    ACTIONS(647), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [3878] = 3,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      sym_offset,
  [3888] = 3,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    STATE(272), 1,
      sym__offset,
    STATE(294), 1,
      sym__relative,
  [3898] = 3,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    STATE(272), 1,
      sym__offset,
    STATE(295), 1,
      sym__relative,
  [3908] = 3,
    ACTIONS(651), 1,
      aux_sym__offset_attr_token1,
    STATE(127), 1,
      sym__offset_xy_attr,
    STATE(282), 1,
      sym__offset_attr,
  [3918] = 3,
    ACTIONS(645), 1,
      aux_sym__input_id_token1,
    STATE(93), 1,
      sym__component,
    STATE(94), 1,
      sym_name,
  [3928] = 3,
    ACTIONS(653), 1,
      anon_sym_font,
    ACTIONS(655), 1,
      anon_sym_project,
    ACTIONS(657), 1,
      anon_sym_script,
  [3938] = 3,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(46), 1,
      sym_name,
    STATE(103), 1,
      sym_decoration,
  [3948] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(142), 1,
      sym_colour,
  [3958] = 3,
    ACTIONS(661), 1,
      anon_sym_name,
    ACTIONS(663), 1,
      anon_sym_height,
    ACTIONS(665), 1,
      anon_sym_width,
  [3968] = 3,
    ACTIONS(667), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      aux_sym__guide_id_token1,
    STATE(240), 1,
      sym__component_id,
  [3978] = 3,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    ACTIONS(671), 1,
      aux_sym_origin_token1,
    STATE(117), 1,
      sym_offset,
  [3988] = 3,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(46), 1,
      sym_name,
    STATE(131), 1,
      sym_decoration,
  [3998] = 3,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    ACTIONS(673), 1,
      aux_sym_origin_token1,
    STATE(115), 1,
      sym_offset,
  [4008] = 3,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    STATE(272), 1,
      sym__offset,
    STATE(296), 1,
      sym__relative,
  [4018] = 3,
    ACTIONS(645), 1,
      aux_sym__input_id_token1,
    STATE(94), 1,
      sym_name,
    STATE(97), 1,
      sym__component,
  [4028] = 3,
    ACTIONS(645), 1,
      aux_sym__input_id_token1,
    STATE(94), 1,
      sym_name,
    STATE(96), 1,
      sym__component,
  [4038] = 3,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    STATE(272), 1,
      sym__offset,
    STATE(297), 1,
      sym__relative,
  [4048] = 3,
    ACTIONS(645), 1,
      aux_sym__input_id_token1,
    STATE(94), 1,
      sym_name,
    STATE(95), 1,
      sym__component,
  [4058] = 3,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    STATE(272), 1,
      sym__offset,
    STATE(298), 1,
      sym__relative,
  [4068] = 3,
    ACTIONS(675), 1,
      aux_sym__label_id_token1,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
  [4078] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(198), 1,
      sym_name,
  [4085] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(193), 1,
      sym_name,
  [4092] = 2,
    ACTIONS(681), 1,
      aux_sym__input_id_token1,
    STATE(142), 1,
      sym_font,
  [4099] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(199), 1,
      sym_name,
  [4106] = 2,
    ACTIONS(683), 1,
      aux_sym__input_id_token1,
    STATE(158), 1,
      sym_part,
  [4113] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(203), 1,
      sym_name,
  [4120] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(204), 1,
      sym_name,
  [4127] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(158), 1,
      sym_name,
  [4134] = 2,
    ACTIONS(685), 1,
      aux_sym__guide_attr_token1,
    STATE(161), 1,
      sym_identifier,
  [4141] = 2,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    STATE(169), 1,
      sym__relative_attr,
  [4148] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
  [4155] = 2,
    ACTIONS(687), 1,
      aux_sym__guide_attr_token1,
    STATE(125), 1,
      sym__guide_attr,
  [4162] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(218), 1,
      sym_name,
  [4169] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(220), 1,
      sym_name,
  [4176] = 2,
    ACTIONS(689), 1,
      sym_rgb,
    ACTIONS(691), 1,
      sym_rgba,
  [4183] = 2,
    ACTIONS(651), 1,
      aux_sym__offset_attr_token1,
    STATE(151), 1,
      sym__offset_attr,
  [4190] = 1,
    ACTIONS(693), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4195] = 2,
    ACTIONS(589), 1,
      aux_sym__originy_token1,
    STATE(110), 1,
      sym__originy,
  [4202] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(40), 1,
      sym_name,
  [4209] = 2,
    ACTIONS(587), 1,
      aux_sym__originx_token1,
    STATE(110), 1,
      sym__originx,
  [4216] = 2,
    ACTIONS(651), 1,
      aux_sym__offset_attr_token1,
    STATE(127), 1,
      sym__offset_attr,
  [4223] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(256), 1,
      sym_name,
  [4230] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(88), 1,
      sym_name,
  [4237] = 2,
    ACTIONS(651), 1,
      aux_sym__offset_attr_token1,
    STATE(126), 1,
      sym__offset_attr,
  [4244] = 2,
    ACTIONS(695), 1,
      anon_sym_scale,
    ACTIONS(697), 1,
      anon_sym_stretch,
  [4251] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(194), 1,
      sym_name,
  [4258] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(195), 1,
      sym_name,
  [4265] = 2,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
    STATE(192), 1,
      sym_name,
  [4272] = 2,
    ACTIONS(227), 1,
      aux_sym_offset_token1,
    STATE(149), 1,
      sym_offset,
  [4279] = 2,
    ACTIONS(627), 1,
      aux_sym_offset_token1,
    STATE(306), 1,
      sym__offset,
  [4286] = 2,
    ACTIONS(699), 1,
      aux_sym__absolute_attr_token1,
    STATE(260), 1,
      sym__absolute_x_attr,
  [4293] = 1,
    ACTIONS(701), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [4298] = 2,
    ACTIONS(703), 1,
      anon_sym_svg,
    STATE(135), 1,
      sym_svg,
  [4305] = 2,
    ACTIONS(199), 1,
      anon_sym_font,
    STATE(138), 1,
      sym__font_id,
  [4312] = 2,
    ACTIONS(705), 1,
      sym_height,
    ACTIONS(707), 1,
      sym_width,
  [4319] = 2,
    ACTIONS(709), 1,
      aux_sym__absolute_attr_token1,
    STATE(144), 1,
      sym__absolute_y_attr,
  [4326] = 1,
    ACTIONS(711), 1,
      aux_sym__label_id_token2,
  [4330] = 1,
    ACTIONS(713), 1,
      anon_sym_COMMA,
  [4334] = 1,
    ACTIONS(715), 1,
      anon_sym_COMMA,
  [4338] = 1,
    ACTIONS(717), 1,
      anon_sym_COMMA,
  [4342] = 1,
    ACTIONS(719), 1,
      aux_sym_absolute_token1,
  [4346] = 1,
    ACTIONS(721), 1,
      anon_sym_COMMA,
  [4350] = 1,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [4354] = 1,
    ACTIONS(725), 1,
      aux_sym_relative_token1,
  [4358] = 1,
    ACTIONS(727), 1,
      aux_sym__input_id_token1,
  [4362] = 1,
    ACTIONS(729), 1,
      anon_sym_with,
  [4366] = 1,
    ACTIONS(731), 1,
      aux_sym_origin_token1,
  [4370] = 1,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
  [4374] = 1,
    ACTIONS(735), 1,
      anon_sym_COMMA,
  [4378] = 1,
    ACTIONS(737), 1,
      anon_sym_gzip,
  [4382] = 1,
    ACTIONS(739), 1,
      anon_sym_COMMA,
  [4386] = 1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
  [4390] = 1,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
  [4394] = 1,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
  [4398] = 1,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
  [4402] = 1,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
  [4406] = 1,
    ACTIONS(737), 1,
      anon_sym_timestamp,
  [4410] = 1,
    ACTIONS(751), 1,
      sym_width,
  [4414] = 1,
    ACTIONS(753), 1,
      aux_sym__scale_token1,
  [4418] = 1,
    ACTIONS(755), 1,
      aux_sym__scale_token1,
  [4422] = 1,
    ACTIONS(757), 1,
      anon_sym_COMMA,
  [4426] = 1,
    ACTIONS(759), 1,
      anon_sym_COMMA,
  [4430] = 1,
    ACTIONS(761), 1,
      anon_sym_COMMA,
  [4434] = 1,
    ACTIONS(763), 1,
      aux_sym__scale_token1,
  [4438] = 1,
    ACTIONS(765), 1,
      anon_sym_COMMA,
  [4442] = 1,
    ACTIONS(767), 1,
      sym_rgba,
  [4446] = 1,
    ACTIONS(767), 1,
      sym_rgb,
  [4450] = 1,
    ACTIONS(769), 1,
      anon_sym_COMMA,
  [4454] = 1,
    ACTIONS(771), 1,
      anon_sym_SQUOTE,
  [4458] = 1,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
  [4462] = 1,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
  [4466] = 1,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
  [4470] = 1,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
  [4474] = 1,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
  [4478] = 1,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
  [4482] = 1,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
  [4486] = 1,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
  [4490] = 1,
    ACTIONS(787), 1,
      anon_sym_COMMA,
  [4494] = 1,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
  [4498] = 1,
    ACTIONS(789), 1,
      anon_sym_DQUOTE,
  [4502] = 1,
    ACTIONS(791), 1,
      anon_sym_COMMA,
  [4506] = 1,
    ACTIONS(793), 1,
      anon_sym_COMMA,
  [4510] = 1,
    ACTIONS(795), 1,
      aux_sym_absolute_token1,
  [4514] = 1,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
  [4518] = 1,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
  [4522] = 1,
    ACTIONS(697), 1,
      anon_sym_stretch,
  [4526] = 1,
    ACTIONS(801), 1,
      aux_sym_origin_token1,
  [4530] = 1,
    ACTIONS(803), 1,
      aux_sym_origin_token1,
  [4534] = 1,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
  [4538] = 1,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
  [4542] = 1,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
  [4546] = 1,
    ACTIONS(811), 1,
      sym_fontsize,
  [4550] = 1,
    ACTIONS(813), 1,
      aux_sym__absolute_attr_token1,
  [4554] = 1,
    ACTIONS(815), 1,
      anon_sym_COMMA,
  [4558] = 1,
    ACTIONS(817), 1,
      anon_sym_COMMA,
  [4562] = 1,
    ACTIONS(819), 1,
      aux_sym_origin_token1,
  [4566] = 1,
    ACTIONS(821), 1,
      aux_sym__label_id_token3,
  [4570] = 1,
    ACTIONS(823), 1,
      sym_width,
  [4574] = 1,
    ACTIONS(823), 1,
      sym_height,
  [4578] = 1,
    ACTIONS(825), 1,
      aux_sym__label_id_token3,
  [4582] = 1,
    ACTIONS(827), 1,
      aux_sym__label_id_token2,
  [4586] = 1,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
  [4590] = 1,
    ACTIONS(831), 1,
      aux_sym__input_id_token1,
  [4594] = 1,
    ACTIONS(833), 1,
      aux_sym__input_id_token1,
  [4598] = 1,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
  [4602] = 1,
    ACTIONS(837), 1,
      aux_sym__input_id_token1,
  [4606] = 1,
    ACTIONS(839), 1,
      aux_sym__input_id_token1,
  [4610] = 1,
    ACTIONS(841), 1,
      aux_sym__guide_id_token1,
  [4614] = 1,
    ACTIONS(843), 1,
      anon_sym_LPAREN,
  [4618] = 1,
    ACTIONS(845), 1,
      ts_builtin_sym_end,
  [4622] = 1,
    ACTIONS(847), 1,
      aux_sym__guide_id_token1,
  [4626] = 1,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
  [4630] = 1,
    ACTIONS(849), 1,
      anon_sym_SQUOTE,
  [4634] = 1,
    ACTIONS(851), 1,
      aux_sym_relative_token1,
  [4638] = 1,
    ACTIONS(853), 1,
      aux_sym_absolute_token1,
  [4642] = 1,
    ACTIONS(855), 1,
      aux_sym__label_id_token2,
  [4646] = 1,
    ACTIONS(857), 1,
      aux_sym__label_id_token3,
  [4650] = 1,
    ACTIONS(859), 1,
      anon_sym_COMMA,
  [4654] = 1,
    ACTIONS(861), 1,
      anon_sym_COMMA,
  [4658] = 1,
    ACTIONS(863), 1,
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
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 926,
  [SMALL_STATE(28)] = 950,
  [SMALL_STATE(29)] = 990,
  [SMALL_STATE(30)] = 1029,
  [SMALL_STATE(31)] = 1051,
  [SMALL_STATE(32)] = 1073,
  [SMALL_STATE(33)] = 1095,
  [SMALL_STATE(34)] = 1117,
  [SMALL_STATE(35)] = 1151,
  [SMALL_STATE(36)] = 1173,
  [SMALL_STATE(37)] = 1204,
  [SMALL_STATE(38)] = 1238,
  [SMALL_STATE(39)] = 1272,
  [SMALL_STATE(40)] = 1300,
  [SMALL_STATE(41)] = 1320,
  [SMALL_STATE(42)] = 1340,
  [SMALL_STATE(43)] = 1361,
  [SMALL_STATE(44)] = 1380,
  [SMALL_STATE(45)] = 1403,
  [SMALL_STATE(46)] = 1426,
  [SMALL_STATE(47)] = 1449,
  [SMALL_STATE(48)] = 1472,
  [SMALL_STATE(49)] = 1495,
  [SMALL_STATE(50)] = 1518,
  [SMALL_STATE(51)] = 1541,
  [SMALL_STATE(52)] = 1562,
  [SMALL_STATE(53)] = 1583,
  [SMALL_STATE(54)] = 1604,
  [SMALL_STATE(55)] = 1623,
  [SMALL_STATE(56)] = 1641,
  [SMALL_STATE(57)] = 1661,
  [SMALL_STATE(58)] = 1681,
  [SMALL_STATE(59)] = 1699,
  [SMALL_STATE(60)] = 1717,
  [SMALL_STATE(61)] = 1737,
  [SMALL_STATE(62)] = 1757,
  [SMALL_STATE(63)] = 1779,
  [SMALL_STATE(64)] = 1801,
  [SMALL_STATE(65)] = 1821,
  [SMALL_STATE(66)] = 1838,
  [SMALL_STATE(67)] = 1855,
  [SMALL_STATE(68)] = 1872,
  [SMALL_STATE(69)] = 1887,
  [SMALL_STATE(70)] = 1904,
  [SMALL_STATE(71)] = 1921,
  [SMALL_STATE(72)] = 1936,
  [SMALL_STATE(73)] = 1953,
  [SMALL_STATE(74)] = 1968,
  [SMALL_STATE(75)] = 1983,
  [SMALL_STATE(76)] = 1998,
  [SMALL_STATE(77)] = 2013,
  [SMALL_STATE(78)] = 2030,
  [SMALL_STATE(79)] = 2047,
  [SMALL_STATE(80)] = 2064,
  [SMALL_STATE(81)] = 2089,
  [SMALL_STATE(82)] = 2114,
  [SMALL_STATE(83)] = 2139,
  [SMALL_STATE(84)] = 2156,
  [SMALL_STATE(85)] = 2173,
  [SMALL_STATE(86)] = 2188,
  [SMALL_STATE(87)] = 2203,
  [SMALL_STATE(88)] = 2217,
  [SMALL_STATE(89)] = 2231,
  [SMALL_STATE(90)] = 2247,
  [SMALL_STATE(91)] = 2261,
  [SMALL_STATE(92)] = 2275,
  [SMALL_STATE(93)] = 2289,
  [SMALL_STATE(94)] = 2303,
  [SMALL_STATE(95)] = 2327,
  [SMALL_STATE(96)] = 2341,
  [SMALL_STATE(97)] = 2355,
  [SMALL_STATE(98)] = 2369,
  [SMALL_STATE(99)] = 2383,
  [SMALL_STATE(100)] = 2397,
  [SMALL_STATE(101)] = 2411,
  [SMALL_STATE(102)] = 2425,
  [SMALL_STATE(103)] = 2439,
  [SMALL_STATE(104)] = 2453,
  [SMALL_STATE(105)] = 2467,
  [SMALL_STATE(106)] = 2483,
  [SMALL_STATE(107)] = 2497,
  [SMALL_STATE(108)] = 2511,
  [SMALL_STATE(109)] = 2525,
  [SMALL_STATE(110)] = 2539,
  [SMALL_STATE(111)] = 2553,
  [SMALL_STATE(112)] = 2577,
  [SMALL_STATE(113)] = 2591,
  [SMALL_STATE(114)] = 2615,
  [SMALL_STATE(115)] = 2629,
  [SMALL_STATE(116)] = 2643,
  [SMALL_STATE(117)] = 2657,
  [SMALL_STATE(118)] = 2671,
  [SMALL_STATE(119)] = 2693,
  [SMALL_STATE(120)] = 2707,
  [SMALL_STATE(121)] = 2721,
  [SMALL_STATE(122)] = 2735,
  [SMALL_STATE(123)] = 2749,
  [SMALL_STATE(124)] = 2763,
  [SMALL_STATE(125)] = 2777,
  [SMALL_STATE(126)] = 2791,
  [SMALL_STATE(127)] = 2805,
  [SMALL_STATE(128)] = 2819,
  [SMALL_STATE(129)] = 2833,
  [SMALL_STATE(130)] = 2847,
  [SMALL_STATE(131)] = 2861,
  [SMALL_STATE(132)] = 2875,
  [SMALL_STATE(133)] = 2889,
  [SMALL_STATE(134)] = 2903,
  [SMALL_STATE(135)] = 2917,
  [SMALL_STATE(136)] = 2931,
  [SMALL_STATE(137)] = 2945,
  [SMALL_STATE(138)] = 2959,
  [SMALL_STATE(139)] = 2973,
  [SMALL_STATE(140)] = 2987,
  [SMALL_STATE(141)] = 3001,
  [SMALL_STATE(142)] = 3033,
  [SMALL_STATE(143)] = 3047,
  [SMALL_STATE(144)] = 3061,
  [SMALL_STATE(145)] = 3075,
  [SMALL_STATE(146)] = 3089,
  [SMALL_STATE(147)] = 3103,
  [SMALL_STATE(148)] = 3117,
  [SMALL_STATE(149)] = 3131,
  [SMALL_STATE(150)] = 3145,
  [SMALL_STATE(151)] = 3159,
  [SMALL_STATE(152)] = 3173,
  [SMALL_STATE(153)] = 3187,
  [SMALL_STATE(154)] = 3201,
  [SMALL_STATE(155)] = 3215,
  [SMALL_STATE(156)] = 3229,
  [SMALL_STATE(157)] = 3243,
  [SMALL_STATE(158)] = 3257,
  [SMALL_STATE(159)] = 3271,
  [SMALL_STATE(160)] = 3285,
  [SMALL_STATE(161)] = 3299,
  [SMALL_STATE(162)] = 3313,
  [SMALL_STATE(163)] = 3327,
  [SMALL_STATE(164)] = 3341,
  [SMALL_STATE(165)] = 3355,
  [SMALL_STATE(166)] = 3369,
  [SMALL_STATE(167)] = 3383,
  [SMALL_STATE(168)] = 3397,
  [SMALL_STATE(169)] = 3411,
  [SMALL_STATE(170)] = 3425,
  [SMALL_STATE(171)] = 3448,
  [SMALL_STATE(172)] = 3471,
  [SMALL_STATE(173)] = 3494,
  [SMALL_STATE(174)] = 3517,
  [SMALL_STATE(175)] = 3539,
  [SMALL_STATE(176)] = 3560,
  [SMALL_STATE(177)] = 3573,
  [SMALL_STATE(178)] = 3586,
  [SMALL_STATE(179)] = 3605,
  [SMALL_STATE(180)] = 3622,
  [SMALL_STATE(181)] = 3632,
  [SMALL_STATE(182)] = 3642,
  [SMALL_STATE(183)] = 3652,
  [SMALL_STATE(184)] = 3668,
  [SMALL_STATE(185)] = 3684,
  [SMALL_STATE(186)] = 3694,
  [SMALL_STATE(187)] = 3710,
  [SMALL_STATE(188)] = 3720,
  [SMALL_STATE(189)] = 3730,
  [SMALL_STATE(190)] = 3741,
  [SMALL_STATE(191)] = 3752,
  [SMALL_STATE(192)] = 3765,
  [SMALL_STATE(193)] = 3778,
  [SMALL_STATE(194)] = 3791,
  [SMALL_STATE(195)] = 3804,
  [SMALL_STATE(196)] = 3817,
  [SMALL_STATE(197)] = 3826,
  [SMALL_STATE(198)] = 3839,
  [SMALL_STATE(199)] = 3852,
  [SMALL_STATE(200)] = 3862,
  [SMALL_STATE(201)] = 3872,
  [SMALL_STATE(202)] = 3878,
  [SMALL_STATE(203)] = 3888,
  [SMALL_STATE(204)] = 3898,
  [SMALL_STATE(205)] = 3908,
  [SMALL_STATE(206)] = 3918,
  [SMALL_STATE(207)] = 3928,
  [SMALL_STATE(208)] = 3938,
  [SMALL_STATE(209)] = 3948,
  [SMALL_STATE(210)] = 3958,
  [SMALL_STATE(211)] = 3968,
  [SMALL_STATE(212)] = 3978,
  [SMALL_STATE(213)] = 3988,
  [SMALL_STATE(214)] = 3998,
  [SMALL_STATE(215)] = 4008,
  [SMALL_STATE(216)] = 4018,
  [SMALL_STATE(217)] = 4028,
  [SMALL_STATE(218)] = 4038,
  [SMALL_STATE(219)] = 4048,
  [SMALL_STATE(220)] = 4058,
  [SMALL_STATE(221)] = 4068,
  [SMALL_STATE(222)] = 4078,
  [SMALL_STATE(223)] = 4085,
  [SMALL_STATE(224)] = 4092,
  [SMALL_STATE(225)] = 4099,
  [SMALL_STATE(226)] = 4106,
  [SMALL_STATE(227)] = 4113,
  [SMALL_STATE(228)] = 4120,
  [SMALL_STATE(229)] = 4127,
  [SMALL_STATE(230)] = 4134,
  [SMALL_STATE(231)] = 4141,
  [SMALL_STATE(232)] = 4148,
  [SMALL_STATE(233)] = 4155,
  [SMALL_STATE(234)] = 4162,
  [SMALL_STATE(235)] = 4169,
  [SMALL_STATE(236)] = 4176,
  [SMALL_STATE(237)] = 4183,
  [SMALL_STATE(238)] = 4190,
  [SMALL_STATE(239)] = 4195,
  [SMALL_STATE(240)] = 4202,
  [SMALL_STATE(241)] = 4209,
  [SMALL_STATE(242)] = 4216,
  [SMALL_STATE(243)] = 4223,
  [SMALL_STATE(244)] = 4230,
  [SMALL_STATE(245)] = 4237,
  [SMALL_STATE(246)] = 4244,
  [SMALL_STATE(247)] = 4251,
  [SMALL_STATE(248)] = 4258,
  [SMALL_STATE(249)] = 4265,
  [SMALL_STATE(250)] = 4272,
  [SMALL_STATE(251)] = 4279,
  [SMALL_STATE(252)] = 4286,
  [SMALL_STATE(253)] = 4293,
  [SMALL_STATE(254)] = 4298,
  [SMALL_STATE(255)] = 4305,
  [SMALL_STATE(256)] = 4312,
  [SMALL_STATE(257)] = 4319,
  [SMALL_STATE(258)] = 4326,
  [SMALL_STATE(259)] = 4330,
  [SMALL_STATE(260)] = 4334,
  [SMALL_STATE(261)] = 4338,
  [SMALL_STATE(262)] = 4342,
  [SMALL_STATE(263)] = 4346,
  [SMALL_STATE(264)] = 4350,
  [SMALL_STATE(265)] = 4354,
  [SMALL_STATE(266)] = 4358,
  [SMALL_STATE(267)] = 4362,
  [SMALL_STATE(268)] = 4366,
  [SMALL_STATE(269)] = 4370,
  [SMALL_STATE(270)] = 4374,
  [SMALL_STATE(271)] = 4378,
  [SMALL_STATE(272)] = 4382,
  [SMALL_STATE(273)] = 4386,
  [SMALL_STATE(274)] = 4390,
  [SMALL_STATE(275)] = 4394,
  [SMALL_STATE(276)] = 4398,
  [SMALL_STATE(277)] = 4402,
  [SMALL_STATE(278)] = 4406,
  [SMALL_STATE(279)] = 4410,
  [SMALL_STATE(280)] = 4414,
  [SMALL_STATE(281)] = 4418,
  [SMALL_STATE(282)] = 4422,
  [SMALL_STATE(283)] = 4426,
  [SMALL_STATE(284)] = 4430,
  [SMALL_STATE(285)] = 4434,
  [SMALL_STATE(286)] = 4438,
  [SMALL_STATE(287)] = 4442,
  [SMALL_STATE(288)] = 4446,
  [SMALL_STATE(289)] = 4450,
  [SMALL_STATE(290)] = 4454,
  [SMALL_STATE(291)] = 4458,
  [SMALL_STATE(292)] = 4462,
  [SMALL_STATE(293)] = 4466,
  [SMALL_STATE(294)] = 4470,
  [SMALL_STATE(295)] = 4474,
  [SMALL_STATE(296)] = 4478,
  [SMALL_STATE(297)] = 4482,
  [SMALL_STATE(298)] = 4486,
  [SMALL_STATE(299)] = 4490,
  [SMALL_STATE(300)] = 4494,
  [SMALL_STATE(301)] = 4498,
  [SMALL_STATE(302)] = 4502,
  [SMALL_STATE(303)] = 4506,
  [SMALL_STATE(304)] = 4510,
  [SMALL_STATE(305)] = 4514,
  [SMALL_STATE(306)] = 4518,
  [SMALL_STATE(307)] = 4522,
  [SMALL_STATE(308)] = 4526,
  [SMALL_STATE(309)] = 4530,
  [SMALL_STATE(310)] = 4534,
  [SMALL_STATE(311)] = 4538,
  [SMALL_STATE(312)] = 4542,
  [SMALL_STATE(313)] = 4546,
  [SMALL_STATE(314)] = 4550,
  [SMALL_STATE(315)] = 4554,
  [SMALL_STATE(316)] = 4558,
  [SMALL_STATE(317)] = 4562,
  [SMALL_STATE(318)] = 4566,
  [SMALL_STATE(319)] = 4570,
  [SMALL_STATE(320)] = 4574,
  [SMALL_STATE(321)] = 4578,
  [SMALL_STATE(322)] = 4582,
  [SMALL_STATE(323)] = 4586,
  [SMALL_STATE(324)] = 4590,
  [SMALL_STATE(325)] = 4594,
  [SMALL_STATE(326)] = 4598,
  [SMALL_STATE(327)] = 4602,
  [SMALL_STATE(328)] = 4606,
  [SMALL_STATE(329)] = 4610,
  [SMALL_STATE(330)] = 4614,
  [SMALL_STATE(331)] = 4618,
  [SMALL_STATE(332)] = 4622,
  [SMALL_STATE(333)] = 4626,
  [SMALL_STATE(334)] = 4630,
  [SMALL_STATE(335)] = 4634,
  [SMALL_STATE(336)] = 4638,
  [SMALL_STATE(337)] = 4642,
  [SMALL_STATE(338)] = 4646,
  [SMALL_STATE(339)] = 4650,
  [SMALL_STATE(340)] = 4654,
  [SMALL_STATE(341)] = 4658,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 9),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 9),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 21),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 21),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 10),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 10),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(311),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(207),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(255),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(190),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(189),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(201),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 13),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 22),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 11),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 11),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 10),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 14),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 14),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 9),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 12),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 8),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 9),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 8),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 14),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 12),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 16),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [845] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
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
