class Solution {
    // int count=0;
    // void countWays(int n)
    // {
    //     // if(n==0)
    //     // {
    //     //     count++;
    //     //     return;
    //     // }
    //     // else if(n<0)
    //     //     return;
    //     // climbStairs(n-1);
    //     // climbStairs(n-2);
    // }
    
    
    int countWays(int n,int dp[])
    {
        if(n==1)
            dp[n]=1;
        if(n==2)
            dp[n]=2;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=countWays(n-1,dp)+countWays(n-2,dp);
    }
    
    public int climbStairs(int n) {
        int dp[]=new int[n+1];
        Arrays.fill(dp, -1);
        int count =countWays(n,dp);
        return count;
    }
}