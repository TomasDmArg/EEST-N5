#include <iostream>
#include <string>
using namespace std;
int number, outsideInterval, insideInterval;

int show(string text){cout<<text; return 0;}
int showTwo(string text, int n){cout<<text<<n; return 0;}

int main(){
    show("Casos (cantidad): ");
    cin>>number;
    for(int i = 1; i <= number; i++){
		int num;
        show("Ingrese un numero: ");
		cin>>num;
        (num >= 10 && num <= 20) ? insideInterval++ : outsideInterval++;
    }
    showTwo("Numeros dentro del intervalo: ", insideInterval);
    showTwo("\numeros fuera del intervalo: ", outsideInterval);
    return 0;
}
