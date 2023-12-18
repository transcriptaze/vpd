import { mm } from './commands.js'

export function newGuide (node) {
  const object = {
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
  }

  return object
}

function reference (node) {
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
  for (const child of node.namedChildren) {
    if (child.type === 'offset') {
      return mm(child.text)
    }
  }

  return 0.0
}
