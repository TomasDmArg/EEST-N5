//Linked List
//Create a linked list of Nodes for persons
#include <iostream>
#include <string>
#include <vector>

class Node{
private: 
    int value;
public: 
    Node(int x){
        value = x;
    }
};

struct Node {
    std::string name;
    std::string lastName;
    int age;
    Node *next;
}; 

Node* head = NULL;
Node* current = NULL;
int count = 0;

void askAndPlace(){
    Node *temp = NULL;
    std::cout << "¿Cuantas personas vas a añadir?: "; std::cin>>count;  
    for(int i = 0; i < count ; i++){
        std::cout<<"Ingrese Nombre, Apellido y Edad separados por espacios:\n";
        std::cin>>temp->name>>temp->lastName>>temp->age;
        if(head == NULL){
            head = temp;
            current = temp;
        }else{
            current->next = temp;
            current = temp;
        }
    }
}

void search(){
    std::string name;
    std::cout<<"Ingrese el nombre a buscar: "; std::cin>>name;
    Node *temp = head;
    while(temp != NULL){
        if(temp->name == name){
            std::cout<<"Nombre: "<<temp->name<<"\nApellido: "<<temp->lastName<<"\nEdad: "<<temp->age<<"\n";
        }
        temp = temp->next;
    }
}

int main() {
    askAndPlace();
    search();
    return 0;
}