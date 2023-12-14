let parser

export async function init (Parser) {
  const grammar = await Parser.Language.load('../wasm/grammars/tree-sitter-help.wasm')

  parser = new Parser()
  parser.setLanguage(grammar)
}

const COMMANDS = [
  {
    command: ['new', 'module'],
    help: ['new', 'module', '<em>&lt;name&gt;</em>'],
    min: 3
  },
  {
    command: ['new', 'guide'],
    help: ['new', 'guide'],
    min: 2
  },
  {
    command: ['new', 'label'],
    help: ['<b>new</b>', 'label'],
    min: 2
  },
  {
    command: ['set', 'origin'],
    help: ['set', 'origin'],
    min: 2
  }
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

  for (const c of COMMANDS) {
    if (matches(c.command, tokens)) {
      const N = tokens.length + 1 < c.min ? c.min : tokens.length + 1
      list.add(c.help.slice(0, N + 1).join(' '))
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
