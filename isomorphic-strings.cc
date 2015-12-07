class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // assume s and t have the same length
        return check(s, t) && check(t, s);
    }
    
    bool check(string s, string t) {
        std::map<char, char> repMap;   // replacement map
        for (int i = 0; i < s.size(); i++) {
            if (repMap.find(s[i]) == repMap.end()) { // not found in keys
                repMap[s[i]] = t[i];
            } else {
                if (repMap[s[i]] != t[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};
