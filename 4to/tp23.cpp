#include <iostream>
#include <string>
using namespace std;
int show(string place);
int ejecutar();
int numero;
int main (){
    ejecutar();
    return 0;
}
//Cout en funcion, para ahorrar escribir el "corresponde a"
//la sintaxis del cout y para hacerlo mas legible en funciones
show(string place) {
    cout<<"Corresponde a "<<place<<endl;
    return 0;
}
error(){
    cout<<"DDD NO ENCONTRADO\n";
    //Si no se encontro se vuelve a ejecutar 
	//hasta que el codigo sea correcto
    ejecutar();
}
ejecutar() {
    cout<<"Ingrese el codigo de area: ";
    cin>>numero;
    switch (numero){
    case 61:
        show("Brasilia");
        break;
    case 71:
        show("Salvador");
        break;
    case 11:
        show("Sao Paulo");
        break;    
    case 21:
        show("Rio de Janeiro");
        break;    
    case 32:
        show("Juiz de Fora");
        break;    
    case 19:
        show("Campinas");
        break;    
    case 27:
        show("Vitoria");
        break;    
    case 31:
        show("Belo Horizonte");
        break;    
    default:
        error();
        break;
    }
    return 0;
}
