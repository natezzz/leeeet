class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;   // nothing to rob wtf
        return dp(nums);
    }
    
    // simple DP solution:
    //  - table[n] = maximum money can rob from house n backwards
    int dp(const vector<int>& nums) {
        int table[nums.size()];   // dp table
        table[0] = nums[0];       // for the first house, the maximum is to take all the money
        for (int i = 1; i < nums.size(); i++) {
            if (i > 1) {
                table[i] = std::max((nums[i] + table[i-2]), // include i-th house
                                    (table[i-1]));          // exclude i-th house
            } else {
                table[i] = std::max(nums[i], nums[i-1]);    // the 1st house
            }
        }
        
        return table[nums.size()-1];
    }
};
