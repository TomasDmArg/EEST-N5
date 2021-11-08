#include <iostream>

int getPrice(int qt) {
    int res = 80*qt; 
    if(qt > 10 && qt <= 20) res = res * (1-0.1);
    if(qt > 20 && qt < 30)  res = res * (1-0.2);
    if(qt > 30) res = res * (1-0.4);
    return res;
}

int main(){
    std::cout<<"Ingrese cantidad de zapatos que se van a comprar: ";
    int zapatos; std::cin>>zapatos;
    std::cout<<"Total: $"<<getPrice(zapatos)<<"\n";
    return 0;
}