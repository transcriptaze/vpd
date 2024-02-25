import * as projects from './projects.js'
import * as scripts from './scripts.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]
    const src = node.text

    switch (child.type) {
      case 'project':
        return projects.saveProject(child, src)

      case 'script':
        return scripts.saveScript(child, src)

      default:
        throw new Error(`unknown 'save' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'save' command")
}
