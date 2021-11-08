#include <iostream> 
int main(){
    int horas; 
    std::cin>>horas;
    horas <= 40 ? std::cout<<horas*20 : std::cout<<(horas*20)+800;
    return 0;
}