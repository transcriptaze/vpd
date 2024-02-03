import { identifier, string } from './commands.js'

export function newDecoration (component, node, src) {
  const object = {
    src: `${src}`,
    action: 'new',
    decoration: {
      reference: `${component.type}<${string(component)}>`,
      offset: {
        x: 0.0,
        y: 0.0
      },
      scale: 1.0,
      stretch: {
        x: 1.0,
        y: 1.0
      }
    }
  }

  for (const attr of component.namedChildren) {
    if (attr.type === 'dx') {
      const v = parseFloat(attr.text)
      if (!Number.isNaN(v)) {
        object.decoration.offset.x = v
      }
    }

    if (attr.type === 'dy') {
      const v = parseFloat(attr.text)
      if (!Number.isNaN(v)) {
        object.decoration.offset.y = v
      }
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

        if (attr.type === 'stretch') {
          for (const xy of attr.namedChildren) {
            if (xy.type === 'x') {
              const v = parseFloat(xy.text)
              if (!Number.isNaN(v)) {
                object.decoration.stretch.x = v
              }
            }

            if (xy.type === 'y') {
              const v = parseFloat(xy.text)
              if (!Number.isNaN(v)) {
                object.decoration.stretch.y = v
              }
            }
          }
        }
      }

      return object
    }
  }

  throw new Error("invalid 'decorate' command")
}

export function deleteDecoration (node, src) {
  const object = {
    src: `${src}`,
    action: 'delete',
    decoration: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.decoration.id = identifier(child)
    }

    if (['input', 'output', 'parameter', 'light', 'widget'].includes(child.type) && child.namedChildCount > 0) {
      for (const v of child.namedChildren) {
        if (v.type === 'identifier') {
          object.decoration.reference = `${child.type}<${identifier(v)}>`
        }
      }
    }

    if (child.type === 'name') {
      object.decoration.name = string(child)
    }
  }

  return object
}
