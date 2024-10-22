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
  FS.put(`${BASE}/project`, new Uint8Array(blob))
    .catch((err) => onError(err))
}

export async function getProject () {
  return FS.get(`${BASE}/project`)
    .catch((err) => onError(err))
}

export function deleteProject () {
  FS.delete(`${BASE}/project`)
    .catch((err) => onError(err))
}

export async function storeHistory (blob) {
  FS.put(`${BASE}/history`, new Uint8Array(blob))
    .catch((err) => onError(err))
}

export async function getHistory () {
  return FS.get(`${BASE}/history`)
    .catch((err) => onError(err))
}

export function deleteHistory () {
  FS.delete(`${BASE}/history`)
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
  FS.put(`${BASE}/fonts/${name}`, new Uint8Array(blob))
    .then(() => FONTS.add(name))
    .catch((err) => onError(err))
}

export async function getFont (font) {
  const filepath = `${BASE}/fonts/${font}`

  return FS.find(filepath)
    .then((path) => FS.get(path))
    .catch((err) => onError(err))
}

export async function deleteFont (font) {
  const filepath = `${BASE}/fonts/${font}`

  FS.find(filepath)
    .then((path) => {
      if (path != null) {
        FS.delete(path)
        FONTS.delete(font)
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
