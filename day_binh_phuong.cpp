#include <stdio.h>
#include <math.h>

int main()
{
    int n, s;
    do{
        scanf("%d", &n);
    } while (n < 5 || n > 2000);

    for (int i = 2; i <= n; i += 2){
        s = pow(i, 2);
        printf("%d ^ 2 = %d\n", i, s);
    }

    return 0;
}