module.exports = grammar({
  name: 'vpd',

  rules: {
    source_file: $ => repeat($._command),
    _command: $ => choice(
      $.new,
      'set',
      'move',
      'delete'
    ),

    new: $ => seq(
      'new',
      $.entity,
    ),

    entity: $ => choice(
      $.module,
      'param',
      'input',
      'output',
      $.label,
      $.guide,
    ),

    module: $ => seq(
      'module',
      $.name,
      $.height,
      $.width,
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
    ),

    guide: $ => seq(
      'guide',
      $.identifier,
      alias(choice('vertical', 'horizontal'),$.orientation),
      $.offset,
    ),

    identifier: $ => /[a-z][a-z0-9]+/i,
    text: $ => /"(.+?)"/,
    offset: $ => /[+-]?([0-9]+)(\.[0-9]*)?mm/,
  }
});
