#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int h[n], m[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i] >> m[i];
    }
    int dem[24][60] = {0};
    for (int i = 0; i < n; i++) {
        dem[h[i]][m[i]]++;
    }
    int max = 0;
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 60; j++) {
            if (max < dem[i][j]) {
                max = dem[i][j];
            }
        }
    }
    cout << max;
}