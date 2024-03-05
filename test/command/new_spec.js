import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as command from '../../html/javascript/command.js'

before(async function () {
  await Parser.init()
  await command.init(Parser, './html/wasm/grammars/tree-sitter-command.wasm')
})

describe('new module… command translation', () => {
  it('new module woot 9H', () => {
    const cmd = command.parse('new module woot 9H')
    const expected = {
      src: 'new module woot 9H',
      action: 'new',
      module: {
        name: 'woot',
        height: 128.5,
        width: 45.72
      }
    }

    expect(cmd).to.eql(expected)
  })

  it('new module woot 45mm', () => {
    const cmd = command.parse('new module woot 45mm')
    const expected = {
      src: 'new module woot 45mm',
      action: 'new',
      module: {
        name: 'woot',
        height: 128.5,
        width: 45
      }
    }

    expect(cmd).to.eql(expected)
  })
})
