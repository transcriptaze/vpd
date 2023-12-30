import { mm } from './commands.js'

export function newParameter (node) {
  const object = {
    action: 'new',
    parameter: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'name' && child.namedChildCount > 0) {
      object.parameter.name = child.namedChildren[0].text.trim()
    }

    if (child.type === 'absolute') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.parameter.x = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }

        if (v.type === 'y') {
          object.parameter.y = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }
      }
    }

    if (child.type === 'x') {
      object.parameter.x = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.parameter.y = {
        reference: reference(child),
        offset: offset(child)
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
