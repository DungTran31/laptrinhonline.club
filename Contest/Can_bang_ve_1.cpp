#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long res = 0;
        int cnt0 = 0, cnt = 0;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            if (x > 1)
                res += x - 1;
            if (x == 0)
                cnt0++;
            if (x < 0)
            {
                res -= x + 1;
                cnt++;
            }
        }
        if (cnt0 > 0)
            cout << res + cnt0 << endl;
        else{
            if (cnt % 2 == 1)
                cout << res + 2 << endl;
            else
                cout << res << endl;
        }
    }
}