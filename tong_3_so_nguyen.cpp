#include <iostream>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;

    int count = 0;

    for (int x = 0; x <= N; ++x) {
        for (int y = 0; y <= N; ++y) {
            int z = S - x - y;
            if (z >= 0 && z <= N) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
