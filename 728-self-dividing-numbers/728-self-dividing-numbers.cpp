class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int n=left;n<=right;n++)
        {
            int i;
            for(i=n;i>0;i/=10)
            {
                int digit=i%10;
                if(digit==0 || n%digit!=0)
                    break;
            }
            if(i==0)
                ans.push_back(n);
        }
        return ans;
    }
};