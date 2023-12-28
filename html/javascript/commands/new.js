import { mm } from './commands.js'
import { newParameter } from './parameters.js'
import { newLabel } from './labels.js'
import { newGuide } from './guides.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const entity = node.namedChildren[0]

    console.log('>>> ', entity.type)

    switch (entity.type) {
      case 'module':
        return newModule(entity)

      case 'parameter':
        return newParameter(entity)

      case 'label':
        return newLabel(entity)

      case 'guide':
        return newGuide(entity)

      default:
        throw new Error(`unknown 'new' entity <<${entity.type}>>`)
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
    if (child.type === 'name') {
      const name = child.text.trim()
      const match = name.match(/"(.*?)"/)

      if (match && match.length > 1) {
        object.module.name = match[1]
      } else {
        object.module.name = name
      }
    } else if (child.type === 'height') {
      object.module.height = mm(child.text)
    } else if (child.type === 'width') {
      object.module.width = mm(child.text)
    }
  }

  return object
}
