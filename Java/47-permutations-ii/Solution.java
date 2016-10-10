public class Solution {
    public List<List<Integer>> permuteUnique(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        Arrays.sort(nums);
        doPermute(nums, res, new boolean[nums.length], new ArrayList<Integer>());
        return res;
    }
    
    public void doPermute(int[] nums, List<List<Integer>> res, boolean[] record, List<Integer> partial) {
        if (partial.size() == nums.length) {
            res.add(new ArrayList<>(partial));
        } else {
            for (int i = 0; i < record.length; i++) {
                if (record[i] || 
                    (i > 0 && nums[i] == nums[i-1] && !record[i-1])) {
                        continue;
                    }
                else {
                    partial.add(nums[i]); 
                    record[i] = true;
                    doPermute(nums, res, record, partial);
                    record[i] = false;
                    partial.remove(partial.size()-1);
                }
            }
        }
    }
}

