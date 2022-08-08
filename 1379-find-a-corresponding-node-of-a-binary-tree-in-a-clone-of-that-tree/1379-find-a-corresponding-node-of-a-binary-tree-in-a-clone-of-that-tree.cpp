/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)     {
        if(original==target)
            return cloned;
        else if(original==NULL)
            return NULL;
        else   
        {
            TreeNode *ltree=getTargetCopy(original->left,cloned->left,target);
            TreeNode *rtree=getTargetCopy(original->right,cloned->right,target);
            if(ltree!=NULL)
                return ltree;
            if(rtree!=NULL)
                return rtree;   
        }
        return NULL;
    }
};