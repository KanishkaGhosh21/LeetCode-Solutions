class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            if(freq.find(nums[i])!=freq.end())
                freq[nums[i]]++;
            else
                freq.insert({nums[i],1});
        }
        int count=0;
        for(auto itr:freq)
        {
            int n=itr.second;
            count+=n*(n-1)/2;
        }
        return count;
    }
};