#include <iostream>
#include <string>
using namespace std;
int execute();
int main (){
    execute();
}
execute(){
    string first, second;
    cout<<"Ana: ";
    cin>>first;
    cout<<"Bartolo: ";
    cin>>second;
    if (first != second){
        cout<<"Gana: ";
        if(first == "Piedra"){
            (second == "Papel")? cout<<"Bartolo \n" : cout<<"Ana \n";
        }else if(first == "Papel"){
            (second == "Tijera")? cout<<"Bartolo \n" : cout<<"Ana \n";
        }else if(first == "Tijera"){
            (second == "Piedra")? cout<<"Bartolo \n" : cout<<"Ana \n";
        }
        execute();
    }else{
        cout<<"Empate \n";
        execute();
    }
    return 0;
}