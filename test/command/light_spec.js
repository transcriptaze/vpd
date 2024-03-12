import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('light command translation', () => {
  it('set light recording xy (parameter volumein +10mm,+12.5mm)', () => {
    const cmd = command.parse('set light recording xy (parameter volume +10mm,+12.5mm)')
    const expected = {
      src: 'set light recording xy (parameter volume +10mm,+12.5mm)',
      action: 'set',
      light: {
        id: 'recording',
        x: {
          reference: 'parameter<volume>',
          offset: 10
        },
        y: {
          reference: 'parameter<volume>',
          offset: 12.5
        }
      }
    }

    expect(cmd).to.eql(expected)
  })
})
