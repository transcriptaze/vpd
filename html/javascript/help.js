let parser

const ID = '<em>&lt;id&gt;</em>'
const NAME = '<em>&lt;name&gt;</em>'
const PART = '<em>&lt;part&gt;</em>'
const X = '<em>&lt;x&gt;</em>'
const Y = '<em>&lt;y&gt;</em>'

export async function init (Parser) {
  const grammar = await Parser.Language.load('../wasm/grammars/tree-sitter-help.wasm')

  parser = new Parser()
  parser.setLanguage(grammar)
}

const COMMANDS = [
  {
    command: ['new', 'module'],
    help: ['new', 'module', `${NAME}`],
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
    command: ['new', 'input', 'name', 'xy', 'part'],
    help: ['new', 'input', `${NAME}`, '@10mm,10mm', 'PJ301M'],
    min: 1
  },
  {
    command: ['new', 'input', 'name', 'xy', 'part'],
    help: ['new', 'input', `${NAME}`, '10mm,10mm', 'PJ301M'],
    min: 1
  },
  {
    command: ['new', 'input', 'name', 'xy', 'part'],
    help: ['new', 'input', `${NAME}`, 'left+10mm,top+10mm', 'PJ301M'],
    min: 1
  },
  {
    command: ['new', 'input', 'name', 'xy', 'part'],
    help: ['new', 'input', `${NAME}`, '(output audio +0mm,-10.16mm)', 'PJ301M'],
    min: 1
  },
  {
    command: ['new', 'output', 'name', 'xy', 'part'],
    help: ['new', 'output', `${NAME}`, '@10mm,10mm', 'PJ301M'],
    min: 1
  },
  {
    command: ['new', 'output', 'name', 'xy', 'part'],
    help: ['new', 'output', `${NAME}`, '10mm,10mm', 'PJ301M'],
    min: 1
  },
  {
    command: ['new', 'output', 'name', 'xy', 'part'],
    help: ['new', 'output', `${NAME}`, 'left+10mm,top+10mm', 'PJ301M'],
    min: 1
  },
  {
    command: ['new', 'output', 'name', 'xy', 'part'],
    help: ['new', 'output', `${NAME}`, '(input audio +0mm,+10.16mm)', 'PJ301M'],
    min: 1
  },
  {
    command: ['new', 'parameter', 'name', 'xy', 'part'],
    help: ['new', 'parameter', `${NAME}`, '@10mm,10mm', 'RoundBlackKnob'],
    min: 1
  },
  {
    command: ['new', 'parameter', 'name', 'xy', 'part'],
    help: ['new', 'parameter', `${NAME}`, '10mm,10mm', 'RoundBlackKnob'],
    min: 1
  },
  {
    command: ['new', 'parameter', 'name', 'xy', 'part'],
    help: ['new', 'parameter', `${NAME}`, 'left+10mm,top+10mm', 'RoundBlackKnob'],
    min: 1
  },
  {
    command: ['new', 'parameter', 'name', 'xy', 'part'],
    help: ['new', 'parameter', `${NAME}`, '(input audio +0mm,+10.16mm)', 'RoundBlackKnob'],
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
    command: ['set', 'input', 'identifier', 'name'],
    help: ['set', 'input', ID, `name ${NAME}`],
    min: 1
  },
  {
    command: ['set', 'input', 'identifier', 'x'],
    help: ['set', 'input', ID, `x ${X}`],
    min: 1
  },
  {
    command: ['set', 'input', 'identifier', 'y'],
    help: ['set', 'input', ID, `y ${Y}`],
    min: 1
  },
  {
    command: ['set', 'input', 'identifier', 'xy'],
    help: ['set', 'input', ID, `xy ${X},${Y}`],
    min: 1
  },
  {
    command: ['set', 'input', 'identifier', 'part'],
    help: ['set', 'input', ID, `part ${PART}`],
    min: 1
  },
  {
    command: ['set', 'output', 'identifier', 'name'],
    help: ['set', 'output', ID, `name ${NAME}`],
    min: 1
  },
  {
    command: ['set', 'output', 'identifier', 'x'],
    help: ['set', 'output', ID, `x ${X}`],
    min: 1
  },
  {
    command: ['set', 'output', 'identifier', 'y'],
    help: ['set', 'output', ID, `y ${Y}`],
    min: 1
  },
  {
    command: ['set', 'output', 'identifier', 'xy'],
    help: ['set', 'output', ID, `xy ${X},${Y}`],
    min: 1
  },
  {
    command: ['set', 'output', 'identifier', 'part'],
    help: ['set', 'output', ID, `part ${PART}`],
    min: 1
  },
  {
    command: ['set', 'parameter', 'identifier', 'x'],
    help: ['set', 'parameter', ID, `x ${X}`],
    min: 1
  },
  {
    command: ['set', 'parameter', 'identifier', 'y'],
    help: ['set', 'parameter', ID, `y ${Y}`],
    min: 1
  },
  {
    command: ['set', 'parameter', 'identifier', 'xy'],
    help: ['set', 'parameter', ID, `xy ${X},${Y}`],
    min: 1
  },
  {
    command: ['set', 'parameter', 'identifier', 'part'],
    help: ['set', 'parameter', ID, `part ${PART}`],
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
  },
  {
    command: ['export', 'panel', 'header'],
    help: ['export', 'panel', '.h'],
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
