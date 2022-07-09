// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int minDist=INT_MAX;
        int index_x=-1;
        int index_y=-1;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
                index_x=i;
            else if(a[i]==y)
                index_y=i;
            if(index_x!=-1 && index_y!=-1)
                if(abs(index_x-index_y)<minDist)
                    minDist=abs(index_x-index_y);
        }
        if(index_x==-1 || index_y==-1)
            return -1;
        return minDist;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends