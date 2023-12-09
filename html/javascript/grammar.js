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
        return makeNew(node)

      default:
        throw new Error(`unknown command ${node.type}`)
    }
  }

  throw new Error('invalid command')
}

function makeNew (node) {
  if (node.childCount > 1) {
    const cmd = node.children[0]
    const child = node.children[1]

    if (cmd.type === 'new' && child.type === 'entity' && child.childCount > 0) {
      const entity = child.children[0]

      switch (entity.type) {
        case 'module':
          return makeNewModule(entity)

        default:
          throw new Error(`unknown 'new' entity <<${entity.type}>>`)
      }
    }
  }

  throw new Error("invalid 'new' command")
}

function makeNewModule (node) {
  const object = {
    action: 'new',
    module: {
    }
  }

  for (const child of node.children.slice(1)) {
    if (child.type === 'name' && child.namedChildCount > 0) {
      object.module.name = child.namedChild(0).text.trim()
    } else if (child.type === 'height') {
      object.module.height = mm(child.text)
    } else if (child.type === 'width') {
      object.module.width = mm(child.text)
    }
  }

  return object
}

function mm (v) {
  let match = `${v}`.match(/([0-9]+)H/)
  if (match != null && match.length > 1) {
    return 5.08 * parseInt(match[1])
  }

  match = `${v}`.match(/([0-9]+)U/)
  if (match != null && match.length > 1) {
    return 128.5 * parseInt(match[1])
  }

  return parseFloat(`${v}`)
}
