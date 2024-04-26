#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y; cin >> x >> y;
    int sum = 0;
    if(x>y) swap(x,y);
    for (int i = x; i <= y; i++)
    {
        if(i%13!=0){
            sum += i;
        }
    }
    cout << sum;
}