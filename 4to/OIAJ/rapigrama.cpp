//Rapigrama
//Program that find a word in a n strings in all axes
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define ask cin>>
#define show cout<<
#define vst vector<string>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

vst mainList, wordList, colList;
int n0, n1;

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
    for(int i=0; i<mainList[0].size(); i++){
        string tempCol;
        for(int j=0; j<mainList.size(); j++){
            tempCol+=mainList[j][i];
        }
        colList.push_back(tempCol);
    }
}
//Invert the columns and check if exists the word like indexof
bool upToDown(string word, int numOfWord){
    //Check if the word exists in colList using find
    for(int i=0; i<colList.size(); i++){
        auto res = colList[i].find(word);
        if(res != string::npos){
            show numOfWord<<" S\n";
            return true;
        }
    }
}
bool downToUp(string word, int numOfWord){
    vst invertedColumns;
    //Invert the strings in the colList vector of strings
    auto tempCol = "";
    for(int i=0; i<colList.size(); i++){
        for(int j=colList[i].size()-1; j>=0; j--){
            tempCol+=colList[i][j];
        }
        invertedColumns.push_back(tempCol);
        tempCol = "";
    }
    //Check if the word exists in the inverted columns
    for(int i=0; i<invertedColumns.size(); i++){
        auto res = invertedColumns[i].find(word); 
        if(res!=string::npos){
            show numOfWord<<" N\n";
            return true;
        }
    }   
}
bool leftToRight(string word, int numOfWord){  
    //Check if exists the word
    for(int i=0; i<mainList.size(); i++){
        auto res = mainList[i].find(word);
        if(res !=string::npos){
            show numOfWord<<" E\n";
            return true;
        }
    }
}
bool rightToLeft(string word, int numOfWord){
    //Invert the string in mainList
    vst invertedMainList;
    auto tempWord = "";
    for(int i=mainList.size()-1; i>=0; i--){
        for(int j=mainList[i].size()-1; j>=0; j--){
            tempWord+=mainList[i][j];
        }
        invertedMainList.push_back(tempWord);
        tempWord = "";
    }
    //Check if exists the word
    for(int i=0; i<n0; i++){
        auto res = invertedMainList[i].find(word);
        if(res != string::npos){
            show numOfWord<<" O\n";
            return true;
        }
    }
}
vector<int> status;
void theWordExists(){
    for(int i = 0; i < wordList.size(); i++){
        //Check all axes and if one of them is true, stop executing
        if(leftToRight(wordList[i], i+1) || rightToLeft(wordList[i], i+1)){
            status.push_back(1);
        }
        if(upToDown(wordList[i], i+1) || downToUp(wordList[i], i+1) ){
            status.push_back(1);
        }
    }
}
int main (){ 
    FASTIO
    ask n0>>n1;
    askForStrings(n0, n1);
    getCols();
    theWordExists();
    return 0;
}
