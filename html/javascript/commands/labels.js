import { string, reference, offset, mm } from './commands.js'

export function newLabel (node) {
  const object = {
    action: 'new',
    label: {
      font: 'RobotoMono-Bold',
      fontsize: 12,
      halign: 'left',
      valign: 'baseline'
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
            offset: mm(v.text)
          }
        }

        if (v.type === 'y') {
          object.label.y = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }
      }
    }

    if (child.type === 'relative') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.label.x = {
            reference: 'origin',
            offset: mm(v.text)
          }
        }

        if (v.type === 'y') {
          object.label.y = {
            reference: 'origin',
            offset: mm(v.text)
          }
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
  }

  return object
}
