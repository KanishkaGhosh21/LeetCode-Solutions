class Solution {
public:
    void findCount(vector<vector<int>> &board,int col,int n,vector<int> &leftRow,vector<int> &downDiag,vector<int> &upDiag,int *count)
    {
        if(col==n)
        {
            (*count)++;
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(leftRow[i]==0 && downDiag[i+col]==0 && upDiag[n-1+col-i]==0)
            {
                leftRow[i]=1;
                downDiag[i+col]=1;
                upDiag[n-1+col-i]=1;
                findCount(board,col+1,n,leftRow,downDiag,upDiag,count);
                leftRow[i]=0;
                downDiag[i+col]=0;
                upDiag[n-1+col-i]=0;
            }
        }
    }
    
    
    int totalNQueens(int n) {
        int count=0;
        vector<int> row(n,0);
        vector<vector<int>> board(n,row);
        vector<int> leftRow(n,0);
        vector<int> downDiag(2*n-1,0);
        vector<int> upDiag(2*n-1,0);
        findCount(board,0,n,leftRow,downDiag,upDiag,&count);
        return count;
    }
};