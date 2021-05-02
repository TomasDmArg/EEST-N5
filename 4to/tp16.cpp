#include <iostream>
using namespace std;
int execute ();
int main (){
    execute();
    return 0;
}
execute(){
    int input, hundred, fifty, twenty, ten, five, two, one;
    cout << "Amount: "
    cin >> input;
	hundred = input/100;
    input = input - 100*hundred;
    fifty = input/50;
    input = input - 50*fifty;
    twenty= input/20;
    input = input - 20*twenty;
    ten   = input/10;
    input = input - 10*ten;
    five  = input/5;
    input = input - 5*five;
    two   = input/2;
    input = input - 2*two;
    one   = input/1;
    input = input - 1*one;
    input = input-one;
    cout << " $100 bills: "   << hundred;
    cout << "\n $50 bills: "  << fifty;
    cout << "\n $20 bills: "  << twenty;
    cout << "\n $10 bills: "  << ten;
    cout << "\n $5 bills: "   << five;
    cout << "\n $2 bills: "   << two;
    cout << "\n $1 bills: "   << one;
    return 0;
}