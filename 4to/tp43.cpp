#include <iostream>
#include <string>
using namespace std;
string direction = "";
bool checkWord(string text, string word, int index){
    for (int i = 1; i < word.size(); i++){
        index++;
        if (text[index] != word[i]){
            return false;
        }
    }
    return true;
}
bool checkWordInverse(string text, string word, int index){
    for (int i = 1; i < word.size(); i++){
        index--;
        if (text[index] != word[i]){
            return false;
        }
    }
    return true;
}
bool canBeFiltered(string text, string word){
    for(int i = 0; i < text.size(); i++){
        if(text[i] == word[0]){
            if(checkWord(text, word, i)){
                direction = "I";
                return true;
            }
            if(i >= (word.size()-1) && checkWordInverse(text, word, i)){
                direction = "D";
                return true;
            }
        }
    }
}
int main(){
    string text, word;
    cin>>text>>word;
    if(canBeFiltered(text, word)){
        cout<<"SI\n"<<direction;
    }else{
        cout<<"NO";
    }
    return 0;
}
