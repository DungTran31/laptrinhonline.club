#include <stdio.h>

int main(){
    int n;
    float t;
    do{
        scanf("%d", &n);
    } while (n < 0 || n > 1000);

    if (n == 0){
        printf("%d", 0);
        return 0;
    }
    if (n > 0){
        if (n > 100){
            t += 100 * 1.0;
        }else{
            t += n * 1.0;
        }
        n -= 100;
    }
    if (n > 0){
        if (n > 150){
            t += 150 * 1.2;
        }else{
            t += n * 1.2;
        }
        n -= 150;
    }
    if (n > 0){
        if (n > 250){
            t += 250 * 1.7;
        }else{
            t += n * 1.7;
        }
        n -= 250;
    }
    if (n > 0){
        t += n * 2.2;
    }
    printf("%.3f", t);

    return 0;
}