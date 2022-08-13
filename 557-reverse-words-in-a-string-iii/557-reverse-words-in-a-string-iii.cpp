class Solution {
public:
    string reverseWords(string s) {
       int i=0,j=0;
        s+=" ";
        while(j<s.length())
        {
            if(s[j]!=' ')
                j++;
            else
            {
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
                j++;
            }
        }
        return s.substr(0,s.length()-1);
    }
};