import * as components from './components.js'

export function newLight (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    light: components.parse(node)
  }
}
