class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* temp = head;
        for(int i=1;i<arr.size();i++)
        {
            Node* new_node = new Node(arr[i]);
            temp->next = new_node;
            temp = temp->next;
        }
        return head;
    }
};
