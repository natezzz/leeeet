class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int count = 0;

        while (i >= 0 && s[i] == ' ')
            i--;    // get rid of trailing spaces
        while (i >= 0 && s[i] != ' ') {
            i--;
            count++;
        }
        
        return count;
    }
};
