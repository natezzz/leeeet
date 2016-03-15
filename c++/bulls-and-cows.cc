class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0;
        int cow = 0;
        
        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i]) {
                secret[i] = '-';
                guess[i] = '-';
                bull++;
            }
        }
        
        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] != guess[i]) {
                for (int j = 0; j < secret.size(); j++) {
                    if (secret[j] == guess[i]) {
                        secret[j] = '-';
                        cow++;
                        break;
                    }
                }
            }
        }
        
        std::stringstream ss;
        ss << bull << "A" << cow << "B";
        return ss.str();
    }
};
