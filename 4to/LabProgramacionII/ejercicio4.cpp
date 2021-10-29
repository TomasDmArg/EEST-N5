//Calculate discounts for a given price
#include <iostream>
using namespace std;

#define ask cin>>
#define show cout<<

int calculate(int price, int discount){
    return price - (price * discount / 100); //Formula: FV = PV-(PV*(D/100))
}
int main(){
    int price, discount, finalPrice;
    show "Ingrese el precio: ";
    ask price;
    show "Ingrese el descuento: ";
    ask discount;
    finalPrice = calculate(price, discount); 
    show "El precio final es: ";
    show finalPrice;
    return 0;
}