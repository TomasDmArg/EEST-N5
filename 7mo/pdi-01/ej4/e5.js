import { readFile } from 'node:fs'

readFile('./test.txt', (error, datos) => {
  if (error)
    console.log(error)
  else
    console.log(datos.toString())
})
