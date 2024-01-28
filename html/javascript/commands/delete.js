import * as guide from './guides.js'
import * as input from './inputs.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]
    const src = node.text

    switch (child.type) {
      case 'guide':
        return guide.deleteGuide(child, src)

      case 'input':
        return input.deleteInput(child, src)

      default:
        throw new Error(`unknown 'delete' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'delete' command")
}
