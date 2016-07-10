class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1, v2;
        int i, j;
        for (i = 0; i < version1.size();) {
            j = i;
            while (j < version1.size()) {
                if (version1[j] == '.') {
                    v1.push_back(std::stoi(version1.substr(i, j-i)));
                    break;
                }
                j++;
            }
            if (j == version1.size()) {
                v1.push_back(std::stoi(version1.substr(i, j-i)));
            }
            i = j+1;
        }

        for (i = 0; i < version2.size();) {
            j = i;
            while (j < version2.size()) {
                if (version2[j] == '.') {
                    v2.push_back(std::stoi(version2.substr(i, j-i)));
                    break;
                }
                j++;
            }
            if (j == version2.size()) {
                v2.push_back(std::stoi(version2.substr(i, j-i)));
            }
            i = j+1;
        }

        if (v1.size() < v2.size()) {
            while (v1.size() != v2.size()) {
                v1.push_back(0);
            }
        } else if (v1.size() > v2.size()) {
            while (v1.size() != v2.size()) {
                v2.push_back(0);
            }
        }

        for (i = 0; i < v1.size(); i++) {
            if (v1[i] > v2[i]) {
                return 1;
            } else if (v1[i] < v2[i]) {
                return -1;
            }
        }
        return 0;
    }
};
