let $ = el => document.querySelector(el);
let button = $('#button');
let button2 = $('#button-2');
let button3 = $('#button-3');
let button4 = $('#button-4');
let input  = $('#input');
counter = 0; // La variable counter va a hacer que pueda reordenar los botones sin tener que cambiar a todos
//Función para manejar los clicks de cada boton
const searchIn = (URL) => {
    document.querySelectorAll('.main__section--button')[counter].addEventListener('click', () => {
        window.open(URL + input.value, '_blank');
    });
    counter++;
}
//google
searchIn('https://www.google.com/search?q=');
//youtube
searchIn('https://www.youtube.com/results?search_query=');
//Google images
searchIn('https://www.google.com/search?tbm=isch&q=');
//Mercado libre
searchIn('https://listado.mercadolibre.com.ar/search?q=');
//Maps
searchIn('https://www.google.com/maps/search/');
//Translate
searchIn('https://translate.google.com/#view=home&op=translate&sl=auto&tl=es&text=');
//Twitter
searchIn('https://twitter.com/search?q=');
//Facebook
searchIn('https://www.facebook.com/search/top/?q=');
//Instagram
searchIn('https://www.instagram.com/explore/tags/');
//Linkedin
searchIn('https://www.linkedin.com/search/results/index/?keywords=');
//Stack overflow
searchIn('https://stackoverflow.com/search?q=');
//Buscar transacciones en la blockchain/crypto o direcciones
searchIn('https://blockchair.com/search?q=');
//Google finance
searchIn('https://www.google.com/finance?q=');
//Pinterest
searchIn('https://www.pinterest.com/search/pins/?q=');
//Wikipedia
searchIn('https://es.wikipedia.org/wiki/');
//Netflix
searchIn('https://www.netflix.com/search?q=');
//Amazon
searchIn('https://www.amazon.com/s?k=');
//Spotify
searchIn('https://open.spotify.com/search/');
//Twitch
searchIn('https://www.twitch.tv/search?term=');
//