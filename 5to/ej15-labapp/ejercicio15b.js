const http = require('http')
const fs = require('fs/promises')
const mime = require('mime')

const servidor = http.createServer((pedido, respuesta) => {
  const url = new URL('http://localhost:8088' + pedido.url)
  let camino = 'static' + url.pathname
  if (camino == 'static/')
    camino = 'static/index.html'
  fs.stat(camino)
    .then(() => {
      fs.readFile(camino)
        .then(contenido => {
          const tipo = mime.getType(camino)
          console.log(tipo)
          respuesta.writeHead(200, { 'Content-Type': 'text/html' })
          respuesta.write(contenido)
          respuesta.end()
        })
        .catch(error => {
          respuesta.writeHead(500, { 'Content-Type': 'text/plain' })
          respuesta.write('Error interno')
          respuesta.end()
        })
    })
    .catch(error => {
      respuesta.writeHead(404, { 'Content-Type': 'text/html' })
      respuesta.end('<h1>Error 404: No existe el recurso solicitado</h1>')
    })
})

servidor.listen(8888)

console.log('Servidor web iniciado')