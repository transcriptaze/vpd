import * as origin from './origin.js'
import * as background from './background.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]
    const src = node.text

    switch (child.type) {
      case 'origin':
        return origin.set(child, src)

      case 'background':
        return background.set(child, src)

      default:
        throw new Error(`unknown 'set' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'set' command")
}
