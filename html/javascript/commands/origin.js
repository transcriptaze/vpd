import { mm } from './commands.js'

export function setOrigin (node) {
  const object = {
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
      object.origin.x = {
        reference: child.text.trim(),
        offset: 0.0
      }
    }

    if (child.type === 'y') {
      object.origin.y = {
        reference: child.text.trim(),
        offset: 0.0
      }
    }
  }

  return object
}
