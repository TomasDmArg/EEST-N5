#include <iostream>
using namespace std;
bool esPerfecto(int num){
	int res = 0;
	for(int i = 0; i < num; i++){
		if(i%num == 0) res += i;
	}
	if(res == num) return true;
	return false;
}
int main(){
	int n; cin>>n;
	esPerfecto(n) == true ? cout<<"Es perfecto" : cout<<"No es perfecto";
	return 0;
}