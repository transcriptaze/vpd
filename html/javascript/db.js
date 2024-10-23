import { FS } from './HAL.js'

const BASE = 'VPD'
const FONTS = new Set()

export async function init () {
  FS.list(`${BASE}/fonts`)
    .then((v) => {
      v.forEach(font => FONTS.add(font))
      console.log(`retrieved ${FONTS.size} fonts from FS`)
    })
}

export function storeProject (blob) {
  const filepath = `${BASE}/project`
  const bytes = new Uint8Array(blob)

  FS.put(filepath, bytes)
    .then(() => console.log(`stored ${filepath} to FS (${bytes.length} bytes)`))
    .catch((err) => onError(err))
}

export async function getProject () {
  const filepath = `${BASE}/project`

  return FS.get(filepath)
    .then((buffer) => {
      console.log(`retrieved ${filepath} from FS (${buffer.byteLength} bytes)`)
      return buffer
    })
    .catch((err) => onError(err))
}

export function deleteProject () {
  const filepath = `${BASE}/project`

  FS.delete(filepath)
    .then(() => console.log(`deleted ${filepath} from FS`))
    .catch((err) => onError(err))
}

export async function storeHistory (blob) {
  const filepath = `${BASE}/history`
  const bytes = new Uint8Array(blob)

  FS.put(`${BASE}/history`, bytes)
    .then(() => console.log(`stored ${filepath} to FS (${bytes.length} bytes)`))
    .catch((err) => onError(err))
}

export async function getHistory () {
  const filepath = `${BASE}/history`

  return FS.get(filepath)
    .then((buffer) => {
      console.log(`retrieved ${filepath} from FS (${buffer.byteLength} bytes)`)
      return buffer
    })
    .catch((err) => onError(err))
}

export function deleteHistory () {
  const filepath = `${BASE}/history`

  FS.delete(`${BASE}/history`)
    .then(() => console.log(`deleted ${filepath} from FS`))
    .catch((err) => onError(err))
}

export function storeMacros (object) {
  localStorage.setItem(`${BASE}.macros`, JSON.stringify(object))
}

export function getMacros () {
  const json = localStorage.getItem(`${BASE}.macros`)
  if (json != null) {
    return JSON.parse(json)
  }

  return null
}

export async function storeFont (name, blob) {
  const filepath = `${BASE}/fonts/${name}`
  const bytes = new Uint8Array(blob)

  FS.put(filepath, bytes)
    .then(() => FONTS.add(name))
    .then(() => console.log(`stored ${filepath} to FS (${bytes.length} bytes)`))
    .catch((err) => onError(err))
}

export async function getFont (font) {
  const filepath = `${BASE}/fonts/${font}`

  return FS.find(filepath)
    .then((path) => {
      if (path == null) {
        throw new Error(`missing font ${font}`)
      } else {
        return FS.get(path)
      }
    })
    .then((buffer) => {
      console.log(`retrieved ${filepath} from FS (${buffer.byteLength} bytes)`)
      return buffer
    })
    .catch((err) => onError(err))
}

export async function deleteFont (font) {
  const filepath = `${BASE}/fonts/${font}`

  FS.find(filepath)
    .then((path) => {
      if (path != null) {
        FS.delete(path)
        FONTS.delete(font)
        console.log(`deleted ${filepath} from FS`)
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

function onError (err) {
  console.error(err)
}
