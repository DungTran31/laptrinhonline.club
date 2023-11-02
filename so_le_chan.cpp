#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int numbers[2000];
    int sumEven = 0, sumOdd = 0;
    int countEven = 0, countOdd = 0;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
            countEven++;
        } else {
            sumOdd += numbers[i];
            countOdd++;
        }
    }

    int avgEven = (countEven > 0) ? sumEven / countEven : 0;
    int avgOdd = (countOdd > 0) ? sumOdd / countOdd : 0;

    printf("%d\n%d", avgOdd, avgEven);

    return 0;
}
