#include <iostream>
#include <string>
#include <vector>

using namespace std;
//Recorrer todo el vector y buscar sumas de maximo m elementos que sean mayores que X
int sumar(int m, int x, vector<int> &t){
    int suma = 0;
    for(int i = 0; i < t.size(); i++){
        // Por cada posicion sumar los m elementos de adelante
        for(int j = 0; j < m && i+j < t.size(); j++){
            suma += t[i+j];
        }        
        // Si la suma es mayor que X, cortar el bucle y retornar suma
        if(suma >= x || (m == t.size() && i == t.size())){
            i = t.size();
        }else{
            suma = 0;
        }
    }
    return suma;
}

int mecanico(int X, vector<int> &t) {
    int turnos = t.size();
    int turnoUrgente = X;
    int turnosASacar = 0;
    // Encontrar los menos turnos posibles cuya suma sea mas grande que X y que estén juntos
    for(int i = 1; i <= turnos; i++){
        turnosASacar = sumar(i, X, t);
        if(turnosASacar >= turnoUrgente){
            turnosASacar = i;
            break;
        }
    }   
    return turnosASacar;
}