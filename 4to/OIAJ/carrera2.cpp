//Carrera
//Program for a race competition
#include <bits/stdc++.h>
using namespace std;

ifstream inp;
ofstream outp;

#define ask inp>>
#define show outp<<
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

//Create a struct for the competitors to place the age and the genre
struct competitor{
    int age;
    string genre;
};

//Create a struct for the age groups
struct range{
    int min;
    int max;
};

//Create a struct for the competitors
struct competitors{
    vector<competitor> male;
    vector<competitor> female;
}

//Ask for the age ranges of the categories and place it to the vector of ranges 
void askForAgeRanges(int num, vector<range> vt){
    int ageStart, ageEnd;
    for(int i=0; i<num; i++){
        ask ageStart>>ageEnd;
        vt.push_back({ageStart, ageEnd});
    }
}
//Get all competitors age and sex and group it by sex
void getCompetitors(int qt){

}
int main (){
    FASTIO;
    int competitors, femaleCatQt, maleCatQt, winners;

    //Create a vector for the age groups and ask for it using the askForAgeRanges function
    vector<range> femaleCat, maleCat;
    askForAgeRanges(femaleCatQt, femaleCat);
    askForAgeRanges(maleCatQt, maleCat);

    //get competitors
    
}