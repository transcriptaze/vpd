import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as hints from '../../html/javascript/hints.js'

before(async function () {
  await Parser.init()
  await hints.init(Parser, './html/wasm/grammars/tree-sitter-hint.wasm')
})

describe('command hints', () => {
  it('no text', function () {
    const list = hints.parse('').sort()
    const expected = ['new', 'decorate', 'set', 'delete', 'load', 'unload', 'save', 'export', 'list', 'help'].sort()

    expect(list).to.eql(expected)
  })

  it("command hints: 'new'", function () {
    const list = hints.parse('new').sort()
    const expected = ['new module', 'new input', 'new output', 'new parameter', 'new light', 'new widget', 'new label', 'new decoration', 'new guide'].sort()

    expect(list).to.eql(expected)
  })
})
