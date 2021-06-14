#include <iostream>
#include <locale.h>
using namespace std;
int calcularFactorial(int x){
    int resultado = 1;
    for(int i = 1; i < x; i++){
        resultado = resultado * i;
    }
    return resultado;
}
int main (){
    setlocale(LC_ALL, "spanish");
    int n;
    cout<<"ñ Ingrese un numero:";cin>>n;
    cout<<calcularFactorial(n);
    return 0;
}