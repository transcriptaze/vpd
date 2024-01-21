import { string } from './commands.js'

export function parse (node) {
  for (const child of node.namedChildren) {
    const src = node.text

    switch (child.type) {
      case 'input':
        return newDecoration(child, node, src)

      case 'output':
        return newDecoration(child, node, src)

      case 'parameter':
        return newDecoration(child, node, src)

      case 'light':
        return newDecoration(child, node, src)

      case 'widget':
        return newDecoration(child, node, src)
    }
  }

  throw new Error("invalid 'decorate' command")
}

function newDecoration (component, node, src) {
  const object = {
    src: `${src}`,
    action: 'new',
    decoration: {
      component: `${component.type}<${string(component)}>`,
      scale: 1.0,
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'decoration') {
      for (const attr of child.namedChildren) {
        if (attr.type === 'name') {
          object.decoration.name = string(attr)
        }

        if (attr.type === 'scale') {
          const v = parseFloat(attr.text)
          if (!Number.isNaN(v)) {
            object.decoration.scale = v
          }
        }
      }

      return object
    }
  }

  throw new Error("invalid 'decorate' command")
}
