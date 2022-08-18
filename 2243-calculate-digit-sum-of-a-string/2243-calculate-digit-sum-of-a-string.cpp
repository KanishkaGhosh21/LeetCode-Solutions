class Solution {
public:
    
    string digitSum(string s, int k) {
        if(s.length()<=k)
            return s;
        string ans="";
        int groupSum=0;
        for(int i=0;i<s.length();i++)
        {
            groupSum+=(s[i]-48);
            if((i+1)%k==0 || i==s.length()-1)
            {
                ans+=to_string(groupSum);
                groupSum=0;   
            }
        }
        if(ans.length()>k)
            return digitSum(ans,k);
        return ans;
    }
};