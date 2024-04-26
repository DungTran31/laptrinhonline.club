#include <iostream>
#include <stdlib.h>
#include<iomanip>
using namespace std;

void inputMatrix(int** &matrix, int rows, int cols) {
    matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void multiplyMatrices(int** a, int** b, int** &result, int m, int n, int p) {
    result = new int*[m];
    for (int i = 0; i < m; i++) {
        result[i] = new int[p];
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int m, n, p;
    cin >> m >> n >> p;

    int** a;
    int** b;
    int** result;

    inputMatrix(a, m, n);

    inputMatrix(b, n, p);

    multiplyMatrices(a, b, result, m, n, p);

    printMatrix(result, m, p);

    // Free allocated memory
    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    for (int i = 0; i < n; i++) {
        delete[] b[i];
    }
    delete[] b;

    for (int i = 0; i < m; i++) {
        delete[] result[i];
    }
    delete[] result;

    return 0;
}
