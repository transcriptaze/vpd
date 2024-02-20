import { identifier, mm } from './commands.js'

export function newGuide (node, src) {
  const object = {
    src: `${src}`,
    action: 'new',
    guide: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.guide.name = child.text.trim()
    }

    if (child.type === 'vertical' || child.type === 'horizontal') {
      object.guide.orientation = child.type
      object.guide.reference = reference(child)
      object.guide.offset = offset(child)
    }

    if (child.type === 'geometry') {
      object.guide.orientation = ''
      object.guide.reference = reference(child)
      object.guide.offset = offset(child)
    }

    if (child.type === 'guideline') {
      object.guide.orientation = ''
      object.guide.reference = reference(child)
      object.guide.offset = offset(child)
    }
  }

  return object
}

export function deleteGuide (node, src) {
  const object = {
    src: `${src}`,
    action: 'delete',
    guide: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.guide.id = identifier(child)
    }
  }

  return object
}

export function setGuide (node, src) {
  const object = {
    src: `${src}`,
    action: 'set',
    guide: {}
  }

  for (const child of node.namedChildren) {
    if (child.type === 'identifier') {
      object.guide.id = identifier(child)
    }
  }

  for (const child of node.parent.namedChildren) {
    if (child.type === 'xy') {
      object.guide.xy = {
        reference: 'origin',
        offset: 0.0
      }

      for (const v of child.namedChildren) {
        if (v.type === 'absolute') {
          object.guide.xy.reference = 'absolute'
        }

        if (v.type === 'reference') {
          object.guide.xy.reference = reference(child)
        }

        if (v.type === 'offset') {
          object.guide.xy.offset = mm(v)
        }
      }
    }
  }

  return object
}

function reference (node) {
  if (node.hasError() || node.isMissing()) {
    throw new Error(node.toString())
  }

  for (const child of node.namedChildren) {
    if (child.type === 'absolute') {
      return 'absolute'
    }

    if (child.type === 'reference') {
      return child.text.trim()
    }
  }

  return 'origin'
}

function offset (node) {
  if (node.hasError() || node.isMissing()) {
    throw new Error(node.toString())
  }

  for (const child of node.namedChildren) {
    if (child.type === 'offset') {
      return mm(child)
    }
  }

  return 0.0
}
