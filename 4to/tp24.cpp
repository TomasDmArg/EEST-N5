#include <iostream>
#include <string>
using namespace std;
int quantity;
int outsideInterval = 0, insideInterval = 0;

//Funciones para mostrar couts varios
int show(string text){
	cout<<text; 
	return 0;
}
int showTwo(string text, int n){
	cout<<text<<n;
	return 0;
}

int main(){    
    show("Casos (cantidad): ");
    cin>>quantity;
    if(quantity < 10000){
	    //Loop que muestra los cout correspondientes a la cantidad indicada
	    for(int i = 1; i <= quantity; i++){
			int number;
	        show("Ingrese un numero: ");
		    cin>>number;
	        (number >= 10 && number <= 20) ? insideInterval++ : outsideInterval++;
	    }
	    showTwo("Numeros dentro del intervalo: ", insideInterval);
	    showTwo("\nNumeros fuera del intervalo: ", outsideInterval);
	    return 0;	
	}else{
		show("La cantidad sobrepasa el rango establecido N < 10,000");
	}
}