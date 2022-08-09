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
    int sum=0;
    int maxDepth=0;
    void DeepestSum(TreeNode *root,int level)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            if(level==maxDepth)
            {
                sum+=root->val;
                return;
            }
            if(level>maxDepth)
            {
                maxDepth=level;
                sum=root->val;
                return;
            }
            return;
        }
        DeepestSum(root->left,level+1);
        DeepestSum(root->right,level+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        DeepestSum(root,0);
        return sum;
    }
};