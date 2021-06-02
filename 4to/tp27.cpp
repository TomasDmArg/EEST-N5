#include <iostream>
using namespace std;
int esMinimo(int a, int b), num1,num2,res;
int main (){
    cout<<"Ingrese dos numero:"; cin >> num1 >> num2;
    cout<<esMinimo(num1,num2);
    return 0;
}
esMinimo(int a, int b){
    (a < b)? res = a : res = b;
    return res;
}
