class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1, s = 0;
        while (n) {
            int rem = n % 10;
            p *= rem;
            s += rem;
            n /= 10;
        }
        return p - s;
    }
};