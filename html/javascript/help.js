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
    min: 1
  },
  {
    command: ['new', 'label', 'string', 'absolute', 'font', 'fontsize'],
    help: ['new', 'label', '"lorem"', '@10.16mm,12.7mm', '"Lato-Bold"', '12pt', 'centre'],
    min: 1
  },
  {
    command: ['new', 'label', 'string', 'relative', 'font', 'fontsize'],
    help: ['new', 'label', '"lorem"', '10.16mm,12.7mm', '"Lato-Bold"', '12pt', 'centre'],
    min: 1
  },
  {
    command: ['new', 'label', 'string', 'geometry', 'font', 'fontsize'],
    help: ['new', 'label', '"lorem"', 'centre,middle', '"Lato-Bold"', '12pt', 'centre'],
    min: 1
  },
  {
    command: ['set', 'origin', 'absolute'],
    help: ['set', 'origin', '@10mm,12.5mm'],
    min: 1
  },
  {
    command: ['set', 'origin', 'x', 'reference', 'y', 'reference'],
    help: ['set', 'origin', 'left,top'],
    min: 1
  },
  {
    command: ['set', 'origin', 'x', 'reference', 'offset', 'y', 'reference', 'offset'],
    help: ['set', 'origin', 'left+4.5mm,top-4.5mm'],
    min: 1
  },
  {
    command: ['set', 'origin', 'y', 'reference', 'x', 'reference'],
    help: ['set', 'origin', 'top,left'],
    min: 1
  },
  {
    command: ['set', 'origin', 'y', 'reference', 'offset', 'x', 'reference', 'offset'],
    help: ['set', 'origin', 'top+4.5mm,left-4.5mm'],
    min: 1
  },
  {
    command: ['set', 'background', 'rgb'],
    help: ['set', 'background', '#ff00ff'],
    min: 1
  },
  {
    command: ['set', 'background', 'rgb'],
    help: ['set', 'background', '#ff00ff,#00ffff'],
    min: 1
  },
  {
    command: ['set', 'background', 'rgba'],
    help: ['set', 'background', '#ff00ff40'],
    min: 1
  },
  {
    command: ['set', 'background', 'rgba'],
    help: ['set', 'background', '#ff00ff40,#00ffff20'],
    min: 1
  },
  {
    command: ['set', 'background', 'name'],
    help: ['set', 'background', '&lt;name&gt;'],
    min: 1
  },
  {
    command: ['load', 'script'],
    help: ['load', 'script'],
    min: 1
  },
  {
    command: ['export', 'panel', 'svg'],
    help: ['export', 'panel', 'svg'],
    min: 1
  },
  {
    command: ['export', 'panel', 'svg', 'light'],
    help: ['export', 'panel', 'svg', 'light'],
    min: 1
  },
  {
    command: ['export', 'panel', 'svg', 'dark'],
    help: ['export', 'panel', 'svg', 'dark'],
    min: 1
  }
]

// new label "lorem" 10mm,4mm
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
