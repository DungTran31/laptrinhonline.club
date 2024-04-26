#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    scanf("%d", &n);
    int a[1000];
    for(i=0;i<=n;i++){
        scanf("%d", &a[i]);
    }
    float x0,s1=0;
    scanf("%f", &x0);
    for(i=1;i<=n;i++){
        s1+=i*a[i]*pow(x0,i-1);
    }
    printf("%.3f",s1);
}