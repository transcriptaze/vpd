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

    if (child.type === 'anchor') {
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
        object.input.x = {
          reference: v.text,
          offset: 0.0
        }

        if (v.type === 'y') {
          object.input.y = {
            reference: v.text,
            offset: 0.0
          }
        }
      }
    }
  }

  return object
}
