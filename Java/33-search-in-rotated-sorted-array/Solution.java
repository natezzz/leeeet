public class Solution {
    public int search(int[] nums, int target) {
        return bsearch(nums, 0, nums.length-1, target);
    }
    
    public int bsearch(int[] nums, int begin, int end, int t) {
        if (begin > end) {
            return -1;
        }
        
        int mid = (begin + end) / 2;
        
        if (nums[mid] == t) {
            return mid;
        } else {
            // pivot at right
            if (nums[mid] > nums[end]) {
                if (nums[begin] <= t && t <= nums[mid]) {
                    return bsearch(nums, begin, mid-1, t);
                } else {
                    return bsearch(nums, mid+1, end, t);
                }
            } else {
                if (nums[mid] <= t && t <= nums[end]) {
                    return bsearch(nums, mid+1, end, t);
                } else {
                    return bsearch(nums, begin, mid-1, t);
                }
            }
        }
    }
}

