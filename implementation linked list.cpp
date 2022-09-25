#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void print(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main()
{
   Node *head = NULL;
   Node *two = NULL;
   Node *three = NULL;
   
  head = new Node();
  two = new Node();
  three = new Node();
  
  head->data = 10;
  head->next = two;
  
  two->data = 20;
  two->next = three;
  
  three->data = 30;
  three->next = NULL;
  
  print(head);
    return 0;
}
