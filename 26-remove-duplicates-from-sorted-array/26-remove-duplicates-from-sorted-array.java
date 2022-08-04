class Solution {
    public int removeDuplicates(int[] nums) {
        int len=nums.length;
        int count=1;
        int prev=nums[0];
        for(int i=1;i<len;i++)
        {
            if(nums[i]==prev)
                continue;
            else
            {
                nums[count++]=nums[i];
                prev=nums[i];
            }
        }
        return count;
    }
}