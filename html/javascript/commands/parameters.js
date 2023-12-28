import { mm } from './commands.js'

export function newParameter (node) {
  const object = {
    action: 'new',
    parameter: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'name' && child.namedChildCount > 0) {
      object.label.name = child.namedChildren[0].text.trim()
    }

    if (child.type === 'anchor') {
      object.parameter.anchor = {
        reference: 'absolute'
      }

      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.parameter.anchor.x = mm(v.text)
        }
        if (v.type === 'y') {
          object.parameter.anchor.y = mm(v.text)
        }
      }
    }
  }

  return object
}
