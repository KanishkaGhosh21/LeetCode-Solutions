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
    int findDiameter(TreeNode* root, int &ans)
    {
        if(root==NULL)
            return 0;
        int left = findDiameter(root->left,ans);
        int right = findDiameter(root->right,ans);
        ans = max(ans, left+right);
        return max(left, right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 0;
        int ans=-1;
        findDiameter(root,ans);
        return ans;
    }
};