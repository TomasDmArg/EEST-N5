//Dollars (USD) to Pesos (ARS) conversion
#include <iostream>
using namespace std;

#define ask cin>>
#define show cout<<

int calculate(int usd){
    // ars = usd * 1.22350; Outdated exchange rate
    return usd*198; //Exchange rate taken from dolarsi.com at the current date (198ars/usd)
}

int main(){
    float ars, usd;
    show "Ingrese valor en dolares: ";
    ask usd;
    show "El valor en pesos es: "<<calculate(usd)<<"\n";
    return 0;
}