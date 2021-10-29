//Iniciales
#include <iostream>
using namespace std;

#define ask cin>>
#define show cout<<


//Convertir a mayusculas el vector de char
void convertirAMayusculas(char (&vc)[10]){
    for(int i=0;i<10;i++){
        vc[i]=toupper(vc[i]);
    }
}
int main(){
    char iniciales[10];
    ask iniciales;
    convertirAMayusculas(iniciales);
    show "Las iniciales son: "<<iniciales;
    return 0;
}