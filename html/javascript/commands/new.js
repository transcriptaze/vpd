import { mm } from './commands.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]

    if (child.type === 'entity' && child.namedChildCount > 0) {
      const entity = child.namedChildren[0]

      switch (entity.type) {
        case 'module':
          return newModule(entity)

        case 'guide':
          return newGuide(entity)

        default:
          throw new Error(`unknown 'new' entity <<${entity.type}>>`)
      }
    }
  }

  throw new Error("invalid 'new' command")
}

function newModule (node) {
  const object = {
    action: 'new',
    module: {}
  }

  for (const child of node.namedChildren) {
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

function newGuide (node) {
  const object = {
    action: 'new',
    guide: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.guide.name = child.text.trim()
    } else if (child.type === 'orientation') {
      object.guide.orientation = child.text
    } else if (child.type === 'offset') {
      object.guide.offset = mm(child.text)
    }
  }

  return object
}