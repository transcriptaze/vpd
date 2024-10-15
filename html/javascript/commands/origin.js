import { mm, polar } from './commands.js'

export function set (node, src) {
  const object = {
    src: `${src}`,
    action: 'set',
    origin: {
      offset: {
        angle: 0.0,
        radius: 0.0
      }
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'absolute') {
      object.origin.x = {
        reference: 'absolute',
        offset: 0.0
      }

      object.origin.y = {
        reference: 'absolute',
        offset: 0.0
      }

      for (const child of node.namedChildren) {
        if (child.type === 'x') {
          object.origin.x.offset = mm(child)
        }

        if (child.type === 'y') {
          object.origin.y.offset = mm(child)
        }

        if (child.type === 'polar') {
          const { angle, radius } = polar(child)

          object.origin.offset.angle = angle
          object.origin.offset.radius = radius
        }
      }

      return object
    }
  }

  for (const child of node.namedChildren) {
    console.log('>>>>>>>>>>>>', child.type)
    if (child.type === 'x') {
      object.origin.x = xy(child)
    }

    if (child.type === 'y') {
      object.origin.y = xy(child)
    }

    if (child.type === 'polar') {
      const { angle, radius } = polar(child)

      object.origin.offset.angle = angle
      object.origin.offset.radius = radius
    }
  }

  return object
}

function xy (node) {
  const object = {
    offset: 0.0
  }

  for (const child of node.namedChildren) {
    if (child.type === 'reference') {
      object.reference = child.text.trim()
    }

    if (child.type === 'offset') {
      object.offset = mm(child)
    }
  }

  return object
}
