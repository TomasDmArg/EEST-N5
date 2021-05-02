#include <iostream>
#include <string>
using namespace std;
int main(){
	int i = 4, x = 5;
	
	for (i = 0; i < 10; i++){
		if(i<x){
			cout<<i<<endl;
		}else{
			cout<<i-x<<endl;
		}
	}
}
