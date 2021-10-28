#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define asign(t) temp.rstart = r1; temp.rend = r2; temp.type = t; temp.participants[0].age = 0;
#define ask cin>>
#define show cout<<

struct fnc {
    int res;
    string state;
};
struct competitors{
    int age;
    int id;
};
struct categories{
    int rstart;
    int rend;
    vector<competitors> participants;
    string type;
    vector<int> winners;
};
vector<categories> allCat;
fnc where(int age, string genre){
    fnc res = {0, "Failed"};
    for(int i = 0; i < allCat.size(); i++){
        if(allCat[i].type == genre){
            if(allCat[i].rstart < age && allCat[i].rend > age){
                res = {i, "Success"};
            }
        }
    }
    return res;
}
int count = 1;
void place(int age, string genre){
    fnc in = where(age, genre);
    if(in.state == "Success"){
        if(allCat[in.res].participants[0].age == 0) allCat[in.res].participants.pop_back(); 
        allCat[in.res].participants.push_back({age, count});
        count++;
    }
}
fnc idSearch(int id){
    fnc res = {NULL, "Failed"};
    for(int i = 0; i < allCat.size(); i++){
        for(int j = 0; j < allCat[i].participants.size(); j++){
            if(allCat[i].participants[j].id == id){
                res = {i, "Success"};
            }
        }
    }
}
void insertWinners(int competitor){
    fnc category = idSearch(competitor);
    if(category.state == "Success"){
        allCat[category.res].winners.push_back(competitor);
    }
}
void askForCompetitors(int qt){
    for(int i = 0; i < qt; i++){
        ask qt;
        insertWinners(qt);
    }
}
void showWinners(){
    int count = 1;
    for(int i = 0; i < allCat.size(); i++){
        while(allCat[i].winners.size() < 3){
            allCat[i].winners.push_back(0);
        }
        show count<<" ";
        for(int j = 0; j < allCat[i].winners.size(); j++){
            show allCat[i].winners[j]<<" ";
        }
    }
}
int main(){
    int a, cm, cf, l;
    ask a>>cf>>cm>>l;
    categories temp;
    int r1, r2;
    for(int i = 0; i < cf; i++){
        ask r1>>r2;
        asign("F")
    }
    for(int i = 0; i < cm; i++){
        ask r1>>r2;
        asign("M")
    }
    int age;
    string genre;
    for(int i = 0; i < a; i++){
        ask age>>genre;
        place(age, genre);
        askForCompetitors(l);
        showWinners();
    }
    return 0;
}