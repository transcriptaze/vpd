import { identifier } from './commands.js'
import * as components from './components.js'

export function newLight (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    light: components.parse(node)
  }
}

export function deleteLight (node, src) {
  const object = {
    src: `${src}`,
    action: 'delete',
    light: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.light.id = identifier(child)
    }
  }

  return object
}
