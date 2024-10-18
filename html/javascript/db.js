const BASE = 'VPD'
const FONTS = new Set()

// Notes:
// 1. DuckDuckGo browser does not support OPFS

const OPFS = {
  find: async function (filepath, handle = null, path = []) {
    if (handle == null) {
      return navigator.storage.getDirectory()
        .then((h) => this.find(filepath, h, []))
    }

    if (filepath.length > 1) {
      const dir = filepath[0]
      return handle.getDirectoryHandle(dir, { create: true })
        .then((h) => this.find(filepath.slice(1), h, [...path, ...[dir]]))
    }

    if (filepath.length > 0) {
      const file = `${normalise(filepath[0])}`
      for await (const [k, h] of handle.entries()) {
        if (normalise(k) === file) {
          return {
            folder: handle,
            file: h
          }
        }
      }
    }

    return {
      folder: null,
      file: null
    }
  },

  store: function (folder, filename, bytes) {
    navigator.storage.getDirectory()
      .then((root) => root.getDirectoryHandle(folder, { create: true }))
      .then((base) => base.getFileHandle(filename, { create: true }))
      .then((fh) => fh.createWritable({ keepExistingData: false }))
      .then((stream) => save(stream, bytes))
      .then(() => console.log(`stored ${filename} to OPFS (${bytes.length} bytes)`))
      .catch((err) => onError(err))
  },

  retrieve: function (folder, filename) {
    return navigator.storage.getDirectory()
      .then((root) => root.getDirectoryHandle(folder, { create: true }))
      .then((base) => base.getFileHandle(filename, { create: true }))
      .then((fh) => fh.getFile())
      .then((file) => file.arrayBuffer())
      .then((buffer) => {
        console.log(`restored ${filename} from OPFS (${buffer.byteLength} bytes)`)
        return buffer
      })
      .catch((err) => onError(err))
  },

  delete: function (folder, filename) {
    navigator.storage.getDirectory()
      .then((root) => root.getDirectoryHandle(folder, { create: true }))
      .then((base) => base.removeEntry(filename))
      .then(() => console.log(`deleted ${filename} from OPFS`))
      .catch((err) => onError(err))
  }
}

const LOCAL = {
  store: function (folder, filename, bytes) {
    try {
      const encoded = btoa(String.fromCharCode.apply(null, bytes))

      localStorage.setItem(`${folder}.${filename}`, encoded)
      console.log(`stored ${filename} to local storage (${bytes.length} bytes)`)
    } catch (err) {
      onError(err)
    }
  },

  find: async function (filepath, fh, path) {
  },

  retrieve: function (folder, filename) {
    try {
      const encoded = localStorage.getItem(`${BASE}.${filename}`)
      if (encoded != null) {
        const buffer = new Uint8Array(atob(encoded).split('').map(function (c) {
          return c.charCodeAt(0)
        }))

        console.log(`restored ${filename} from local storage (${buffer.byteLength} bytes)`)
        return buffer
      }
    } catch (err) {
      onError(err)
    }
  },

  delete: function (folder, filename) {
    try {
      localStorage.removeItem(`${BASE}.${filename}`)
      console.log(`deleted ${filename} from local storage`)
    } catch (err) {
      onError(err)
    }
  }
}

export async function init () {
  if (navigator.storage) {
    navigator.storage.getDirectory()
      .then((root) => root.getDirectoryHandle(BASE, { create: true }))
      .then((base) => base.getDirectoryHandle('fonts', { create: true }))
      .then((folder) => folder.entries())
      .then(async (it) => {
        for await (const [font,h] of it) {
          if (h.kind == 'file') {
            FONTS.add(font)            
          }
        }
      })
      .then(() => console.log(`retrieved fonts from OPFS (${FONTS.size} fonts)`))
      .catch((err) => onError(err))
  }
}

export function storeProject (blob) {
  const bytes = new Uint8Array(blob)

  if (navigator.storage) {
    OPFS.store(BASE, 'project', bytes)
  } else if (localStorage) {
    LOCAL.store(BASE, 'project', bytes)
  }
}

export async function getProject () {
  if (navigator.storage) {
    return OPFS.retrieve(BASE, 'project')
  } else if (localStorage) {
    return LOCAL.retrieve(BASE, 'project')
  } else {
    return new Uint8Array()
  }
}

export function deleteProject () {
  if (navigator.storage) {
    OPFS.delete(BASE, 'project')
  } else if (localStorage) {
    LOCAL.delete(BASE, 'project')
  }
}

export async function storeHistory (blob) {
  const bytes = new Uint8Array(blob)

  if (navigator.storage) {
    OPFS.store(BASE, 'history', bytes)
  } else if (localStorage) {
    LOCAL.store(BASE, 'history', bytes)
  }
}

export async function getHistory () {
  if (navigator.storage) {
    return OPFS.retrieve(BASE, 'history')
  } else if (localStorage) {
    return LOCAL.retrieve(BASE, 'history')
  } else {
    return new Uint8Array()
  }
}

export function deleteHistory () {
  if (navigator.storage) {
    OPFS.delete(BASE, 'history')
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
