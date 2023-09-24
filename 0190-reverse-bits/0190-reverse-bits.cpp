class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> b(n);
        string bit= b.to_string();
        reverse(bit.begin(),bit.end());
        bitset<32> ans(bit);
        return ans.to_ullong();
    }
};