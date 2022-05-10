//Pajaro
//Program that calculates the lower flight that can do a bird to follow another bird
#include <bits/stdc++.h>
using namespace std;

#define ask cin>>
#define show cout<<
#define forn(i,x) for(i = 0; i < x; i++) 
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>

class Program{
private:
    int qt;
    vi values;
    int bh = 0;
    int max;
public:
    Program(int x){
        max = x;
    }
    ~Program(){
        qt = 0;
        values.clear();
    }
    void askForData(){
        int qt, x, i;
        ask qt;
        forn(i, qt){
            ask x;
            values.push_back(x);
        }
    }
    int processData(){
        int i, res = 0;
        forn(i, values.size()){
            if(values[i] >= bh){
                bh  += max;
                res += values[i]-bh;
            }else{
                bh  -= max;
                res += bh-values[i];
            }
        }
        return res;
    }
    void showData(){
        show processData();
    }
}; 
int main() {
    FASTIO
    Program* pr = new Program(1); 
    pr->askForData();
    pr->showData();
    return 0; 
}
