class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> freqSet(n+1);
        for(int i=0;i<n+1;i++)
        {
            if(i<=1)
                freqSet[i]=i;
            freqSet[i]=freqSet[i/2]+freqSet[i%2];
        }
        return freqSet;
    }
};