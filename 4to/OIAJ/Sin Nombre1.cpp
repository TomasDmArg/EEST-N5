#include <iostream>
#include <string>
using namespace std;
int main () {
	string a, b;
	cin>>a>>b;
	if(a < b){
		cout<<"LA PRIMERA";
	}else if( a > b){
		cout<<"LA SEGUNDA";
	}else if( a == b){
		cout<<"SON IGUALES";
	}
	return 0;
}
