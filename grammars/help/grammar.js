module.exports = grammar({
  name: 'help',

  rules: {
    command: $ => repeat(
      choice(
        $.new,
        $.set,
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

    x: $ => seq(
      alias(/left|centre|center|right/,$.reference),
      optional($.offset),
    ),

    y: $ => seq(
      alias (/top|middle|bottom/,$.reference), 
      optional($.offset),
    ),

    guide: $ => seq(
      'guide',
    ),

    label: $ => seq(
      'label',
    ),

    offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,
    name: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,
    rgb: $ => /#[a-fA-F0-9]{6}/,
    rgba: $ => /#[a-fA-F0-9]{8}/,
  }
});
