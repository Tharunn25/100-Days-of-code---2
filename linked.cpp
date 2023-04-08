#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{    
public:
    int data;
    Node* next;
};

void printnode(Node* n){

    while(n!=NULL){
        cout<<n->data<<' ';
        n=n->next;
    }
}

int main(){

    Node* head = NULL;  // node is a datatype which takes the address and stores in head
    Node* two = NULL;   // 
    Node* three = NULL;

    head = new Node();
    two = new Node();
    three = new Node();

    head->data = 1;
    head->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = NULL;

    printnode(head);
    return 0;
    
    
    
}
