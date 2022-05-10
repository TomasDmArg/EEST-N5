#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::ifstream input;
std::ofstream output;

#define ent input>>
#define sal output<<
//#define FASTIO std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);

std::vector<std::string> ladrillos;
std::vector<long long> resLadrillos;

void fillTheRest(int pos){
    //Llenar el resto de numeros en base a los que se completaron
    long long val;
    //Convierte el vector a int
    for(int i = pos; i < ladrillos.size(); i++){
        if(ladrillos[i] != "*"){
            val = std::stoll(ladrillos[i]);
            resLadrillos[i] = val;
        }
    }
    //Suma todo el resto
    for(int i = pos+2; i < ladrillos.size(); i++){
        resLadrillos[i] = resLadrillos[i-1] + resLadrillos[i-2];
    }
}
//Buscar y rellenar la primera coincidencia
void searchForFirstCoincidence(){
    long long res;
    //El "*" es igual al resultado de la suma de los dos anteriores
    std::string x0, x1, x2, x3, x4;
    for(int i = 0; i < ladrillos.size(); i++){
        x0 = ladrillos[i]; x1 = ladrillos[i+1]; x2 = ladrillos[i+2];
        x3 = ladrillos[i-1]; x4 = ladrillos[i-2];
        //F1: 1 3 * * ...
        if(x0 != "*" && x1 != "*"){
            res = std::stoll(x0) + std::stoll(x1);
            ladrillos[i+2] = std::to_string(res);
            fillTheRest(i-2);
            break;
        }
        //F2: 1 * 4 ; * = 3
        if(i >= 1 && i < ladrillos.size() && x0 == "*" && x3 != "*" && x1 != "*"){
            res = std::stoll(x1) - std::stoll(x3);
            ladrillos[i] = std::to_string(res);
            fillTheRest(i-1);
            break;
        }
        //F3: * 1 4 ; * = 3
        if(ladrillos[i] == "*" && x1 != "*" && x2 != "*"){
            res = std::stoll(x2) - std::stoll(x1);
            ladrillos[i] = std::to_string(res);
            fillTheRest(i);
            break;
        }
    }
}
int main(){
    //FASTIO;
    input.open("ladrillos.in");
    output.open("ladrillos.out");
    int cantLadrillos;
    std::string num;
    ent cantLadrillos;
    for(int i = 0; i < cantLadrillos; i++){
        ent num;
        ladrillos.push_back(num);
    }
    resLadrillos.resize(cantLadrillos);
    searchForFirstCoincidence();
    //Muestra el vector
    for(int i = 0; i < resLadrillos.size(); i++){
        sal " "<<resLadrillos[i];
    }
    return 0;
}