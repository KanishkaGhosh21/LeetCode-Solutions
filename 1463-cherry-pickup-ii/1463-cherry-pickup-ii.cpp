class Solution {
public:
//     int findSum(int r,int c1, int c2,vector<vector<int>>& grid,vector<vector<vector<int>>> dp)
//     {
//         if(c1<0 || c1>=grid[0].size() || c2<0 || c2>=grid[0].size())
//             return -1e8;
//         if(r==grid.size()-1)
//         {
//             if(c1==c2)
//                 return grid[r][c1];
//             return grid[r][c1]+grid[r][c2];
//         }
//         if(dp[r][c1][c2]!=-1)
//             return dp[r][c1][c2];
//         int maxi=-1e8;
//         for(int i=-1;i<=1;i++)
//         {
//             for(int j=-1;j<=1;j++)
//             {
                
//                 maxi=max(maxi,findSum(r+1,c1+i,c2+j,grid,dp));
//             }
//         }    
//         return dp[r][c1][c2]=maxi+grid[r][c1]+(c1==c2?0:grid[r][c2]);
//     }
    
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,0)));
        // return findSum(0,0,m-1,grid,dp);
        
        for(int c1=0;c1<m;c1++)
            for(int c2=0;c2<m;c2++)
            {
                if(c1==c2)
                    dp[n-1][c1][c2]=grid[n-1][c1];
                else
                    dp[n-1][c1][c2]=grid[n-1][c1]+grid[n-1][c2];
            }
        
        for(int r=n-2;r>=0;r--)
        {
            for(int c1=0;c1<m;c1++)
            {
                for(int c2=0;c2<m;c2++)
                {
                    int maxi=-1e8;
                    for(int i=-1;i<=1;i++)
                    {
                        for(int j=-1;j<=1;j++)
                        {
                            if(c1+i<0 || c1+i>=grid[0].size() || c2+j<0 || c2+j>=grid[0].size())
                                continue;
                            maxi=max(maxi,dp[r+1][c1+i][c2+j]);
                        }
                    }    
                    dp[r][c1][c2]=maxi+grid[r][c1]+(c1==c2?0:grid[r][c2]);
                }
            }
        }
       return dp[0][0][m-1];
    }
};