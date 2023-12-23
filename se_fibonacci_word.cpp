#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> F;
vector<long long> f;

// Computes F up until F[m] such that M < F[m-3]
void precomputeF(long long M) {
    F.resize(101);
    F[0] = "0";
    F[1] = "1";
    for (int i = 1; i < 3 || F[i - 3].length() < M; i++) {
        F[i + 1] = F[i] + F[i - 1];
    }
}

void precomputef(int M) {
    f.resize(M + 1);
    f[0] = 1;
    f[1] = 1;

    for (int i = 1; i < M; i++) {
        f[i + 1] = f[i] + f[i - 1];
    }
}

long long occurrences(int n, string p) {
    if (p == "0") {
        if (n < 2) {
            return (n == 0) ? 1 : 0;
        }
        return f[n - 2];
    }
    if (p == "1") {
        if (n < 2) {
            return (n == 0) ? 0 : 1;
        }
        return f[n - 1];
    }

    int m = 3;
    while (f[m - 3] <= p.length()) {
        m++;
    }

    if (m > n) {
        m = n;
    }

    long long a = 0; // This will start with O(m-3)
    long long b = 0; // And this one with O(m-2)
    vector<long long> o(2, 0); // Overlapping count

    // Only need to find occurrences up until index f[m-1] since past that
    // we are back to F(n-2) and since F(n) starts with F(n-2) we have
    // already found all the occurrences in F(n-2) already.
    vector<int> occurrences;
    int max_index = static_cast<int>(f[m - 1]);
    int i = 0;
    while (i < F[m].length()) {
        auto found = F[m].find(p, i);
        if (found != string::npos) {
            occurrences.push_back(static_cast<int>(found));
            i = static_cast<int>(found) + 1;
        } else {
            break;
        }
    }

    for (int found : occurrences) {
        if (found < f[m - 2]) {
            if (found + p.length() - 1 < f[m - 2]) {
                b++;
            } else {
                o[0]++;
            }
        } else if (found < f[m - 1]) {
            if (found + p.length() - 1 < f[m - 1]) {
                a++;
            } else {
                o[1]++;
            }
        }
    }

    for (i = 0; i <= n - m + 1; i++) {
        long long old_b = b;
        b = b + a + o[i % 2];
        a = old_b;
    }

    return b;
}

int main() {
    precomputeF(100000);
    precomputef(100);

    int n;
    string p;
    int c = 1;
    while (cin >> n >> p) {
        cout << "Case " << c << ": " << occurrences(n, p) << "\n";
        c++;
    }
    return 0;
}
