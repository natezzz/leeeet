class Solution {
public:
    int hammingWeight(uint32_t n) {
        int total = 0;
        while (n) {
            total += (n & 0x1);
            n >>= 1;
        }
        return total;
    }
};
