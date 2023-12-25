let parser

export async function init (Parser) {
  const grammar = await Parser.Language.load('../wasm/grammars/tree-sitter-help.wasm')

  parser = new Parser()
  parser.setLanguage(grammar)
}

const COMMANDS = [
  {
    command: ['new', 'module'],
    help: ['<b>new</b>', 'module', '<em>&lt;name&gt;</em>'],
    min: 3
  },
  {
    command: ['new', 'guide'],
    help: ['<b>new</b>', 'guide'],
    min: 1
  },
  {
    command: ['new', 'label'],
    help: ['<b>new</b>', 'label'],
    min: 1
  },
  {
    command: ['set', 'origin', 'absolute'],
    help: ['<b>set</b>', 'origin', '@10mm,12.5mm'],
    min: 1
  },
  {
    command: ['set', 'origin', 'x', 'reference', 'y', 'reference'],
    help: ['<b>set</b>', 'origin', 'left,top'],
    min: 1
  },
  {
    command: ['set', 'origin', 'x', 'reference', 'offset', 'y', 'reference', 'offset'],
    help: ['<b>set</b>', 'origin', 'left+4.5mm,top+4.5mm'],
    min: 1
  },
  {
    command: ['set', 'origin', 'y', 'reference', 'x', 'reference'],
    help: ['<b>set</b>', 'origin', 'top,left'],
    min: 1
  },
  {
    command: ['set', 'origin', 'y', 'reference', 'offset', 'x', 'reference', 'offset'],
    help: ['<b>set</b>', 'origin', 'top+4.5mm,left+4.5mm'],
    min: 1
  }
]

export function help (prompt, text) {
  const tokens = []
  const src = `${text}`
  const tree = parser.parse(src)
  const root = tree.rootNode

  if (root.namedChildCount > 0) {
    tokens.push(...walk(root.namedChildren[0]))
  }

  console.log(tokens)

  const list = new Set()

  for (const c of COMMANDS) {
    if (matches(c.command, tokens)) {
      const N = tokens.length + 1 < c.min ? c.min : tokens.length + 1
      list.add(c.help.slice(0, N + 1).join(' '))
    }
  }

  prompt.display(list)
}

function walk (node) {
  if (node.type === 'ERROR') {
    return []
  }

  if (node.namedChildCount < 1) {
    return [node.type]
  }

  return [node.type, ...walk(node.namedChildren[0])]
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
