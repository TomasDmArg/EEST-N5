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
 * Elimina el animal con el ID especificado del array zooAnimals y actualiza la lista de animales en el zoológico.
 * @param {number} animalId - El ID del animal a eliminar.
 */
function deleteAnimal(animalId) {
    const index = zooAnimals.findIndex(animal => animal.IdAnimal === animalId);
    if (index !== -1) {
        zooAnimals.splice(index, 1);
        listAllAnimals();
    }
}

/**
 * HTML para el botón de eliminar un animal.
 * @param {number} animalId - El ID del animal.
 * @returns {string}
*/
const button = (animalId) => {
    return `<button class="deleteButton" onclick="deleteAnimal(${animalId})">
        <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="24" height="24" color="#000000" fill="none">
            <path d="M19.5 5.5L18.8803 15.5251C18.7219 18.0864 18.6428 19.3671 18.0008 20.2879C17.6833 20.7431 17.2747 21.1273 16.8007 21.416C15.8421 22 14.559 22 11.9927 22C9.42312 22 8.1383 22 7.17905 21.4149C6.7048 21.1257 6.296 20.7408 5.97868 20.2848C5.33688 19.3626 5.25945 18.0801 5.10461 15.5152L4.5 5.5" stroke="currentColor" stroke-width="1.5" stroke-linecap="round" />
            <path d="M3 5.5H21M16.0557 5.5L15.3731 4.09173C14.9196 3.15626 14.6928 2.68852 14.3017 2.39681C14.215 2.3321 14.1231 2.27454 14.027 2.2247C13.5939 2 13.0741 2 12.0345 2C10.9688 2 10.436 2 9.99568 2.23412C9.8981 2.28601 9.80498 2.3459 9.71729 2.41317C9.32164 2.7167 9.10063 3.20155 8.65861 4.17126L8.05292 5.5" stroke="currentColor" stroke-width="1.5" stroke-linecap="round" />
            <path d="M9.5 16.5L9.5 10.5" stroke="currentColor" stroke-width="1.5" stroke-linecap="round" />
            <path d="M14.5 16.5L14.5 10.5" stroke="currentColor" stroke-width="1.5" stroke-linecap="round" />
        </svg>
    </button>`;
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
                ${button(animal.IdAnimal)}
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
