import { reference, offset, clean, mm } from './commands.js'

export function parse (node) {
  const object = {}

  for (const child of node.namedChildren) {
    if (child.type === 'name') {
      object.name = child.text.trim()
    }

    if (child.type === 'absolute') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.x = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }

        if (v.type === 'y') {
          object.y = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }
      }
    }

    if (child.type === 'x') {
      object.x = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.y = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'part') {
      object.part = clean(child.text)
    }
  }

  return object
}
