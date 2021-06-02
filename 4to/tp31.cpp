#include <iostream>
using namespace std;
bool esIgual(int a, int b, int c){
    if((a + b == c) || (c + b == a) || (a + c == b)) return true;
    return false;
};
int main (){
    int a,b,c; 
    cout<<"Ingrese tres numeros: "; cin>>a>>b>>c;
    int res = esIgual(a,b,c);
    if(res == true) cout<<"La suma de dos de ellos es igual al numero restante";
    if(res == false) cout<<"La suma de dos de ellos NO es igual al numero restante";
    return 0;
}