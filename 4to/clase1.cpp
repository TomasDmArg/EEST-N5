#include <iostream>
#include <string>
using namespace std;
int main (){
    char nombre[2][5] = {{'T', 'o', 'm', 'a', 's'}, {'T', 'o', 'm', 'a', 's'}};
    for (int i = 0; i < 5; i++){
        for (int x = 0; x < 2; x++){
            cout<<nombre[x][i]; 
        }
    }
    return 0;
}