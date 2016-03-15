class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        
        // build a mark table
        int table[s.size()];
        for (int i = 0; i < s.size(); i++) {
            int line = i % (numRows*2 - 2);   // decide which block it is
            if (line >= numRows) {
                line = (numRows - (line - numRows + 2));
            }
            table[i] = line;
        }
        
        string ret = "";
        for (int line = 0; line < numRows; line++) {
            for (int i = 0; i < s.size(); i++) {
                if (table[i] == line) {
                    ret.push_back(s[i]);
                }
            }
        }
        
        return ret;
    }
};
