class Solution {
public:
    void findCombination(int ind,int k, int sum, vector<int> &ds, vector<vector<int>> &ans)
    {
        if(ds.size()==k)
        {
            if(sum==0)
            {
                ans.push_back(ds);
                return;
            }
            return;
        }
        for(int i=ind;i<=9;i++)
        {
            if(i>sum)
                return;
            ds.push_back(i);
            findCombination(i+1,k,sum-i,ds,ans);
            ds.pop_back();
        }
        
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        vector<vector<int>> ans;
        findCombination(1,k,n,ds,ans);
        return ans;
    }
};