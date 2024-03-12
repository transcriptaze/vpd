import { identifier, string, reference, offset, mm } from './commands.js'
import * as db from '../db.js'

export function decorate (component, node, src) {
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

export function newDecoration (node, src) {
  const object = {
    src: `${src}`,
    action: 'new',
    decoration: {
      x: {
        reference: 'origin',
        offset: 0
      },
      y: {
        reference: 'origin',
        offset: 0
      },
      scale: 1.0,
      stretch: {
        x: 1.0,
        y: 1.0
      }
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'absolute') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.decoration.x = {
            reference: 'absolute',
            offset: mm(v)
          }
        }

        if (v.type === 'y') {
          object.decoration.y = {
            reference: 'absolute',
            offset: mm(v)
          }
        }
      }
    }

    if (child.type === 'relative') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.decoration.x = {
            reference: 'origin',
            offset: mm(v)
          }
        }

        if (v.type === 'y') {
          object.decoration.y = {
            reference: 'origin',
            offset: mm(v)
          }
        }
      }
    }

    if (child.type === 'x') {
      object.decoration.x = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.decoration.y = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (['input', 'output', 'parameter', 'light', 'widget'].includes(child.type)) {
      for (const attr of child.namedChildren) {
        if (attr.type === 'name') {
          object.decoration.x.reference = `${child.type}<${string(attr)}>`
          object.decoration.y.reference = `${child.type}<${string(attr)}>`
        }

        if (attr.type === 'dx') {
          const v = parseFloat(attr.text)
          if (!Number.isNaN(v)) {
            object.decoration.x.offset = v
          }
        }

        if (attr.type === 'dy') {
          const v = parseFloat(attr.text)
          if (!Number.isNaN(v)) {
            object.decoration.y.offset = v
          }
        }
      }
    }

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
    }
  }

  return object
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

export function setDecoration (node, src) {
  const object = {
    src: `${src}`,
    action: 'set',
    decoration: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.decoration.id = identifier(child)
    }

    if (['input', 'output', 'parameter', 'light', 'widget'].includes(child.type)) {
      for (const attr of child.namedChildren) {
        if (attr.type === 'identifier') {
          object.decoration.reference = `${child.type}<${identifier(attr)}>`
        }
      }
    }

    if (child.type === 'name') {
      object.decoration.name = string(child)
    }
  }

  for (const child of node.parent.namedChildren) {
    if (['input', 'output', 'parameter', 'light', 'widget'].includes(child.type)) {
      object.decoration.x = {
        offset: 0
      }

      object.decoration.y = {
        offset: 0
      }

      for (const attr of child.namedChildren) {
        if (attr.type === 'name') {
          object.decoration.x.reference = `${child.type}<${identifier(attr)}>`
          object.decoration.y.reference = `${child.type}<${identifier(attr)}>`
        }

        if (attr.type === 'dx') {
          object.decoration.x.offset = mm(attr)
        }

        if (attr.type === 'dy') {
          object.decoration.y.offset = mm(attr)
        }
      }
    }

    if (child.type === 'x') {
      object.decoration.x = {
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.decoration.y = {
        offset: offset(child)
      }
    }

    if (child.type === 'stretch') {
      object.decoration.stretch = {}
      for (const attr of child.namedChildren) {
        if (attr.type === 'x') {
          const v = parseFloat(attr.text)
          if (!Number.isNaN(v)) {
            object.decoration.stretch.x = v
          }
        }

        if (attr.type === 'y') {
          const v = parseFloat(attr.text)
          if (!Number.isNaN(v)) {
            object.decoration.stretch.y = v
          }
        }
      }
    }

    if (child.type === 'scale') {
      const v = parseFloat(child.text)
      if (!Number.isNaN(v)) {
        object.decoration.scale = v
      }
    }
  }

  return object
}

export function listDecorations (node, src) {
  const decorations = [
  ]

  const object = {
    src: `${src}`,
    action: 'list',
    decorations: {
      preloaded: decorations,
      user: db.listDecorations()
    }
  }

  return object
}
