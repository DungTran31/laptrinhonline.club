#include "stdio.h"
int main(){
    int n, i;
    scanf("%d", &n);
    if(n>=1 && n<=9) printf("1");
    if(n>9){
        i=n/9;
        if(n-9*i==0) printf("%d", i);
        if(n-9*i>=1 && n-9*i <=9) printf("%d", i+1);
    }   

}

