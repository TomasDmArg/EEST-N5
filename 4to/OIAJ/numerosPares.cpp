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
void iterateIndividual(int x, int pos){
    for (int i = 0; i < listOfNumbers.size(); i++){
        if(pos != i){
            if(((listOfNumbers[i] + x)%10) == 0) count ++;
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