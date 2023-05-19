//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void bfs(vector<vector<char>>& grid,vector<vector<int>> &visited,queue<pair<int,int>> &q){
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(!visited[i][j])
            {
                visited[i][j]=1;
                for(int x=-1;x<=1;x++)
                    for(int y=-1;y<=1;y++)
                        if(i+x>=0 && i+x<grid.size() && j+y>=0 && j+y<grid[0].size() && grid[i+x][j+y]=='1')
                            q.push({i+x,j+y});
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    q.push({i,j});
                    count++;
                    bfs(grid,visited,q);
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends