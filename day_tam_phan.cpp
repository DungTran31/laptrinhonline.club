#include <iostream>
#include <vector>

void TamPhan(int n, std::vector<int>& a, int index, int& count) {
    if (index == n) {
        for (int i = 0; i < n; ++i) {
            std::cout << a[i] << " ";
        }
        std::cout << std::endl;
        count++;
        return;
    }

    for (int i = 0; i < 3; ++i) {
        a[index] = i;

        if (index > 0 && (a[index] == a[index - 1] || (a[index] + a[index - 1]) % 3 == 0))
            continue;

        TamPhan(n, a, index + 1, count);
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    int count = 0;

    TamPhan(n, a, 0, count);

    std::cout << count << std::endl;

    return 0;
}
