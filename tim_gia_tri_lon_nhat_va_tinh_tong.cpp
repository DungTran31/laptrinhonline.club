#include <bits/stdc++.h>
int main() { 
    int n; scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    if(n==1){
        double ans = (double) a[0] / (double) n;
        printf("%.2f\n", ans);
        printf("%d", a[0]);
        return 0;
    }
    double max = 0.0;
    for (int i = 0; i < n; i++) {
        double x = (double) a[i] / (double) (n - i);
        if (x > max) {
            max = x;
        }
    }
    printf("%.2f\n", max);

    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += a[i] + a[i + 1];
    }
    printf("%d", sum);
    return 0;
}