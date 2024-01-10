export function reference (node) {
  for (const child of node.namedChildren) {
    if (child.type === 'reference') {
      return child.text.trim()
    }
  }

  return 'origin'
}

export function offset (node) {
  for (const child of node.namedChildren) {
    if (child.type === 'offset') {
      return mm(child.text)
    }
  }

  return 0.0
}

export function mm (v) {
  let match = `${v}`.match(/([0-9]+)U/)
  if (match != null && match.length > 1) {
    return 128.5 * parseInt(match[1])
  }

  match = `${v}`.match(/([+-]?[0-9]+(?:\.[0-9]*)?)H/)
  if (match != null && match.length > 1) {
    return 5.08 * parseInt(match[1])
  }

  match = `${v}`.match(/([+-]?[0-9]+(?:\.[0-9]*)?)h/)
  if (match != null && match.length > 1) {
    return 2.54 * parseInt(match[1])
  }

  match = `${v}`.match(/([+-]?[0-9]+(?:\.[0-9]*)?)mm/)
  if (match != null && match.length > 1) {
    return parseFloat(match[1])
  }

  return parseFloat(`${v}`)
}

export function clean (v) {
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
