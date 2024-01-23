import * as components from './components.js'

export function newOutput (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    output: components.parse(node)
  }
}
