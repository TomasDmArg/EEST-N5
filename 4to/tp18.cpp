#include <iostream>
using namespace std;
int execute (), years, months, days;
int main(){
    execute();
    return 0;
}
execute(){
    cout << "Days: ";
    cin >>days;
    years = days/365;
    months = (days - (years * 365))/30;
    days = days - (months * 30) - (years * 365); 
    (years > 1)  ? cout << years  << " years\n"  : cout << years  << " year\n";
    (months > 1) ? cout << months << " months\n" : cout << months << " month\n";
    (days > 1)   ? cout << days   << " days\n"   : cout << days   << " day\n";
}
