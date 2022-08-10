class Solution {
public:
    bool isPalindrome(string s) {
        int low=0,high=s.length()-1;
        while(low<=high)
        {
            bool flag=false;
            if(!isalnum(s.at(low)))
            {
                low++;
                flag=true;
            }
            if(!isalnum(s.at(high)))
            {
                high--;
                flag=true;
            }
            if(flag)
                continue;
            
            if(tolower(s.at(low))!=tolower(s.at(high)))
                return false;
            low++;
            high--;
        }
        return true;
    }
};