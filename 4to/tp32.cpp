#include <iostream>
using namespace std;
int res = 1;
int calcularFactorial(int x){
    for (int i = 1; i <= x; i++){
        res = res * i;
    }
    return res;
};
int main (){
    int n;
    cout<<"Ingrese un numero: "; cin>>n;
    cout<<calcularFactorial(n);
    return 0;
}
