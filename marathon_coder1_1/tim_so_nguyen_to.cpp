#include <iostream>
#include <algorithm>
#include <math.h>   
using namespace std;
typedef long long ll;

// Sàng số nguyên tố

ll prime[1000001];

//O(nloglogn)
void sieve(){
    // Coi tất cả các số từ 0 cho tới n là số nguyên tố
    // prime[i] = 1 là số ngto
    // prime[i] = 0 ko là số ngto
    for(ll i = 0; i<=1000000;i++){
        prime[i]= 1;
    }
    //Loại 0 và 1 thủ công
    prime[0] = prime[1] = 0;
    for(ll i = 2; i<=1000; i++){// i<=1000 ý là căn bậc 2 của n là 1000000
        //Nếu i là số nguyên tố
        if(prime[i]){
            //Duyệt tất cả các bội của i và cho nó ko là số ngto
            for(ll j = i*i; j<=1000000;j+=i){
                prime[j] = 0; // j ko còn là số ngto nữa
            }
        }
    }
}

int main(){
    sieve();
    ll t; cin >> t;
    while (t--)
    {
        ll m,n; cin >> m >> n;
        for(ll i = m; i <=n;i++){
            if(prime[i]){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    
    

}