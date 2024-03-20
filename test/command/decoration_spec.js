import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('decoration command translation', () => {
  it('decorate (input in +10mm,+12.5mm) with CircularGraduations (scale 0.9) (stretch 1.25,1.5)', () => {
    const cmd = command.parse('decorate (input in +10mm,+12.5mm) with CircularGraduations (scale 0.9) (stretch 1.25,1.5)')
    const expected = {
      src: 'decorate (input in +10mm,+12.5mm) with CircularGraduations (scale 0.9) (stretch 1.25,1.5)',
      action: 'new',
      decoration: {
        x: {
          reference: 'input<in>',
          offset: 10
        },
        y: {
          reference: 'input<in>',
          offset: 12.5
        },
        name: 'CircularGraduations',
        scale: 0.9,
        stretch: {
          x: 1.25,
          y: 1.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('decorate @10mm,12.5mm CircularGraduations (scale 0.9) (stretch 1.25,1.5)', () => {
    const cmd = command.parse('decorate @10mm,12.5mm with CircularGraduations (scale 0.9) (stretch 1.25,1.5)')
    const expected = {
      src: 'decorate @10mm,12.5mm with CircularGraduations (scale 0.9) (stretch 1.25,1.5)',
      action: 'new',
      decoration: {
        x: {
          reference: 'absolute',
          offset: 10
        },
        y: {
          reference: 'absolute',
          offset: 12.5
        },
        name: 'CircularGraduations',
        scale: 0.9,
        stretch: {
          x: 1.25,
          y: 1.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('decorate 10mm,12.5mm CircularGraduations (scale 0.9) (stretch 1.25,1.5)', () => {
    const cmd = command.parse('decorate 10mm,12.5mm with CircularGraduations (scale 0.9) (stretch 1.25,1.5)')
    const expected = {
      src: 'decorate 10mm,12.5mm with CircularGraduations (scale 0.9) (stretch 1.25,1.5)',
      action: 'new',
      decoration: {
        x: {
          reference: 'origin',
          offset: 10
        },
        y: {
          reference: 'origin',
          offset: 12.5
        },
        name: 'CircularGraduations',
        scale: 0.9,
        stretch: {
          x: 1.25,
          y: 1.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('decorate v1+10mm,h1+12.5mm with CircularGraduations (scale 0.9) (stretch 1.25,1.5)', () => {
    const cmd = command.parse('decorate v1+10mm,h1+12.5mm with CircularGraduations (scale 0.9) (stretch 1.25,1.5)')
    const expected = {
      src: 'decorate v1+10mm,h1+12.5mm with CircularGraduations (scale 0.9) (stretch 1.25,1.5)',
      action: 'new',
      decoration: {
        x: {
          reference: 'v1',
          offset: 10
        },
        y: {
          reference: 'h1',
          offset: 12.5
        },
        name: 'CircularGraduations',
        scale: 0.9,
        stretch: {
          x: 1.25,
          y: 1.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('decorate left+10mm,bottom-12.5mm with CircularGraduations (scale 0.9) (stretch 1.25,1.5)', () => {
    const cmd = command.parse('decorate left+10mm,bottom-12.5mm with CircularGraduations (scale 0.9) (stretch 1.25,1.5)')
    const expected = {
      src: 'decorate left+10mm,bottom-12.5mm with CircularGraduations (scale 0.9) (stretch 1.25,1.5)',
      action: 'new',
      decoration: {
        x: {
          reference: 'left',
          offset: 10
        },
        y: {
          reference: 'bottom',
          offset: -12.5
        },
        name: 'CircularGraduations',
        scale: 0.9,
        stretch: {
          x: 1.25,
          y: 1.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration d1 (output out)', () => {
    const cmd = command.parse('set decoration d1 (output out)')
    const expected = {
      src: 'set decoration d1 (output out)',
      action: 'set',
      decoration: {
        id: 'd1',
        x: {
          reference: 'output<out>',
          offset: 0
        },
        y: {
          reference: 'output<out>',
          offset: 0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration d1 (output out +10mm,+12.5mm)', () => {
    const cmd = command.parse('set decoration d1 (output out +10mm,+12.5mm)')
    const expected = {
      src: 'set decoration d1 (output out +10mm,+12.5mm)',
      action: 'set',
      decoration: {
        id: 'd1',
        x: {
          reference: 'output<out>',
          offset: 10
        },
        y: {
          reference: 'output<out>',
          offset: 12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations (output out)', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations (output out)')
    const expected = {
      src: 'set decoration (input in) CircularGraduations (output out)',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          reference: 'output<out>',
          offset: 0
        },
        y: {
          reference: 'output<out>',
          offset: 0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations (output out +10mm,+12.5mm)', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations (output out +10mm,+12.5mm)')
    const expected = {
      src: 'set decoration (input in) CircularGraduations (output out +10mm,+12.5mm)',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          reference: 'output<out>',
          offset: 10
        },
        y: {
          reference: 'output<out>',
          offset: 12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations dx +10mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations dx +10mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations dx +10mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations dy +10mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations dy +10mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations dy +10mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        y: {
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations dxy +10mm,-12.5mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations dxy +10mm,-12.5mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations dxy +10mm,-12.5mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          offset: 10
        },
        y: {
          offset: -12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations x @10mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations x @10mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations x @10mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          reference: 'absolute',
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations x 10mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations x 10mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations x 10mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          reference: 'origin',
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations x left+10mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations x left+10mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations x left+10mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          reference: 'left',
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations x v1+10mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations x v1+10mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations x v1+10mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          reference: 'v1',
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations y @10mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations y @10mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations y @10mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        y: {
          reference: 'absolute',
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations y 10mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations y 10mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations y 10mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        y: {
          reference: 'origin',
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations y top+10mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations y top+10mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations y top+10mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        y: {
          reference: 'top',
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations y h1+10mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations y h1+10mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations y h1+10mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        y: {
          reference: 'h1',
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations xy @10mm,12.5mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations xy @10mm,12.5mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations xy @10mm,12.5mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          reference: 'absolute',
          offset: 10
        },
        y: {
          reference: 'absolute',
          offset: 12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations xy 10mm,12.5mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations xy 10mm,12.5mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations xy 10mm,12.5mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          reference: 'origin',
          offset: 10
        },
        y: {
          reference: 'origin',
          offset: 12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations xy left+10mm,top+12.5mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations xy left+10mm,top+12.5mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations xy left+10mm,top+12.5mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          reference: 'left',
          offset: 10
        },
        y: {
          reference: 'top',
          offset: 12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set decoration (input in) CircularGraduations xy v1+10mm,h1+12.5mm', () => {
    const cmd = command.parse('set decoration (input in) CircularGraduations xy v1+10mm,h1+12.5mm')
    const expected = {
      src: 'set decoration (input in) CircularGraduations xy v1+10mm,h1+12.5mm',
      action: 'set',
      decoration: {
        reference: 'input<in>',
        name: 'CircularGraduations',
        x: {
          reference: 'v1',
          offset: 10
        },
        y: {
          reference: 'h1',
          offset: 12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })
})
