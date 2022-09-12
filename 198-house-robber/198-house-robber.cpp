class Solution {
public:
    int findSum(vector<int> &nums,int i,vector<int> &dp)
    {
        if(i==0)
            return nums[0];
        if(i<0)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int pick=nums[i]+findSum(nums,i-2,dp);
        int notPick=findSum(nums,i-1,dp);
        return dp[i]=max(pick,notPick);
    }
    
    int rob(vector<int>& nums) {
        int maxSum=0;
        vector<int> dp(nums.size()+1,-1);
        return findSum(nums,nums.size()-1,dp);
    }
};