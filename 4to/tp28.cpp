#include <iostream>
using namespace std;
int esMaximo(int a, int b, int c), num1, num2, num3;
int main (){
    cout<<"Ingrese tres numeros: ";
    cin>>num1>>num2>>num3;
    cout<<"El maximo es: "<<esMaximo(num1,num2,num3);
    return 0;
}
esMaximo(int a, int b, int c){
    int x = a;
    if(b > x) x = b;
    if(c > x) x = c;
    return x;
}
