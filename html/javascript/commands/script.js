export function loadScript (node) {
  const object = {
    action: 'load',
    script: {
    }
  }

  return object
}

export function saveScript (node) {
  const object = {
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
