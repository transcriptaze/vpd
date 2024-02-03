import { identifier } from './commands.js'
import * as components from './components.js'

export function newOutput (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    output: components.parse(node)
  }
}

export function deleteOutput (node, src) {
  const object = {
    src: `${src}`,
    action: 'delete',
    output: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.output.id = identifier(child)
    }
  }

  return object
}
