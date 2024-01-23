export const PROJECT = 'vpd.projects.current'
export const MACROS = 'vpd.macros'

export function store (tag, object) {
  switch (tag) {
    case PROJECT:
      localStorage.setItem(tag, object)
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
