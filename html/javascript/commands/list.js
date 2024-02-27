import * as fonts from './fonts.js'

export function parse (node) {
  const src = node.text

  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]

    switch (child.type) {
      case 'fonts':
        return fonts.listFonts(child, src)

      default:
        throw new Error(`unknown 'list' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'list' command")
}
