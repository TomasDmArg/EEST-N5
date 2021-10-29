#include <iostream>
#include <vector>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void PrintList(Node *x){
    while(x != NULL){
        cout<<x->data<<endl;
        x = x->next;
    }
}
int main(){
    int val;
    Node *root = NULL;
    vector<Node> *listOfNodes;
    Node *tNode = NULL;
    cin>>val;
    root->data = val;
    root->next = NULL;
    Node *second = NULL;
    cin>>val;
    second->data = val;
    root->next = second;
    second->next = NULL;
    Node *third = NULL;
    cin>>val;
    third->data = val;
    second->next = NULL;
    PrintList(root);
    return 0; 
}<