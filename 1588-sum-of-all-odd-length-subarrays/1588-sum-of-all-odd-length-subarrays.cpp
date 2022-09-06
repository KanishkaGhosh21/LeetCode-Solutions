class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int subarraySum=0;
            for(int j=i;j<n;j++)
            {
                subarraySum+=arr[j];
                if((j-i+1)%2!=0)
                    sum+=subarraySum;
            }
        }
        return sum;
    }
};