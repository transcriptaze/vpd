import * as components from './components.js'

export function newWidget (node) {
  return {
    action: 'new',
    widget: components.parse(node)
  }
}
