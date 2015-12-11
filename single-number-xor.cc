class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // XOR (^) is both commutative and associative 
        // The numbers which appear twice will be cancelled
        // Only the number that appear twice survive 
        int value = 0;
        int i, n;
        n = nums.size();
        for(i=0; i<n; i++)
            value = value ^ nums[i];
        return value;
    }
};
