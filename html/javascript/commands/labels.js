import { reference, offset, mm } from './commands.js'

export function newLabel (node) {
  const object = {
    action: 'new',
    label: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'string') {
      object.label.text = child.text
    }

    if (child.type === 'absolute') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.label.x = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }

        if (v.type === 'y') {
          object.label.y = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }
      }
    }

    if (child.type === 'x') {
      object.label.x = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.label.y = {
        reference: reference(child),
        offset: offset(child)
      }
    }
  }

  return object
}
