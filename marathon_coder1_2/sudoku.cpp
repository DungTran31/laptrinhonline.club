#include <iostream>
#include <vector>
#include <unordered_set>

bool isValidRow(const std::vector<char>& row) {
    std::unordered_set<char> seen;
    for (char num : row) {
        if (num != '.') {
            if (seen.count(num) > 0) {
                return false;
            }
            seen.insert(num);
        }
    }
    return true;
}

bool isValidSudoku(std::vector<std::vector<char>>& board) {
    // Kiểm tra tính hợp lệ của từng hàng
    for (const auto& row : board) {
        if (!isValidRow(row)) {
            return false;
        }
    }

    // Kiểm tra tính hợp lệ của từng cột
    for (int col = 0; col < 9; col++) {
        std::vector<char> column;
        for (int row = 0; row < 9; row++) {
            column.push_back(board[row][col]);
        }
        if (!isValidRow(column)) {
            return false;
        }
    }

    // Kiểm tra tính hợp lệ của từng ô 3x3
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            std::vector<char> square;
            for (int x = i; x < i + 3; x++) {
                for (int y = j; y < j + 3; y++) {
                    square.push_back(board[x][y]);
                }
            }
            if (!isValidRow(square)) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    std::vector<std::vector<char>> sudoku_board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','6','.','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','1','.'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    if (isValidSudoku(sudoku_board)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
