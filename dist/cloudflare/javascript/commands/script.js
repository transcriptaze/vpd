export function loadScript (node, src) {
  const object = {
    src: `${src}`,
    action: 'load',
    script: {
    }
  }

  return object
}

export function saveScript (node, src) {
  const object = {
    src: `${src}`,
    action: 'save',
    script: {
      timestamp: false
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'timestamp') {
      object.script.timestamp = true
    }
  }

  return object
}
