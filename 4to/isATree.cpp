//Check if the given numbers can form a binary tree
//First check, if the root node haven't got any pointing node to it
//Second check, the nodes have only one node pointing to them
//Third check, all nodes can be accesible from the root
#include <iostream>
#include <vector>
struct Regla{
    std::string res = "";
    std::vector<int> nodos;
};

std::vector<std::vector<int>> nodosYConexiones;
void processData(int x1, int x2){
    int x0, xf;
    std::vector<int> nodo;
    for(int i = 0; i < x2; i++){
        std::cin>>x0>>xf;
        nodo.push_back(x0); 
        nodo.push_back(xf); 
        nodosYConexiones.push_back(nodo);
        nodo.clear();
    }
}
Regla nro1(){

}
int main(){
    int cantNodos, cantArcos;
    std::cin>>cantNodos>>cantArcos;

    
    return 0;
}