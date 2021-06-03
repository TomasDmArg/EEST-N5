#include <iostream>
using namespace std;
int calculateYears(int year, int age){
    return (2050 - year) + age;
}
int age, year;
int execute(){
    cout<<"Ingrese la edad: "; cin>>age;
    cout<<"Ingrese el año: "; cin>>year;
    cout<<"La edad en el 2050 sera: "<<calculateYears(year, age)<<"\n\n";
}
int main (){
	execute();
    if(age != 0)execute();
    return 0;
}
