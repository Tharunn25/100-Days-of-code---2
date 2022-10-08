/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Node{     // creating a class node
    
    public:
    int data;     // inside the node there is a data with type int
    Node *next;   // there is a pointer to store the address of the next node so we are creating a pointer
    
    // this is a constructor
    
    Node(int data){               
        this -> data = data;   // this is a keyword we are using to instruct the pointer first there should be a data
        this -> next = NULL;   // second the node's next is null
    }
    
};

void insertathead(Node* &head,int d){     // we are creating a function to insert a node infront of the head
    
    // we are creating a new node to insert before the head
    Node *temp = new Node(d);          // we are creating a node to new node with pointer as temp
    temp -> next = head;               // the temp's next is head
    head = temp;                       // and the the previous head will be the temp(which is newly formed)
}

void print(Node* &head){            // function to print the linked list
    
    Node *temp = head;             // we are storing the head's address in the temp
    while(temp != NULL){           // we are traversing till the temp is not equal to null
    cout<< temp ->data <<" ";    // we are printing temp's data
        temp = temp ->next;      // we are telling to print the temp next  
    }
    cout<<endl;
    
}

int main()
{   
    // first we have created a new node with data 100
    Node* node1 = new Node(100);
    // cout<< node1 -> data<<endl;      // we are printing the new node's data - 100 will be printed
    // cout<< node1 -> next<<endl;      // we are printing the new node's next - the next is NULL so 0 will be printed
    
    Node *head = node1;   // we are making to point the head to the first node 
    
    print(head);  // first there will be only value in the linked list that is 100 so it will be printed
    
    insertathead(head,200);  // we are inserting the new head with value 200
    
    print(head);           // so after inserting we are printing the linked list now it will be printed with 100 and 200
    
    return 0;
}
