#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int finalPercent(float num){
	cout<<"En porcentaje: "<< num<<" %\n";
	return 0;
}
int show(float salary, string text){
	cout<<text<<setprecision(2)<<salary<<endl;
	return 0;
}
int check(int a, int b, int c);
float num, newSalary, percent;
int main (){
    system("color 0A");
    cout<<"Ingrese salario: "<<fixed; cin>>num;
    check(0, 400, 15);
    check(400, 800, 12);
    check(800, 1200, 10);
    check(1200, 2000, 7);
    if(num > 2000) percent = 4;
    newSalary = num*(1+(percent/100));
    show(newSalary, "Nuevo salario: ");
    show(newSalary-num, "Dinero ganado: ");
    finalPercent(percent);
    return 0;
}
int check(int a, int b, int c){
	if(num > a && num <= b) percent = c;
	return 0;
}
