#include <stdio.h>

int main(){
    int A, B; 
    scanf("%d%d", &A, &B); 
    int gio = A+B; 
    if (gio >= 24){ 
        gio= A+B-24; 
    }else { 
        gio = A+B; 
    } printf("%d", gio); 
    return 0; 
}