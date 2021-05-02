#include <iostream>
using namespace std;
int ejecutar();
int main (){
    ejecutar();
    return 0;
}
ejecutar(){
    float numero;
    cin>>numero;
    if (numero < 0 || numero > 100){
        cout<<"Fuera de intervalo \n";
        ejecutar();
    }else{
        if(numero >= 0 && numero <= 25){
            cout<<"Intervalo [0,25]";
        }else if(numero > 25 && numero <= 50){
            cout<<"Intervalo (25, 50]";
        }else if(numero > 50 && numero <= 75){
            cout<<"Intervalo (50, 75]";
        }else if(numero > 75 && numero <= 100){
            cout<<"Intervalo (70, 100]";
        }    
    }
    return 0;
}