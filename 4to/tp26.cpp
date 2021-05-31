#include <iostream>
using namespace std;
int sumDigits(int num);
int main(){
	int x;
    cout<<"Ingrese un numero: "; cin>>x;    
    cout<<"El resultado de la suma es: "<<sumDigits(x); 
}
sumDigits(int num){
	int res = 0, digit;
	while(num>0){    
        digit = num%10;    
        res += digit;    
        num = num/10;    
    }
    return res;
}
