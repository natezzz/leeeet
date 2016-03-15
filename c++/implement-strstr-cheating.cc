class Solution {
public:
    int strStr(string haystack, string needle) {
        string::size_type pos = haystack.find(needle);
        
        return (pos == string::npos) ? -1 : pos;
    }
};
