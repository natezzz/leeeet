public class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
        boolean[][] table = new boolean[n][n];
        
        for (int i = 0; i < n; i++) {
            table[i][i] = true;
        }
        
        for (int i = 0; i < n-1; i++) {
            table[i][i+1] = (s.charAt(i) == s.charAt(i+1));
        }
        
        for (int k = 2; k < n; k++) {
            for (int i = 0; i < n-k; i++) {
                if (s.charAt(i) == s.charAt(i+k)) {
                    table[i][i+k] = table[i+1][i+k-1];
                } else {
                    table[i][i+k] = false;
                }
            }
        }
        
        for (int maxLen = n-1; maxLen >= 0; maxLen--) {
            for (int i = 0; i < (n-maxLen); i++) {
                if (table[i][i+maxLen]) {
                    return s.substring(i, i+maxLen+1);
                }
            }
        }
        
        return "";
    }
}

