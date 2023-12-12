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
      optional($.attribute),
    ),

    entity: $ => choice(
      $.module,
      $.guide,
      $.label,
    ),

    attribute: $ => choice(
      'origin',
    ),

    module: $ => seq(
      'module',
    ),

    guide: $ => seq(
      'guide',
    ),

    label: $ => seq(
      'label',
    ),
  }
});
