#include <iostream>
#include <string>
using namespace std;
int main(){
	/*
	Enter a word and a letter and change in the index indicated
	that letter for an X
	*/
	int i;
	string a, modA;
	cin>>a>>i;
	modA = a;
	modA[i-1] = 'X';
	cout<<modA;
	return 0;
}
