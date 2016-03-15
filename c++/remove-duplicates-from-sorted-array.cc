class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        
        int count = 0;
        int curVal = nums[0];
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != curVal) {
                nums[count++] = curVal;
                curVal = nums[i];
            }
        }
        
        nums[count++] = curVal;    // store the last value
        return count;
    }
};
