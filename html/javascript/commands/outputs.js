import { identifier, string, mm } from './commands.js'
import * as components from './components.js'

export function newOutput (node, src) {
  return {
    src: `${src}`,
    action: 'new',
    output: components.parse(node)
  }
}

export function deleteOutput (node, src) {
  const object = {
    src: `${src}`,
    action: 'delete',
    output: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.output.id = identifier(child)
    }
  }

  return object
}

export function setOutput (node, src) {
  const object = {
    src: `${src}`,
    action: 'set',
    output: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.output.id = identifier(child)
    }
  }

  for (const child of node.parent.namedChildren) {
    if (child.type === 'name') {
      object.output.name = string(child)
    }

    if (child.type === 'x') {
      object.output.x = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.output.x.reference = 'absolute'
        }

        if (v.type === 'reference') {
          object.output.x.reference = identifier(v)
        }

        if (v.type === 'offset') {
          object.output.x.offset = mm(v)
        }
      }
    }

    if (child.type === 'y') {
      object.output.y = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.output.y.reference = 'absolute'
        }

        if (v.type === 'reference') {
          object.output.y.reference = identifier(v)
        }

        if (v.type === 'offset') {
          object.output.y.offset = mm(v)
        }
      }
    }

    if (child.type === 'xy') {
      object.output.x = {
        reference: 'origin',
        offset: 0
      }

      object.output.y = {
        reference: 'origin',
        offset: 0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.output.x.reference = 'absolute'
          object.output.y.reference = 'absolute'
        }

        if (v.type === 'x') {
          for (const u of v.namedChildren) {
            if (u.type === 'reference') {
              object.output.x.reference = identifier(u)
            }

            if (u.type === 'offset') {
              object.output.x.offset = mm(v)
            }
          }
        }

        if (v.type === 'y') {
          for (const u of v.namedChildren) {
            if (u.type === 'reference') {
              object.output.y.reference = identifier(u)
            }

            if (u.type === 'offset') {
              object.output.y.offset = mm(v)
            }
          }
        }
      }
    }

    if (child.type === 'part') {
      object.output.part = string(child) === 'none' ? '' : string(child)
    }
  }

  return object
}
