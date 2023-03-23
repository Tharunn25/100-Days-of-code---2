/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head; // base case
        int len = 1;  // declaring len 
        ListNode* temp = head;  // creating a node temp
        while(temp->next && len++)    // running a for loop untill temp next is not null
        {
            temp=temp->next;  // incrementing temp = temp->next
        }

        temp->next=head;
        k=k%len;    // reducing the value of k 
        k = len-k;  // finding till which node should we iterate

        while(k--)   // iterating till k is 0
        {
            temp = temp->next;
        }

        head = temp->next;  // when loop breaks the head will be temp's next
        temp->next = NULL;  // and temp->next will be null
        return head;
        
    }
};
