class Solution {
public:
    string truncateSentence(string s, int k) {
        s+=" ";
        int i;
        int words=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==' ')
                words++;
            if(words==k)
                return s.substr(0,i);
        }
        return s;
    }
};