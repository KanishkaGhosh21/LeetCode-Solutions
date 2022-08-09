class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits;
        for(int i=0;i<4;i++)
        {
            digits.push_back(num%10);
            num/=10;
        }
        sort(digits.begin(),digits.end());
        int num1=digits[0]*10+digits[2];
        int num2=digits[1]*10+digits[3];
        return num1+num2;
    }
};