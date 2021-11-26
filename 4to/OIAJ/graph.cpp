//Create a graph
#include <iostream>
#include <vector>
// Grafo no dirigido
#define FASTIO std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define show std::cout<<
#define ask std::cin>>

std::vector<int> adj[5];
void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void removeEdge(int u, int v){
    for(int i = 0; i < adj[u].size(); i++){
        if(adj[u][i] == v){
            adj[u].erase(adj[u].begin() + i);
            break;
        }
    }
    for(int i = 0; i < adj[v].size(); i++){
        if(adj[v][i] == u){
            adj[v].erase(adj[v].begin() + i);
            break;
        }
    }
}
void showGraph(int v){
    for(int i = 0; i < v; i++){
        show i << ": ";
        for(int j = 0; j < adj[i].size(); j++){
            show adj[i][j] << " ";
        }
        show std::endl;
    }
}
int main(){
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(2, 0);
    addEdge(2, 3);
    showGraph(5);
    removeEdge(0, 1);
    showGraph(5);
    return 0;
}
