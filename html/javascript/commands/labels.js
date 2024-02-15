import { identifier, string, reference, offset, mm } from './commands.js'

export function newLabel (node, src) {
  const object = {
    src: `${src}`,
    action: 'new',
    label: {
      font: 'RobotoMono-Bold',
      fontsize: 12,
      halign: 'left',
      valign: 'baseline',
      colour: {
        light: '#222222',
        dark: '#ebebeb'
      }
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'string') {
      object.label.text = child.text
    }

    if (child.type === 'absolute') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.label.x = {
            reference: 'absolute',
            offset: mm(v)
          }
        }

        if (v.type === 'y') {
          object.label.y = {
            reference: 'absolute',
            offset: mm(v)
          }
        }
      }
    }

    if (child.type === 'relative') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.label.x = {
            reference: 'origin',
            offset: mm(v)
          }
        }

        if (v.type === 'y') {
          object.label.y = {
            reference: 'origin',
            offset: mm(v)
          }
        }
      }
    }

    if (child.type === 'decorate') {
      object.label.x = {}
      object.label.y = {}

      let reference = 'component'
      for (const v of child.namedChildren) {
        if (['input', 'output', 'parameter', 'light', 'widget', 'label'].includes(v.type)) {
          reference = `${v.type}`
        }
      }

      for (const v of child.namedChildren) {
        if (v.type === 'name') {
          object.label.x.reference = `${reference}<${string(v)}>`
          object.label.y.reference = `${reference}<${string(v)}>`
        }

        if (v.type === 'dx') {
          object.label.x.offset = mm(v)
        }

        if (v.type === 'dy') {
          object.label.y.offset = mm(v)
        }
      }
    }

    if (child.type === 'x') {
      object.label.x = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.label.y = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'font') {
      object.label.font = string(child)
    }

    if (child.type === 'fontsize') {
      const match = child.text.match(/([0-9]+(?:[.][0-9]*)?)pt/)
      if (match.length > 1) {
        const size = parseFloat(match[1])
        if (!Number.isNaN(size)) {
          object.label.fontsize = size
        }
      }
    }

    if (child.type === 'halign') {
      object.label.halign = string(child)
    }

    if (child.type === 'valign') {
      object.label.valign = string(child)
    }

    if (child.type === 'colour') {
      if (child.namedChildCount > 1) {
        const light = child.namedChildren[0]
        const dark = child.namedChildren[1]

        if (light.type === 'rgb' || light.type === 'rgba') {
          object.label.colour.light = string(light)
        }

        if (dark.type === 'rgb' || dark.type === 'rgba') {
          object.label.colour.dark = string(dark)
        }
      } else if (child.namedChildCount > 0) {
        const colour = child.namedChildren[0]
        if (colour.type === 'rgb' || colour.type === 'rgba') {
          object.label.colour.light = string(colour)
          object.label.colour.dark = string(colour)
        }
      }
    }
  }

  return object
}

export function deleteLabel (node, src) {
  const object = {
    src: `${src}`,
    action: 'delete',
    label: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.label.id = identifier(child)
    }
  }

  return object
}

export function setLabel (node, src) {
  const object = {
    src: `${src}`,
    action: 'set',
    label: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.label.id = identifier(child)
    }
  }

  for (const child of node.parent.namedChildren) {
    if (child.type === 'string') {
      object.label.text = string(child)
    }

    if (child.type === 'x') {
      object.label.x = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.label.x.reference = 'absolute'
        }

        if (v.type === 'reference') {
          object.label.x.reference = identifier(v)
        }

        if (v.type === 'offset') {
          object.label.x.offset = mm(v)
        }
      }
    }

    if (child.type === 'y') {
      object.label.y = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.label.y.reference = 'absolute'
        }

        if (v.type === 'reference') {
          object.label.y.reference = identifier(v)
        }

        if (v.type === 'offset') {
          object.label.y.offset = mm(v)
        }
      }
    }

    if (child.type === 'xy') {
      object.label.x = {
        reference: 'origin',
        offset: 0
      }

      object.label.y = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.label.x.reference = 'absolute'
          object.label.y.reference = 'absolute'
        }

        if (v.type === 'x') {
          for (const u of v.namedChildren) {
            if (u.type === 'reference') {
              object.label.x.reference = identifier(u)
            }

            if (u.type === 'offset') {
              object.label.x.offset = mm(v)
            }
          }
        }

        if (v.type === 'y') {
          for (const u of v.namedChildren) {
            if (u.type === 'reference') {
              object.label.y.reference = identifier(u)
            }

            if (u.type === 'offset') {
              object.label.y.offset = mm(v)
            }
          }
        }
      }
    }

    if (child.type === 'font') {
      object.label.font = string(child)
    }

    if (child.type === 'fontsize') {
      const match = child.text.match(/([0-9]+(?:[.][0-9]*)?)pt/)
      if (match.length > 1) {
        const size = parseFloat(match[1])
        if (!Number.isNaN(size)) {
          object.label.fontsize = size
        }
      }
    }

    if (child.type === 'halign') {
      object.label.halign = string(child)
    }

    if (child.type === 'valign') {
      object.label.valign = string(child)
    }

    if (child.type === 'colour') {
      object.label.colour = {}

      if (child.namedChildCount > 1) {
        const light = child.namedChildren[0]
        const dark = child.namedChildren[1]

        if (light.type === 'rgb' || light.type === 'rgba') {
          object.label.colour.light = string(light)
        }

        if (dark.type === 'rgb' || dark.type === 'rgba') {
          object.label.colour.dark = string(dark)
        }
      } else if (child.namedChildCount > 0) {
        const colour = child.namedChildren[0]
        if (colour.type === 'rgb' || colour.type === 'rgba') {
          object.label.colour.light = string(colour)
          object.label.colour.dark = string(colour)
        }
      }
    }
  }

  return object
}
