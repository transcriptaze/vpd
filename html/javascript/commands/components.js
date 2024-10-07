import { identifier, string, reference, offset, clean, mm, polar } from './commands.js'

// FIXME remove
export function parse (node) {
  return create(node)
}

export function create (node) {
  const object = {
    offset: {
      dx: 0.0,
      dy: 0.0,
      angle: 0.0,
      radius: 0.0
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.id = identifier(child)
    }

    if (child.type === 'name') {
      object.name = string(child)
    }

    if (child.type === 'absolute') {
      object.x = {
        reference: 'absolute',
        offset: 0.0
      }

      object.y = {
        reference: 'absolute',
        offset: 0.0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.x = {
            reference: 'absolute',
            offset: mm(v)
          }
        }

        if (v.type === 'y') {
          object.y = {
            reference: 'absolute',
            offset: mm(v)
          }
        }

        if (v.type === 'polar') {
          const { angle, radius } = polar(v)

          object.offset.angle = angle
          object.offset.radius = radius
        }
      }
    }

    if (child.type === 'relative') {
      object.x = {
        reference: 'origin',
        offset: 0.0
      }

      object.y = {
        reference: 'origin',
        offset: 0.0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.x = {
            reference: 'origin',
            offset: mm(v)
          }
        }

        if (v.type === 'y') {
          object.y = {
            reference: 'origin',
            offset: mm(v)
          }
        }

        if (v.type === 'polar') {
          const { angle, radius } = polar(v)

          object.offset.angle = angle
          object.offset.radius = radius
        }
      }
    }

    if (child.type === 'x') {
      object.x = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.y = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'polar') {
      const { angle, radius } = polar(child)

      object.offset.angle = angle
      object.offset.radius = radius
    }

    if (['input', 'output', 'parameter', 'light', 'widget'].includes(child.type)) {
      object.x = {
        offset: 0
      }

      object.y = {
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'name') {
          object.x.reference = `${child.type}<${identifier(v)}>`
          object.y.reference = `${child.type}<${identifier(v)}>`
        }

        if (v.type === 'dx') {
          object.x.offset = mm(v)
        }

        if (v.type === 'dy') {
          object.y.offset = mm(v)
        }

        if (v.type === 'polar') {
          const { angle, radius } = polar(v)

          object.offset.angle = angle
          object.offset.radius = radius
        }
      }
    }

    if (child.type === 'part') {
      object.part = clean(child.text)
    }
  }

  return object
}

export function del (node, src) {
  const object = {
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.id = identifier(child)
    }
  }

  return object
}

export function set (node, src) {
  const object = {
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.id = identifier(child)
    }
  }

  for (const child of node.parent.namedChildren) {
    if (child.type === 'name') {
      object.name = string(child)
    }

    if (child.type === 'x') {
      object.x = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.x.reference = 'absolute'
        }

        if (v.type === 'reference') {
          object.x.reference = identifier(v)
        }

        if (v.type === 'offset') {
          object.x.offset = mm(v)
        }

        if (['input', 'output', 'parameter', 'light', 'widget'].includes(v.type)) {
          for (const u of v.namedChildren) {
            if (u.type === 'name') {
              object.x.reference = `${v.type}<${identifier(u)}>`
            }

            if (u.type === 'offset') {
              object.x.offset = mm(u)
            }
          }
        }
      }
    }

    if (child.type === 'y') {
      object.y = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.y.reference = 'absolute'
        }

        if (v.type === 'reference') {
          object.y.reference = identifier(v)
        }

        if (v.type === 'offset') {
          object.y.offset = mm(v)
        }

        if (['input', 'output', 'parameter', 'light', 'widget'].includes(v.type)) {
          for (const u of v.namedChildren) {
            if (u.type === 'name') {
              object.y.reference = `${v.type}<${identifier(u)}>`
            }

            if (u.type === 'offset') {
              object.y.offset = mm(u)
            }
          }
        }
      }
    }

    if (child.type === 'xy') {
      object.x = {
        reference: 'origin',
        offset: 0.0
      }

      object.y = {
        reference: 'origin',
        offset: 0.0
      }

      object.offset = {
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.x.reference = 'absolute'
          object.y.reference = 'absolute'
        }

        if (v.type === 'x') {
          for (const u of v.namedChildren) {
            if (u.type === 'reference') {
              object.x.reference = identifier(u)
            }

            if (u.type === 'offset') {
              object.x.offset = mm(u)
            }
          }
        }

        if (v.type === 'y') {
          for (const u of v.namedChildren) {
            if (u.type === 'reference') {
              object.y.reference = identifier(u)
            }

            if (u.type === 'offset') {
              object.y.offset = mm(u)
            }
          }
        }

        if (v.type === 'polar') {
          const { angle, radius } = polar(v)

          object.offset.angle = angle
          object.offset.radius = radius
        }

        if (['input', 'output', 'parameter', 'light', 'widget'].includes(v.type)) {
          for (const u of v.namedChildren) {
            if (u.type === 'name') {
              object.x.reference = `${v.type}<${identifier(u)}>`
              object.y.reference = `${v.type}<${identifier(u)}>`
            }

            if (u.type === 'x') {
              object.x.offset = mm(u)
            }

            if (u.type === 'y') {
              object.y.offset = mm(u)
            }

            if (u.type === 'polar') {
              const { angle, radius } = polar(u)

              object.offset.angle = angle
              object.offset.radius = radius
            }
          }
        }
      }
    }

    if (child.type === 'part') {
      object.part = string(child) === 'none' ? '' : string(child)
    }
  }

  return object
}
