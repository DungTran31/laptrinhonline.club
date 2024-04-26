#include <iostream>
#include <vector>
using namespace std;

void PascalTriangle(long n) {
    vector<vector<long>> pascal(n + 1, vector<long>(n + 1, 0));

    for (long i = 0; i <= n; i++){
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        for (long j = 1; j < i; j++){
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (long i = 0; i <= n; i++){
        for (long j = 0; j <= i; j++){
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    long n;
    cin >> n;
    PascalTriangle(n);

    return 0;
}
