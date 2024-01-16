import { mm } from './commands.js'

export function set (node, src) {
  const object = {
    src: `${src}`,
    action: 'set',
    origin: {
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'absolute') {
      for (const child of node.namedChildren) {
        if (child.type === 'x') {
          object.origin.x = {
            reference: 'absolute',
            offset: mm(child.text)
          }
        }

        if (child.type === 'y') {
          object.origin.y = {
            reference: 'absolute',
            offset: mm(child.text)
          }
        }
      }

      return object
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'x') {
      object.origin.x = xy(child)
    }

    if (child.type === 'y') {
      object.origin.y = xy(child)
    }
  }

  return object
}

function xy (node) {
  const object = {
    offset: 0.0
  }

  for (const child of node.namedChildren) {
    if (child.type === 'reference') {
      object.reference = child.text.trim()
    }

    if (child.type === 'offset') {
      object.offset = mm(child.text)
    }
  }

  return object
}
