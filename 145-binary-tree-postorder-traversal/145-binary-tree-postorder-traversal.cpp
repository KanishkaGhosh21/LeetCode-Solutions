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

    void traverse(TreeNode *root,vector<int> &postorder)
    {
        if(root==NULL)
            return;
        if(root->left!=NULL)
            traverse(root->left,postorder);
        if(root->right!=NULL)
            traverse(root->right,postorder);
        postorder.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        traverse(root,postorder);
        return postorder;
    }
};