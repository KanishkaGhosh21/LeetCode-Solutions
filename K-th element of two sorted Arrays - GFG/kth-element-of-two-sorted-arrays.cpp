//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(n>m)
            return kthElement(arr2,arr1,m,n,k);
        int l=max(0,k-m);
        int r=min(n,k);
        while(l<=r){
            int cut1=(l+r)/2;
            int cut2=k-cut1;
            
            int max1 = (cut1 == 0) ? INT_MIN : arr1[cut1-1];
            int min1 = (cut1 == n) ? INT_MAX : arr1[cut1];
            int max2 = (cut2 == 0) ? INT_MIN : arr2[cut2-1];
            int min2 = (cut2 == m) ? INT_MAX : arr2[cut2];
            
            if(max1<=min2 && max2<=min1)
                return max(max1,max2);
            if(max1>min2)
                r=cut1-1;
            else
                l=cut1+1;
        }
        return 1;
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends