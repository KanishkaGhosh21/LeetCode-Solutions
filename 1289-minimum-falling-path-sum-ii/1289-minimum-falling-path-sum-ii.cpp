class Solution {
public:
    int findSum(vector<vector<int>>& grid,int n,int i,int prev,vector<vector<int>>& dp)
    {
        if(i==0)
        {
            int mini=INT_MAX;
            for(int j=0;j<n;j++)
                if(j!=prev)
                    mini=min(mini,grid[i][j]);
            return mini;
        }
        if(dp[i][prev]!=-1)
            return dp[i][prev];
        int mini=INT_MAX;
        for(int j=0;j<n;j++)
        {
            int point;
            if(j!=prev)
            {
                point=grid[i][j] + findSum(grid,n,i-1,j,dp);
                mini=min(mini,point);
            }
        }
        return dp[i][prev]=mini;
    }
    
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return findSum(grid,n,n-1,n,dp);
    }
};