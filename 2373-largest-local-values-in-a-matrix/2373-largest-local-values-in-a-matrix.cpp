class Solution {
public:
    int findLocalMax(int i,int j,vector<vector<int>>& grid)
    {
        int max=INT_MIN;
        for(int row=i-1;row<=i+1;row++)
        {
            for(int col=j-1;col<=j+1;col++)
            {
                if(row>=0&&row<=grid.size()&&col>=0&&col<=grid.size())
                {
                    if(grid[row][col]>max)
                        max=grid[row][col];
                }
            }
        }
        return max;
    }
    
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans;
        vector<int> rowAns;
        for(int i=0;i<n-2;i++)
        {
            for(int j=0;j<n-2;j++)
                rowAns.push_back(findLocalMax(i+1,j+1,grid));
            ans.push_back(rowAns);
            rowAns.clear();
        }
        return ans;
    }
};