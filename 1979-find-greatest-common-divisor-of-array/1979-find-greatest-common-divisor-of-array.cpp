class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        while(max>0)
        {
            int rem=max%min;
            if(rem==0)
                return min;
            max=min;
            min=rem;
        }
        return min;
    }
};