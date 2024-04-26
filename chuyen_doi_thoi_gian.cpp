#include <stdio.h>
int main(){ 
    int t,p,g,gi; 
    scanf("%d",&t); 
    g=t/3600; 
    p=(t-g*3600)/60; 
    gi=t-p*60-g*3600; 
    printf("%d:%d:%d",g,p,gi);
}