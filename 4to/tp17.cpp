#include <iostream>
#include <string>
using namespace std;
int execute(), hours, minutes, seconds;
string s = ":";
int main(){
    execute();
    return 0;
}

execute(){
    cout << "Seconds: ";
    cin >> seconds;
    minutes = (seconds/60)%60;
    hours = seconds/3600;
    seconds = seconds%60;
    cout <<hours<<s<<minutes<<s<<seconds; 
}
