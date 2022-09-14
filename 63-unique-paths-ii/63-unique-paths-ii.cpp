class Solution {
public:
    int findSol(int i,int j,vector<vector<int>>& obstacleGrid,vector<vector<int>>& dp)
    {
        if(i>=0&&j>=0&&obstacleGrid[i][j]==1)
            return 0;
        if(i==0&&j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int left=0,top=0;
        return dp[i][j]=findSol(i,j-1,obstacleGrid,dp)+findSol(i-1,j,obstacleGrid,dp);
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return findSol(m-1,n-1,obstacleGrid,dp);
    }
};