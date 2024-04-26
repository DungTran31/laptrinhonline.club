#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long edge = sqrt(n*2);
    if(edge%2!=0) edge -=1;
    cout << edge << endl;

    return 0;
}
