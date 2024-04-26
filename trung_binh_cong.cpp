#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int sum = 0, dem = 0;
    int avr = 1;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    avr = sum/n;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<avr) dem++;
    }
    
    if(n == 0) {
        cout << 0 << " " << 0; 
    } else {
        cout << avr << " " << dem;
    }
}