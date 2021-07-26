//#include <iostream>
//#include <string>
#include <bits/stdc++.h>
using namespace std;
int main (){
    string input;
    int size,sizeb;
    cin >> input;
    size = input.size();
    sizeb = size+2;
    cout << right << setw(sizeb) << setfill('*') << "*" <<"\n";
    cout <<"*"<<input<<"*"<<"\n";
    cout << right << setw(sizeb) << setfill('*') << "*";
    return 0;
}
