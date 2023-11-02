#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    long long res = 0;
    for (int i = 1; i <= n; ++i) {
        res += 2*i - 1;
    }

    std::cout << res << std::endl;

    return 0;
}

/*
int main() {
    long long n;
    std::cin >> n;

    std::cout << n * n << std::endl;

    return 0;
}
*/

/*
int main(){

    long long sum=0,n;
    cin>> n;

    sum = ((1 + (2*n - 1 ))*n )/ 2;

    cout << sum;
return 0;
}
*/

/*
int main() { 
    long long n; 
    scanf("%lld",&n); 
    long long tong = n + (n*(n-1)); 
    printf("%lld",tong); 
}
*/