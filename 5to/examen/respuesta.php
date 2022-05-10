<!-- Funcion -->
<?php
    function cambiar($palabra, $caracter){
        $res = "";
        // Cada 3 caracteres, agregar caracter
        for($i = 0; $i < strlen($palabra); $i++){
            if($i % 3 == 0){
                $res .= $caracter;
            }
            $res .= $palabra[$i];
        }
        
        return $res;
    }
    echo cambiar("255255255255", ".");
?>