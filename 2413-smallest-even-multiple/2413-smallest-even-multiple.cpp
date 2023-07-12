class Solution {
public:
    int smallestEvenMultiple(int n) {
        int gcd=__gcd(n,2);
        return n*2/gcd;
    }
};