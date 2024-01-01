import { reference, offset, mm } from './commands.js'

export function newParameter (node) {
  const object = {
    action: 'new',
    parameter: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'name') {
      object.parameter.name = clean(child.text)
    }

    if (child.type === 'absolute') {
      for (const v of child.namedChildren) {
        if (v.type === 'x') {
          object.parameter.x = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }

        if (v.type === 'y') {
          object.parameter.y = {
            reference: 'absolute',
            offset: mm(v.text)
          }
        }
      }
    }

    if (child.type === 'x') {
      object.parameter.x = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'y') {
      object.parameter.y = {
        reference: reference(child),
        offset: offset(child)
      }
    }

    if (child.type === 'part') {
      object.parameter.part = clean(child.text)
    }
  }

  return object
}

function clean (v) {
  const re = /^(([a-zA-Z][a-zA-Z0-9_-]*)|"([a-zA-Z][a-zA-Z0-9_ -]*?)"|'([a-zA-Z][a-zA-Z0-9_ -]*?)')$/
  const match = `${v}`.match(re)

  if (match.length > 2 && match[2] != null) {
    return match[2].trim()
  }

  if (match.length > 3 && match[3] != null) {
    return match[3].trim()
  }

  if (match.length > 4 && match[4] != null) {
    return match[4].trim()
  }

  return `${v}`.trim()
}
