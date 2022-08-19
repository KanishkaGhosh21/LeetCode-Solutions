class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++)
        {
            unordered_set<char> set;
            unordered_set<char> set2;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(set.find(board[i][j])!=set.end())
                        return false;
                    set.insert(board[i][j]);
                }
                if(board[j][i]!='.')
                {
                    if(set2.find(board[j][i])!=set2.end())
                        return false;
                    set2.insert(board[j][i]);
                }
            }
            set.erase(set.begin(),set.end());
            set2.erase(set2.begin(),set2.end());
            for(int j=0;j<9;j++)
            {
                if(board[3*(i/3)+j/3][3*(i%3)+j%3]=='.')
                    continue;
                if(set.find(board[3*(i/3)+j/3][3*(i%3)+j%3])!=set.end())
                    return false;
                set.insert(board[3*(i/3)+j/3][3*(i%3)+j%3]);
            }
        }
        return true;
    }
};