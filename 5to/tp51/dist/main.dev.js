"use strict";

var $ = function $(el) {
  return document.querySelector(el);
};

var $$ = function $$(els) {
  return document.querySelector(els);
};

$('#btn').addEventListener('click', function () {
  var value = $("#txt").value;
  var categories = [["D", "Desayunos"], ["A", "Comidas"], ["M", "Meriendas"], ["I", "Cenas"], ["C", "Copas"]]; // First line are categories and the second are values
});