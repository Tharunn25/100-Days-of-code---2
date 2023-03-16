int countNodesinLoop(struct Node *head)
{
    // Code here
    // if(head == NULL || head->next == NULL) return head;
    Node *slow = head,*fast = head;
    int count = 0;
    while(fast->next != NULL && fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            Node *temp=slow;
            slow=slow->next;
            while(slow!=temp)
            {
                slow=slow->next;
                count++;
            }
            return count+1;
        }
    }
}
