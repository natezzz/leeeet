class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        vector<char> temp;
        temp.push_back('(');

        generate(ret, temp, n-1, 1);

        return ret;
    }

    void generate(vector<string>& v, vector<char> temp, int remaining, int pending) {
        if (remaining == 0 && pending == 0) {
            stringstream ss;
            for (auto c : temp)
                ss << c;
            v.push_back(ss.str());
        }

        if (pending > 0) {
            temp.push_back(')');
            generate(v, temp, remaining, pending-1);
            temp.pop_back();
        }

        if (remaining > 0) {
            temp.push_back('(');
            generate(v, temp, remaining-1, pending+1);
            temp.pop_back();
        }
    }
};
