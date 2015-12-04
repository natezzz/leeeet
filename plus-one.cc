class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // from the last number back to the first number
        // add one to the number and change the carry flag accordingly
        bool hasCarry = true;
        for (vector<int>::reverse_iterator rit = digits.rbegin();
             rit != digits.rend();
             rit++)
        {
            int toAdd = hasCarry ? 1 : 0;
            if ((*rit) + toAdd == 10) {
                *rit = 0;
                hasCarry = true;
            } else {
                *rit = (*rit) + toAdd;
                hasCarry = false;
            }
        }

        cout << "hello" << endl;
        if (hasCarry == true) {
            
            // need to add a '1' to the front
            digits.insert(digits.begin(), 1, 1);
        }
        
        return digits;
    }
};
