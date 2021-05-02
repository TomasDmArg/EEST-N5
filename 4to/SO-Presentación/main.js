const $ = el => document.querySelector(el);
const $$ = el => document.querySelectorAll(el);
let pages = 4;
let active = 1;
let initial = $('#first');
const animate = ()=>{
    let elements = $(`.section${active}`);
    elements.style.animationName = 'animation';
    elements.style.animationIterationCount = '1';
    elements.style.animationDuration = '1s';    
}
document.addEventListener('keydown', (e)=>{
    if (e.key === "Enter") {
        switch (active){
            case 1:
                initial = $('#second');
                break;
            case 2:
                initial = $('#third');
                break;
            case 3:
                initial = $('#fourth');
                break;
            case 4:
                initial = $('#first');
                break;
        }
        let element = initial;
        if (active < 4) {
            active++;
        }else{
            active = 1;
        }
        animate();
        const y = element.getBoundingClientRect().top + window.scrollY;
        window.scroll({
            top: y,
            behavior: 'smooth'
        });
    }
})
const toggleClick = (origin, target, activeNewValue) => {
    origin.addEventListener('click', ()=>{
        active = activeNewValue;
        let element = target;
        const y = element.getBoundingClientRect().top + window.scrollY;
        window.scroll({
            top: y,
            behavior: 'smooth'
        });
    })
    
}
for (let i = 0; i < pages; i++) {
    let el = $$('.d1')[i];
    toggleClick(el, $('#first'), 1);    
    let el2 = $$('.d2')[i];
    toggleClick(el2, $('#second'), 2);    
    let el3 = $$('.d3')[i];
    toggleClick(el3, $('#third'), 3);    
    let el4 = $$('.d4')[i];
    toggleClick(el4, $('#fourth'), 4);    
    // let el3 = $$('.d1')[i];
    // el3.goTo('#third');    
    // let el4 = $$('.d2')[i];
    // el4.goTo('#fourth');    
}
// toggleClick('.active')


// document.querySelector('.active').addEventListener('mouseover', ()=>{
//     let element = document.querySelector('#second');
//     const y = element.getBoundingClientRect().top + window.scrollY;
//     window.scroll({
//         top: y,
//         behavior: 'smooth'
//     });
// })
// document.querySelector('.active2').addEventListener('mouseover', ()=>{
//     let element = document.querySelector('#first');
//     const y = element.getBoundingClientRect().top + window.scrollY;
//     window.scroll({
//         top: y,
//         behavior: 'smooth'
//     });
// })