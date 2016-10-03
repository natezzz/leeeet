public class Solution {
    public String longestPalindrome(String s) {
        List<String> candidates = new ArrayList<>();
        
        for (int i = 0; i < s.length(); i++) {
            candidates.add(expands(s, i, i));
            candidates.add(expands(s, i, i+1));
        }
        
        String maxStr = "";
        for (String str : candidates) {
            if (str.length() > maxStr.length()) {
                maxStr = str;
            }
        }
        
        return maxStr;
    }
    
    public String expands(String s, int i, int j) {
        while (i >= 0 && j < s.length()) {
            if (s.charAt(i) == s.charAt(j)) {
                i--;
                j++;
            } else {
                break;
            }
        }
        return s.substring(i+1, j);
    }
}

