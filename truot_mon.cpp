/*
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<int> b(m);
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::sort(a.begin(), a.end());

    for (int i = 0; i < m; i++) {
        int res = std::upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        std::cout << res << std::endl;
    }

    return 0;
}
*/

#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<int> b(m);
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::vector<int> res(m, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] <= b[j]) {
                res[j]++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        std::cout << res[i] << std::endl;
    }

    return 0;
}
