class Solution {
public:
    int reverse(int x) {
        if (x == 0)
            return 0;
        
        bool minus = false;
        if (x < 0) {
            x = -x;
            minus = true;
        }
        
        long result = 0;
        while (x != 0) {
            result *= 10;
            result += (x % 10);
            x /= 10;
        }
        
        result = (minus) ? -result : result;
        
        if (result != (int) result) {
            return 0;
        } else {
            return result;
        }
    }
};
