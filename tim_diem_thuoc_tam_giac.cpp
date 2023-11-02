#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;
struct Point {
    int x, y;
};

double kc(Point A, Point B) {
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Point A, B, C, M;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;
    cin >> M.x >> M.y;

    Point res;

    double MA = kc(M, A);
    double MB = kc(M, B);
    double MC = kc(M, C);

    if (MA >= MB && MA >= MC) {
        res = A;
    } else if (MB >= MA && MB >= MC) {
        res = B;
    } else {
        res = C;
    }

    cout << res.x << " " << res.y << endl;

    return 0;
}
