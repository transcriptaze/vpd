import * as components from './components.js'

export function newParameter (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    parameter: components.parse(node)
  }
}
