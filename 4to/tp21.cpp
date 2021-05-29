#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double a, b, c, arr1[3] = {};
int sortNumbers(double first, double second, double third);
int main (){
    system("color 0A");
    cout <<"Ingrese lados:";cin>>a>>b>>c;
    sortNumbers(a, b, c);
    if(a > 0 && b > 0 && c > 0 && (false == (a >= (b + c)))){
        if((a*a) == ((b*b)+(c*c))) cout<<"TRIANGULO RECTANGULO\n";
        if((a*a) >  ((b*b)+(c*c))) cout<<"TRIANGULO OBTUSANGULO\n";
        if((a*a) <  ((b*b)+(c*c))) cout<<"TRIANGULO ACUTANGULO\n";
        if(a == b && b == c)       cout<<"TRIANGULO EQUILATERO\n";
        if((a == b && c != a) || (c == b && a != c) || (c == a && b != c)) cout<<"TRIANGULO ISOSCELES\n";
    }else{
        cout<<"NO FORMA TRIANGULO";
    }
    return 0;
}
sortNumbers(double first, double second, double third){
    arr1[0] = first; arr1[1] = second; arr1[2] = third;
    int n = sizeof(arr1) / sizeof(arr1[0]);
    sort(arr1, arr1 + n, greater<double>());
    a = arr1[0]; b = arr1[1]; c = arr1[2];
}
