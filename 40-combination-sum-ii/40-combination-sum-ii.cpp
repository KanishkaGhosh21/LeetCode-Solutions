class Solution {
public:
    void findCombinations(vector<int> nums,int ind, int target,vector<int> &ds,vector<vector<int>> &ans)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && (nums[i]==nums[i-1]))
                continue;
            if(nums[i]>target)
                break;

            ds.push_back(nums[i]);
            findCombinations(nums,i+1,target-nums[i],ds,ans);
            ds.pop_back();
        }
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        findCombinations(candidates,0,target,ds,ans);
        return ans;
    }
};