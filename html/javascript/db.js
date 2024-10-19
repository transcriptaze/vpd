import { OPFS, LOCAL } from './HAL.js'

const BASE = 'VPD'
const FONTS = new Set()

export async function init () {
  if (navigator.storage) {
    OPFS.list([BASE, 'fonts'])
      .then((v) => {
        v.forEach(font => FONTS.add(font))
        console.log(`retrieved ${FONTS.size} fonts from OPFS`)
      })
  }
}

export function storeProject (blob) {
  const bytes = new Uint8Array(blob)

  if (navigator.storage) {
    OPFS.put([BASE, 'project'], bytes)
  } else if (localStorage) {
    LOCAL.store(BASE, 'project', bytes)
  }
}

export async function getProject () {
  if (navigator.storage) {
    return OPFS.get([BASE, 'project'])
  } else if (localStorage) {
    return LOCAL.retrieve(BASE, 'project')
  } else {
    return new Uint8Array()
  }
}

export function deleteProject () {
  if (navigator.storage) {
    OPFS.delete([BASE, 'project'])
  } else if (localStorage) {
    LOCAL.delete(BASE, 'project')
  }
}

export async function storeHistory (blob) {
  const bytes = new Uint8Array(blob)

  if (navigator.storage) {
    OPFS.put([BASE, 'history'], bytes)
  } else if (localStorage) {
    LOCAL.store(BASE, 'history', bytes)
  }
}

export async function getHistory () {
  if (navigator.storage) {
    return OPFS.get([BASE, 'history'])
  } else if (localStorage) {
    return LOCAL.retrieve(BASE, 'history')
  } else {
    return new Uint8Array()
  }
}

export function deleteHistory () {
  if (navigator.storage) {
    OPFS.delete([BASE, 'history'])
  } else if (localStorage) {
    LOCAL.delete(BASE, 'history')
  }
}

export function storeMacros (object) {
  const key = `${BASE}.macros`
  const json = JSON.stringify(object)

  localStorage.setItem(key, json)
}

export function getMacros () {
  const key = `${BASE}.macros`
  const json = localStorage.getItem(key)

  if (json != null) {
    return JSON.parse(json)
  }

  return null
}

export async function storeFont (name, blob) {
  const bytes = new Uint8Array(blob)

  if (navigator.storage) {
    const filepath = [`${BASE}`, 'fonts', `${name}`]
    OPFS.put(filepath, bytes)
      .then(() => {
        FONTS.add(name)
      })
  }
}

export async function getFont (font) {
  if (navigator.storage) {
    const filepath = [`${BASE}`, 'fonts', `${font}`]

    return OPFS.find(filepath)
      .then((v) => v.file != null ? v.file.getFile() : null)
      .then((file) => file != null ? file.arrayBuffer() : null)
      .then((buffer) => buffer)
      .catch((err) => onError(err))
  }
}

export async function deleteFont (font) {
  if (navigator.storage) {
    const filepath = [`${BASE}`, 'fonts', `${font}`]

    return OPFS.find(filepath)
      .then((v) => {
        if (v.folder != null && v.file != null) {
          v.folder.removeEntry(v.file.name)
            .then(() => {
              FONTS.delete(v.file.name)
              console.log(`deleted font ${font} from OPFS`)
            })
        }
      })
  }
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

// async function save (stream, bytes) {
//   await stream.write(bytes)
//   await stream.close()
// }

function onError (err) {
  console.error(err)
}

// function normalise (name) {
//   return `${name}`.toLowerCase().replaceAll(/[^a-zA-Z0-9]/gm, '')
// }
