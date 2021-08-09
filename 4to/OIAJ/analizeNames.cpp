#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n, count = 0, size, mLargeCount = 0, aMostCount = 0;
string cn, aMost, mLarge;
vector<string> listOfNames;
void askForNames(int x){
    for (int i = 0; i < x; i++){
        cin>>cn;
        listOfNames.push_back(cn);
    }
}
void iterateIndividual(string x){
    for (int i = 0; i < listOfNames.size(); i++){
        if(x == listOfNames[i]) count ++;
    }
    if(count > aMostCount) {
        aMost = x;
        aMostCount = count;
    };
    count = 0;
}
void iterate(){
    for (int i = 0; i < listOfNames.size(); i++){
        if(listOfNames[i].size() > mLargeCount) {
            mLarge = listOfNames[i];
            mLargeCount = listOfNames[i].size();
        }
        iterateIndividual(listOfNames[i]);
    }
}
int main(){
    cin>>n;
    askForNames(n);
    iterate();
    cout<<mLarge<<"\n"<<aMost<<endl;
    return 0;
}