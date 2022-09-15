class Solution {
public:
    int findSum(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp)
    {
        if(i==0&&j==0)
            return grid[i][j];
        if(i<0||j<0)
            return INT_MAX;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int sum1=INT_MAX;
        int sum2=INT_MAX;
        if(i>0)
            sum1=grid[i][j]+findSum(i-1,j,grid,dp);
        if(j>0)
            sum2=grid[i][j]+findSum(i,j-1,grid,dp);
        return dp[i][j]=min(sum1,sum2);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return findSum(m-1,n-1,grid,dp);
    }
};