import * as components from './components.js'

export function newParameter (node) {
  return {
    action: 'new',
    parameter: components.parse(node)
  }
}
