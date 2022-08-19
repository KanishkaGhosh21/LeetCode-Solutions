class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> set;
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++)
            set.insert(nums1[i]);
        for(int i=0;i<nums2.size();i++)
        {
            if(i!=0 && nums2[i]==nums2[i-1])
               continue;
            if(set.find(nums2[i])!=set.end())
               ans.push_back(nums2[i]);
        }
        return ans;
    }
};