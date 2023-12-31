import { reference, offset, mm } from './commands.js'

export function newOutput (node) {
  const object = {
    action: 'new',
    output: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'name' && child.namedChildCount > 0) {
      object.output.name = child.namedChildren[0].text.trim()
    }

    if (child.type === 'absolute') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.output.x = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }

        if (v.type === 'y') {
          object.output.y = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }
      }
    }

    if (child.type === 'x') {
      object.output.x = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.output.y = {
        reference: reference(child),
        offset: offset(child)
      }
    }
  }

  return object
}
