import * as projects from './projects.js'
import * as scripts from './scripts.js'
import * as fonts from './fonts.js'

export function parse (node) {
  const src = node.text

  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]

    switch (child.type) {
      case 'project':
        return projects.loadProject(child, src)

      case 'script':
        return scripts.loadScript(child, src)

      case 'font':
        return fonts.loadFont(child, src)

      default:
        throw new Error(`unknown 'load' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'load' command")
}
