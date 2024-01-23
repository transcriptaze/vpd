import * as components from './components.js'

export function newInput (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    input: components.parse(node)
  }
}
