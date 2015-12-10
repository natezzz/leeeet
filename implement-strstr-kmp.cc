class KMP
{
public:
    KMP() = default;
    int match(string text, string pat);
private:
    vector<int> temporaryArray(string pat);
};

vector<int> KMP::temporaryArray(string pat)
{
    vector<int> lps(pat.size(), 0);
    int index = 0;
    for (int i = 1; i < pat.size();) {
        if (pat[i] == pat[index]) {
            lps[i] = index + 1;
            index++;
            i++;
        } else {
            if (index != 0) {
                index = lps[index-1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    
    return lps;
}

int KMP::match(string text, string pat)
{
    vector<int> lps = temporaryArray(pat);
    int i = 0;
    int j = 0;
    while (i < text.size() && j < pat.size()) {
        if (text[i] == pat[j]) {
            i++;
            j++;
        } else {
            if (j != 0) {
                j = lps[j-1];
            } else {
                i++;
            }
        }
    }
    
    if (j == pat.size()) {
        return (i - pat.size());
    } else {
        return -1;
    }
}

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size() == 0 && needle.size() == 0) {
            return 0;
        }
        KMP kmp;
        return kmp.match(haystack, needle);
    }
};
