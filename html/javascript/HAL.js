// NTS: DuckDuckGo browser does not implement hasOwn
export function hasOwn (object, property) {
  if (object && Object.hasOwn) {
    return Object.hasOwn(object, property)
  }

  if (object && Object.hasOwnProperty) {
    return Object.prototype.hasOwnProperty.call(property)
  }

  return false
}
