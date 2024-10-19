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
}

export async function getProject () {
  return FS.get(`${BASE}/project`)
}

export function deleteProject () {
  FS.delete(`${BASE}/project`)
}

export async function storeHistory (blob) {
  FS.put(`${BASE}/history`, new Uint8Array(blob))
}

export async function getHistory () {
  return FS.get(`${BASE}/history`)
}

export function deleteHistory () {
  FS.delete(`${BASE}/history`)
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
    .then(() => {
      FONTS.add(name)
    })
}

export async function getFont (font) {
  if (navigator.storage) {
    const filepath = `${BASE}/fonts/${font}`

    return FS.find(filepath)
      .then((path) => FS.get(path))
      .catch((err) => onError(err))
  }
}

export async function deleteFont (font) {
  const filepath = `${BASE}/fonts/${font}`

  FS.find(filepath)
    .then((path) => {
      if (path != null) {
        FS.delete(path)
      }
    })
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
