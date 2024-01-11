module.exports = grammar({
  name: 'help',

  rules: {
    command: $ => repeat(
      choice(
        $.new,
        $.set,
        $.load,
        $.export,
      ),
    ),

    new: $ => seq(
      'new',
      optional($._entity),
    ),

    set: $ => seq(
      'set',
      optional (
        choice (
          $.origin,
          $.background,
        ),
      )
    ),

    load: $ => seq(
      'load',
      optional(
        alias('script', $.script),
      ),
    ),

    export: $ => seq(
      'export',
      optional(
        alias($._exportable, $.module),
      ),
    ),

    _entity: $ => choice(
      $.module,
      $.guide,
      $.label,
    ),

    _exportable: $ => seq(
      'module',
      optional($.svg),
    ),

    svg: $ => seq(
      'svg',
      optional(
        choice(
          alias('light',$.light),
          alias('dark', $.dark),
        ),
      ),
    ),

    module: $ => seq(
      'module',
    ),

    origin: $ => seq(
      'origin',
      optional(
        choice(
          $.absolute,          
          seq(
            $.x,
            optional(
              seq(
                ',',
                optional($.y),
              ),
            ),
          ),
          seq(
            $.y,
            optional(
              seq(
                ',',
                optional($.x),
              ),
            ),
          ),
        ),
      ),
    ),

    background: $ => seq(
      'background',
      optional (
        choice (
          seq ($.rgb, optional (seq (',', $.rgb))),
          seq ($.rgba, optional (seq (',', $.rgba))),
          $.name,
        )
      ),
    ),

    guide: $ => seq(
      'guide',
    ),

    label: $ => seq(
      'label',
      optional(
        alias($._label_string, $.string),
      ),
    ),

    _label_string: $ => seq(
      $._string,
      optional(
        choice (
          alias($._label_absolute, $.absolute),
          alias($._label_relative, $.relative),
          alias($._label_geometry, $.geometry),
        ),
      ),
    ),

    _label_absolute: $ => seq(
      '@',
      /([0-9]+)([.][0-9]*)?(mm|h|H)/,
      ',',
      /([0-9]+)([.][0-9]*)?(mm|h|H)/,
      optional( $.font ),
    ),

    _label_relative: $ => seq(
      /[0-9]+(?:\.[0-9]*)?mm/,
      ',',
      /[0-9]+(?:\.[0-9]*)?mm/,
      optional( $.font ),
    ),

    _label_geometry: $ => seq(
      $._x,
      ',',
      $._y,
      optional( $.font ),
    ),


    name: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,
    rgb: $ => /#[a-fA-F0-9]{6}/,
    rgba: $ => /#[a-fA-F0-9]{8}/,
    font: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,

    absolute: $ => seq(
      '@',
      optional(
        seq(
          alias(/([0-9]+)([.][0-9]*)?(mm|h|H)/,$.x),
          optional(
            seq(
                ',',
              optional(
                alias(/([0-9]+)([.][0-9]*)?(mm|h|H)/,$.y),
              ),
            ),
          ),
        ),
      ),
    ),

    _x: $ => seq(
      /left|centre|center|right/,
      optional($._offset),
    ),

    _y: $ => seq(
      /top|middle|bottom/,
      optional($._offset),
    ),

    x: $ => seq(
      alias(/left|centre|center|right/,$.reference),
      optional($.offset),
    ),

    y: $ => seq(
      alias (/top|middle|bottom/,$.reference), 
      optional($.offset),
    ),

    _offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,

    offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,

    _string: $ => seq(
      '"',
      /[a-zA-Z]([^"]*?)/,
      '"',
    ),
  }
});
