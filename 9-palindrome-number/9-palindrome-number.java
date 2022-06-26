class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
            return false;
        else{
            int digits=(int)Math.log10(x)+1;
            int halfDigits=digits/2;
                int rev=0;
            for (int i = 0; i < halfDigits; i++) {
                rev=rev*10+(x%10);
                x/=10;
            }
            if(digits%2!=0)
                x/=10;
            if(x==rev)
                return true;
            return false;
        }
    }
}