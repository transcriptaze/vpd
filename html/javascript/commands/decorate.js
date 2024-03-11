import * as decorations from './decorations.js'

export function parse (node) {
  return decorations.newDecoration(node, node.text)
}
