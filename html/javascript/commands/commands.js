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
