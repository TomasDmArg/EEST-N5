#include <iostream>
#include <vector>
using namespace std;
int n, cn, count = 0, aMost, aMostTimes = 0;
vector<int> listOfNumbers;
int iterateIndividual(int x){
    for (int i = 0; i < listOfNumbers.size(); i++){
        if(listOfNumbers[i] == x) count++;
    }
    if(count > aMostTimes){
        aMostTimes = count;
        aMost = x;
    };
    count = 0;
}
int iterateInResults(){
    for (int i = 0; i < listOfNumbers.size(); i++){
        iterateIndividual(listOfNumbers[i]);
    }
}
int askForNumbers(int x){
    for (int i = 0; i < x; i++){
        cin>>cn;
        listOfNumbers.push_back(cn);
    }
}
int main(){
    cin>>n;
    askForNumbers(n);
    iterateInResults();
    cout<<aMost<<""<<aMostTimes;
}