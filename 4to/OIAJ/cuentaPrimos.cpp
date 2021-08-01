#include <iostream>
#include <vector>
using namespace std;
int n, cn, count = 0;
vector<int> listOfNumbers;
void askForNumbers(int x){
    for (int i = 0; i < x; i++){
        cin>>cn;
        listOfNumbers.push_back(cn);
    }
}
bool esPrimo(int n){
	if (n == 0 || n == 1 || n == 4) return false;
	for (int x = 2; x < n / 2; x++){
		if (n % x == 0) return false;
	}
	return true;
}
void iterateIndividual(int x, int pos){
    for (int i = 0; i < listOfNumbers.size(); i++){
        if(pos != i){
            if(esPrimo(listOfNumbers[i] + x) == true) count ++;
        }
    }
}
void iterate(){
    for (int i = 0; i < listOfNumbers.size(); i++){
        iterateIndividual(listOfNumbers[i], i);
    }
} 
int main(){
    cin>>n;
    askForNumbers(n);
    iterate();
    cout<<count/2;
    return 0;
}