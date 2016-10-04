public class Solution {
    
    char[][] map = {
        {}, //0
        {},
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'},
        {'j', 'k', 'l'},
        {'m', 'n', 'o'},
        {'p', 'q', 'r', 's'},
        {'t', 'u', 'v'},
        {'w', 'x', 'y', 'z'}
    };
    
    public List<String> letterCombinations(String digits) {
        List<String> res = new ArrayList<>();
        if (digits.length() != 0) {
            find(res, digits, 0, "");
        }
        return res;
    }
    
    public void find(List<String> res, String digits, int n, String partial) {
        if (n == digits.length()) {
            res.add(partial);
            return;
        }
        
        char[] button = map[digits.charAt(n)-'0'];
        for (int i = 0; i < button.length; i++) {
            find(res, digits, n+1, partial+button[i]);
        }
    }
    
}

