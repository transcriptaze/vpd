import * as origin from './origin.js'
import * as background from './background.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]

    switch (child.type) {
      case 'origin':
        return origin.set(child)

      case 'background':
        return background.set(child)

      default:
        throw new Error(`unknown 'set' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'set' command")
}
