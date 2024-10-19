// Notes:
// 1. DuckDuckGo browser does not support OPFS

export const OPFS = {
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

  put: function (filepath, bytes, handle = null, path = []) {
    if (handle == null) {
      return navigator.storage.getDirectory()
        .then((h) => this.put(filepath, bytes, h, []))
    }

    if (filepath.length > 1) {
      const dir = filepath[0]
      return handle.getDirectoryHandle(dir, { create: true })
        .then((h) => this.put(filepath.slice(1), bytes, h, [...path, ...[dir]]))
    }

    if (filepath.length > 0) {
      const filename = filepath[0]

      return handle.getFileHandle(filename, { create: true })
        .then((fh) => fh.createWritable({ keepExistingData: false }))
        .then((stream) => save(stream, bytes))
        .then(() => {
          console.log(`stored ${filename} to OPFS (${bytes.length} bytes)`)
        })
    }
  },

  get: function (filepath, handle = null, path = []) {
    if (handle == null) {
      return navigator.storage.getDirectory()
        .then((h) => this.get(filepath, h, []))
    }

    if (filepath.length > 1) {
      const dir = filepath[0]
      return handle.getDirectoryHandle(dir, { create: true })
        .then((h) => this.get(filepath.slice(1), h, [...path, ...[dir]]))
    }

    if (filepath.length > 0) {
      const filename = filepath[0]

      return handle.getFileHandle(filename, { create: true })
        .then((h) => h.getFile())
        .then((file) => file.arrayBuffer())
        .then((buffer) => {
          console.log(`restored ${filename} from OPFS (${buffer.byteLength} bytes)`)
          return buffer
        })
        .catch((err) => onError(err))
    }
  },

  delete: function (filepath, handle = null, path = []) {
    if (handle == null) {
      return navigator.storage.getDirectory()
        .then((h) => this.delete(filepath, h, []))
    }

    if (filepath.length > 1) {
      const dir = filepath[0]
      return handle.getDirectoryHandle(dir, { create: true })
        .then((h) => this.delete(filepath.slice(1), h, [...path, ...[dir]]))
    }

    if (filepath.length > 0) {
      const filename = filepath[0]

      handle.removeEntry(filename)
        .then(() => console.log(`deleted ${filename} from OPFS`))
        .catch((err) => onError(err))
    }
  },

  list: function (filepath, handle = null, path = []) {
    if (handle == null) {
      return navigator.storage.getDirectory()
        .then((h) => this.list(filepath, h, []))
    }

    if (filepath.length > 1) {
      const dir = filepath[0]
      return handle.getDirectoryHandle(dir, { create: true })
        .then((h) => this.list(filepath.slice(1), h, [...path, ...[dir]]))
    }

    if (filepath.length > 0) {
      const dir = filepath[0]
      return handle.getDirectoryHandle(dir, { create: true })
        .then((h) => h.entries())
        .then(async (it) => {
          const files = []
          for await (const [file, h] of it) {
            if (h.kind === 'file') {
              files.push(file)
            }
          }

          return files
        })
        .catch((err) => onError(err))
    }

    return []
  }

// export async function deleteAllFonts () {
//   if (navigator.storage) {
//     navigator.storage.getDirectory()
//       .then((root) => root.getDirectoryHandle(BASE, { create: true }))
//       .then((base) => base.getDirectoryHandle('fonts', { create: true }))
//       .then((folder) => [folder, folder.keys()])
//       .then(async ([folder, it]) => {
//         for await (const k of it) {
//           folder.removeEntry(k)
//             .then(() => {
//               FONTS.delete(k)
//               console.log(`deleted font ${k} from OPFS`)
//             })
//         }
//       })
//       .catch((err) => onError(err))
//   }
// }
}

export const LOCAL = {
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
    const BASE = 'VPD'

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
    const BASE = 'VPD'

    try {
      localStorage.removeItem(`${BASE}.${filename}`)
      console.log(`deleted ${filename} from local storage`)
    } catch (err) {
      onError(err)
    }
  }
}

// NTS: DuckDuckGo browser does not implement hasOwn
export function hasOwn (object, property) {
  if (object && Object.hasOwn) {
    return Object.hasOwn(object, property)
  }

  if (object && Object.hasOwnProperty) {
    return Object.prototype.hasOwnProperty.call(property)
  }

  return false
}

function normalise (name) {
  return `${name}`.toLowerCase().replaceAll(/[^a-zA-Z0-9]/gm, '')
}

async function save (stream, bytes) {
  await stream.write(bytes)
  await stream.close()
}

function onError (err) {
  console.error(err)
}
