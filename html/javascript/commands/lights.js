import * as components from './components.js'

export function newLight (node) {
  return {
    action: 'new',
    light: components.parse(node)
  }
}
