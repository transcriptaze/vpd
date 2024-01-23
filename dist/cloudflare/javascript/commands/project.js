export function loadProject (node, src) {
  const object = {
    src: `${src}`,
    action: 'load',
    project: {
    }
  }

  return object
}

export function saveProject (node, src) {
  const object = {
    src: `${src}`,
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
