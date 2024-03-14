/* tslint:disable */
/* eslint-disable */
/**
*/
export function main(): void;
/**
* @param {string} json
* @returns {boolean}
*/
export function exec(json: string): boolean;
/**
* @returns {boolean}
*/
export function undo(): boolean;
/**
* @param {string} object
* @returns {any}
*/
export function serialize(object: string): any;
/**
*/
export function clear(): void;
/**
* @param {string} json
* @returns {Promise<void>}
*/
export function restore(json: string): Promise<void>;
/**
* @param {string} theme
* @returns {string}
*/
export function render(theme: string): string;
/**
* @param {number} dx
* @param {number} dy
* @returns {string}
*/
export function query(dx: number, dy: number): string;

export type InitInput = RequestInfo | URL | Response | BufferSource | WebAssembly.Module;

export interface InitOutput {
  readonly memory: WebAssembly.Memory;
  readonly main: () => void;
  readonly exec: (a: number, b: number, c: number) => void;
  readonly undo: (a: number) => void;
  readonly serialize: (a: number, b: number, c: number) => void;
  readonly clear: (a: number) => void;
  readonly restore: (a: number, b: number) => number;
  readonly render: (a: number, b: number, c: number) => void;
  readonly query: (a: number, b: number, c: number) => void;
  readonly __wbindgen_malloc: (a: number, b: number) => number;
  readonly __wbindgen_realloc: (a: number, b: number, c: number, d: number) => number;
  readonly __wbindgen_export_2: WebAssembly.Table;
  readonly _dyn_core__ops__function__FnMut__A____Output___R_as_wasm_bindgen__closure__WasmClosure___describe__invoke__h9b99be0ac7fdcd0a: (a: number, b: number, c: number) => void;
  readonly __wbindgen_add_to_stack_pointer: (a: number) => number;
  readonly __wbindgen_free: (a: number, b: number, c: number) => void;
  readonly __wbindgen_exn_store: (a: number) => void;
  readonly wasm_bindgen__convert__closures__invoke2_mut__h17bc45308f3f2415: (a: number, b: number, c: number, d: number) => void;
  readonly __wbindgen_start: () => void;
}

export type SyncInitInput = BufferSource | WebAssembly.Module;
/**
* Instantiates the given `module`, which can either be bytes or
* a precompiled `WebAssembly.Module`.
*
* @param {SyncInitInput} module
*
* @returns {InitOutput}
*/
export function initSync(module: SyncInitInput): InitOutput;

/**
* If `module_or_path` is {RequestInfo} or {URL}, makes a request and
* for everything else, calls `WebAssembly.instantiate` directly.
*
* @param {InitInput | Promise<InitInput>} module_or_path
*
* @returns {Promise<InitOutput>}
*/
export default function __wbg_init (module_or_path?: InitInput | Promise<InitInput>): Promise<InitOutput>;
