export class DropTarget extends HTMLElement {
  static get observedAttributes () {
    return []
  }

  constructor () {
    super()

    this.internal = {
      ondropped: null
    }

    const template = document.querySelector('#template-drop')
    const stylesheet = document.createElement('link')
    const content = template.content
    const shadow = this.attachShadow({ mode: 'open' })
    const clone = content.cloneNode(true)

    stylesheet.setAttribute('rel', 'stylesheet')
    stylesheet.setAttribute('href', '/css/components.css')

    shadow.appendChild(stylesheet)
    shadow.appendChild(clone)
  }

  connectedCallback () {
    const shadow = this.shadowRoot
    const overlay = shadow.querySelector('div.overlay')

    overlay.ondragenter = (e) => {
      onDragEnter(this, e)
    }

    overlay.ondragleave = (e) => {
      onDragLeave(this, e)
    }

    overlay.ondragover = (e) => {
      onDragOver(this, e)
    }

    overlay.ondrop = (e) => {
      onDrop(this, e)
    }
  }

  disconnectedCallback () {
  }

  adoptedCallback () {
  }

  attributeChangedCallback (name, from, to) {
  }

  /* eslint-disable-next-line accessor-pairs */
  set ondropped (v) {
    this.internal.ondropped = v
  }

  _dropped (v) {
    if (this.internal.ondropped != null) {
      this.internal.ondropped(v)
    } else {
      const event = new CustomEvent('dropped', {
        bubbles: true,
        cancelable: true,
        composed: true,
        detail: { file: v }
      })

      this.dispatchEvent(event)
    }
  }
}

function onDragEnter (drop, evt) {
  const shadow = drop.shadowRoot
  const div = shadow.querySelector('div.vpd-drop')
  const types = evt.dataTransfer.types.map((v) => v.toLowerCase())

  if (types.includes('files')) {
    const files = evt.dataTransfer.files
    const items = evt.dataTransfer.items

    if (files.length > 0) {
      evt.preventDefault()
      div.classList.add('dropping')
    } else if (items.length > 0) {
      evt.preventDefault()
      div.classList.add('dropping')
    }
  }
}

function onDragLeave (drop, evt) {
  const shadow = drop.shadowRoot
  const div = shadow.querySelector('div.vpd-drop')

  div.classList.remove('dropping')
}

// NTS: DuckDuckGo does not include the data transfer information in the dragover event
function onDragOver (drop, evt) {
  const shadow = drop.shadowRoot
  const div = shadow.querySelector('div.vpd-drop')

  evt.preventDefault()
  div.classList.add('dropping')

  // const types = evt.dataTransfer.types.map((v) => v.toLowerCase())
  // if (types.includes('files')) {
  //   const files = evt.dataTransfer.files
  //   const items = evt.dataTransfer.items
  //
  //   if (files.length > 0) {
  //     evt.preventDefault()
  //     div.classList.add('dropping')
  //   } else if (items.length > 0) {
  //     evt.preventDefault()
  //     div.classList.add('dropping')
  //   }
  // }
}

function onDrop (drop, evt) {
  const types = evt.dataTransfer.types.map((v) => v.toLowerCase())
  const shadow = drop.shadowRoot
  const div = shadow.querySelector('div.vpd-drop')

  evt.preventDefault()

  div.classList.remove('dropping')

  if (types.includes('files')) {
    const files = evt.dataTransfer.files
    const items = evt.dataTransfer.items

    if (files.length > 0) {
      drop._dropped(files.item(0))
    } else if (items.length > 0) {
      drop._dropped(items[0])
    }
  }
}

customElements.define('vpd-drop', DropTarget)
