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
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;  // if we get null in the root we are returning 0 
        int lh = height(root->left);  // declaring left height and pointing it to root's left
        if(lh == -1) return -1;      // if root's height is -1 we will return -1
        int rh = height(root->right);  // declaring right height and pointing it to root's right
        if(rh == -1) return -1;        // if root's height is -1 we will return -1
        
        if(abs(lh-rh)>1) return -1;    // if the absoulte value is also - 1 which means the tree is not balance so again we will return -1

        return max(lh,rh)+1;  // atlast we will return max of left and right + 1   
    } 
    
    bool isBalanced(TreeNode* root) {
         
         return height(root) != -1;  // we are calling the above height function, by passing root and will return false if -1 occurs

        
    }
};
