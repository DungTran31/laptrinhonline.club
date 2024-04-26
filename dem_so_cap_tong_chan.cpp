#include"stdio.h"
#include"math.h"
int main()
{
    long n,a,i;
    long c=0,l=0,kq=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&a);
        if(a%2==0) c++; 
        else l++;
    }
    if(c>1) kq+=(c*(c-1)/2);
    if(l>1) kq+=(l*(l-1)/2);
    printf("%ld",kq);
}

/*
    int res=0,odd=0,even=0; 
    for (int i=0;i<n;i++) { 
        int x;cin >> x; 
        res+=x&1?odd++:even++; 
    } 
    cout << res;
*/

