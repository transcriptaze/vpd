import * as components from './components.js'

export function newInput (node) {
  return {
    action: 'new',
    input: components.parse(node)
  }
}
