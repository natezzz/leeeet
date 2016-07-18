// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;

        while (true) {
            int m = low + (high - low)/2;
            int res = guess(m);

            if (res == 1) {
                low = m + 1;
            } else if (res == -1) {
                high = m - 1;
            } else {
                return m ;
            }
        }
    }
};
