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
    int findHeight(TreeNode * root)
    {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        int ltree=INT_MIN,rtree=INT_MIN;
        if(root->left)
            ltree=findHeight(root->left)+1;
        if(root->right)
            rtree=findHeight(root->right)+1;
        return max(ltree,rtree);
    }
    
    int DeepestSum(TreeNode *root,int height,int level)
    {
        if(root==NULL)
            return 0;
        if(level==height)
            return root->val;
        return DeepestSum(root->left,height,level+1) + 
                DeepestSum(root->right,height,level+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int n=findHeight(root);
        return DeepestSum(root,n,1);
    }
};