class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex<2)
            return vector<int>(rowIndex+1,1);
        vector<int> prevRow(2,1);
        for(int i=2;i<=rowIndex;i++)
        {
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++)
                row[j]=prevRow[j-1]+prevRow[j];
            prevRow=row;
        }
        return prevRow;
    }
};