#include <iostream>
using namespace std;
int main(){
	int a = 10, b = 40, hold;
	hold = a;
	a = b;
	b = hold;
	cout << "Variable a:" << a << "\nVariable b:" << b << endl;
    	return 0;
}
