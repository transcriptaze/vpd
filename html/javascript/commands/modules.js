import { string, mm } from './commands.js'

export function newModule (node, src) {
  const object = {
    src: `${src}`,
    action: 'new',
    module: {
      height: 128.5,
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'name') {
      object.module.name = string(child)
    } else if (child.type === 'height') {
      object.module.height = mm(child)
    } else if (child.type === 'width') {
      object.module.width = mm(child)
    }
  }

  return object
}
