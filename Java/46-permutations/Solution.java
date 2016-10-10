public class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        boolean[] record = new boolean[nums.length];
        for (int i = 0; i < record.length; i++)
            record[i] = false;
        
        doPermute(nums, res, record, new ArrayList<Integer>());
        return res;
    }
    
    public void doPermute(int[] nums, List<List<Integer>> res, boolean[] record, List<Integer> partial) {
        boolean allUsed = true;
        for (int i = 0; i < record.length; i++) {
            if (!record[i]) {
                allUsed = false;
                partial.add(nums[i]); 
                record[i] = true;
                doPermute(nums, res, record, partial);
                record[i] = false;
                partial.remove(Integer.valueOf(nums[i]));
            }
        }
        
        if (allUsed)
            res.add(new ArrayList<>(partial));
    }
}

