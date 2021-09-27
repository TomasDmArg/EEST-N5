#include <bits/stdc++.h>
using namespace std;
int option = 0, year, age, num = 0, filenum = 0;
string name1, name2;
void show(int second){
    cout<<option<<second;
}

int decada(int fecha) {
    string res;
    // if(n > 1900 && <= 2020){
    res = to_string(fecha);
    res[2] == '0' ? res = res[3] : res = res[2] + res[3];
    int fres = stoi(res);
    return fres;
}

bool esmayor(int edad) {
    bool res;
    age >= 18 ? res = true : res = false;
    return res;
}

string nombrecompleto(string nombre, string apellido){
    string res = nombre + " " + apellido;
    return res;
}

// int cantidadmayores(vector<int> &edades) {
//     int n, tn;
//     vector<int> nums;
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         cin>>tn;
//         if(tn>18) nums.push_back(tn);
//     }
//     cout<<nums.size();
// }
void leer(string file, int count){
    ifstream myfile;
    myfile.open(file, ios::in);
    if(myfile.is_open()){
        while(!myfile.eof()){
            if(count != filenum){
                myfile>>option;
            }
            switch (option){
                case 1:
                    myfile>>year;
                    cout<<decada(year);
                    break;
                case 2:
                    myfile>>age;
                    esmayor(age) == true ? cout << "true" : cout << "false";
                    break;
                case 3:
                    myfile>>name1;
                    myfile>>name2;
                    cout<<nombrecompleto(name1, name2);
                    break;
                case 4:
                    if(num == 0){
                        myfile>>num;
                    }else{
                        for(int i = 0; i < num; i++){
                            string line;
                            while (getline(myfile, line)) {
                                printf("%s", line.c_str());
                            }
                        }
                    }
                    break;
                default:
                    break;
            }
        }
        filenum++;
    }
}
int main(){
    leer("censo1.in", 1);
    leer("censo2.in", 2);
    leer("censo3.in", 3);
    leer("censo4.in", 4);
    return 0;
}
