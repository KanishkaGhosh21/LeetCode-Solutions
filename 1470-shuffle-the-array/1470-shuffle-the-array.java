class Solution {
    public int[] shuffle(int[] nums, int n) {
        int shuffledArr[] = new int[2 * n];
        int x=0,y=n;
        for(int i=0;i<2*n;i+=2)
        {
            shuffledArr[i]=nums[x++];
            shuffledArr[i+1]=nums[y++];
        }
        return shuffledArr;
    }
}