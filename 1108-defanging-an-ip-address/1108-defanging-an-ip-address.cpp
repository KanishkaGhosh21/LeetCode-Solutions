class Solution {
public:
    string defangIPaddr(string address) {
        for(int i=0;i<address.size()-1;i++)
        {
            if(address.at(i)=='.')
            {
                address.replace(i,1,string("[.]"));
                i++;
            }
        }
        return address;
    }
};