import { freemem } from 'node:os'

console.log('Memoria libre:' + freemem())
const vec = []
for (let f = 0; f < 1000000; f++) {
  vec.push(f)
}
console.log('Memoria libre después de crear el vector:' + freemem())