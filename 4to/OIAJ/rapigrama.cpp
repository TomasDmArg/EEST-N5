//Rapigrama
//Program that find a word in a n strings in all axes
#include <bits/stdc++.h>

using namespace std;

#define ask ent>>
#define show sal<<
#define vst vector<string>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

vst mainList, wordList, colList, invertedColumns, invertedMainList;
int n0, n1;
bool res;
ifstream ent;
ofstream sal;

void askForStrings(int n0, int n1){
    string tempWord;
    for(int i=0; i<n0; i++){
        ask tempWord;
        mainList.push_back(tempWord);
    }
    for(int i=0; i<n1; i++){
        ask tempWord;
        wordList.push_back(tempWord);
    }   
}
void getCols(){
    //Divide all strings in columns
    string tempCol;
    for(int i=0; i<mainList[0].size(); i++){
        for(int j=0; j<mainList.size(); j++){
            tempCol+=mainList[j][i];
        }
        colList.push_back(tempCol);
        tempCol="";
    }
}
void invertColumns(){
    //Invert the strings in the colList vector of strings
    string tempCol = "";
    for(int i=0; i<colList.size(); i++){
        for(int j=colList[i].size()-1; j>=0; j--){
            tempCol+=colList[i][j];
        }
        invertedColumns.push_back(tempCol);
        tempCol = "";
    }
    //Invert the string in mainList
    string tempWord = "";
    for(int i=mainList.size()-1; i>=0; i--){
        for(int j=mainList[i].size()-1; j>=0; j--){
            tempWord+=mainList[i][j];
        }
        invertedMainList.push_back(tempWord);
        tempWord = "";
    }
}
//Invert the columns and check if exists the word like indexof
bool upToDown(string word, int numOfWord){
    res = false;
    //Check if the word exists in colList using find
    for(int i=0; i<colList.size(); i++){
        auto sres = colList[i].find(word);
        if(sres != string::npos){
            show numOfWord<<" S\n";
            res = true;
            i = colList.size();
        }
    }
    return res;
}
bool downToUp(string word, int numOfWord){
    res = false;
    //Check if the word exists in the inverted columns
    for(int i=0; i<invertedColumns.size(); i++){
        auto sres = invertedColumns[i].find(word); 
        if(sres != string::npos){
            show numOfWord<<" N\n";
            res = true;
            i = invertedColumns.size();
        }
    } 
    return res;
}
bool leftToRight(string word, int numOfWord){  
    //Check if exists the word
    res = false;
    for(int i=0; i<mainList.size(); i++){
        auto sres = mainList[i].find(word);
        if(sres !=string::npos){
            show numOfWord<<" E\n";
            res = true;
            i = mainList.size();
        }
    }
    return res;
}
bool rightToLeft(string word, int numOfWord){
    //Check if exists the word
    res = false;
    for(int i=0; i<mainList.size(); i++){
        auto sres = invertedMainList[i].find(word);
        if(sres != string::npos){
            show numOfWord<<" O\n";
            res = true;
            i = invertedMainList.size();
        }
    }
    return res;
}
int m;
bool check(string word, int pos){
    m=0;
    if(leftToRight(word, pos)) m++;
    if(m == 0 && rightToLeft(word, pos)) m++;
    if(m == 0 && upToDown(word, pos))    m++;
    if(m == 0 && downToUp(word, pos))    m++;
}
void theWordExists(){
    for(int i = 0; i < wordList.size(); i++){
        //Check all axes and if one of them is true, stop executing
        check(wordList[i], i+1);
    }
}
int main (){ 
    FASTIO
    ent.open("rapigrama.in");
    sal.open("rapigrama.out");
    ask n0>>n1;
    askForStrings(n0, n1);
    getCols();
    invertColumns();
    theWordExists();
    return 0;
}
