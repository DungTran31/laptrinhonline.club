#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;
bool tmtienWins(int n) {
    // Nếu số đá ban đầu là số chẵn, tmtien luôn thắng
    if (n % 2 == 0) {
        return true;
    }

    // Nếu số đá ban đầu là số lẻ, tmtien chơi tối ưu và để lại số chẵn cho nqson
    return !tmtienWins(n - 1);
}

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    if (tmtienWins(n)) {
        cout << "tmtien" << endl;
    } else {
        cout << "nqson" << endl;
    }
    return 0;
}

