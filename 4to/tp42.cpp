#include <iostream>
#include <locale>
#include <string>
#include <vector>
using namespace std;
vector<string> list;
void addToList(string x){
    list.push_back(x);
}
string toLowercase(string word){
    for(int i = 0; i < word.size(); i++){
        word[i] = tolower(word[i]);
    }
    return word;
}
void askForNames(int x){
    for (int i = 0; i < x; i++){
        string name;
        cin>>name;
        name = toLowercase(name);
        int size = name.size();
        if(name[0] == name[size-1]){
            addToList(name);
        }
    }
}
void showNames(){
    cout<<"\nNombres que coinciden:\n";
    for(int i = 0; i < list.size(); i++)
        cout<<i+1<<": "<<list[i]<<endl;
}
int main (){
	int rows;
	cin>>rows;
	askForNames(rows);
    showNames();
    return 0;
}