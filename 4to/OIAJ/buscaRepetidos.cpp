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
    };
    count = 0;
}
int iterateInResults(){
    for (int i = 0; i < listOfNumbers.size(); i++){
        iterateIndividual(listOfNumbers[i]);
    }
}
int askForNumbers(){
    cin>>cn;
    if(cn != 0){
        listOfNumbers.push_back(cn);
        askForNumbers();
    }
}
int main(){
    askForNumbers();
    iterateInResults();
    if(aMostTimes > 1){
        cout<<"Hay repetidos"<<endl;
    }else{
        cout<<"No hay repetidos"<<endl;
    }
}