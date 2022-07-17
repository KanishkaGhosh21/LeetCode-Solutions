class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int row_size=matrix.length;
        int col_size=matrix[0].length;
        int i=0,j=col_size-1;
        while(i<row_size && j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            else if(target<matrix[i][j])
                j--;
            else if(target>matrix[i][j])
                i++;
        }
        return false;
    }
}