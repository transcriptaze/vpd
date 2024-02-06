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

    if (child.type === 'part') {
      object.input.part = string(child) === 'none' ? '' : string(child)
    }
  }

  return object
}
