class Solution {
public:
    bool canJump(vector<int>& nums) {
        int minjump = 0;
        for(int i = nums.size()-2; i >= 0; i--){
            minjump++;
            if(nums[i] >= minjump)
			    minjump = 0;
        }
        return minjump == 0;
    }
};