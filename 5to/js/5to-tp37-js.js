const $ = el => document.querySelector(el);
const $$ = el => document.querySelectorAll(el);

const target = $('#target');
const btn = $('#btn');
const add = $('#add');
add.addEventListener('click', ()=>{
    let inp = document.createElement("input");
    inp.setAttribute("type", "text");
    inp.setAttribute("class", "inp");  
    document.querySelector(".inp-container").appendChild(inp);
})
btn.addEventListener('click', ()=>{
    let allns = 0;
    let inp = $$('.inp');
    for(let i = 0; i < inp.length; i++){
        allns += parseInt(inp[i].value);
    }
    allns /= inp.length;
    let h2 = document.createElement('h1');
    h2.innerHTML = Math.round(allns * 1e2) / 1e2;
    let p = document.createElement('p');
    p.innerHTML = (allns >= 7)? "¡Aprobaste! 🎉, el promedio es" : "Desaprobaste 😢, el promedio es:";
    target.innerHTML = '';
    target.appendChild(p);
    target.appendChild(h2);
})