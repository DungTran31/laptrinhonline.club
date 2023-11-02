#include <stdio.h>
#include <math.h>

float tinhS(float a, float b, float c){
    float p = a + b + c;
    p /= 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main(){
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("%.2f\n", a + b + c);
        printf("%.2f", tinhS(a, b, c));
    }
    else
    {
        printf("khong la tam giac");
    }

    return 0;
}