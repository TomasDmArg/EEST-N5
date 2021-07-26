#include <iostream>
using namespace std;
void dibujarFila(int n){
	cout<<"Fila "<<n<<": ";
	int x = 1;
    for (int i = 0; i < n; i++){
		cout<<x+i;
    }
    cout<<"\n";
}
void dibujarNumeros(int n){
    for(int i = 1; i <= n; i++){
        dibujarFila(i);
    }
}
int main(){
    int x;
    cout<<"Ingrese las filas: "; cin>>x;
    dibujarNumeros(x);
    return 0;
}
