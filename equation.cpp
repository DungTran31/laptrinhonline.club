#include <stdio.h>

int main() {
    float a, b; 
    scanf("%f%f", &a, &b);
    if(a==0){
        if(b==0) {
            printf("Vo So Nghiem");
        }else{
            printf("Vo Nghiem");
        }
    } else {
        if(b==0) {
            printf("%.3f", 0);
        }else {
            printf("%.3f",(-b/a));
        }
    }
}