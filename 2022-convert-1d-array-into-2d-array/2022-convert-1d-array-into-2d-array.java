class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        int len=original.length;
        if(len!=m*n)
            return new int[0][0];
        int sol[][]=new int[m][n];
        
        for(int i=0;i<len;i++)
            sol[i/n][i%n]=original[i];
        return sol;
    }
}