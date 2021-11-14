//Protesta
//Program that calculate how to avoid a protest
#include <bits/stdc++.h>

#define show std::cout<<
#define ask std::cin>>
#define forn(i, x) for(i = 0; i < x; i++)
#define vi std::vector<int>

class Program{
private:
    int i, x, n, d, f;
    vi freeDays;
public:
    Program(){

    }
    //Delete object
    ~Program(){
    }
    void askForData(){
        ask n>>d>>f;
        forn(i, n){
            ask x;
            freeDays.push_back(x);
        }
    }
    int processData(){
        int counter = 0, faltas = 0, res;
        //X = fd0 - fdf + 1 (Cantidad de dias entre todos los freedays)
        if(i == freeDays[i]){
            
        }
        forn(i, d){

        }
        return res;
    }
    void showRes(){
        show processData();
    }
};
int main (){
    Program* mn = new Program();
    mn->askForData();
    mn->showRes();
    return 0;
}