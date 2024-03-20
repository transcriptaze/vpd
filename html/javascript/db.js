const PROJECT = 'vpd.projects.current'
const MACROS = 'vpd.macros'

export function storeProject (blob, where) {
  if (where === 'OPFS') {
    const bytes = new Uint8Array(blob)

    navigator.storage.getDirectory()
      .then((root) => root.getFileHandle('project', { create: true }))
      .then((fh) => fh.createWritable({ keepExistingData: false }))
      .then((stream) => save(stream, bytes))
      .then(() => log(`stored project to OPFS (${bytes.length} bytes)`))
      .catch((err) => onError(err))
  } else if (blob == null) {
    localStorage.removeItem(PROJECT)
  } else {
    localStorage.setItem(PROJECT, blob)
  }
}

export function getProject () {
  return localStorage.getItem(PROJECT)
}

export function deleteProject () {
  navigator.storage.getDirectory()
    .then((root) => root.removeEntry('project'))
    .then(() => {
      console.log('deleted project from OPFS')
    })
    .catch((err) => onError(err))
}

export async function storeHistory (blob) {
  const bytes = new Uint8Array(blob)

  navigator.storage.getDirectory()
    .then((root) => root.getFileHandle('history', { create: true }))
    .then((fh) => fh.createWritable({ keepExistingData: false }))
    .then((stream) => save(stream, bytes))
    .then(() => log(`stored history to OPFS (${bytes.length} bytes)`))
    .catch((err) => onError(err))
}

export async function getHistory () {
  return navigator.storage.getDirectory()
    .then((root) => root.getFileHandle('history', { create: true }))
    .then((fh) => fh.getFile())
    .then((file) => file.arrayBuffer())
    .then((buffer) => {
      console.log(`restored history from OPFS (${buffer.byteLength} bytes)`)

      return buffer
    })
    .catch((err) => onError(err))
}

export function deleteHistory () {
  navigator.storage.getDirectory()
    .then((root) => root.removeEntry('history'))
    .then(() => {
      console.log('deleted history from OPFS')
    })
    .catch((err) => onError(err))
}

async function save (stream, bytes) {
  await stream.write(bytes)
  await stream.close()
}

function onError (err) {
  console.error(err)
}

function log (msg) {
  console.log(msg)
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

  return list
}

export function listParts () {
  return []
}

export function listDecorations () {
  return []
}

function normalise (name) {
  return `${name}`.toLowerCase().replaceAll(/[^a-zA-Z0-9]/gm, '')
}
