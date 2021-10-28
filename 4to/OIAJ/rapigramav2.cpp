#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define vst vector<string>
#define ask cin>>
#define pnt cout<<

vst mainList, colList, wordList;

struct res{
    bool status;
    int pos;
}; 

void askForLetters(int n0, int n1){
    string tWord;
    for(int i = 0; i < n0; i++){
        ask tWord;
        mainList.push_back(tWord);
    }
    for(int i = 0; i < n1; i++){
        ask tWord;
        wordList.push_back(tWord);
    }
}
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

// ORDEN VERTICAL DESC -> ASC
//Buscar en la primera columna, a partir del tamaño de la palabra (i = word.size()) para ariba
//Si la segunda letra para arriba en la misma columna sigue coincidiendo, seguir buscando
res continueN (int pos, string col, string word) {
    //Recorre la columna en reversa desde la posicion donde coincidió el caracter
    res result = {false, 0};
    int counter = pos-1;
    //Recorre la palabra a buscar
    for(int j = 1; j < word.size(); j++) {
        //Si la letra i de la columna (dec) coincide con el caracter (asc)
        if(col[counter] != word[j]){
            return {false, 0};
        }
        if(counter < col.size()) counter--;
    }
    return {true, pos};
}
void N(string word, int pos){
    //En las tres columnas:
    for(int i = 0; i < colList.size(); i++){
        //Recorrer cada columna
        for(int j = 0; j < colList[i].size(); j++){
            if(j+1 >= word.size() && colList[i][j] == word[0]){
                res result = continueN(j, colList[i], word); 
                if(result.status){
                    pnt pos<<" N";
                }
            }
        }
    }
}
res continueS(int pos, string col, string word){
    //Recorre la columna en forma descendente desde la posicion donde coincidió el caracter
    res result = {false, 0};
    int counter = pos-1;
    //Recorre la palabra a buscar
    for(int j = 1; j < word.size(); j++) {
        //Si la letra i de la columna (dec) coincide con el caracter (asc)
        if(col[counter] != word[j]){
            return {false, 0};
        }
        if(counter < col.size()) counter++;
    }
    return {true, pos};
}
void S(string word, int pos){
    //En las tres columnas:
    for(int i = 0; i < colList.size(); i++){
        //Recorrer cada columna
        for(int j = 0; j < colList[i].size(); j++){
            if(colList[i][j] == word[0]){
                res result = continueS(j, colList[i], word); 
                if(result.status){
                    pnt pos<<" S";
                }
            }
        }
    }
}
void E(){

}
void O(){
    
}
void searchForAll(){
    for(int i = 0; i < wordList.size(); i++){
        N(wordList[i], i+1);
        S(wordList[i], i+1);
        //O(wordList[i]);
        //E(wordList[i]);
    }
}
int main(){
    int n0, n1;
    ask n0>>n1;
    askForLetters(n0, n1);
    processData(mainList);
    searchForAll();

    return 0;
}