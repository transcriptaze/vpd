const BASE = 'VPD'
const MACROS = 'VPD.macros'
const FONTS = new Set()

export async function init () {
  navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getDirectoryHandle('fonts', { create: true }))
    .then((folder) => folder.keys())
    .then(async (it) => {
      for await (const font of it) {
        FONTS.add(font)
      }
    })
    .then(() => console.log(`retrieved fonts from OPFS (${FONTS.size} fonts)`))
    .catch((err) => onError(err))
}

export function storeProject (blob) {
  const bytes = new Uint8Array(blob)

  navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getFileHandle('project', { create: true }))
    .then((fh) => fh.createWritable({ keepExistingData: false }))
    .then((stream) => save(stream, bytes))
    .then(() => console.log(`stored project to OPFS (${bytes.length} bytes)`))
    .catch((err) => onError(err))
}

export async function getProject () {
  return navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getFileHandle('project', { create: true }))
    .then((fh) => fh.getFile())
    .then((file) => file.arrayBuffer())
    .then((buffer) => {
      console.log(`restored project from OPFS (${buffer.byteLength} bytes)`)

      return buffer
    })
    .catch((err) => onError(err))
}

export function deleteProject () {
  navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.removeEntry('project'))
    .then(() => console.log('deleted project from OPFS'))
    .catch((err) => onError(err))
}

export async function storeHistory (blob) {
  const bytes = new Uint8Array(blob)

  navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getFileHandle('history', { create: true }))
    .then((fh) => fh.createWritable({ keepExistingData: false }))
    .then((stream) => save(stream, bytes))
    .then(() => console.log(`stored history to OPFS (${bytes.length} bytes)`))
    .catch((err) => onError(err))
}

export async function getHistory () {
  return navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getFileHandle('history', { create: true }))
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
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.removeEntry('history'))
    .then(() => console.log('deleted history from OPFS'))
    .catch((err) => onError(err))
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

export async function storeFont (name, blob) {
  const bytes = new Uint8Array(blob)

  navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getDirectoryHandle('fonts', { create: true }))
    .then((folder) => folder.getFileHandle(name, { create: true }))
    .then((fh) => fh.createWritable({ keepExistingData: false }))
    .then((stream) => save(stream, bytes))
    .then(() => {
      FONTS.add(name)
      console.log(`stored font ${name} to OPFS (${bytes.length} bytes)`)
    })
    .catch((err) => onError(err))
}

export async function getFont (font) {
  const key = `${normalise(font)}`

  return navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getDirectoryHandle('fonts', { create: true }))
    .then((folder) => folder.entries())
    .then(async (it) => {
      for await (const [k, fh] of it) {
        if (normalise(k) === key) {
          return fh
        }
      }

      return null
    })
    .then((fh) => fh != null ? fh.getFile() : null)
    .then((file) => file != null ? file.arrayBuffer() : null)
    .then((buffer) => buffer)
    .catch((err) => onError(err))
}

export async function deleteFont (font) {
  const key = `${normalise(font)}`

  navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getDirectoryHandle('fonts', { create: true }))
    .then((folder) => [folder, folder.keys()])
    .then(async ([folder, it]) => {
      for await (const k of it) {
        if (normalise(k) === key) {
          folder.removeEntry(k)
            .then(() => {
              FONTS.delete(k)
              console.log(`deleted font ${font} from OPFS`)
            })
        }
      }
    })
    .catch((err) => onError(err))
}

export function listFonts () {
  return Array.from(FONTS)
}

export function listParts () {
  return []
}

export function listDecorations () {
  return []
}

async function save (stream, bytes) {
  await stream.write(bytes)
  await stream.close()
}

function onError (err) {
  console.error(err)
}

function normalise (name) {
  return `${name}`.toLowerCase().replaceAll(/[^a-zA-Z0-9]/gm, '')
}
