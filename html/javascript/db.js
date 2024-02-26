export const PROJECT = 'vpd.projects.current'
export const MACROS = 'vpd.macros'
export const FONT = 'vpd.font'

export function store (tag, object) {
  switch (tag) {
    case PROJECT:
      if (object == null) {
        localStorage.removeItem(PROJECT)
      } else {
        localStorage.setItem(PROJECT, object)
      }
      break

    case FONT:
      storeFont(object.name, object.bytes)
      break

    default:
      localStorage.setItem(tag, JSON.stringify(object))
  }
}

export function retrieve (tag) {
  try {
    const json = localStorage.getItem(tag)

    if (json != null) {
      switch (tag) {
        case PROJECT:
          return json

        default:
          return JSON.parse(json)
      }
    }
  } catch (err) {
    console.error(err)
  }

  return null
}

function storeFont (name, bytes) {
  console.log('store-font', name, bytes)
}
