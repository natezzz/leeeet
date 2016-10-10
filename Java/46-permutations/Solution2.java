public class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        doPermute(nums, res, new ArrayList<Integer>());
        return res;
    }
    
    public void doPermute(int[] nums, List<List<Integer>> res, List<Integer> partial) {
        if (partial.size() == nums.length) {
            res.add(new ArrayList<>(partial));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (!partial.contains(nums[i])) {
                    partial.add(nums[i]); 
                    doPermute(nums, res, partial);
                    partial.remove(partial.size()-1);
                }
            }
        }
    }
}

