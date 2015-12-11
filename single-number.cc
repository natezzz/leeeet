class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int i = 0;
        while (i < nums.size()) {
            if (i == (nums.size()-1) || nums[i] != nums[i+1]) {
                return nums[i];
            }
            
            i += 2;
        }
    }
};
