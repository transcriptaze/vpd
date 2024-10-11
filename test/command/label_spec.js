import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('new label command translation', () => {
  it('new label lorem @10mm,10mm', () => {
    const cmd = command.parse('new label lorem @10mm,10mm')
    const expected = {
      src: 'new label lorem @10mm,10mm',
      action: 'new',
      label: {
        text: 'lorem',
        x: {
          reference: 'absolute',
          offset: 10
        },
        y: {
          reference: 'absolute',
          offset: 10
        },
        colour: {
          light: '#222222',
          dark: '#ebebeb'
        },
        font: 'RobotoMono-Bold',
        fontsize: 12,
        halign: 'left',
        valign: 'baseline'
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new label lorem @30°,10mm', () => {
    const cmd = command.parse('new label lorem @30°,10mm')
    const expected = {
      src: 'new label lorem @30°,10mm',
      action: 'new',
      label: {
        text: 'lorem',
        x: {
          reference: 'absolute',
          offset: 0.0
        },
        y: {
          reference: 'absolute',
          offset: 0.0
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        },
        colour: {
          light: '#222222',
          dark: '#ebebeb'
        },
        font: 'RobotoMono-Bold',
        fontsize: 12,
        halign: 'left',
        valign: 'baseline'
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new label lorem v1,h2', () => {
    const cmd = command.parse('new label lorem v1,h2')
    const expected = {
      src: 'new label lorem v1,h2',
      action: 'new',
      label: {
        text: 'lorem',
        x: {
          reference: 'v1',
          offset: 0.0
        },
        y: {
          reference: 'h2',
          offset: 0.0
        },
        colour: {
          light: '#222222',
          dark: '#ebebeb'
        },
        font: 'RobotoMono-Bold',
        fontsize: 12,
        halign: 'left',
        valign: 'baseline'
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new label lorem (v1,h2)', () => {
    const cmd = command.parse('new label lorem (v1,h2)')
    const expected = {
      src: 'new label lorem (v1,h2)',
      action: 'new',
      label: {
        text: 'lorem',
        x: {
          reference: 'v1',
          offset: 0.0
        },
        y: {
          reference: 'h2',
          offset: 0.0
        },
        colour: {
          light: '#222222',
          dark: '#ebebeb'
        },
        font: 'RobotoMono-Bold',
        fontsize: 12,
        halign: 'left',
        valign: 'baseline'
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new label lorem v1+10mm,h2-12mm', () => {
    const cmd = command.parse('new label lorem v1+10mm,h2-12mm')
    const expected = {
      src: 'new label lorem v1+10mm,h2-12mm',
      action: 'new',
      label: {
        text: 'lorem',
        x: {
          reference: 'v1',
          offset: 10
        },
        y: {
          reference: 'h2',
          offset: -12
        },
        colour: {
          light: '#222222',
          dark: '#ebebeb'
        },
        font: 'RobotoMono-Bold',
        fontsize: 12,
        halign: 'left',
        valign: 'baseline'
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new label lorem (v1,h2 30°,10mm)', () => {
    const cmd = command.parse('new label lorem (v1,h2 30°,10mm)')
    const expected = {
      src: 'new label lorem (v1,h2 30°,10mm)',
      action: 'new',
      label: {
        text: 'lorem',
        x: {
          reference: 'v1',
          offset: 0.0
        },
        y: {
          reference: 'h2',
          offset: 0.0
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        },
        colour: {
          light: '#222222',
          dark: '#ebebeb'
        },
        font: 'RobotoMono-Bold',
        fontsize: 12,
        halign: 'left',
        valign: 'baseline'
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new label lorem (input in 30°,10mm)', () => {
    const cmd = command.parse('new label lorem (input in 30°,10mm)')
    const expected = {
      src: 'new label lorem (input in 30°,10mm)',
      action: 'new',
      label: {
        text: 'lorem',
        x: {
          reference: 'input<in>'
        },
        y: {
          reference: 'input<in>'
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        },
        colour: {
          light: '#222222',
          dark: '#ebebeb'
        },
        font: 'RobotoMono-Bold',
        fontsize: 12,
        halign: 'left',
        valign: 'baseline'
      }
    }

    expect(cmd).to.eql(expected)
  })
})

describe('set label command translation', () => {
  it('set label lorem x (input in +10mm)', () => {
    const cmd = command.parse('set label lorem x (input in +10mm)')
    const expected = {
      src: 'set label lorem x (input in +10mm)',
      action: 'set',
      label: {
        id: 'lorem',
        x: {
          reference: 'input<in>',
          offset: 10
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set label lorem y (input in +12.5mm)', () => {
    const cmd = command.parse('set label lorem y (input in +12.5mm)')
    const expected = {
      src: 'set label lorem y (input in +12.5mm)',
      action: 'set',
      label: {
        id: 'lorem',
        y: {
          reference: 'input<in>',
          offset: 12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set label lorem xy (input in +10mm,+12.5mm)', () => {
    const cmd = command.parse('set label lorem xy (input in +10mm,+12.5mm)')
    const expected = {
      src: 'set label lorem xy (input in +10mm,+12.5mm)',
      action: 'set',
      label: {
        id: 'lorem',
        x: {
          reference: 'input<in>',
          offset: 10
        },
        y: {
          reference: 'input<in>',
          offset: 12.5
        },
        offset: {
          angle: 0.0,
          radius: 0.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set label "lorem" xy @30°,10mm', () => {
    const cmd = command.parse('set label "lorem" xy @30°,10mm')
    const expected = {
      src: 'set label "lorem" xy @30°,10mm',
      action: 'set',
      label: {
        id: 'lorem',
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

  it('set label "lorem" xy 10mm,10mm', () => {
    const cmd = command.parse('set label "lorem" xy 10mm,10mm')
    const expected = {
      src: 'set label "lorem" xy 10mm,10mm',
      action: 'set',
      label: {
        id: 'lorem',
        x: {
          reference: 'origin',
          offset: 10
        },
        y: {
          reference: 'origin',
          offset: 10
        },
        offset: {
          angle: 0.0,
          radius: 0.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set label "lorem" xy 30°,10mm', () => {
    const cmd = command.parse('set label "lorem" xy 30°,10mm')
    const expected = {
      src: 'set label "lorem" xy 30°,10mm',
      action: 'set',
      label: {
        id: 'lorem',
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

  it('set label "lorem" xy (v1,h2)', () => {
    const cmd = command.parse('set label "lorem" xy (v1,h2)')
    const expected = {
      src: 'set label "lorem" xy (v1,h2)',
      action: 'set',
      label: {
        id: 'lorem',
        x: {
          reference: 'v1',
          offset: 0
        },
        y: {
          reference: 'h2',
          offset: 0
        },
        offset: {
          angle: 0.0,
          radius: 0.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set label "lorem" xy (v1,h2 30°,10mm)', () => {
    const cmd = command.parse('set label "lorem" xy (v1,h2 30°,10mm)')
    const expected = {
      src: 'set label "lorem" xy (v1,h2 30°,10mm)',
      action: 'set',
      label: {
        id: 'lorem',
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

  it('set label "lorem" xy (left,middle)', () => {
    const cmd = command.parse('set label "lorem" xy (left,middle)')
    const expected = {
      src: 'set label "lorem" xy (left,middle)',
      action: 'set',
      label: {
        id: 'lorem',
        x: {
          reference: 'left',
          offset: 0
        },
        y: {
          reference: 'middle',
          offset: 0
        },
        offset: {
          angle: 0.0,
          radius: 0.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set label "lorem" xy (left,middle 30°,10mm)', () => {
    const cmd = command.parse('set label "lorem" xy (left,middle 30°,10mm)')
    const expected = {
      src: 'set label "lorem" xy (left,middle 30°,10mm)',
      action: 'set',
      label: {
        id: 'lorem',
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

  it('set label "lorem" xy (input in)', () => {
    const cmd = command.parse('set label "lorem" xy (input in)')
    const expected = {
      src: 'set label "lorem" xy (input in)',
      action: 'set',
      label: {
        id: 'lorem',
        x: {
          reference: 'input<in>',
          offset: 0
        },
        y: {
          reference: 'input<in>',
          offset: 0
        },
        offset: {
          angle: 0.0,
          radius: 0.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set label "lorem" xy (input in 30°,10mm)', () => {
    const cmd = command.parse('set label "lorem" xy (input in 30°,10mm)')
    const expected = {
      src: 'set label "lorem" xy (input in 30°,10mm)',
      action: 'set',
      label: {
        id: 'lorem',
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
