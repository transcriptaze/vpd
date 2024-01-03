import { reference, offset, clean, mm } from './commands.js'

export function newInput (node) {
  const object = {
    action: 'new',
    input: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'name' && child.namedChildCount > 0) {
      object.input.name = child.namedChildren[0].text.trim()
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

    if (child.type === 'x') {
      object.input.x = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.input.y = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'part') {
      object.input.part = clean(child.text)
    }
  }

  return object
}
