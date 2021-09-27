#include <iostream>
using namespace std;

#define show cout<<
#define ask cin>>
#define newLine cout<<"\n";
#define toThe tree-> 

struct Node{
    int data;
    Node *right; 
    Node *left; 
    //A la derecha va el valor mas grande
    //A la izquierda va el valor mas chico, ejemplo:
    //      [10]
    //    /    \ 
    //  [5]   [12]
    //  /    /   \ 
    // [3] [11] [20]
};
Node *tree = NULL;

Node *createNode(int data){
    //Solo crea el nodo, no lo inserta
    Node *newNode = new Node();
    newNode->data = data; //Ubica un dato
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode; //Devuelve el nodo creado
}

Node *insertNode(Node *&tree, int data){
    //Si el arbol está vacio
    if(tree == NULL){
        //Crea el nodo y pasa a ser el nodo principal
        Node *newNode = createNode(data);
        tree = newNode; 
    }else{
        int rootValue = toThe data;
        //Si el elemento es mayor se ubica en la izquierda del nodo y si es menor a la derecha
        data < rootValue ? insertNode(toThe left, data) : insertNode(toThe right, data);
    }
}

void askFor(int qt){
    int val;
    for(int i = 0; i < qt; i++){
        ask val;
        insertNode(tree, val);
    }
}
void showTree(Node *&tree, int count){
    if(tree == NULL){
        show "";
    }else{
        showTree(toThe right, count+1);
        for(int i=0; i < count; i++){
            show "   ";
        }
        show toThe data;
        newLine
        showTree(toThe left, count+1);
    }
}
int main(){
    cout<<"Nodos a ingresar"; 
    int qt; 
    ask qt;
    askFor(qt);
    int count = 0;
    showTree(tree, count);
    return 0;
}
