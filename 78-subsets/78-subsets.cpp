class Solution {
public:
    void findSubsets(vector<int> &nums,int i,vector<int> &ds,vector<vector<int>> &ans)
    {
        if(i==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        findSubsets(nums,i+1,ds,ans);
        ds.push_back(nums[i]);
        findSubsets(nums,i+1,ds,ans);
        ds.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        findSubsets(nums,0,ds,ans);
        return ans;
    }
};