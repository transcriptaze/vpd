module.exports = grammar({
  name: 'help',

  rules: {
    command: $ => repeat(
      choice(
        $.new,
        $.set,
      ),
    ),

    new: $ => seq(
      'new',
      optional($._entity),
    ),

    set: $ => seq(
      'set',
      optional($._attribute),
    ),

    _entity: $ => choice(
      $.module,
      $.guide,
      $.label,
    ),

    _attribute: $ => choice(
      $.origin,
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
  }
});
