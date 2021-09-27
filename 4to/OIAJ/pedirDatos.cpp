#include <bits/stdc++.h>
using namespace std;
void pedir(int &N, int &M, vector<int> &vt){
    int num, num2;
    cin>>N>>M;
    for (int i = 0; i < N; i++){
        cin>>num>>num2;
        vt.push_back(num);
        vt.push_back(num2);
    }
}
void mostrar(vector<int> vt){
    for(int i = 0; i < vt.size(); i++){
        cout<<vt[i];
    }
}