public class Solution {
    public int[] searchRange(int[] nums, int target) {
        int bs = bsearch(nums, 0, nums.length-1, target);
        if (bs == -1) {
            return new int[] {-1, -1};
        } else {
            int begin = bs;
            int end = bs;
            while (begin >= 0 && nums[begin] == target) {
                begin--;
            }
            while (end < nums.length && nums[end] == target) {
                end++;
            }
            return new int[] {begin+1, end-1};
        }
    }
    
    public int bsearch(int[] nums, int begin, int end, int t) {
        if (begin > end) {
            return -1;
        }
        
        int mid = (begin + end) / 2;
        
        if (nums[mid] > t) {
            return bsearch(nums, begin, mid-1, t);
        } else if (nums[mid] < t) {
            return bsearch(nums, mid+1, end, t);
        } else {
            return mid;
        }
    }
}

