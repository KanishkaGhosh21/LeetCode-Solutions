//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    void bfs(vector<vector<int>> &grid,vector<vector<int>> &ans,queue<vector<int>> &q){
        while(!q.empty()){
            int i=q.front()[0];
            int j=q.front()[1];
            int dist=q.front()[2];
            q.pop();
            vector<pair<int,int>> chn={{1,0},{-1,0},{0,1},{0,-1}};
            for(auto itr:chn){
                int r=i+itr.first;
                int c=j+itr.second;
                if(r>=0 && r<grid.size() && c>=0 && c<=grid[0].size() && grid[r][c]==0 && ans[r][c]==0){
                    ans[r][c]=dist+1;
                    q.push({r,c,dist+1});
                }
            }
        }
    }
    
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> ans(n,vector<int>(m,0));
	    queue<vector<int>> q;
	    for(int i=0;i<n;i++)
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==1)
	                q.push({i,j,0});
	        }
	   bfs(grid,ans,q);
	   return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends