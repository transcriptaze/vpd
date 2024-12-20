import * as db from './db.js'
import { hasOwn } from './HAL.js'

export { load, unload, save, list } from './fs.js'
export { prepareFont, text2path } from './text.js'

export function set (json) {
  try {
    const object = JSON.parse(json)

    if (hasOwn(object, 'module') && object.module != null) {
      setModuleInfo(object.module)
    }

    if (hasOwn(object, 'history') && object.history != null) {
      setHistoryInfo(object.history)
    }

    if (hasOwn(object, 'command') && object.command != null) {
      setCommand(object.command)
    }
  } catch (e) {
    console.error(`${e}`)
  }
}

export async function stash (tag, blob) {
  if (tag === 'project') {
    if (blob == null) {
      return db.deleteProject()
    } else {
      return db.storeProject(blob)
    }
  }

  if (tag === 'history') {
    if (blob == null) {
      return db.deleteHistory()
    } else {
      return db.storeHistory(blob)
    }
  }
}

export async function unstash (tag) {
  if (tag === 'project') {
    return db.getProject()
  }

  if (tag === 'history') {
    return db.getHistory()
  }

  return null
}

function setModuleInfo (object) {
  const info = document.querySelector('fieldset#module')
  const name = info.querySelector('[data-tag="module.name"]')
  const width = info.querySelector('[data-tag="module.width"]')

  name.innerHTML = ''
  width.innerHTML = ''

  for (const [k, v] of Object.entries(object)) {
    if (k === 'name') {
      name.innerHTML = `${v}`
    }

    if (k === 'width') {
      width.innerHTML = `${v}mm`
    }
  }

  if (Object.entries(object).length === 0) {
    info.classList.remove('visible')
  } else if (name.innerHTML !== '' || width.innerHTML !== '') {
    info.classList.add('visible')
  } else {
    info.classList.remove('visible')
  }
}

function setHistoryInfo (object) {
  const undo = document.querySelector('#undo')
  const redo = document.querySelector('#redo')

  if (hasOwn(object, 'undo')) {
    const N = parseInt(`${object.undo}`)

    if (!Number.isNaN(N)) {
      undo.disabled = !(N > 0)
    }
  }

  if (hasOwn(object, 'redo')) {
    const N = parseInt(`${object.redo}`)

    if (!Number.isNaN(N)) {
      redo.disabled = !(N > 0)
    }
  }
}

function setCommand (cmd) {
  document.querySelector('#command').value = `${cmd}`
}
