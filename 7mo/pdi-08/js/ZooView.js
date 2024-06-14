/**
 * Clase ZooView
 * Maneja la vista y la interacción del usuario con el zoológico.
 */
export class ZooView {
    /**
     * Constructor de la clase ZooView
     * Inicializa los elementos de la interfaz de usuario y los eventos.
     */
    constructor() {
        this.zooManager = new ZooManager();
        this.addAnimalInput = document.getElementById('addAnimalInput');
        this.animalList = document.getElementById('allAnimals');
        this.addAnimalButton = document.getElementById('addAnimal');

        this.addAnimalInput.addEventListener('keydown', this.handleAddAnimal.bind(this));
        this.addAnimalButton.addEventListener('click', this.handleAddAnimal.bind(this));

        this.renderAnimalList();
        this.renderStatistics();
    }

    /**
     * Maneja el evento de agregar un nuevo animal.
     * @param {Event} e - Evento de teclado o clic.
     */
    handleAddAnimal(e) {
        const isEnterKey = e.key === 'Enter';
        const isClickEvent = e.type === 'click';

        if (isEnterKey || isClickEvent) {
            let animalName;
            if (isEnterKey) {
                animalName = e.target.value.trim();
            } else {
                animalName = prompt('Ingrese el nombre del animal:');
            }

            if (animalName) {
                const cageNumber = parseInt(prompt('Ingrese el número de la jaula:'), 10);
                const animalTypeId = parseInt(prompt('Ingrese el ID del tipo de animal:'), 10);
                const weight = parseFloat(prompt('Ingrese el peso del animal:'));

                if (!isNaN(cageNumber) && !isNaN(animalTypeId) && !isNaN(weight)) {
                    this.zooManager.addAnimal(animalName, cageNumber, animalTypeId, weight);
                    this.renderAnimalList();
                    if (isEnterKey) {
                        e.target.value = '';
                    }
                } else {
                    alert('Por favor, ingrese valores válidos.');
                }
            }
        }
    }

    /**
     * Renderiza la lista de animales en la interfaz de usuario.
     */
    renderAnimalList() {
        const animals = this.zooManager.getAnimals();
        const animalListHTML = animals.map(animal => `
            <section class="allAnimals__items">
                <p>${animal.name}</p>
                <p>${animal.cageNumber}</p>
                <p>${animal.animalTypeId}</p>
                <p>${animal.weight}</p>
                ${this.renderDeleteButton(animal.id)}
            </section>
        `).join('');

        this.animalList.innerHTML = `
            <section class="allAnimals__itemsHead">
                <h3>Nombre</h3>
                <h3>Jaula</h3>
                <h3>Tipo</h3>
                <h3>Peso</h3>
            </section>
            ${animalListHTML}
        `;

        this.renderStatistics();
    }

    /**
     * Renderiza el botón de eliminar para un animal.
     * @param {number} animalId - ID del animal.
     * @returns {string} HTML del botón de eliminar.
     */
    renderDeleteButton(animalId) {
        return `
            <button class="deleteButton" data-id="${animalId}">
                <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="24" height="24" color="#000000" fill="none">
                    <path d="M19.5 5.5L18.8803 15.5251C18.7219 18.0864 18.6428 19.3671 18.0008 20.2879C17.6833 20.7431 17.2747 21.1273 16.8007 21.416C15.8421 22 14.559 22 11.9927 22C9.42312 22 8.1383 22 7.17905 21.4149C6.7048 21.1257 6.296 20.7408 5.97868 20.2848C5.33688 19.3626 5.25945 18.0801 5.10461 15.5152L4.5 5.5" stroke="currentColor" stroke-width="1.5" stroke-linecap="round" />
                    <path d="M3 5.5H21M16.0557 5.5L15.3731 4.09173C14.9196 3.15626 14.6928 2.68852 14.3017 2.39681C14.215 2.3321 14.1231 2.27454 14.027 2.2247C13.5939 2 13.0741 2 12.0345 2C10.9688 2 10.436 2 9.99568 2.23412C9.8981 2.28601 9.80498 2.3459 9.71729 2.41317C9.32164 2.7167 9.10063 3.20155 8.65861 4.17126L8.05292 5.5" stroke="currentColor" stroke-width="1.5" stroke-linecap="round" />
                    <path d="M9.5 16.5L9.5 10.5" stroke="currentColor" stroke-width="1.5" stroke-linecap="round" />
                    <path d="M14.5 16.5L14.5 10.5" stroke="currentColor" stroke-width="1.5" stroke-linecap="round" />
                </svg>
            </button>
        `;
    }

    /**
     * Renderiza las estadísticas del zoológico en la interfaz de usuario.
     */
    renderStatistics() {
        const animals = this.zooManager.getAnimals();

        document.getElementById('cage5Under3kg').innerText =
            `Animales en la jaula 5 que pesan menos de 3kg: ${ZooAnimal.countAnimalsInCage5Under3kg(animals)}`;

        document.getElementById('felineBetweenCages').innerText =
            `Animales felinos entre las jaulas 2 y 5: ${ZooAnimal.countFelineAnimalsBetweenCages2And5(animals)}`;

        document.getElementById('animalNameInCage4Under120').innerText =
            `Nombre de los animales en la jaula 4 que pesan menos de 120kg: ${ZooAnimal.listAnimalNameInCage4Under120(animals).join(', ')}`;
    }
}