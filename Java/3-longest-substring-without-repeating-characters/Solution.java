public class Solution {
    public int lengthOfLongestSubstring(String s) {
        if (s == null || s.length() == 0) {
            return 0;
        }
        
        int begin = 0;
        int maxLen = 0;
        
        Map<Character, Integer> table = new HashMap<>();
        for (int i = 0; i < s.length(); ) {
            char c = s.charAt(i);
            
            if (table.containsKey(c)) {
                // duplicate
                int curLen = i - begin;
                if (curLen > maxLen) {
                    maxLen = curLen;
                }
                
                i = table.get(c) + 1;
                begin = i;
                table.clear();
            } else {
                table.put(c, i);
                i++;
            }
        }
        
        if (s.length() - begin > maxLen) {
            maxLen = s.length() - begin;
        }
        
        return maxLen;
    }
}

