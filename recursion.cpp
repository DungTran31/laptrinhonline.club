#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// đệ quy: gọi lại chính hàm đó 

/*
bool isOdd(int x){
    if(x==1) return true;
    if(x==0) return false;
    return !isOdd(x-1);
}

long fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1) + fibo(n-2);
}
*/

bool Try(int a, int n) {
	if (a > n / 2) {
		return true;
	} else {
		if (n % a == 0) return false;
		else
			return Try(a + 1, n);
	}
}

long long pow(long long a, long long b){ 
    if(b == 0) return 1;
    if(b == 1) return a%1000;
    long long temp = pow(a,b/2)%1000;
    return temp%1000*temp%1000*pow(a,b%2)%1000;
}

int pow_mod(int a,int b){
    if(b==0)return 1;
    return (int)pow(pow_mod(a,b/2),2) %mod * (b%2==0?1:a) %mod;
}

int main(){
    // int n; cin >> n;
    // if(isOdd(n)) cout << "YES\n";
    // else cout << "NO\n";
    // cout << fibo(n) << endl;

    // int n;
	// scanf("%d", &n);
	// bool check = Try(2, n);
	// if (check) 
	// 	printf("So nguyen to");
	// else
	// 	printf("Ko phai SNT");

    long long a, b; cin >> a >> b;
    cout << setw(3) << setfill('0') << pow(a,b) << endl;
    // printf("%03lld",pow_mod(a,b));
}
