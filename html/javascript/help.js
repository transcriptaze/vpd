let parser

export async function init (Parser) {
  const grammar = await Parser.Language.load('../wasm/grammars/tree-sitter-help.wasm')

  parser = new Parser()
  parser.setLanguage(grammar)
}

const COMMANDS = [
  ['new', 'module'],
  ['new', 'guide'],
  ['new', 'label'],
  ['set', 'origin']
]

export function help (prompt, text) {
  const tokens = []
  const src = `${text}`
  const tree = parser.parse(src)
  const root = tree.rootNode

  if (root.namedChildCount > 0) {
    const node = root.namedChildren[0]

    if (node.type !== 'ERROR') {
      tokens.push(node.type)
    }
  }

  const list = new Set()
  const N = tokens.length

  for (const c of COMMANDS) {
    if (matches(c, tokens)) {
      list.add(c.slice(0, N + 1).join(' '))
    }
  }

  prompt.display(list)
}

function matches (command, tokenset) {
  if (command.length < tokenset.length) {
    return false
  }

  for (const [i, t] of tokenset.entries()) {
    if (command[i] !== t) {
      return false
    }
  }

  return true
}
