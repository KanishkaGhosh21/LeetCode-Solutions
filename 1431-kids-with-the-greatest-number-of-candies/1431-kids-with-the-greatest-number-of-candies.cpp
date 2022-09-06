class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> result(n);
        int max=*max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++)
            result[i]=(candies[i]+extraCandies>=max);
        
        return result;
    }
};