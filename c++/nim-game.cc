#include <iostream>

class Solution {
public:
    bool canWinNim(int n) {
        return (n % 4 != 0);
    }
};

int
main()
{
    Solution sol;
    std::cout << sol.canWinNim(1348820612) << std::endl;

    return 0;
}
