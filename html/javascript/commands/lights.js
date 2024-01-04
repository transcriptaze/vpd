import { reference, offset, clean, mm } from './commands.js'

export function newLight (node) {
  const object = {
    action: 'new',
    light: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'name' && child.namedChildCount > 0) {
      object.light.name = child.namedChildren[0].text.trim()
    }

    if (child.type === 'absolute') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.light.x = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }

        if (v.type === 'y') {
          object.light.y = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }
      }
    }

    if (child.type === 'x') {
      object.light.x = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.light.y = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'part') {
      object.light.part = clean(child.text)
    }
  }

  return object
}
