const grammar = new Map([
  [/^\s*$/, ['new', 'set', 'add', 'delete']],
  [/^\s*new\s*$/, ['new module', 'new guideline', 'new parameter', 'new input', 'new output']]
])

export function help (prompt, text) {
  const list = []

  grammar.forEach((v, k) => {
    if (k.test(text)) {
      list.push(v)
    }
  })

  prompt.display(list)
}
