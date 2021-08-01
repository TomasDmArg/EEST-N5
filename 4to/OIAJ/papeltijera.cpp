#include <iostream>
using namespace std;
int main(){
    string firstChoice, secondChoice, winner;
    cin>>firstChoice>>secondChoice;
    if((firstChoice == "Piedra" && secondChoice == "Tijera") ||
        (firstChoice == "Papel" && secondChoice == "Piedra") ||
        (firstChoice == "Tijera" && secondChoice == "Papel"))
            cout << "Ana\n";
    if((firstChoice == "Tijera" && secondChoice == "Piedra") ||
        (firstChoice == "Piedra" && secondChoice == "Papel") ||
        (firstChoice == "Pepel" && secondChoice == "Tijera"))
            cout << "Bartolo\n";
    if(firstChoice == secondChoice){
            cout << "Empate\n";
    }
    return 0;
}