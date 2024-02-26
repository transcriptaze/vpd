export const PROJECT = 'vpd.projects.current'
export const MACROS = 'vpd.macros'

export function store (tag, object) {
  switch (tag) {
    case PROJECT:
      if (object == null) {
        localStorage.removeItem(PROJECT)
      } else {
        localStorage.setItem(PROJECT, object)
      }
      break

    default:
      localStorage.setItem(tag, JSON.stringify(object))
  }
}

export function retrieve (tag) {
  try {
    const json = localStorage.getItem(tag)

    if (json != null) {
      switch (tag) {
        case PROJECT:
          return json

        default:
          return JSON.parse(json)
      }
    }
  } catch (err) {
    console.error(err)
  }

  return null
}

export function storeMacros (object) {
  const key = MACROS
  const json = JSON.stringify(object)

  localStorage.setItem(key, json)
}

export function geteMacros () {
  const key = MACROS
  const json = localStorage.get(key)

  if (json != null) {
    return JSON.parse(json)
  }

  return null
}

export function storeFont (name, bytes) {
  const key = `font::${name}`
  const encoded = btoa(new Uint8Array(bytes).reduce((data, byte) => data + String.fromCharCode(byte), ''))

  localStorage.setItem(key, encoded)
}

export function getFont (name) {
  const key = `font::${name}`
  const encoded = localStorage.getItem(key)

  if (encoded != null) {
    return Uint8Array.from(atob(encoded), c => c.charCodeAt(0))
  }

  return null
}
