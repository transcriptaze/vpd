export class Logo extends HTMLElement {
  static get observedAttributes () {
    return []
  }

  constructor () {
    super()

    this.internal = {
    }

    const template = document.querySelector('#template-logo')
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
    window.addEventListener('resize', (e) => this.redraw())

    document
      .querySelectorAll('object')
      .forEach((o) => o.addEventListener('load', (e) => this.redraw()))
  }

  disconnectedCallback () {
  }

  adoptedCallback () {
  }

  attributeChangedCallback (name, from, to) {
  }

  redraw () {
    const shadow = this.shadowRoot
    const img = shadow.querySelector('img')
    const bounds = img.getBoundingClientRect()
    const left = document.getElementById('left')
    const children = left.children
    let overlapped = false

    for (const e of children) {
      const rect = e.getBoundingClientRect()

      overlapped = overlapped || (rect.left <= bounds.right && rect.top <= bounds.bottom)
    }

    if (overlapped) {
      img.classList.add('hidden')
    } else {
      img.classList.remove('hidden')
    }
  }
}

customElements.define('vpd-logo', Logo)
