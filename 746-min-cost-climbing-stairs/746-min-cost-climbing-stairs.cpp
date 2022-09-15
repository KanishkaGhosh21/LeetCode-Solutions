class Solution {
public:
    int findSum(int i,vector<int>& cost,vector<int>& dp)
    {
        if(i>=cost.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        return dp[i]=cost[i]+min(findSum(i+1,cost,dp),findSum(i+2,cost,dp));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        return min(findSum(0,cost,dp),findSum(1,cost,dp));
    }
};