import { describe, it } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter';

import * as command from '../../html/javascript/command.js'

describe('command translation', function () {
  it('delete output audio', async function () {
    await Parser.init()
    await command.init(Parser,'./html/wasm/grammars/tree-sitter-command.wasm')

    const cmd = command.parse('delete output audio')
    const expected = {
      src: 'delete output audio',
      action: 'delete',
      output: {
        id: 'audio'
      }
    }

    expect(cmd).to.eql(expected)
  })
})

