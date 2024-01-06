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

  if (root.childCount > 0) {
    return parseNode(root.children[0])
  }

  throw new Error('invalid command')
}

export function parseVPX (vpx) {
  const src = `${vpx}`
  const tree = parser.parse(src)
  const root = tree.rootNode
  const script = []

  for (const node of root.namedChildren) {
    const v = parseNode(node)

    if (v != null) {
      script.push(parseNode(node))
    }
  }

  return script
}

export function parseNode (node) {
  switch (node.type) {
    case 'comment':
      return null

    case 'new':
      return _new(node)

    case 'set':
      return _set.parse(node)

    case 'export':
      return _export.parse(node)

    case 'ERROR':
      console.error(node)
      throw new Error(`error parsing command ${node}`)

    default:
      throw new Error(`unknown command ${node.type}`)
  }
}

function _new (node) {
  if (node.namedChildCount > 0) {
    const entity = node.namedChildren[0]

    switch (entity.type) {
      case 'module':
        return commands.newModule(entity)

      case 'input':
        return commands.newInput(entity)

      case 'output':
        return commands.newOutput(entity)

      case 'parameter':
        return commands.newParameter(entity)

      case 'light':
        return commands.newLight(entity)

      case 'widget':
        return commands.newWidget(entity)

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
