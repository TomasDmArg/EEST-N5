#include <iostream>
using namespace std;
<<<<<<< HEAD
int sumDigits(int x);
=======
int sumDigits(int num);
>>>>>>> bcd1c7e726a4ba7cbf3b741f24cec5f22de2f717
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
