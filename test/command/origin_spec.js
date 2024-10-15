import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('set origin command translation', () => {
  it('set origin @10mm,10mm', () => {
    const cmd = command.parse('set origin @10mm,10mm')
    const expected = {
      src: 'set origin @10mm,10mm',
      action: 'set',
      origin: {
        x: {
          reference: 'absolute',
          offset: 10.0
        },
        y: {
          reference: 'absolute',
          offset: 10.0
        },
        offset: {
          angle: 0.0,
          radius: 0.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set origin @30°,10mm', () => {
    const cmd = command.parse('set origin @30°,10mm')
    const expected = {
      src: 'set origin @30°,10mm',
      action: 'set',
      origin: {
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
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set origin left,top', () => {
    const cmd = command.parse('set origin left,top')
    const expected = {
      src: 'set origin left,top',
      action: 'set',
      origin: {
        x: {
          reference: 'left',
          offset: 0.0
        },
        y: {
          reference: 'top',
          offset: 0.0
        },
        offset: {
          angle: 0.0,
          radius: 0.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set origin top,left', () => {
    const cmd = command.parse('set origin top,left')
    const expected = {
      src: 'set origin top,left',
      action: 'set',
      origin: {
        x: {
          reference: 'left',
          offset: 0.0
        },
        y: {
          reference: 'top',
          offset: 0.0
        },
        offset: {
          angle: 0.0,
          radius: 0.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set origin left,top 30°,10mm', () => {
    const cmd = command.parse('set origin left,top 30°,10mm')
    const expected = {
      src: 'set origin left,top 30°,10mm',
      action: 'set',
      origin: {
        x: {
          reference: 'left',
          offset: 0.0
        },
        y: {
          reference: 'top',
          offset: 0.0
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set origin top,left 30°,10mm', () => {
    const cmd = command.parse('set origin top,left 30°,10mm')
    const expected = {
      src: 'set origin top,left 30°,10mm',
      action: 'set',
      origin: {
        x: {
          reference: 'left',
          offset: 0.0
        },
        y: {
          reference: 'top',
          offset: 0.0
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set origin left+5.08mm,top+10.16mm 30°,10mm', () => {
    const cmd = command.parse('set origin left+5.08mm,top+10.16mm 30°,10mm')
    const expected = {
      src: 'set origin left+5.08mm,top+10.16mm 30°,10mm',
      action: 'set',
      origin: {
        x: {
          reference: 'left',
          offset: 5.08
        },
        y: {
          reference: 'top',
          offset: 10.16
        },
        offset: {
          angle: 30.0,
          radius: 10.0
        }
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('set origin top+5.08mm,left+10.16mm 30°,10mm', () => {
    const cmd = command.parse('set origin top+5.08mm,left+10.16mm 30°,10mm')
    const expected = {
      src: 'set origin top+5.08mm,left+10.16mm 30°,10mm',
      action: 'set',
      origin: {
        x: {
          reference: 'left',
          offset: 10.16
        },
        y: {
          reference: 'top',
          offset: 5.08
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
