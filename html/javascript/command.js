import * as commands from './commands/commands.js'
import * as _set from './commands/set.js'
import * as _export from './commands/export.js'
let parser

export async function init (Parser) {
  const grammar = await Parser.Language.load('../wasm/grammars/tree-sitter-command.wasm')

  parser = new Parser()
  parser.setLanguage(grammar)
}

export function parse (cmd) {
  const src = `${cmd}`
  const tree = parser.parse(src)
  const root = tree.rootNode

  console.log(cmd)

  if (root.childCount > 0) {
    const node = root.children[0]
    switch (node.type) {
      case 'ERROR':
        return null

      case 'new':
        return _new(node)

      case 'set':
        return _set.parse(node)

      case 'export':
        return _export.parse(node)

      default:
        throw new Error(`unknown command ${node.type}`)
    }
  }

  throw new Error('invalid command')
}

function _new (node) {
  if (node.namedChildCount > 0) {
    const entity = node.namedChildren[0]

    switch (entity.type) {
      case 'module':
        return commands.newModule(entity)

      case 'input':
        return commands.newInput(entity)

      case 'parameter':
        return commands.newParameter(entity)

      case 'label':
        return commands.newLabel(entity)

      case 'guide':
        return commands.newGuide(entity)

      default:
        throw new Error(`unknown 'new' entity <<${entity.type}>>`)
    }
  }

  throw new Error("invalid 'new' command")
}
