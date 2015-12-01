class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        return (number_of_one_bits(n) == 1);
    }
    
    int number_of_one_bits(int n) {
        int total = 0;
        while (n != 0) {
            total += (n & 0x1);
            n >>= 1;
        }
        return total;
    }
};
