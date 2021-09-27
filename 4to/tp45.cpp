#include <iostream>
#include <vector>
#include <stdio.h>  
#include <stdlib.h>     
#include <time.h>  
using namespace std;
class Generar {
    public:
        vector<int> a;
        vector<int> b;
        void asignarNumeros(){
            srand (time(NULL));
            for(int i = 0; i < 10; i++){
                a.push_back(rand()%32000);
            }
        }
        void mostrarEnPantalla(){
            cout<<"A:";
            for(int i = 0; i < a.size(); i++){
                cout<<a[i]<<", ";
            }
        }
        void asignarNumerosPares(){
            for (int i = 0; i < a.size(); i++){
                if(a[i]%2 == 0){
                    b.push_back(a[i]);
                }
            }
        }
        void mostrarNumerosPares(){
        cout<<"\nB: ";
            for (int i = 0; i < b.size(); i++){
                cout<<b[i]<<", ";
            }
        }
};
int main (){
    Generar *vecEnteros = new Generar();
    vecEnteros -> asignarNumeros();
    vecEnteros -> mostrarEnPantalla();
    vecEnteros -> asignarNumerosPares();
    vecEnteros -> mostrarNumerosPares();
    return 0; 
}