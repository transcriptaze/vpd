import * as _new from './commands/new.js'
import * as _set from './commands/set.js'
import * as _decorate from './commands/decorate.js'
import * as _delete from './commands/delete.js'
import * as _load from './commands/load.js'
import * as _save from './commands/save.js'
import * as _export from './commands/export.js'
let parser

export async function init (Parser) {
  const grammar = await Parser.Language.load('../wasm/grammars/tree-sitter-command.wasm')

  parser = new Parser()
  parser.setLanguage(grammar)
}

export function parse (cmd) {
  try {
    const src = `${cmd}`
    const tree = parser.parse(src)
    const root = tree.rootNode

    if (root.childCount > 0) {
      const node = root.children[0]
      const object = parseNode(node)

      return object
    }
  } catch (err) {
    throw new Error(`${err}`)
  }

  throw new Error('invalid command')
}

export function parseVPX (vpx) {
  const src = `${vpx}`
  const tree = parser.parse(src)
  const root = tree.rootNode
  const script = []

  for (const node of root.namedChildren) {
    const object = parseNode(node)

    if (object != null) {
      script.push({
        command: object,
        line: node.text
      })
    }
  }

  return script
}

export function parseNode (node) {
  switch (node.type) {
    case 'comment':
      return null

    case 'new':
      return _new.parse(node)

    case 'set':
      return _set.parse(node)

    case 'decorate':
      return _decorate.parse(node)

    case 'delete':
      return _delete.parse(node)

    case 'load':
      return _load.parse(node)

    case 'save':
      return _save.parse(node)

    case 'export':
      return _export.parse(node)

    case 'ERROR':
      console.error(node)
      throw new Error(`error parsing command ${node}`)

    default:
      throw new Error(`unknown command ${node.type}`)
  }
}
