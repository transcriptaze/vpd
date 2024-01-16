export function loadProject (node) {
  const object = {
    action: 'load',
    project: {
    }
  }

  return object
}

export function saveProject (node) {
  const object = {
    action: 'save',
    project: {
      timestamp: false,
      gzip: false
    }
  }

  for (const child of node.namedChildren) {
    if (child.type === 'timestamp') {
      object.project.timestamp = true
    }

    if (child.type === 'gzip') {
      object.project.gzip = true
    }
  }

  return object
}
