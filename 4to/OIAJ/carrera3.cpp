//Carrera
//Program for a race competition
#include <bits/stdc++.h>
using namespace std;

ifstream ent;
ofstream sal;

#define ask ent>>
#define show sal<<
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

//Create a class for the competitors to place the age and the genre
class Competitor{
    public:
        int age;
        string genre;
        int id;
        Competitor(int a, string g, int i){
            age = a;
            genre = g;
            id = i;
        }
        //Delete object
        ~Competitor(){
            age = 0;
            genre = "";
            id = 0;
        }
};

//Create a class for the age groups
class Category{
    public:
        string genre;
        int min;
        int max;
        Category(string g, int m, int mx){
            genre = g;
            min = m;
            max = mx;
        }
        //Delete object
        ~Category(){}
};

vector<Competitor*> mainList;
vector<Category*> allCategories;

//Ask for the age ranges of the categories and place it to the vector of ranges 
void askForAgeRanges(int num, vector<Category*> &ct, string genre){
    int ageStart, ageEnd;
    for(int i=0; i<num; i++){
        ask ageStart>>ageEnd;
        Category* cat = new Category(genre, ageStart, ageEnd);
        ct.push_back(cat);
    }
}

//Get all competitors age and sex and group it by sex
void getCompetitors(int qt){
    int age, id; string genre;
    for(int i = 0; i < qt; i++){
        ask age>>genre;
        id = i+1;
        Competitor* cmp = new Competitor(age, genre, id);
        mainList.push_back(cmp);
    }
}
//Get the competitors that arrived to the finish line in order of arrive
vector< vector <int> > positionsByCategories; 
void getWinners(int qt){
    vector<int> finalResult;
    int id;
    for(int i = 0; i < allCategories.size(); i++){
        vector<int> pos;
        positionsByCategories.push_back(pos);
    }
    for(int i = 0; i < qt; i++){
        ask id; 
        finalResult.push_back(id);
    }
    for(int i = 0; i < finalResult.size(); i++){
        Competitor* cmp = mainList[finalResult[i]-1];
        //Place cmp in the correct Category
        for(int k = 0; k < allCategories.size(); k++){
            if(cmp->genre == allCategories[k]->genre){
                if(positionsByCategories[k].size() < 3){
                    if(cmp->age >= allCategories[k]->min && cmp->age <= allCategories[k]->max){
                        //Add the id to the vector of categories
                        positionsByCategories[k].push_back(finalResult[i]);
                    }
                }else{
                    break;
                }
            }
        }
    }
    //Complete the categories with zeros if the number of competitors there are lower than three
    for(int i = 0; i < allCategories.size(); i++){
        if(positionsByCategories[i].size() < 3){
            for(int j = positionsByCategories[i].size(); j < 3; j++){
                positionsByCategories[i].push_back(0);
            }
        }
    }
}
//Void function to show the content of the categories, first the number of category and then three of the winners there
void showContent (){
    int genreCount = 0; string genre = "F";
    for(int i = 0; i < allCategories.size(); i++){
        vector<int> el = positionsByCategories[i]; 
        (genre == allCategories[i]->genre) ? genreCount++ : genreCount = 1;
        show genreCount<<" ";        
        for(int i = 0; i < 3; i++){
            show el[i]<<" ";
        }
        show "\n";
    }
} 


int main (){
    FASTIO;
    ent.open("carrera.in");
    sal.open("carrera.out");    
    int competitors, femaleCatQt, maleCatQt, winners;
    ask competitors>>femaleCatQt>>maleCatQt>>winners;
    // Category* allCategories;
    askForAgeRanges(femaleCatQt, allCategories, "F");
    askForAgeRanges(maleCatQt, allCategories,   "M");
    //get competitors
    getCompetitors(competitors);
    //get the competitors that arrived to the finish line in order of arrive
    getWinners(winners);
	//Show the final result
	showContent();
    return 0;
}