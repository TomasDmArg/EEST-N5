const $ = el => document.querySelector(el);

const target = $('#target');
const inp = $('#inp');
const btn = $('#btn');
 
btn.addEventListener('click', ()=>{
    let numbers = inp.value.split('x');
    let table = document.createElement('table');
    let cellValue = numbers[0] * numbers[1];
    for(let i = 0; i < numbers[1]; i++){
        let row = document.createElement('tr');
        for(let j = 0; j < numbers[0]; j++){
            let cell = document.createElement('td');
            cell.innerHTML = cellValue;
            cellValue -= 1;
            row.appendChild(cell);
        }
        table.appendChild(row);
    }
    target.innerHTML = '';
    target.appendChild(table);
})