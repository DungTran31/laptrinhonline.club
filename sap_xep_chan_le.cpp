#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int m[2000]; // Mảng để lưu dãy số nguyên
    int l[2000]; // Mảng để lưu các số lẻ
    int c[2000]; // Mảng để lưu các số chẵn

    int d = 0, k = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &m[i]);
        if (m[i] % 2) {
            l[d++] = m[i];
        } else {
            c[k++] = m[i];
        }
    }

    for (int i = 0; i < d; ++i) {
        printf("%d ", l[i]);
    }
    for (int i = k - 1; i >= 0; --i) {
        printf("%d ", c[i]);
    }

    return 0;
}
