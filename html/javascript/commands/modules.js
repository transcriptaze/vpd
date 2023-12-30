import { mm } from './commands.js'

export function newModule (node) {
  const object = {
    action: 'new',
    module: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'name') {
      const name = child.text.trim()
      const match = name.match(/"(.*?)"/)

      if (match && match.length > 1) {
        object.module.name = match[1]
      } else {
        object.module.name = name
      }
    } else if (child.type === 'height') {
      object.module.height = mm(child.text)
    } else if (child.type === 'width') {
      object.module.width = mm(child.text)
    }
  }

  return object
}
