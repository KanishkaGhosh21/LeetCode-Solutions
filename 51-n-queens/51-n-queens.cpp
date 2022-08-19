class Solution {
public:    
    bool isPossible(vector<string> &board, int i, int j,int n)
    {
        for(int x=0;x<n;x++)
            if(board[x][j]=='Q')
                return false;
        for(int y=0;y<n;y++)
            if(board[i][y]=='Q')
                return false;
        for(int x=i, y=j;(x>=0&&x<n)&&(y>=0&&y<n);x++,y++)
            if(board[x][y]=='Q')
                return false;
        for(int x=i, y=j;(x>=0&&x<n)&&(y>=0&&y<n);x--,y--)
            if(board[x][y]=='Q')
                return false;
        for(int x=i, y=j;(x>=0&&x<n)&&(y>=0&&y<n);x++,y--)
            if(board[x][y]=='Q')
                return false;
        for(int x=i, y=j;(x>=0&&x<n)&&(y>=0&&y<n);x--,y++)
            if(board[x][y]=='Q')
                return false;
        return true;
    }
    
    void findSol(vector<string> &board,int row,vector<vector<string>> &ans,int n)
    {
        if(row==n)
        {
            ans.push_back(board);
            return;
        }
        for(int j=0;j<n;j++)
        {
            if(isPossible(board,row,j,n))
            {
                board[row][j]='Q';
                findSol(board,row+1,ans,n);
                board[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> board(n,s);
        findSol(board,0,ans,n);
        return ans;
    }
};