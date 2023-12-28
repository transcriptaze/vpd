import { mm } from './commands.js'

export function newLabel (node) {
  const object = {
    action: 'new',
    label: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'text' && child.namedChildCount > 0) {
      object.label.text = child.namedChildren[0].text.trim()
    }

    if (child.type === 'anchor') {
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
