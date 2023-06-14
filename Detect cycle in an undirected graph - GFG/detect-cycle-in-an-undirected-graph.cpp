//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool bfs(vector<int> adj[],queue<pair<int,int>> &q,vector<int> &visited){
        while(!q.empty()){
            int node=q.front().first;
            int prev=q.front().second;
            q.pop();
            visited[node]=1;
            for(auto next:adj[node]){
                if(next!=prev && visited[next]){
                    return true;
                }
                else if(!visited[next])
                    q.push({next,node});
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        queue<pair<int,int>> q;
        vector<int> visited(V,0);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                q.push({i,-1});
                if(bfs(adj,q,visited))
                    return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends