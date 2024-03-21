import { createServer } from 'node:http';

const servidor = createServer((pedido, respuesta) => {
  const url = new URL('http://localhost:8888'+pedido.url)
  console.log(url)
  respuesta.writeHead(200, { 'Content-Type': 'text/html' })
  respuesta.write('<!doctype html><html><head></head><body>Hola mundo</body></html>')
  respuesta.end()
});

servidor.listen(8888)

console.log('Servidor web iniciado en el puerto 8888')
