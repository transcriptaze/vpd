const symbols = new Map([
  ['name', '<em>&lt;name&gt;</em>'],
  ['height', '1U']
])

const corpus = [
  ['new', 'module', 'name', '9H'],
  ['new', 'module', 'name', '45mm'],
  ['new', 'module', 'name', 'height', '9H'],
  ['new', 'module', 'name', 'height', '45mm'],
  ['new', 'input'],
  ['new', 'output'],
  ['new', 'parameter'],
  ['new', 'light'],
  ['new', 'widget'],
  ['new', 'label'],
  ['new', 'decoration'],
  ['new', 'guide'],

  ['delete', 'input', 'in'],

  ['set', 'module', 'name', 'woot'],

  ['decorate', 'input'],

  ['load', 'project'],
  ['load', 'script'],
  ['load', 'font'],

  ['unload', 'font'],

  ['save', 'project'],

  ['export', 'module', 'svg'],

  ['list', 'fonts'],
  ['list', 'parts'],
  ['list', 'decorations'],

  ['help']
]

let parser

export async function init (Parser, wasm) {
  const grammar = await Parser.Language.load(wasm)

  parser = new Parser()
  parser.setLanguage(grammar)
}

export function parse (text) {
  const src = `${text}`
  const tree = parser.parse(src)
  const root = tree.rootNode
  const tokens = []

  if (root.namedChildCount > 0) {
    tokens.push(...walk(root.namedChildren[0]))
  }

  // console.log('>>>>>>>>>>>>>>>>>>>>', tokens)

  const list = new Set()

  for (const v of corpus) {
    if (matches(v, tokens)) {
      const cmd = v.slice(0, tokens.length + 1)
      const formatted = cmd.map((t) => symbols.has(t) ? symbols.get(t) : `${t}`)

      list.add(formatted.join(' '))
    }
  }

  return Array.from(list)
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

function matches (command, tokens) {
  if (command.length < tokens.length) {
    return false
  }

  for (const [i, t] of tokens.entries()) {
    if (command[i] !== t) {
      return false
    }
  }

  return true
}
