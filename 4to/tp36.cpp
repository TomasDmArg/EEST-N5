#include <iostream>
using namespace std;
void dibujarFila(int n){
	cout<<"Fila "<<n<<": ";
    for (int i = 0; i < n; i++){
        cout<<"*";
    }
    cout<<"\n";
}
void dibujarAsteriscos(int n){
    for(int i = 1; i <= n; i++){
        dibujarFila(i);
    }
}
int main(){
    int x;
    cout<<"Ingrese las filas: "; cin>>x;
    dibujarAsteriscos(x);
    return 0;
}
