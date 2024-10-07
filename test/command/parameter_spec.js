import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('new parameter command translation', () => {
  it('new parameter volume @30°,10mm', () => {
    const cmd = command.parse('new parameter volume @30°,10mm')
    const expected = {
      src: 'new parameter volume @30°,10mm',
      action: 'new',
      parameter: {
        name: 'volume',
        x: {
          reference: 'absolute',
          offset: 0.0
        },
        y: {
          reference: 'absolute',
          offset: 0.0
        },
        offset: {
          dx: 0.0,
          dy: 0.0,
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new parameter volume 30°,10mm', () => {
    const cmd = command.parse('new parameter volume 30°,10mm')
    const expected = {
      src: 'new parameter volume 30°,10mm',
      action: 'new',
      parameter: {
        name: 'volume',
        x: {
          reference: 'origin',
          offset: 0.0
        },
        y: {
          reference: 'origin',
          offset: 0.0
        },
        offset: {
          dx: 0.0,
          dy: 0.0,
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new parameter volume (v1,h1 30°,10mm)', () => {
    const cmd = command.parse('new parameter volume (v1,h1 30°,10mm)')
    const expected = {
      src: 'new parameter volume (v1,h1 30°,10mm)',
      action: 'new',
      parameter: {
        name: 'volume',
        x: {
          reference: 'v1',
          offset: 0.0
        },
        y: {
          reference: 'h1',
          offset: 0.0
        },
        offset: {
          dx: 0.0,
          dy: 0.0,
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new parameter volume (input in 30°,10mm)', () => {
    const cmd = command.parse('new parameter volume (input in 30°,10mm)')
    const expected = {
      src: 'new parameter volume (input in 30°,10mm)',
      action: 'new',
      parameter: {
        name: 'volume',
        x: {
          reference: 'input<in>',
          offset: 0.0
        },
        y: {
          reference: 'input<in>',
          offset: 0.0
        },
        offset: {
          dx: 0.0,
          dy: 0.0,
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })
})

describe('set parameter command translation', () => {
  it('set parameter volume xy (input in +10mm,+12.5mm)', () => {
    const cmd = command.parse('set parameter volume xy (input in +10mm,+12.5mm)')
    const expected = {
      src: 'set parameter volume xy (input in +10mm,+12.5mm)',
      action: 'set',
      parameter: {
        id: 'volume',
        x: {
          reference: 'input<in>',
          offset: 10
        },
        y: {
          reference: 'input<in>',
          offset: 12.5
        },
        offset: {
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set parameter volume xy @30°,10mm', () => {
    const cmd = command.parse('set parameter volume xy @30°,10mm')
    const expected = {
      src: 'set parameter volume xy @30°,10mm',
      action: 'set',
      parameter: {
        id: 'volume',
        x: {
          reference: 'absolute',
          offset: 0
        },
        y: {
          reference: 'absolute',
          offset: 0
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set parameter volume xy 30°,10mm', () => {
    const cmd = command.parse('set parameter volume xy 30°,10mm')
    const expected = {
      src: 'set parameter volume xy 30°,10mm',
      action: 'set',
      parameter: {
        id: 'volume',
        x: {
          reference: 'origin',
          offset: 0
        },
        y: {
          reference: 'origin',
          offset: 0
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set parameter volume xy v1,h2 30°,10mm', () => {
    const cmd = command.parse('set parameter volume xy v1,h2 30°,10mm')
    const expected = {
      src: 'set parameter volume xy v1,h2 30°,10mm',
      action: 'set',
      parameter: {
        id: 'volume',
        x: {
          reference: 'v1',
          offset: 0
        },
        y: {
          reference: 'h2',
          offset: 0
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set parameter volume xy left,middle 30°,10mm', () => {
    const cmd = command.parse('set parameter volume xy left,middle 30°,10mm')
    const expected = {
      src: 'set parameter volume xy left,middle 30°,10mm',
      action: 'set',
      parameter: {
        id: 'volume',
        x: {
          reference: 'left',
          offset: 0
        },
        y: {
          reference: 'middle',
          offset: 0
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set parameter volume xy (input in 30°,10mm)', () => {
    const cmd = command.parse('set parameter volume xy (input in 30°,10mm)')
    const expected = {
      src: 'set parameter volume xy (input in 30°,10mm)',
      action: 'set',
      parameter: {
        id: 'volume',
        x: {
          reference: 'input<in>',
          offset: 0
        },
        y: {
          reference: 'input<in>',
          offset: 0
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })
})
