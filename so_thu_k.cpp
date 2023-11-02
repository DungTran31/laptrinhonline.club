#include <iostream>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    // long long count = 0; 
    // long long num = 1;   
    // while (count < k) {
    //     if (num % n != 0) {
    //         count++; 
    //     }
    //     if (count < k) {
    //         num++; 
    //     }
    // }

    cout << k+(k-1)/(n-1);  
    return 0;
}
