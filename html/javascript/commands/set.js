import { setOrigin } from './origin.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]

    if (child.type === 'attr' && child.namedChildCount > 0) {
      const attr = child.namedChildren[0]

      switch (attr.type) {
        case 'origin':
          return setOrigin(attr)

        default:
          throw new Error(`unknown 'set' attribute <<${attr.type}>>`)
      }
    }
  }

  throw new Error("invalid 'set' command")
}
