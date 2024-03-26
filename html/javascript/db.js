const BASE = 'VPD'
const MACROS = 'VPD.macros'

const fonts = new Set()

export async function init () {
  navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getDirectoryHandle('fonts', { create: true }))
    .then((folder) => folder.keys())
    .then(async (it) => {
      for await (const font of it) {
        fonts.add(font)
      }
    })
    .then(() => console.log(`retrieved fonts from OPFS (${fonts.size} fonts)`))
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
      fonts.add(name)
      console.log(`stored font ${name} to OPFS (${bytes.length} bytes)`)
    })
    .catch((err) => onError(err))
}

export async function getFont (font) {
  // const key = `font::${normalise(name)}`

  return navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getDirectoryHandle('fonts', { create: true }))
    .then((folder) => folder.getFileHandle(font, { create: false }))
    .then((fh) => fh.getFile())
    .then((file) => file.arrayBuffer())
    .then((buffer) => {
      console.log(`loaded font ${font} from OPFS (${buffer.byteLength} bytes)`)

      return buffer
    })
    .catch((err) => onError(err))
}

export async function deleteFont (name) {
  // const key = `font::${normalise(name)}`

  fonts.delete(name)

  navigator.storage.getDirectory()
    .then((root) => root.getDirectoryHandle(BASE, { create: true }))
    .then((base) => base.getDirectoryHandle('fonts', { create: true }))
    .then((folder) => folder.removeEntry(name))
    .then(() => console.log(`deleted font ${name} from OPFS`))
    .catch((err) => onError(err))
}

export function listFonts () {
  const list = new Set()

  // NTS: for some bizarre reason ...fonts doesn't seem to work with a Set that has had the last element deleted
  if (fonts.size > 0) {
    list.add(...fonts)
  }

  return Array.from(list)
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

// function normalise (name) {
//   return `${name}`.toLowerCase().replaceAll(/[^a-zA-Z0-9]/gm, '')
// }
