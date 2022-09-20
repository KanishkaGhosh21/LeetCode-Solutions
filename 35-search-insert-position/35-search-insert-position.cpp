class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0])
            return 0;
        if(target>nums[nums.size()-1])
            return nums.size();
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<=high)
        {
            mid=(high+low)/2;
            if(nums[mid]==target)
                return mid;
            if(target<nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
        
        // return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    }
};