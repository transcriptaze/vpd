import * as _new from './commands/new.js'
import * as _set from './commands/set.js'
let parser

export async function init (Parser) {
  const grammar = await Parser.Language.load('../wasm/grammar/tree-sitter-vpd.wasm')

  parser = new Parser()
  parser.setLanguage(grammar)
}

export function parse (cmd) {
  const src = `${cmd}`
  const tree = parser.parse(src)
  const root = tree.rootNode

  if (root.childCount > 0) {
    const node = root.children[0]
    switch (node.type) {
      case 'ERROR':
        return null

      case 'new':
        return _new.parse(node)

      case 'set':
        return _set.parse(node)

      default:
        throw new Error(`unknown command ${node.type}`)
    }
  }

  throw new Error('invalid command')
}
