class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.size() == 0)
            return "";
        
        int shortestLen = std::numeric_limits<int>::max();
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].size() < shortestLen) {
                shortestLen = strs[i].size();
            }
        }
        
        string result;
        for (int i = 0; i < shortestLen; i++) {
            char c = strs[0][i];
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != c) {
                    return result;
                }
            }
            result.push_back(strs[0][i]);
        }
        
        return result;
    }
};
