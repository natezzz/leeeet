public class Solution {
    public String countAndSay(int n) {
        String res = "1";
        char cur = res.charAt(0);
        int count = 1;
        
        for (int i = 2; i <= n; i++) {
            StringBuffer sb = new StringBuffer();
            cur = res.charAt(0);
            count = 1;
            for (int ci = 1; ci < res.length(); ci++) {
                if (res.charAt(ci) == cur) {
                    count++;
                } else {
                    sb.append((char)(count + '0'));
                    sb.append(cur);
                    cur = res.charAt(ci);
                    count = 1;
                }
            }
            sb.append((char)(count + '0'));
            sb.append(cur);
            res = sb.toString();
        }
        
        return res;
    }
}

