<?php
    $valueToFind = $_POST['num1'];
    $codes = '{"61":"Brasilia", "71": "Salvador", "11":"Sao Paulo", "21": "Rio de Janeiro", "32": "Juiz de Fora", "19": "Campinas", "27": "Vitoria", "31": "Belo Horizonte"}';
    $codes = json_decode($codes, true); 
    $found = false;
    foreach ($codes as $key => $value) {
        if ($key == $valueToFind) {
            $found = true;
            echo "The city code $valueToFind is $value";
        }
    }
    if (!$found) {
        echo "The city code $valueToFind was not found";
    }
?>