class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int first, second;
        first = nums[0];
        second = nums[nums[0]];
        while (first != second) {
            first = nums[first];
            second = nums[nums[second]];
        }
        first = 0;
        while (first != second) {
            first = nums[first];
            second = nums[second];
        }
        return first;
    }
};
