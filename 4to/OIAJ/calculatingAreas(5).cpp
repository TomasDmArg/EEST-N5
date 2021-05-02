#include <iostream>
#include <string>
using namespace std;
int main (){
	string figura;
	int value;
	cin>>figura;
	if (figura == "cuadrado"){
		cin>>value;
		value = value*value;
		cout<<value<<endl;
	}else if (figura == "rectangulo"){
		int value2;
		cin>>value>>value2;
		value = value*value2;
		cout<<value<<endl;
	}else if (figura == "cubo"){
		cin>>value;
		value = 6*(value*value);
		cout<<value<<endl;
	}else if (figura == "caja"){
		int value2;
		int value3;
		cin>>value>>value2>>value3;
		value = value*value2*value3;
		cout<<value<<endl;
	}
	return 0;
}
