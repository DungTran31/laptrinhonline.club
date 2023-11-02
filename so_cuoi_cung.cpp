#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MOD = (int)1e9 + 7;

int main(){
	int n, m, k, du = 1; 
	cin >> n >> m;
	k = n % 10; 
    for(int i = 0; i < m; i++){ 
        du *= k;
        du = du % 10; 
    }	
    cout << du << endl; 
    return 0;
}

/*
int main(){
    int a;
    unsigned long long int b;
    cin>>a>>b;
    
    unsigned long long result = 1;
    for (int i = 1; i <= b; i++) {
        result *= a;
        result %= 10;
    }
    
    cout<<result;
}
*/