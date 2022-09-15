class Solution {
public:
    int tribonacci(int n) {
        if(n<=1)
            return n;
        if(n==2)
            return 1;
        int prev3=0,prev2=1,prev=1;
        for(int i=3;i<=n;i++)
        {
            int cur=prev+prev2+prev3;
            prev3=prev2;
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};