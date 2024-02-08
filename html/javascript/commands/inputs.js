import { identifier, string, mm } from './commands.js'
import * as components from './components.js'

export function newInput (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    input: components.parse(node)
  }
}

export function deleteInput (node, src) {
  const object = {
    src: `${src}`,
    action: 'delete',
    input: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.input.id = identifier(child)
    }
  }

  return object
}

export function setInput (node, src) {
  const object = {
    src: `${src}`,
    action: 'set',
    input: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.input.id = identifier(child)
    }
  }

  for (const child of node.parent.namedChildren) {
    if (child.type === 'name') {
      object.input.name = string(child)
    }

    if (child.type === 'x') {
      object.input.x = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.input.x.reference = 'absolute'
        }

        if (v.type === 'reference') {
          object.input.x.reference = identifier(v)
        }

        if (v.type === 'offset') {
          object.input.x.offset = mm(v)
        }
      }
    }

    if (child.type === 'y') {
      object.input.y = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.input.y.reference = 'absolute'
        }

        if (v.type === 'reference') {
          object.input.y.reference = identifier(v)
        }

        if (v.type === 'offset') {
          object.input.y.offset = mm(v)
        }
      }
    }

    if (child.type === 'xy') {
      object.input.x = {
        reference: 'origin',
        offset: 0
      }

      object.input.y = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.input.x.reference = 'absolute'
          object.input.y.reference = 'absolute'
        }

        if (v.type === 'x') {
          for (const u of v.namedChildren) {
            if (u.type === 'reference') {
              object.input.x.reference = identifier(u)
            }

            if (u.type === 'offset') {
              object.input.x.offset = mm(v)
            }
          }
        }

        if (v.type === 'y') {
          for (const u of v.namedChildren) {
            if (u.type === 'reference') {
              object.input.y.reference = identifier(u)
            }

            if (u.type === 'offset') {
              object.input.y.offset = mm(v)
            }
          }
        }
      }
    }

    if (child.type === 'part') {
      object.input.part = string(child) === 'none' ? '' : string(child)
    }
  }

  return object
}
