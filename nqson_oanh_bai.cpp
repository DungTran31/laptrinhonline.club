#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int n; cin >> n;
    queue<int> qu;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        qu.push(a[i]);
    }
   
    for(int i = 0; i < n; i++){
        long long card = qu.front();
        qu.pop();
        qu.push(card);
        cout << qu.front() << " ";
        qu.pop();
    }
       
    return 0;
}