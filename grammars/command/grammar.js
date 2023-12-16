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

    identifier: $ => /[a-z][a-z0-9]+/i,

    vertical: $ => seq(
      alias('vertical',$.orientation),
      alias(choice( 
        /[@+-]?([0-9]+)(\.[0-9]*)?mm/, 
        /left|centre|center|right/,
        seq(
          $.identifier, 
          /[+-]([0-9]+)(\.[0-9]*)?mm/,
        ),
      ), $.offset),
    ),

    horizontal: $ => seq(
      alias('horizontal',$.orientation),
      alias(choice( 
        /[@+-]?([0-9]+)(\.[0-9]*)?mm/, 
        /top|middle|bottom/,
        seq (
          $.identifier,
          /[+-]([0-9]+)(\.[0-9]*)?mm/,
        ),
      ), $.offset),
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
