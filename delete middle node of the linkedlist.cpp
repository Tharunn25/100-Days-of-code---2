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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummy = new ListNode(-1,head);
        ListNode* prevmiddle = dummy,*slow=head,*fast=head;
        while(fast && fast->next)
        {
            prevmiddle = slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* junction = slow->next;
        prevmiddle->next = junction;
        delete slow;
       
        return dummy->next;
        
    }
};
