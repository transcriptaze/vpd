import { describe, it, before } from 'mocha'
import { expect } from 'chai'
import Parser from 'web-tree-sitter'

import * as hints from '../html/javascript/hints.js'

before(async function () {
  await Parser.init()
  await hints.init(Parser, './html/wasm/grammars/tree-sitter-hint.wasm')
})

describe('no command hints', () => {
  it('no text', function () {
    const list = hints.parse('').sort()
    const expected = ['new', 'decorate', 'set', 'delete', 'load', 'unload', 'save', 'export', 'list', 'help'].sort()

    expect(list).to.eql(expected)
  })
})

describe("'new' command hints", () => {
  it('new', function () {
    const list = hints.parse('new').sort()
    const expected = ['new module', 'new input', 'new output', 'new parameter', 'new light', 'new widget', 'new label', 'new decoration', 'new guide'].sort()

    expect(list).to.eql(expected)
  })

  it('new module', function () {
    const list = hints.parse('new module').sort()
    const expected = ['new module <em>&lt;name&gt;</em>'].sort()

    expect(list).to.eql(expected)
  })

  it('new module <name>', function () {
    const list = hints.parse('new module woot').sort()
    const expected = [
      'new module <em>&lt;name&gt;</em> 1U',
      'new module <em>&lt;name&gt;</em> 9H',
      'new module <em>&lt;name&gt;</em> 45mm'
    ].sort()

    expect(list).to.eql(expected)
  })

  it.skip('new module <name> 1U', function () {
    const list = hints.parse('new module woot 1U').sort()
    const expected = [
      'new module <em>&lt;name&gt;</em> 1U 9H',
      'new module <em>&lt;name&gt;</em> 1U 45mm'
    ].sort()

    expect(list).to.eql(expected)
  })
})
