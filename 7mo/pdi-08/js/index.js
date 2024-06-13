/**
 * Representa un animal en el zoológico.
 * @class
 */
class CZooAnimal {
    /**
     * Crea una nueva instancia de CZooAnimal.
     * @param {string} name - El nombre del animal.
     * @param {number} cageNumber - El número de la jaula.
     * @param {number} IdTypeAnimal - El ID del tipo de animal.
     * @param {number} weight - El peso del animal.
     */
    constructor(name, cageNumber, IdTypeAnimal, weight) {
        /**
         * @property {number} IdAnimal - El ID del animal, generado aleatoriamente.
         */
        this.IdAnimal = Math.random();
        /**
         * @property {string} name - El nombre del animal.
         */
        this.name = name;
        /**
         * @property {number} cageNumber - El número de la jaula.
         */
        this.cageNumber = cageNumber;
        /**
         * @property {number} IdTypeAnimal - El ID del tipo de animal.
         */
        this.IdTypeAnimal = IdTypeAnimal;
        /**
         * @property {number} weight - El peso del animal.
         */
        this.weight = weight;
    }
}

/**
 * Array que contiene las instancias de CZooAnimal.
 * @type {CZooAnimal[]}
 */
const zooAnimals = [
    new CZooAnimal('Leon', 1, 1, 250),
    new CZooAnimal('Tigre', 2, 1, 200),
    new CZooAnimal('Elefante', 3, 2, 1200),
    new CZooAnimal('Mono', 4, 3, 25),
    new CZooAnimal('Serpiente', 5, 4, 5)
];

/**
 * Cuenta la cantidad de animales en la jaula 5 que pesan menos de 3kg.
 * @returns {number} La cantidad de animales que cumplen la condición.
 */
function countAnimalsInCage5Under3kg() {
    return zooAnimals.filter(animal => animal.cageNumber === 5 && animal.weight < 3).length;
}

/**
 * Cuenta la cantidad de animales felinos (IdTypeAnimal = 1) entre las jaulas 2 y 5.
 * @returns {number} La cantidad de animales felinos que cumplen la condición.
 */
function countFelineAnimalsBetweenCages2And5() {
    return zooAnimals.filter(animal => animal.IdTypeAnimal === 1 && animal.cageNumber >= 2 && animal.cageNumber <= 5).length;
}

/**
 * Lista los nombres de los animales en la jaula 4 que pesan menos de 120kg.
 * @returns {string[]} Los nombres de los animales que cumplen la condición.
 */
function listAnimalNameInCage4Under120() {
    return zooAnimals.filter(animal => animal.cageNumber === 4 && animal.weight < 120).map(animal => animal.name);
}

/**
 * Actualiza el contenido del elemento HTML con id 'allAnimals' para mostrar todos los animales en el zoológico.
 * La lista incluye el nombre, número de jaula, tipo de animal y peso de cada animal.
 */
function listAllAnimals () {
    document.getElementById('allAnimals').innerHTML = `
        <section class="allAnimals__itemsHead">
            <h3>Nombre</h3>
            <h3>Jaula</h3>
            <h3>Tipo</h3>
            <h3>Peso</h3>
        </section>
        ${zooAnimals.map(animal => `
            <section class="allAnimals__items">
                <p>${animal.name}</p>
                <p>${animal.cageNumber}</p>
                <p>${animal.IdTypeAnimal}</p>
                <p>${animal.weight}</p>
            </section>
        `).join('')}
    `;
}

/**
 * Función para agregar un nuevo animal al zoológico y actualizar la lista.
 * @param {string} name - El nombre del animal.
 * @param {number} cageNumber - El número de la jaula.
 * @param {number} IdTypeAnimal - El ID del tipo de animal.
 * @param {number} weight - El peso del animal.
 */
function addAnimal(name, cageNumber, IdTypeAnimal, weight) {
    // Crear una nueva instancia de CZooAnimal y agregarla al array zooAnimals
    const newAnimal = new CZooAnimal(name, cageNumber, IdTypeAnimal, weight);
    zooAnimals.push(newAnimal);
    // Actualizar la lista de todos los animales
    listAllAnimals();
}

// Escuchar el evento de clic en el botón de agregar animal
document.getElementById('addAnimal').addEventListener('click', () => {
    const animalName = document.getElementById('addAnimalInput').value;
    const cageNumber = parseInt(prompt('Ingrese el número de la jaula:'), 10);
    const IdTypeAnimal = parseInt(prompt('Ingrese el ID del tipo de animal:'), 10);
    const weight = parseFloat(prompt('Ingrese el peso del animal:'));

    if (animalName && !isNaN(cageNumber) && !isNaN(IdTypeAnimal) && !isNaN(weight)) {
        addAnimal(animalName, cageNumber, IdTypeAnimal, weight);
    } else {
        alert('Por favor, ingrese valores válidos.');
    }
});

// Ejecutar funciones y mostrar resultados en el HTML
document.getElementById('cage5Under3kg').innerText = 
    `Animales en la jaula 5 que pesan menos de 3kg: ${countAnimalsInCage5Under3kg()}`;

document.getElementById('felineBetweenCages').innerText = 
    `Animales felinos entre las jaulas 2 y 5: ${countFelineAnimalsBetweenCages2And5()}`;

document.getElementById('animalNameInCage4Under120').innerText = 
    `Nombre de los animales en la jaula 4 que pesan menos de 120kg: ${listAnimalNameInCage4Under120().join(', ')}`;

listAllAnimals();
