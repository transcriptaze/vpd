import { mm } from './commands.js'

export function newInput (node) {
  const object = {
    action: 'new',
    input: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'name' && child.namedChildCount > 0) {
      object.label.name = child.namedChildren[0].text.trim()
    }

    if (child.type === 'absolute') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.input.x = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }

        if (v.type === 'y') {
          object.input.y = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }
      }
    }

    if (child.type === 'geometry') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.input.x = {
            reference: reference(v),
            offset: offset(v)
          }
        }

        if (v.type === 'y') {
          object.input.y = {
            reference: reference(v),
            offset: offset(v)
          }
        }
      }
    }
  }

  return object
}

function reference (node) {
  for (const child of node.namedChildren) {
    if (child.type === 'reference') {
      return child.text.trim()
    }
  }

  return 'origin'
}

function offset (node) {
  for (const child of node.namedChildren) {
    if (child.type === 'offset') {
      return mm(child.text)
    }
  }

  return 0.0
}