#include <iostream>

class Solution {
public:
    int addDigits(int num) {
        int total;
        do {
            total = 0;
            while (num != 0) {
                total += (num % 10);
                num /= 10;
            }
            num = total;
        } while (total >= 10);

        return total;
    }
};

int
main()
{
    Solution sol;

    std::cout << sol.addDigits(12345) << std::endl;

    return 0;
}
