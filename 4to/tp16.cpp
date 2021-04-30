#include <iostream>
using namespace std;
int execute ();
int main (){
    execute();
    return 0;
}
execute(){
    int input, hundred, fifty, twenty, ten, five, two, one;
    cin >> input;
	hundred = input/100;
    input = input - 100*hundred;
    fifty = input/50;
    input = input - 50*fifty;
    twenty = input/20;
    input = input - 20*twenty;
    ten = input/10;
    input = input - 10*ten;
    five = input/5;
    input = input - 5*five;
    two = input/2;
    input = input - 2*two;
    one = input/1;
    input = input - 1*one;
    input = input-one;
    cout << "Billetes de $100 : " << hundred;
    cout << "\n Billetes de $50 : " << fifty;
    cout << "\n Billetes de $20: " << twenty;
    cout << "\n Billetes de $10: " << ten;
    cout << "\n Billetes de $5: " << five;
    cout << "\n Billetes de $2: " << two;
    cout << "\n Billetes de $1: " << one;
    return 0;
}