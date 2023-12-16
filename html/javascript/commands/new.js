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

        case 'label':
          return newLabel(entity)

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

const reference = {
  absolute: (node) => { return 'absolute' },
  relative: (node) => { return 'origin' },
  geometry: (node) => { return node.text },
  guideline: (node) => {
    for (const v of node.namedChildren) {
      if (v.type === 'identifier') {
        return v.text
      }
    }

    return ''
  }
}

const offset = {
  absolute: (node) => {
    if (node.namedChildCount > 0 && node.namedChildren[0].type === 'offset') {
      return mm(node.namedChildren[0].text)
    } else {
      return 0.0
    }
  },

  relative: (node) => {
    if (node.namedChildCount > 0 && node.namedChildren[0].type === 'offset') {
      return mm(node.namedChildren[0].text)
    } else {
      return 0.0
    }
  },

  geometry: (node) => {
    return 0.0
  },

  guideline: (node) => {
    for (const v of node.namedChildren) {
      if (v.type === 'offset') {
        return mm(v.text)
      }
    }
    return 0.0
  }
}

function newGuide (node) {
  const object = {
    action: 'new',
    guide: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.guide.name = child.text.trim()
    } else if (child.type === 'vertical' || child.type === 'horizontal') {
      object.guide.orientation = child.type

      if (child.namedChildCount > 0) {
        const xy = child.namedChildren[0]

        object.guide.reference = reference[xy.type](xy)
        object.guide.offset = offset[xy.type](xy)
      }
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
