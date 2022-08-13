class Solution {
public:
    void findPermutations(vector<int> &nums,vector<int> &check, vector<int> &ds, vector<vector<int>> &ans)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(check[i]!=0)
                continue;
            ds.push_back(nums[i]);
            check[i]=1;
            findPermutations(nums,check,ds,ans);
            check[i]=0;
            ds.pop_back();
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        vector<int> check(nums.size(),0);
        findPermutations(nums,check,ds,ans);
        return ans;
    }
};