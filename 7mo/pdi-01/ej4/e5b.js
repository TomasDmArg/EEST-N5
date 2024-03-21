import { readFile } from 'node:fs/promises'

readFile('./test1.txt')
  .then(datos => {
    console.log(datos.toString())
  })
  .catch(error => {
    console.log(error)
  })
