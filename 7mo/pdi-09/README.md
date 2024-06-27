# Clases - Export & Import - JS9

Este proyecto contiene tres ejercicios que demuestran diferentes aspectos de la exportación e importación de módulos en JavaScript, utilizando la sintaxis de ES6.

## Estructura del Proyecto

```
proyecto/
│
├── ejercicio1/
│   ├── math.js
│   ├── main.js
│   └── docs/
│
├── ejercicio2/
│   ├── persona.js
│   ├── app.js
│   └── docs/
│
├── ejercicio3/
│   ├── calculadora.js
│   ├── main.js
│   └── docs/
│
└── README.md
```

## Ejercicios

### Ejercicio 1: Exportar e Importar Funciones

- **Archivos**: `math.js` y `main.js`
- **Descripción**: Define y exporta funciones para sumar y restar en `math.js`. Luego, importa estas funciones en `main.js` y muéstralas por consola.

### Ejercicio 2: Exportar e Importar Clases

- **Archivos**: `persona.js` y `app.js`
- **Descripción**: Define y exporta una clase `Persona` con propiedades `nombre` y `edad`, y un método `mostrarInformacion` en `persona.js`. Luego, importa esta clase en `app.js`, crea instancias de `Persona` y ejecuta el método de la clase.

### Ejercicio 3: Exportación e Importación por Defecto

- **Archivos**: `calculadora.js` y `main.js`
- **Descripción**: Define y exporta por defecto una clase `Calculadora` con métodos `multiplicar` y `dividir` en `calculadora.js`. Luego, importa esta clase en `main.js` y úsala.

## Documentación

Todos los archivos están documentados utilizando JSDoc. La documentación generada se encuentra en la carpeta `docs` de cada ejercicio.

### Generación de Documentación

Para generar la documentación de cada ejercicio, sigue estos pasos:

1. Asegúrate de tener JSDoc instalado globalmente:
   ```
   npm install -g jsdoc
   ```

2. Navega a la carpeta del ejercicio y ejecuta:
   ```
   jsdoc *.js -d docs
   ```

   Esto generará la documentación en la carpeta `docs` del ejercicio correspondiente.

## Ejecución de los Ejercicios

Para ejecutar cada ejercicio:

1. Asegúrate de tener Node.js instalado en tu sistema.
2. Navega a la carpeta del ejercicio correspondiente.
3. Ejecuta el archivo principal con Node.js. Por ejemplo:
   ```
   node main.js
   ```

## Notas Adicionales

- Estos ejercicios utilizan la sintaxis de módulos ES6 (`import`/`export`).
- Asegúrate de que tu entorno de ejecución soporte módulos ES6 o utiliza un transpilador como Babel si es necesario.
