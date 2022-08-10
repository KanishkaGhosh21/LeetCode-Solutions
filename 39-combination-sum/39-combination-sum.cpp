class Solution {
public:
    void findCombinations(vector<int> nums,int i, int target,vector<int> &ds,vector<vector<int>> &ans)
    {
        if(i==nums.size()){
            if(target==0)
                ans.push_back(ds);
            return;
        }
        if(nums[i]<=target)
        {
            ds.push_back(nums[i]);
            findCombinations(nums,i,target-nums[i],ds,ans);
            ds.pop_back();
        }
        findCombinations(nums,i+1,target,ds,ans);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        findCombinations(candidates,0,target,ds,ans);
        return ans;
    }
};