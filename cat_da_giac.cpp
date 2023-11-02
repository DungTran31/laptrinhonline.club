// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(0);
// 	cin.tie(0);cout.tie(0);

// 	ll n,k; cin >> n >> k;
// 	ll a[k]; 
// 	ll sum = 0; // tổng số cạnh của tất cả đa giác muốn cắt ra
//     for(ll i = 0; i < k; i++) {
//         cin >> a[i];
//         sum += a[i];
//     }
//     // bởi mỗi đa giác cần ít nhất 3 đỉnh, và nếu bạn có thêm đỉnh, 
//     // bạn cần thêm ít nhất 2 cạnh để kết nối các đỉnh đó.
// 	sum-=(k-1)*2; // k-1: số đỉnh 
// 	if(n > sum) cout << "NO";
// 	else cout << "YES";
//     return 0;
// }

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n, k;
    std::cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int p;
        std::cin >> p;
        n -= p;
        n += 2;
    }
    if (n == 2) std::cout << "YES";
    else std::cout << "NO";    
}
/*
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n, k, tmp = 0;
    cin >> n >> k;
    ll a[k];
    for(int i = 0; i < k; i++) {
        cin >> a[i];
        tmp += a[i];
    }
    if(tmp > n + k - 1) cout << "YES";
    else cout << "NO";
}
*/
/*
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++) {
        int p;
        scanf("%d", &p);
        n -= p - 2;
    }
    if (n == 2) printf("YES");
    else printf("NO");
    return 0;
}
*/