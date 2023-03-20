class Solution
{
    public:
    
    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* next = NULL;
        Node* curr = head;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next; 
        }
        return prev;
    }
    
    
    
    
    
    Node* addOne(Node *head) 
    {
        head = reverse(head);
        Node* curr = head;
        bool t = false;
        while(curr!=NULL && t==false )
        {
            if(curr->next == NULL and curr->data == 9)
            {
            curr->data=1;
            Node* temp = new Node(0);
            temp->next=head;
            head=temp;
            curr=curr->next;
            }
            else if(curr->data==9)
            {
                curr->data = 0;
                curr=curr->next;
            }
            else
            {
                curr->data=curr->data+1;
                curr=curr->next;
                t=true;
            }
            
        }
        head = reverse(head);
        return head;
    }
};
