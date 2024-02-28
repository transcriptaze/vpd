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
  const key = `font::${normalise(name)}`
  const object = {
    name: `${name}`,
    bytes: btoa(new Uint8Array(bytes).reduce((data, byte) => data + String.fromCharCode(byte), ''))
  }

  localStorage.setItem(key, JSON.stringify(object))
}

export function removeFont (name) {
  const key = `font::${normalise(name)}`

  localStorage.removeItem(key)
}

export function getFont (name) {
  try {
    const key = `font::${normalise(name)}`
    const json = localStorage.getItem(key)

    if (json != null) {
      const object = JSON.parse(json)

      return Uint8Array.from(atob(object.bytes), c => c.charCodeAt(0))
    }
  } catch (err) {
    console.error(err)
  }

  return null
}

export function listFonts () {
  const list = []
  const N = localStorage.length

  for (let i = 0; i < N; i++) {
    const key = localStorage.key(i)

    if (key.startsWith('font::')) {
      try {
        const json = localStorage.getItem(key)
        const object = JSON.parse(json)

        list.push(object.name)
      } catch (err) {
        console.error(err)
      }
    }
  }

  console.log(list)
  return list
}

function normalise (name) {
  return `${name}`.toLowerCase().replaceAll(/[^a-zA-Z0-9]/gm, '')
}
