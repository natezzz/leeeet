class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> set;
        for (int i = 0; i < nums.size(); i++)
            set.insert(nums[i]);
        
        return set.size() != nums.size();
    }
};
