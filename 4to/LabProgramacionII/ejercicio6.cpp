//Program that calculates the califications based on the number of correct answers
#include <iostream>
using namespace std;

#define show cout<<

int calculate(int aciertos){
    return (aciertos*100)/25;
}
int main(){
    int ciclo = 26, calificacion = 0, aciertos = 26;
    do {
        ciclo--;
        aciertos--;
        calificacion = calculate(aciertos);
        show "A: "<<aciertos<<" C: "<<calificacion<<"/100\n";
    } while (ciclo > 0);
    return 0;
}