#include <iostream>
using namespace std;
int main (){
    int num, par, impar;
    cin >>num;
    for (int i = 2; i <= num; i+=2){
        if(i%2 == 0){
            par += i;
		}
    }
    for (int i = 1; i <= num; i++){
        if(i%2 != 0){
            par -= i;
		}
    }
    cout<<par;
    return 0;
}
