#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
int main(){
	//Se declaran las variables a utilizar
	char B[] = ".";
	std::string A = ".";
	char palabra1final[] = ".";
	int psize;
	int spacepos;
	
	//Se solicitan las palabras y se las asigna a "palabra1[]"
	//Se utiliza "gets" para que se incluyan los espacios
	getline(cin, palabra1);
	//Se convierte a string "palabra1" y se obtiene el tamaño
	std:string palabra(palabra1);
	psize = palabra.size();
	
	//Se itera sobre "palabra" para buscar un espacio
	for(int i=0;i < psize; i++){
		if(palabra[i] == ' '){
			spacepos = i;
			break;
		}else{
		}
	}
	
	spacepos += 1; //Se suma 1 para que tome la primera letra despues del espacio
	
	//Se itera para asignar la primera palabra de "palabra1" a "palabra2"
	for(int i = spacepos; i < psize; i++){
		palabra2[i-spacepos] = palabra1[i];
	}
	
	//Se itera para asignar la segunda palabra de "palabra1" a "palabra1final"
	for(int i = 0; i < spacepos-1; i++){
		palabra1final[i] = palabra1[i];
	}	
	
	//Se hacen las comparaciones con "strcmp()" para ver cual va primero alfabeticamente
	switch (strcmp(palabra1final, palabra2)){
		case 0:
			cout<<"SON IGUALES";
			break;
		case 1:
			cout<<"LA SEGUNDA";
			break;
		default:
			cout<<"LA PRIMERA";
			break;
	}
	return 0;
}
