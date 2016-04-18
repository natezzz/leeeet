class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return checkHorizontal(board) && checkVertical(board) && checkSquare(board);
    }
    
    bool checkHorizontal(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            if (!isValidList(board[i]))
                return false;
        }
        return true;
    }
    
    bool checkVertical(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            vector<char> column;
            for (int j = 0; j < board.size(); j++) {
                column.push_back(board[j][i]);
            }
            if (!isValidList(column)) {
                return false;
            }
        }
        return true;
    }
    
    bool checkSquare(vector<vector<char>>& board) {
        for (int i = 1; i < board.size(); i = i + 3) {
            for (int j = 1; j < board.size(); j = j + 3) {
                vector<char> column;
                for (int nx = -1; nx <= 1; nx++) {
                    for (int ny = -1; ny <= 1; ny++){
                        column.push_back(board[i+nx][j+ny]);
                    }
                }
                if (!isValidList(column)) {
                    return false;
                }
            }
        }
        return true;
    }
    
    // check given 9 chars are valid
    bool isValidList(vector<char> vec) {
        std::sort(vec.begin(), vec.end());
        for (int i = 0; i < vec.size() - 1; i++) {
            if (vec[i] == '.')
                continue;
            if (vec[i] < '1' || vec[i] > '9')
                return false;
            if (vec[i] == vec[i+1])
                return false;
        }
        return true;
    }
};
