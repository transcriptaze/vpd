const PROJECT = 'vpd.projects.current'
const MACROS = 'vpd.macros'

export function storeProject (object) {
  if (object == null) {
    localStorage.removeItem(PROJECT)
  } else {
    localStorage.setItem(PROJECT, object)
  }
}

export function getProject () {
  return localStorage.getItem(PROJECT)
}

export function storeMacros (object) {
  const key = MACROS
  const json = JSON.stringify(object)

  localStorage.setItem(key, json)
}

export function getMacros () {
  const key = MACROS
  const json = localStorage.getItem(key)

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

export function removeFont (name) {
  const key = `font::${name}`

  localStorage.removeItem(key)
}

export function getFont (name) {
  const key = `font::${name}`
  const encoded = localStorage.getItem(key)

  if (encoded != null) {
    return Uint8Array.from(atob(encoded), c => c.charCodeAt(0))
  }

  return null
}

export function listFonts () {
  const list = []
  const N = localStorage.length

  for (let i = 0; i < N; i++) {
    const key = localStorage.key(i)

    if (key.startsWith('font::')) {
      list.push(key.substring(6))
    }
  }

  return list
}
