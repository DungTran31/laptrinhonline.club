#include <bits/stdc++.h>
typedef struct {
    int bks;
    float tt;
    char cty;
}bienkiemsoat;

int cmp(const void * a, const void * b)
{
    bienkiemsoat *x = (bienkiemsoat*) a;
    bienkiemsoat *y = (bienkiemsoat*) b;
    return x->tt > y->tt;
}

main(){
    int n;
    scanf("%d",&n);
    bienkiemsoat s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].bks);
        scanf("%f ",&s[i].tt);
        scanf("%c", &s[i].cty);
    }
    int d=0;
    for(int i=0;i<n;i++){
        if(s[i].cty == 'B'){
            if(s[i].bks%3==0){
                d++;    
            }
        }
    }
    printf("%d\n",d);
    qsort(s, n, sizeof(bienkiemsoat), cmp);
    for(int i=0;i<3;i++){
        printf("%d\n", s[i].bks);
    }

}