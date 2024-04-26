#include <iostream>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    int m = k % n;
    int res = k / n;
    if(m == 0) cout << res;
    if(k<n) cout << "2";   
    else if(m != 0 && k >= n) cout << res + 1;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k; cin >> n >> k;
    int so = k/n, du = k%n;
  //  cout << so << " " << du;
    if(n>k){so = 1;}
    int a[n]; 
    for(int i=0; i<n; i++){
        a[i] = so;
    }
    while(du>0){
        for(int i=0; i<n; i++){
            if(du>0){
                du--;
                a[i]++;
            }
        }
    }
    sort(a, a+n); cout << a[n-1];
}
*/