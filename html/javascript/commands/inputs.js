import { identifier } from './commands.js'
import * as components from './components.js'

export function newInput (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    input: components.parse(node)
  }
}

export function deleteInput (node, src) {
  const object = {
    src: `${src}`,
    action: 'delete',
    input: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.input.id = identifier(child)
    }
  }

  return object
}
