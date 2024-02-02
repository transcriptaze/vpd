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
    command: ['new', 'guide', 'orientation', 'location'],
    help: ['new', 'guide', 'vertical', '@10mm'],
    min: 1
  },
  {
    command: ['new', 'guide', 'orientation', 'location'],
    help: ['new', 'guide', 'vertical', '10mm'],
    min: 1
  },
  {
    command: ['new', 'guide', 'orientation', 'location'],
    help: ['new', 'guide', 'horizontal', '@10mm'],
    min: 1
  },
  {
    command: ['new', 'guide', 'orientation', 'location'],
    help: ['new', 'guide', 'horizontal', '10mm'],
    min: 1
  },
  {
    command: ['new', 'guide', 'reference', 'offset'],
    help: ['new', 'guide', 'v1', '+10mm'],
    min: 1
  },
  {
    command: ['new', 'label', 'string', 'absolute', 'font', 'fontsize', 'halign', 'valign', 'colour'],
    help: ['new', 'label', '"lorem"', '@10.16mm,12.7mm', '"Lato-Bold"', '12pt', 'centre,baseline', '#ff0000,#00ff00'],
    min: 1
  },
  {
    command: ['new', 'label', 'string', 'relative', 'font', 'fontsize', 'halign', 'valign', 'colour'],
    help: ['new', 'label', '"lorem"', '10.16mm,12.7mm', '"Lato-Bold"', '12pt', 'centre,baseline', '#ff0000,#00ff00'],
    min: 1
  },
  {
    command: ['new', 'label', 'string', 'geometry', 'font', 'fontsize', 'halign', 'valign', 'colour'],
    help: ['new', 'label', '"lorem"', 'centre,middle', '"Lato-Bold"', '12pt', 'centre,baseline', '#ff0000,#00ff00'],
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
    command: ['set', 'module', 'name'],
    help: ['set', 'module', 'name <em>&lt;name&gt;</em>'],
    min: 1
  },
  {
    command: ['set', 'module', 'height'],
    help: ['set', 'module', 'height 1U'],
    min: 1
  },
  {
    command: ['set', 'module', 'width'],
    help: ['set', 'module', 'width <em>&lt;width&gt;</em>'],
    min: 1
  },
  {
    command: ['set', 'background', 'none'],
    help: ['set', 'background', 'none'],
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
    command: ['decorate', 'component', 'name', 'decoration', 'name'],
    help: ['decorate', '(component', '&lt;name&gt;)', 'with &lt;decoration&gt;'],
    min: 1
  },
  {
    command: ['delete', 'guide', 'identifier'],
    help: ['delete', 'guide', '<em>&lt;id&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'input', 'identifier'],
    help: ['delete', 'input', '<em>&lt;id&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'output', 'identifier'],
    help: ['delete', 'output', '<em>&lt;id&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'parameter', 'identifier'],
    help: ['delete', 'parameter', '<em>&lt;id&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'light', 'identifier'],
    help: ['delete', 'light', '<em>&lt;id&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'widget', 'identifier'],
    help: ['delete', 'widget', '<em>&lt;id&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'label', 'identifier'],
    help: ['delete', 'label', '<em>&lt;id&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'label', 'string'],
    help: ['delete', 'label', '"<em>&lt;text&gt;</em>"'],
    min: 1
  },
  {
    command: ['delete', 'decoration', 'identifier'],
    help: ['delete', 'decoration', '<em>&lt;id&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'decoration', 'input', 'identifier', 'name'],
    help: ['delete', 'decoration', '(input <em>&lt;id&gt;</em>)', '<em>&lt;name&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'decoration', 'output', 'identifier', 'name'],
    help: ['delete', 'decoration', '(output <em>&lt;id&gt;</em>)', '<em>&lt;name&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'decoration', 'parameter', 'identifier', 'name'],
    help: ['delete', 'decoration', '(parameter <em>&lt;id&gt;</em>)', '<em>&lt;name&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'decoration', 'light', 'identifier', 'name'],
    help: ['delete', 'decoration', '(light <em>&lt;id&gt;</em>)', '<em>&lt;name&gt;</em>'],
    min: 1
  },
  {
    command: ['delete', 'decoration', 'widget', 'identifier', 'name'],
    help: ['delete', 'decoration', '(widget <em>&lt;id&gt;</em>)', '<em>&lt;name&gt;</em>'],
    min: 1
  },
  {
    command: ['load', 'project'],
    help: ['load', 'project'],
    min: 1
  },
  {
    command: ['load', 'script'],
    help: ['load', 'script'],
    min: 1
  },
  {
    command: ['save', 'project'],
    help: ['save', 'project'],
    min: 1
  },
  {
    command: ['save', 'project', 'timestamp'],
    help: ['save', 'project', 'timestamp'],
    min: 1
  },
  {
    command: ['save', 'project', 'gzip'],
    help: ['save', 'project', 'gzip'],
    min: 1
  },
  {
    command: ['save', 'project', 'timestamp', 'gzip'],
    help: ['save', 'project', 'timestamp,gzip'],
    min: 1
  },
  {
    command: ['save', 'project', 'gzip', 'timestamp'],
    help: ['save', 'project', 'timestamp,gzip'],
    min: 1
  },
  {
    command: ['save', 'script'],
    help: ['save', 'script'],
    min: 1
  },
  {
    command: ['save', 'script', 'timestamp'],
    help: ['save', 'script', 'timestamp'],
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

export function help (prompt, text) {
  const tokens = []
  const src = `${text}`
  const tree = parser.parse(src)
  const root = tree.rootNode

  if (root.namedChildCount > 0) {
    tokens.push(...walk(root.namedChildren[0]))
  }

  // console.log(tokens)

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
