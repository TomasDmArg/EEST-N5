const fastify = require('fastify')({ logger: true });

function traducirAIdiomaP(frase) {
    let fraseTraducida = "";
    for (const palabra of frase.split(' ')) {
        for (const letra of palabra) {
            if ('aeiou'.includes(letra)) {
                fraseTraducida += letra + 'p' + letra;
            } else {
                fraseTraducida += letra;
            }
        }
        fraseTraducida += ' ';
    }
    return fraseTraducida.trim();
}

fastify.get('/traducir', async (request, reply) => {
    const frase = request.query.frase;
    if (!frase) {
        return reply.code(400).send({ message: 'Missing required parameter "frase"' });
    }
    const fraseTraducida = traducirAIdiomaP(frase);
    reply.send({ fraseTraducida });
});

// Start the server
fastify.listen(3000, (err, address) => {
    if (err) {
        console.error(err);
        process.exit(1);
    }
    console.log(`Servidor escuchando en ${address}`);
});