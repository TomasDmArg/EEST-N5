#include <iostream>
using namespace std;
int main(){
    int x, i = 0; 
    cout<<"Ingrese un numero:";cin>>x;
    do{
        cout<<x<<"x"<<i+1<<" = "<<x*(i+1)<<endl;
        i++;
    } while (i < 10);
    return 0;
}