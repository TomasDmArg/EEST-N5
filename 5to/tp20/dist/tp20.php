<?php
include("tp20func.php");
$nums = [$_POST['num1'], $_POST['num2']];
$res = getResults($nums);
echo "El numero menor es $res[0] y el mayor es: $res[1]";
?>