#include <iostream>
int main(){
    int desc; char memb;
    std::cout<<"Ingrese la membresia: ";
    std::cin>>memb;
    memb = toupper(memb);
    if(memb=='A') {
        desc = 10;
    }else if(memb=='B'){ 
        desc = 15;
    }else if(memb=='C'){ 
        desc = 20;
    }
    std::cout<<"El descuento es del "<<desc<<"% \n";
    return 0;
}