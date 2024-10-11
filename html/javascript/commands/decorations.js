import { identifier, string, reference, offset, mm, polar } from './commands.js'
import * as db from '../db.js'

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
      object.decoration.x = {
        reference: 'absolute',
        offset: 0.0
      }

      object.decoration.y = {
        reference: 'absolute',
        offset: 0.0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.decoration.x.offset = mm(v)
        }

        if (v.type === 'y') {
          object.decoration.y.offset = mm(v)
        }

        if (v.type === 'polar') {
          const { angle, radius } = polar(v)

          object.decoration.offset = {
            angle,
            radius
          }
        }
      }
    }

    if (child.type === 'relative') {
      object.decoration.x = {
        reference: 'origin',
        offset: 0.0
      }

      object.decoration.y = {
        reference: 'origin',
        offset: 0.0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.decoration.x.offset = mm(v)
        }

        if (v.type === 'y') {
          object.decoration.y.offset = mm(v)
        }

        if (v.type === 'polar') {
          const { angle, radius } = polar(v)

          object.decoration.offset = {
            angle,
            radius
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

    if (child.type === 'polar') {
      const { angle, radius } = polar(child)

      object.decoration.offset = {
        angle,
        radius
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

        if (attr.type === 'polar') {
          const { angle, radius } = polar(attr)

          object.decoration.offset = {
            angle,
            radius
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

      object.decoration.offset = {
        angle: 0.0,
        radius: 0.0
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

        if (attr.type === 'polar') {
          const { angle, radius } = polar(attr)

          object.decoration.offset = {
            angle,
            radius
          }
        }
      }
    }

    if (child.type === 'dx') {
      object.decoration.x = {
        offset: offset(child)
      }
    }

    if (child.type === 'dy') {
      object.decoration.y = {
        offset: offset(child)
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

    if (child.type === 'xy') {
      object.decoration.x = {
        reference: 'origin',
        offset: 0
      }

      object.decoration.y = {
        reference: 'origin',
        offset: 0
      }

      object.decoration.offset = {
        angle: 0.0,
        radius: 0.0
      }

      for (const attr of child.namedChildren) {
        if (attr.type === 'absolute') {
          object.decoration.x.reference = 'absolute'
          object.decoration.y.reference = 'absolute'
        }

        if (attr.type === 'x') {
          for (const u of attr.namedChildren) {
            if (u.type === 'reference') {
              object.decoration.x.reference = identifier(u)
            }

            if (u.type === 'offset') {
              object.decoration.x.offset = mm(u)
            }
          }
        }

        if (attr.type === 'y') {
          for (const u of attr.namedChildren) {
            if (u.type === 'reference') {
              object.decoration.y.reference = identifier(u)
            }

            if (u.type === 'offset') {
              object.decoration.y.offset = mm(u)
            }
          }
        }

        if (attr.type === 'polar') {
          const { angle, radius } = polar(attr)

          object.decoration.offset = {
            angle,
            radius
          }
        }
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
