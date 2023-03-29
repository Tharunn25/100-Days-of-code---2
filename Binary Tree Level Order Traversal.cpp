/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return{};
        vector<vector<int>> ans; // we need to return of this type so we are creating vector of vector array
        vector<int> level;    // to push back each levels in final ans we are declaring another vector level
        queue<TreeNode*> q;   // create a queue with dtype of tree node
        q.push(root);          // pushing the root node into the queue
        q.push(NULL);         // to indicate the root is in another level we are pushing null into it

        while(!q.empty())      // running a while loop untill the q is empty
        {
            TreeNode* temp = q.front();  // storing the value of front inside the temp
            q.pop();                     // popping out the root node

            if(temp == NULL)       // if temp is null there is new level so we are pushing back it to the ans
            {
                ans.push_back(level);   // pushing the whole level into ans
                level.clear();         // then we are clearing it 
                

                if(!q.empty()) q.push(NULL);  // to differentiate to the next level we are pushing null to the queue
            }

            else   
            {
                level.push_back(temp->val);     // we are pushing back the temp val in the level
                if(temp->left) q.push(temp->left);  // also pushing the temp left value
                if(temp->right) q.push(temp->right);  // and also the right value
            }
        }
        return ans;    
    }
};
