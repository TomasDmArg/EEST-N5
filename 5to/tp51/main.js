const $ = el => document.querySelector(el);
const $$ = els => document.querySelector(els); 

$('#btn').addEventListener('click', ()=>{
    const value = $("#txt").value;
    const categories = [
        ["D", "Desayunos"],
        ["A", "Comidas"],
        ["M", "Meriendas"],
        ["I", "Cenas"],
        ["C", "Copas"]
    ];
    // First line are categories and the second are values
})