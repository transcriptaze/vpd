import * as components from './components.js'

export function newOutput (node) {
  return {
    action: 'new',
    output: components.parse(node)
  }
}
