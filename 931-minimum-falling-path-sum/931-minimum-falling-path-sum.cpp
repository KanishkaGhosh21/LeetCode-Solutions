class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++)
            dp[0][i]=matrix[0][i];
        for(int i=1;i<n;i++)
            for(int j=0;j<n;j++)
            {
                int down=1e9,left=1e9,right=1e9;
                if(i>0) down=dp[i-1][j];
                if(i>0&&j>0) left=dp[i-1][j-1];
                if(i>0&&j<n-1) right=dp[i-1][j+1];
                dp[i][j]=matrix[i][j]+min(down,min(left,right));
            }
        int mini=1e9;
        for(int j=0;j<n;j++)
            mini=min(mini,dp[n-1][j]);
        return mini;
    }
};