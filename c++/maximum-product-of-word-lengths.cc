class Solution {
public:
    int maxProduct(vector<string>& words) {
        const int LETTERS = 26;
        vector<bitset<LETTERS>> allWords;

        for (auto word: words) {
            bitset<LETTERS> set;
            for (auto c: word) {
                set.set(c - 'a');
            }
            allWords.push_back(set);
        }

        int maxProduct = 0;
        for (int i = 0; i < allWords.size(); i++) {
            for (int j = i; j < allWords.size(); j++) {
                if ((allWords[i] & allWords[j]).none()) {
                    int product = words[i].size() * words[j].size();
                    if (product > maxProduct) {
                        maxProduct = product;
                    }
                }
            }
        }

        return maxProduct;
    }
};
