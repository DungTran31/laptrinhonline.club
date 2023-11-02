#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
    // Kiểm tra hàng ngang
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1) {
            return false;
        }
    }

    // Kiểm tra đường chéo trái trên
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // Kiểm tra đường chéo trái dưới
    for (int i = row, j = col; i < n && j >= 0; i++, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

int countNQueensSolutions(vector<vector<int>>& board, int col, int n) {
    // đã đặt được n quân hậu
    if (col == n) {
        return 1;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1;
            count += countNQueensSolutions(board, col + 1, n);
            board[i][col] = 0;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    // khởi tạo mảng 2D với tất cả giá trị bằng 0
    vector<vector<int>> board(n, vector<int>(n, 0));

    int res = countNQueensSolutions(board, 0, n);
    cout <<  res << endl;

    return 0;
}
