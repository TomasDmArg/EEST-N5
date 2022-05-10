"use strict";

var $ = function $(el) {
  return document.querySelector(el);
};

var target = $('#target');
var inp = $('#inp');
var btn = $('#btn');
btn.addEventListener('click', function () {
  var numbers = inp.value.split('x');
  var table = document.createElement('table');
  var cellValue = numbers[0] * numbers[1];

  for (var i = 0; i < numbers[1]; i++) {
    var row = document.createElement('tr');

    for (var j = 0; j < numbers[0]; j++) {
      var cell = document.createElement('td');
      cell.innerHTML = cellValue;
      cellValue -= 1;
      row.appendChild(cell);
    }

    table.appendChild(row);
  }

  target.innerHTML = '';
  target.appendChild(table);
});