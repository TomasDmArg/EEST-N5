//Linked list
#include <iostream>

#define FASTIO std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define show std::cout<<
#define ask std::cin>>

struct node{
    int data;
    node* next;
};

node *head = NULL;

//Mostrar lista
void showList(){
    node *temp = head;
    while(temp != NULL){
        show temp->data << " ";
        temp = temp->next;
    }
    show std::endl;
}

//Insert link at the beginning
void insertAtBegining(int data){
    node *temp = new node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

//Insert link at the end
void insertAtEnd(int data){
    node *temp = new node();
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else{
        node *last = head;
        while(last->next != NULL){
            last = last->next;
        }
        last->next = temp;
    }
}

//Delete first link
void deleteFirst(){
    if(head == NULL){
        show "List is empty" << std::endl;
    }else{
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

//Delete last link
void deleteLast(){
    if(head == NULL){
        show "List is empty" << std::endl;
    }else if(head->next == NULL){
        delete head;
        head = NULL;
    }else{
        node *temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
}

//Find item in list and return the position
int findItem(int data){
    int position = 0;
    node *temp = head;
    while(temp != NULL){
        if(temp->data == data){
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;
}

// Encontrar y borrar nodo
void deleteItem(int data){
    if(head == NULL){
        show "La lista esta vacia\n";
    }else if(head->data == data){
        deleteFirst();
    }else{
        node *temp = head;
        while(temp->next != NULL){
            if(temp->next->data == data){
                node *temp2 = temp->next;
                temp->next = temp->next->next;
                delete temp2;
                return;
            }
            temp = temp->next;
        }
        show "Item no encontrado\n";
    }
}
int main(){
    int qt, data;
    show "¿Cuantos numeros se van a insertar? ";
    std::cin >> qt;
    for(int i = 0; i < qt; i++){
        show "Insertar numero: ";
        std::cin >> data;
        insertAtEnd(data);
    }
    showList();
}
