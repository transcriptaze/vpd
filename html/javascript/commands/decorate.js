import { string } from './commands.js'

export function parse (node) {
  if (node.namedChildCount > 1) {
    const entity = node.namedChildren[0]
    const decoration = node.namedChildren[1]
    const src = node.text

    switch (entity.type) {
      case 'input':
        return newDecoration(entity, decoration, src)

      case 'output':
        return newDecoration(entity, decoration, src)

      case 'parameter':
        return newDecoration(entity, decoration, src)

      case 'light':
        return newDecoration(entity, decoration, src)

      case 'widget':
        return newDecoration(entity, decoration, src)

      default:
        throw new Error(`unknown 'decorate' entity <<${entity.type}>>`)
    }
  }

  throw new Error("invalid 'decorate' command")
}

function newDecoration (entity, decoration, src) {
  const object = {
    src: `${src}`,
    action: 'new',
    decoration: {
      entity: `${entity.type}`
    }
  }

  for (const child of decoration.namedChildren) {
    if (child.type === 'name') {
      object.decoration.name = string(child)
    }
  }

  return object
}
