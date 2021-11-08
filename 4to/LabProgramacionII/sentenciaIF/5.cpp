#include <iostream>
int main (){
    int sueldo;
    std::cout << "Ingrese su sueldo: $";
    std::cin>>sueldo;
    sueldo >= 2000 ? sueldo = sueldo*0.05 : sueldo = sueldo*0.1;
    std::cout<<"Aumento: $"<<sueldo<<"\n";
    return 0;
}