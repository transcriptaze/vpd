import * as fonts from './fonts.js'
import * as decorations from './decorations.js'
import * as db from '../db.js'

export function parse (node) {
  const src = node.text

  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]

    switch (child.type) {
      case 'fonts':
        return fonts.listFonts(child, src)

      case 'parts':
        return listParts(child, src)

      case 'decorations':
        return decorations.listDecorations(child, src)

      default:
        throw new Error(`unknown 'list' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'list' command")
}

function listParts (node, src) {
  const parts = [
  ]

  const object = {
    src: `${src}`,
    action: 'list',
    parts: {
      preloaded: parts,
      user: db.listParts()
    }
  }

  return object
}
