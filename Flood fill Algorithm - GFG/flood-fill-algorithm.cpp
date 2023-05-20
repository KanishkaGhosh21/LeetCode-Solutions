//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void dfs(vector<vector<int>> &image, int sr, int sc,int oldColor, int newColor,vector<vector<int>> &visited){
        visited[sr][sc]=1;
        image[sr][sc]=newColor;
        if(sr-1>=0 && !visited[sr-1][sc] && image[sr-1][sc]==oldColor)
            dfs(image,sr-1,sc,oldColor,newColor,visited);
        if(sc-1>=0 && !visited[sr][sc-1] && image[sr][sc-1]==oldColor)
            dfs(image,sr,sc-1,oldColor,newColor,visited);
        if(sr+1<image.size() && !visited[sr+1][sc] && image[sr+1][sc]==oldColor)
            dfs(image,sr+1,sc,oldColor,newColor,visited);
        if(sc+1<image[0].size() && !visited[sr][sc+1] && image[sr][sc+1]==oldColor)
            dfs(image,sr,sc+1,oldColor,newColor,visited);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor=image[sr][sc];
        vector<vector<int>> visited(image.size(),vector<int>(image[0].size(),0));
        dfs(image,sr,sc,oldColor,newColor,visited);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends