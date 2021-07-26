#include <iostream>
using namespace std;
bool esMultiplode3(int x){
    if(x%3 == 0) return true;
    return false;
};
int main (){
	int num1;
    cout<<"Ingrese un numero: ";
    cin>>num1;
    bool res = esMultiplode3(num1);
    if(res == true){
    	cout<<"Es multiplo";	
	}else{
		cout<<"No es multiplo";
	}
    
    return 0;
}
