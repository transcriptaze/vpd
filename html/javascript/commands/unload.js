import * as fonts from './fonts.js'

export function parse (node) {
  const src = node.text

  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]

    switch (child.type) {
      case 'font':
        return fonts.unloadFont(child, src)

      default:
        throw new Error(`unknown 'unload' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'unload' command")
}
