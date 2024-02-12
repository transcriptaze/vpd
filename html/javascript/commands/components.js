import { identifier, string, reference, offset, clean, mm } from './commands.js'

export function parse (node) {
  const object = {}

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.id = identifier(child)
    }

    if (child.type === 'name') {
      object.name = string(child)
    }

    if (child.type === 'absolute') {
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
      }
    }

    if (child.type === 'relative') {
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

    if (child.type === 'parameter') {
      object.x = {
        offset: 0,
      }          

      object.y = {
                offset: 0,
      }          
      
      for (const v of child.namedChildren) {
        if (v.type === 'name') {
          object.x.reference = `parameter<${identifier(v)}>`
          object.y.reference = `parameter<${identifier(v)}>`
        }

        if (v.type === 'dx') {
          object.x.offset = mm(v)
        }

        if (v.type === 'dy') {
          object.y.offset = mm(v)
        }
      }
    }

    if (child.type === 'part') {
      object.part = clean(child.text)
    }
  }

  return object
}
