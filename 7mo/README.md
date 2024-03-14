# TP 02 - PDI

## Usage:
This document is an API to translate phrases from spanish to a non-existent language called "Idioma P".  

**Route**

* `GET /traducir`: Translate a sentence from Spanish into the P Language.


**Parameters**

* `frase (query)`: The Spanish phrase to be translated (Required)


**Example**

**Request:**

```
GET http://localhost:3000/traducir?frase=Hola,%20%C2%BFc%C3%B3mo%20est%C3%A1s%3F
```

**Response:**

```json
{
  "fraseTraducida": "Hopolapa, ¿cómop epapas epestás?"
}
```


**Status codes**

* `200 OK`: La solicitud se procesó correctamente y se devuelve la frase traducida.
* `400 Bad Request`: La solicitud tiene errores de sintaxis, como un parámetro faltante o con formato incorrecto.

**Installation**

```bash
npm i
```

```bash
node index.js
```
