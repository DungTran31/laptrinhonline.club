#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B;
    cin >> C >> D;

    // Tính thời gian bắt đầu và kết thúc chung
    int start = max(A, C);
    int end = min(B, D);

    int total = max(0, end - start);

    cout << total << endl;

    return 0;
}
