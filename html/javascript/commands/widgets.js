import * as components from './components.js'

export function newWidget (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    widget: components.parse(node)
  }
}
