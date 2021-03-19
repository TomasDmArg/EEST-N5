#include <iostream>
using namespace std;
int main(){
	float ars;
	    string separador = " ------------------";
	    cout << "\n Pesos argentinos (ARS): \n > ";
	    cin >> ars;
	    cout << separador << "\n";
		cout << "\n USD:" << ars/140 << "\n EUR:" << ars/165.28 << "\n BRL:" << ars/16.65 <<  "\n UYU:" << ars/2.06;
    return 0;
}
