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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2; // if l1 is null we will return l2
        if(list2==NULL) return list1; // if l2 is null we will return l1
        if(list1->val > list2->val) std::swap(list1,list2);
        ListNode* res = list1;  // create pointer result to point to l1, atlast we return that only
        while(list1 && list2) // while loop till l1 or l2 is not null
        {
            ListNode* temp = NULL; // creating a temp and assigning it to null
            while(list1 != NULL && list1->val<=list2->val)  // while loop till l1 is null or the value at l1 is not null
            {
                temp = list1;  // stroring the value of l1 in temp
                list1 = list1->next; // iterating the l1 to l1 next
            }
            temp->next=list2;  // if the loop get break, then temp->next will be l2
            std::swap(list1,list2);  // we should also swap the list as, l1 should be small everytime
        }
        return res; // atlast we will return res
        
    }
};
