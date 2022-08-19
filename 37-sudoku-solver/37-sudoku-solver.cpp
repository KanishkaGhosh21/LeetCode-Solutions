class Solution {
public:
    bool isPossible(vector<vector<char>>& board,int i,int j,char val)
    {
        for(int x=0;x<9;x++)
        {
            if(board[i][x]==val)
                return false;
            if(board[x][j]==val)
                return false;
            if(board[x/3+3*(i/3)][(x%3)+3*(j/3)]==val)
                return false;
        }
        return true;
    }
    
    bool findSol(vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(isPossible(board,i,j,c)==true)
                        {
                            board[i][j]=c;
                            if(findSol(board)==true)
                                return true;
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        findSol(board);
    }
};