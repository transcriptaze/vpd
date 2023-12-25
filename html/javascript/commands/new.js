import { mm } from './commands.js'
import { newGuide } from './guide.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const entity = node.namedChildren[0]

    switch (entity.type) {
      case 'module':
        return newModule(entity)

      case 'guide':
        return newGuide(entity)

      case 'label':
        return newLabel(entity)

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

function newLabel (node) {
  const object = {
    action: 'new',
    label: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'text' && child.namedChildCount > 0) {
      object.label.text = child.namedChildren[0].text.trim()
    } else if (child.type === 'anchor') {
      object.label.anchor = {
        reference: 'absolute'
      }

      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.label.anchor.x = mm(v.text)
        }
        if (v.type === 'y') {
          object.label.anchor.y = mm(v.text)
        }
      }
    }
  }

  return object
}
