onmessage = function (e) {
  const { filepath, bytes } = e.data

  put(filepath, bytes)
}

function put (filepath, bytes, handle = null, path = []) {
  if (handle == null) {
    return navigator.storage.getDirectory()
      .then((h) => this.put(filepath, bytes, h, []))
  }

  if (filepath.length > 1) {
    const dir = filepath[0]
    return handle.getDirectoryHandle(dir, { create: true })
      .then((h) => this.put(filepath.slice(1), bytes, h, path.concat(dir)))
  }

  if (filepath.length > 0) {
    const lockfile = filepath.join('/')
    const filename = filepath[0]

    navigator.locks.request(lockfile, async (lock) => {
      return handle.getFileHandle(filename, { create: true })
        .then((fh) => fh.createSyncAccessHandle({ mode: 'readwrite' }))
        .then((h) => {
          h.write(bytes)
          h.flush()
          h.close()
        })
        .catch((err) => console.error(err))
    })
  }
}
