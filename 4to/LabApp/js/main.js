let $ = el => document.querySelector(el);
let button = $('#button');
let button2 = $('#button-2');
let button3 = $('#button-3');
let button4 = $('#button-4');
let input  = $('#input');
button.addEventListener('click', () => {
    let value = input.value;
    window.open('https://www.google.com/search?q=' + value);
});
button2.addEventListener('click', () => {
    let value = input.value;
    window.open('https://www.youtube.com/results?search_query=' + value);
});
button3.addEventListener('click', ()=>{
    let value = input.value;
    window.open('https://listado.mercadolibre.com.ar/' + value);
})
button4.addEventListener('click', ()=>{
    let value = input.value;
    window.open('https://www.google.com/maps/search/' + value);
})