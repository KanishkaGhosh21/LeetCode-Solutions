class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> set(jewels.begin(),jewels.end());
        int count=0;
        for(int i=0;i<stones.length();i++)
        {
            if(set.find(stones[i])!=set.end())
                count++;
        }
        return count;
    }
};