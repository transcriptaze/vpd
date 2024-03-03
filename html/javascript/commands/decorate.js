import * as decorations from './decorations.js'

export function parse (node) {
  for (const child of node.namedChildren) {
    const src = node.text

    switch (child.type) {
      case 'input':
      case 'output':
      case 'parameter':
      case 'light':
      case 'widget':
        return decorations.decorate(child, node, src)
    }
  }

  throw new Error("invalid 'decorate' command")
}
