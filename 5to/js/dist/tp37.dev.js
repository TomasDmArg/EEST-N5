"use strict";

var $ = function $(el) {
  return document.querySelector(el);
};

var $$ = function $$(el) {
  return document.querySelectorAll(el);
};

var target = $('#target');
var btn = $('#btn');
var add = $('#add');
add.addEventListener('click', function () {
  var inp = document.createElement("input");
  inp.setAttribute("type", "text");
  inp.setAttribute("class", "inp");
  document.querySelector(".inp-container").appendChild(inp);
});
btn.addEventListener('click', function () {
  var allns = 0;
  var inp = $$('.inp');

  for (var i = 0; i < inp.length; i++) {
    allns += parseInt(inp[i].value);
  }

  allns /= inp.length;
  var h2 = document.createElement('h1');
  h2.innerHTML = Math.round(allns * 1e2) / 1e2;
  var p = document.createElement('p');
  p.innerHTML = allns >= 7 ? "¡Aprobaste! 🎉, el promedio es" : "Desaprobaste 😢, el promedio es:";
  target.innerHTML = '';
  target.appendChild(p);
  target.appendChild(h2);
});