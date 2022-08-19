class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            unordered_set<int> set_row;
            unordered_set<int> set_col;
            for(int j=0;j<n;j++)
            {
                if(set_row.find(matrix[i][j])!=set_row.end())
                    return false;
                set_row.insert(matrix[i][j]);
                if(set_col.find(matrix[j][i])!=set_col.end())
                    return false;
                set_col.insert(matrix[j][i]);
            }
            set_row.erase(set_row.begin(),set_row.end());
            set_col.erase(set_col.begin(),set_col.end());
        }
        return true;
    }
};