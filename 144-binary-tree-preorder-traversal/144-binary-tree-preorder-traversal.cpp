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

    void traverse(TreeNode *root,vector<int> &preorder)
    {
        if(root==NULL)
            return;
        preorder.push_back(root->val);
        if(root->left!=NULL)
            traverse(root->left,preorder);
        if(root->right!=NULL)
            traverse(root->right,preorder);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        traverse(root,preorder);
        return preorder;
    }
};