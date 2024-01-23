import * as project from './project.js'
import * as script from './script.js'

export function parse (node) {
  if (node.namedChildCount > 0) {
    const child = node.namedChildren[0]
    const src = node.text

    switch (child.type) {
      case 'project':
        return project.saveProject(child, src)

      case 'script':
        return script.saveScript(child, src)

      default:
        throw new Error(`unknown 'save' entity <<${child.type}>>`)
    }
  }

  throw new Error("invalid 'save' command")
}
