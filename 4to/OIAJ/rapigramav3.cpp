#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define vst vector<string>
#define ask cin>>
#define pnt cout<<

vst mainList, colList, wordList;

//Separa el contenido del array inicial en columnas (Ord. asc -> desc)
void processData(vst list){
    vst tvt;
    tvt.resize(list.size());
    for(int col = 0; col < list.size(); col++){
        for(int ch = 0; ch < list.size(); ch++){
            tvt[ch].push_back(list[col][ch]);
        }
    }
    colList = tvt;
}
void N(){

}
void S(){
    
}
void O(){

}
void E(){

}
int main(){
    
    return 0;
}