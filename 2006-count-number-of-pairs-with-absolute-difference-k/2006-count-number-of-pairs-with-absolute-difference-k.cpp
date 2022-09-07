class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int hash[101]{0};
        int count=0;
        for(int i=0;i<nums.size();i++)
            hash[nums[i]]++;
        for(int i=1;i<100;i++)
            if(i+k<=100)
                count+=hash[i]*hash[i+k];
        return count;
    }
};