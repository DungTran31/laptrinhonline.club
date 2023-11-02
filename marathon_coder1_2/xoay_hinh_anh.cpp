#include <iostream>
#include <vector>

using namespace std;

void rotateMatrix(vector<vector<int>>& mat) {

    vector<vector<int>> result(3, vector<int>(3));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat[3 - j - 1][i];
        }
    }


    mat = result;
}

int main() {

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};


    rotateMatrix(matrix);

 
    cout << "[";
    for (int i = 0; i < 3; i++) {
        cout << "[";
        for (int j = 0; j < 3; j++) {
            if(i==2&&j==0) {
                cout << matrix[i][j] << " ";
                if (j < 3 - 1) {
                    cout << ",";
                }
                continue;
            }
            cout << matrix[i][j];
            if (j < 3 - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i < 3 - 1) {
            cout << ",";
        }
    }
    cout << "]";

    return 0;
}