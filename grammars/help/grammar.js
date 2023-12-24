module.exports = grammar({
  name: 'help',

  rules: {
    source_file: $ => repeat($._command),
    _command: $ => choice(
      $.new,
      $.set,
    ),

    new: $ => seq(
      'new',
      optional($.entity),
    ),

    set: $ => seq(
      'set',
      optional(
        choice(
          $.origin,
        ),
      ),
    ),

    entity: $ => choice(
      $.module,
      $.guide,
      $.label,
    ),

    attribute: $ => choice(
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
    ),

    y: $ => seq(
      alias (/top|middle|bottom/,$.reference), 
    ),

    guide: $ => seq(
      'guide',
    ),

    label: $ => seq(
      'label',
    ),
  }
});
