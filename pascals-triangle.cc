class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if (numRows == 0)
            return result;
        
        vector<int> firstRow = {1};
        result.push_back(firstRow);
        for (int i = 1; i < numRows; i++) {
            vector<int> curRow;
            int totalColumn = i + 1;
            for (int j = 0; j < totalColumn; j++) {
                // first and last column of each row is always 1
                if (j == 0 || j == (totalColumn-1)) {
                    curRow.push_back(1);
                } else {
                    curRow.push_back(result[i-1][j-1] + result[i-1][j]);
                }
            }
            result.push_back(curRow);
        }
        
        return result;
    }
};
