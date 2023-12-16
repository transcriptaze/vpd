module.exports = grammar({
  name: 'command',

  rules: {
    source_file: $ => repeat($._command),
    _command: $ => choice(
      $.new,
      $.set,
      'move',
      'delete'
    ),

    new: $ => seq(
      'new',
      $.entity,
    ),

    set: $ => seq(
      'set',
      $.attr,
    ),

    entity: $ => choice(
      $.module,
      'param',
      'input',
      'output',
      $.label,
      $.guide,
    ),

    attr: $ => choice(
      $.origin,
    ),

    module: $ => seq(
      'module',
      $.name,
      $.height,
      $.width,
    ),

    origin: $ => seq(
      'origin',
      choice(
        seq(alias(/top|middle|bottom/,$.y), ',', alias(/left|centre|center|right/,$.x)),
        seq(alias(/left|centre|center|right/,$.x),',',alias(/top|middle|bottom/,$.y)),
      ),
    ),

    name: $ => seq(
      '"',
      alias(/[a-zA-Z]([^"]*?)/,$.value),
      '"',
    ),

    height: $ => '1U',
    width: $ => /[1-9][0-9]*H/,

    label: $ => seq(
      'label',
      $.text,
      $.anchor
    ),

    guide: $ => seq(
      'guide',
      optional($.identifier),
      choice(
        $.vertical, 
        $.horizontal,
      ),
    ),

    identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,

    vertical: $ => seq(
      'vertical',
      choice( 
        $.absolute, 
        $.relative,
        alias(/left|centre|center|right/,$.geometry),
        $.guideline,
      ),
    ),

    absolute: $ => seq( '@', alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.offset)),
    relative: $ => alias(/[+-]?([0-9]+)(\.[0-9]*)?(mm|h|H)/, $.offset),
    guideline: $ => seq(
      $.identifier, 
      alias(/[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.offset),
    ),

    horizontal: $ => seq(
      'horizontal',
      choice( 
        $.absolute, 
        $.relative,
        alias(/top|middle|bottom/,$.geometry),
        $.guideline,
      ),
    ),

    text: $ => seq(
      '"',
      alias(/[a-zA-Z]([^"]*?)/,$.value),
      '"',
    ),

    anchor: $ => seq(
      '@',
      alias(/[0-9]+(?:\.[0-9]*)?mm/, $.x),
      ',',
      alias(/[0-9]+(?:\.[0-9]*)?mm/, $.y),
    )
  }
});
