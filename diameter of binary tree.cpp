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
   
   int height(TreeNode* root,int& diameter)  // passing value by refernce as we need to change it everytime
   {
       if(root==NULL) return 0;
       int lh = height(root->left,diameter);  // using recursion calling the height fuction to find height of left tree
       int rh = height(root->right,diameter);  // using recursion calling the height fuction to find height of left tree
       diameter = max(diameter,rh+lh);  // at every junction the diamter should be max of diamter and sum of lh and rh
       return 1+max(lh,rh);  // returning as 1 + lh,rh same as used in finding the height of binary tree
   }





    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0; // declaring diameter and making it to zero
        height(root,diameter); // calling a function height 
        return diameter;  // returning diamter
    }
};
