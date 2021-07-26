#include <iostream>
#include <string>
using namespace std;

string convertToNumbers(string x){
    for (int i = 0; i < x.size(); i++){
        if(x[i] == 'o'|| x[i] == 'O') x[i] = '0';
        if(x[i] == 'i'|| x[i] == 'I') x[i] = '1';
        if(x[i] == 'z'|| x[i] == 'Z') x[i] = '2';
        if(x[i] == 'f'|| x[i] == 'E') x[i] = '3';
        if(x[i] == 'a'|| x[i] == 'A') x[i] = '4';
        if(x[i] == 's'|| x[i] == 'S') x[i] = '5';
        if(x[i] == 'g'|| x[i] == 'G') x[i] = '6';
        if(x[i] == 't'|| x[i] == 'T') x[i] = '7';
        if(x[i] == 'b'|| x[i] == 'B') x[i] = '8';
        if(x[i] == 'p'|| x[i] == 'P') x[i] = '9';
    }
    return x;
}
int main(){
    string words;
    getline(cin, words);
    cout<<"\nResultado:\n>"<<convertToNumbers(words);
}