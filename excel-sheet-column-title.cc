class Solution {
public:
    string convertToTitle(int n) {
        string title = "";
        while (n != 0) {
            n -= 1;
            title.insert(0, 1, (n % 26) + 'A');
            n /= 26;
        }
        return title;
    }
};
