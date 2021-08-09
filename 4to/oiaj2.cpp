#include <iostream>
using namespace std;
int getSum(int n){
	int number = n, sum = 0;
	for(int i = 1; i<number; i++){
		if(number%i == 0){
			sum+=number;
			cout<<i;
		}
	}
	sum--;
	cout<<sum;
	return sum;
}
bool checkPerfectNumber(int number){
	int res = 0;
	int sum = getSum(number);
    if(number == sum){
    	return true;
	}else{
		return false;
	}
    cout<<res;
};
int main (){
    int n; cin>>n;
    bool result = checkPerfectNumber(n);
    if(result == true){
    	cout<<"Es perfecto";
	}else{
		cout<<"No es perfecto";
	}
    return 0;
}
