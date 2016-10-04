public class Solution {
    public int maxArea(int[] height) {
        int l = 0;
        int r = height.length-1;
        int maxArea = Math.min(height[l], height[r]) * (r-l);
        while (l < r) {
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
            
            maxArea = Math.max(maxArea, Math.min(height[l], height[r])*(r-l));
        }
        return maxArea;
    }
}

