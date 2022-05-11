#include <iostream>
using namespace std;
int main (){
    int sueldo;
    cout << "Ingrese su sueldo: $"; cin>>sueldo;
    if(sueldo >= 2000){
        sueldo = sueldo*0.05;
    }else{
        sueldo = sueldo*0.1;
    }
    cout<<"Aumento: $"<<sueldo<<"\n";
    return 0;
}