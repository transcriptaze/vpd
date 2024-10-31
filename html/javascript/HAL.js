const OPFS = {
  // put: function (filepath, bytes, handle = null, path = []) {
  //   if (handle == null) {
  //     return navigator.storage.getDirectory()
  //       .then((h) => this.put(filepath, bytes, h, []))
  //   }
  //
  //   if (filepath.length > 1) {
  //     const dir = filepath[0]
  //     return handle.getDirectoryHandle(dir, { create: true })
  //       .then((h) => this.put(filepath.slice(1), bytes, h, path.concat(dir)))
  //   }
  //
  //   if (filepath.length > 0) {
  //     const filename = filepath[0]
  //     return handle.getFileHandle(filename, { create: true })
  //       .then((fh) => fh.createWritable({ keepExistingData: false }))
  //       .then((stream) => {
  //           await stream.write(bytes)
  //           await stream.close()
  //       })
  //     }
  //   }
  // },

  // ... sigh! Safari:
  //     1. Does not support FileSystemHandle.createWritable and
  //     2. FileSystemHandle is not cloneable
  //     so .. a web-working we will go
  put: function (filepath, bytes, handle = null, path = []) {
    return new Promise((resolve) => {
      if (window.Worker) {
        const url = new URL('javascript/worker.js', window.location.origin)
        const worker = new Worker(url)
        const object = {
          filepath,
          bytes
        }

        worker.postMessage(object)
      }
    })
  },

  get: function (filepath, handle = null, path = []) {
    if (handle == null) {
      return navigator.storage.getDirectory()
        .then((h) => this.get(filepath, h, []))
    }

    if (filepath.length > 1) {
      const dir = filepath[0]
      return handle.getDirectoryHandle(dir, { create: true })
        .then((h) => this.get(filepath.slice(1), h, path.concat(dir)))
    }

    if (filepath.length > 0) {
      const filename = filepath[0]

      return handle.getFileHandle(filename)
        .then((h) => h.getFile())
        .then((file) => file.arrayBuffer())
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
        .then((h) => this.delete(filepath.slice(1), h, path.concat(dir)))
    }

    if (filepath.length > 0) {
      const filename = filepath[0]

      handle.removeEntry(filename)
    }
  },

  find: async function (filepath, handle = null, path = []) {
    if (handle == null) {
      return navigator.storage.getDirectory()
        .then((h) => this.find(filepath, h, []))
    }

    if (filepath.length > 1) {
      const dir = filepath[0]
      return handle.getDirectoryHandle(dir, { create: true })
        .then((h) => this.find(filepath.slice(1), h, path.concat(dir)))
    }

    if (filepath.length > 0) {
      const file = `${normalise(filepath[0])}`
      for await (const [k, _] of handle.entries()) {
        if (normalise(k) === file) {
          return path.concat(`${k}`).join('/')
        }
      }
    }

    return null
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
    }

    return []
  }

}

const LOCAL = {
  put: function (filepath, bytes) {
    try {
      const encoded = btoa(String.fromCharCode.apply(null, bytes))
      const key = filepath.join('.')

      localStorage.setItem(key, encoded)
    } catch (err) {
      onError(err)
    }
  },

  get: function (filepath) {
    try {
      const key = filepath.join('.')

      for (let ix = 0; ix < localStorage.length; ix++) {
        const k = localStorage.key(ix)

        if (k === key) {
          const encoded = localStorage.getItem(k)
          if (encoded != null) {
            return new Uint8Array(atob(encoded).split('').map((c) => c.charCodeAt(0))).buffer
          }
        }
      }
    } catch (err) {
      onError(err)
    }

    return new Uint8Array()
  },

  delete: function (filepath) {
    const key = filepath.join('.')

    try {
      for (let ix = 0; ix < localStorage.length; ix++) {
        const k = localStorage.key(ix)
        if (k === key) {
          localStorage.removeItem(k)
          return
        }
      }
    } catch (err) {
      onError(err)
    }
  },

  find: function (filepath) {
    const key = normalise(`${filepath.join('.')}`)

    for (let ix = 0; ix < localStorage.length; ix++) {
      const k = localStorage.key(ix)
      if (normalise(k) === key) {
        return filepath.join('/')
      }
    }
  },

  list: function (filepath) {
    const folder = `${filepath.join('.')}`
    const start = folder.length
    const files = []

    for (let ix = 0; ix < localStorage.length; ix++) {
      const k = localStorage.key(ix)

      if (k.startsWith(`${folder}.`)) {
        files.push(k.substring(start + 1))
      }
    }

    return files
  }
}

// Notes:
// 1. DuckDuckGo browser does not support OPFS
export const FS = {
  put: function (filepath, bytes) {
    const path = filepath.split('/')

    if (navigator.storage) {
      return OPFS.put(path, bytes)
    } else if (localStorage) {
      return new Promise((resolve) => {
        resolve(LOCAL.put(path, bytes))
      })
    }
  },

  get: function (filepath) {
    const path = filepath.split('/')

    if (navigator.storage) {
      return OPFS.get(path)
    } else if (localStorage) {
      return new Promise((resolve) => {
        resolve(LOCAL.get(path))
      })
    } else {
      return new Promise((resolve) => {
        resolve(new Uint8Array())
      })
    }
  },

  delete: function (filepath) {
    const path = filepath.split('/')

    if (navigator.storage) {
      OPFS.delete(path)
    } else if (localStorage) {
      LOCAL.delete(path)
    }
  },

  find: function (filepath) {
    const path = filepath.split('/')

    if (navigator.storage) {
      return OPFS.find(path)
    } else if (localStorage) {
      return new Promise((resolve) => {
        resolve(LOCAL.find(path))
      })
    }
  },

  list: function (folder) {
    const path = folder.split('/')

    if (navigator.storage) {
      return OPFS.list(path)
    } else if (localStorage) {
      return new Promise((resolve) => {
        resolve(LOCAL.list(path))
      })
    }
  }
}

// NTS: DuckDuckGo browser does not implement hasOwn
export function hasOwn (object, property) {
  if (object && Object.hasOwn) {
    return Object.hasOwn(object, property)
  }

  if (object && Object.hasOwnProperty) {
    return Object.prototype.hasOwnProperty.call(object, property)
  }

  return false
}

function normalise (name) {
  return `${name}`.toLowerCase().replaceAll(/[^a-zA-Z0-9]/gm, '')
}

function onError (err) {
  console.error(err)
}
