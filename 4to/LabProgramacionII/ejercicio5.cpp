//Convert days, minutes and hours into seconds
#include <iostream>
using namespace std;

#define ask cin>>
#define show cout<<

int calculate(int days, int minutes, int hours){
    int seconds = 0;
    seconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60);
    return seconds;
}

int main(){
    int days, hours, minutes;
    show "Ingrese dias: ";
    ask days;
    show "Ingrese horas: ";
    ask hours;
    show "Ingrese minutos: ";
    ask minutes;
    show "El tiempo en segundos es: ";
    show calculate(days, minutes, hours);
    return 0;
}