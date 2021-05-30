#include <iostream>
using namespace std;
int main(){
    int x,digit;
	int res = 0;    
    cout<<"Ingrese un numero: "; cin>>x;    
    while(x>0){    
        digit = x%10;    
        res += digit;    
        x=x/10;    
    }    
    cout<<res; 
}
