import { identifier } from './commands.js'
import * as components from './components.js'

export function newParameter (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    parameter: components.parse(node)
  }
}

export function deleteParameter (node, src) {
  const object = {
    src: `${src}`,
    action: 'delete',
    parameter: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.parameter.id = identifier(child)
    }
  }

  return object
}
