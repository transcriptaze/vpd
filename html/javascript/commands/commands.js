export function string (node) {
  if (node.hasError() || node.isMissing()) {
    throw new Error(node.toString())
  }

  const text = node.text.trim()
  const match = text.match(/"(.*?)"|'(.*?)'/)

  if (match && match.length > 1 && match[1]) {
    return match[1]
  } else if (match && match.length > 2 && match[2]) {
    return match[2]
  } else {
    return text
  }
}

export function identifier (node) {
  if (node.hasError() || node.isMissing()) {
    throw new Error(node.toString())
  }

  return clean(node.text)
}

export function reference (node) {
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

export function offset (node) {
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

export function mm (node) {
  if (node.hasError() || node.isMissing()) {
    throw new Error(node.toString())
  }

  const v = node.text

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

export function polar (node) {
  if (node.hasError() || node.isMissing()) {
    throw new Error(node.toString())
  }

  let angle = 0.0
  let radius = 0.0

  for (const child of node.namedChildren) {
    if (child.type === 'angle') {
      angle = degrees(child)
    }

    if (child.type === 'radius') {
      radius = mm(child)
    }
  }

  // const round = (v) => {
  //   return Math.round((v + Number.EPSILON) * 1000) / 1000
  // }
  //
  // const x = radius * Math.cos(angle * Math.PI / 180.0)
  // const y = radius * Math.sin(angle * Math.PI / 180.0)
  //
  // return {
  //   x: round(x),
  //   y: -round(y)
  // }

  return { angle, radius }
}

export function degrees (node) {
  if (node.hasError() || node.isMissing()) {
    throw new Error(node.toString())
  }

  const v = node.text

  const match = `${v}`.match(/([0-9]+)°/)
  if (match != null && match.length > 1) {
    return parseFloat(`${match[1]}`)
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
