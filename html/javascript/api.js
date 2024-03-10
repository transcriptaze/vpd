import * as db from './db.js'

export { load, unload, save, list } from './fs.js'
export { text2path } from './text.js'

export function set (tag, json) {
  try {
    const object = JSON.parse(json)
    switch (tag) {
      case 'module':
        setModuleInfo(object)
        break
    }
  } catch (e) {
    console.error(`${e}`)
  }
}

export function stash (tag, blob) {
  const trash = document.querySelector('#trash')

  if (tag === 'project') {
    db.storeProject(blob)

    if (blob !== '') {
      trash.disabled = false
    }
  }
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
