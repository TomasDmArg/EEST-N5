#include <iostream>
#include <string>
using namespace std;
int execute(), checkInterval(float numero), error(), show(string interval);
int a = 0,b = 25,c = 50,d = 75,e = 100;
int main (){
    execute();
    return 0;
}
execute(){
    float numero;
    int a,b,c,d,e;
    cin>>numero;
    (numero > 0 && numero <= 100)? checkInterval(numero) : error();
    return 0;
}
show(string interval){
    cout<<"Intervalo "<<interval;
}
error(){
	cout<<"Fuera de intervalo \n";
	execute();
}
checkInterval(float numero){
    if(numero >= a && numero <= b){
        show("[0, 25]");
    }
    if(numero > b && numero <= c){
        show("(25, 50]");
    }
    if(numero > c && numero <= d){
        show("(50, 75]");
    }
    if(numero > d && numero <= e){
        show("(75, 100]");
    }
}
