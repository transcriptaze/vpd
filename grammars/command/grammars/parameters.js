module.exports = grammar({
  name: 'parameters',

  rules: {
    param: $ => seq(
      'parameter',
      $.namex,
      $.anchorx,
    ),

    namex: $ => /"[a-zA-Z]([a-zA-Z0-9_-]*?)"/,

    anchorx: $ => seq(
      '@',
      alias(/[0-9]+(?:\.[0-9]*)?mm/, $.x),
      ',',
      alias(/[0-9]+(?:\.[0-9]*)?mm/, $.y),
    ),
  }
});
