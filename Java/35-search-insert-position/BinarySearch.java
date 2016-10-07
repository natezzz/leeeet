public class Solution {
    public int searchInsert(int[] nums, int target) {
        return bsearch(nums, 0, nums.length-1, target);
    }
    
    public int bsearch(int[] nums, int begin, int end, int target) {
        if (begin >= end) {
            return (nums[begin] >= target) ? begin : begin+1;
        }
        
        int mid = (begin + end) / 2;
        
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            return bsearch(nums, begin, mid-1, target);
        } else {
            return bsearch(nums, mid+1, end, target);
        }
    }
}

