#include <bits/stdc++.h>
using namespace std;

string he10Tohe16(int he10){
    string he16;
    int i = 0;
    while (he10 != 0)
    {
        int temp = he10 % 16;
        if (temp < 10)
        {
            he16.push_back(temp + 48);
            i++;
        }
        else
        {
            he16.push_back(temp + 55);
            i++;
        }
        he10 /= 16;
    }
    reverse(he16.begin(), he16.end());
    return  he16;
}

// string he10Tohe16(int he10) {
//     string he16 = "";
//     while (he10 > 0) {
//         int sodu = he10 % 16;
//         if (sodu < 10) {
//             he16 += char(sodu + '0');
//         } else {
//             he16 += char(sodu - 10 + 'A');
//         }
//         he10 /= 16;
//     }
//     reverse(he16.begin(), he16.end());
//     return he16;
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int v;
    cin >> v;
    cout << he10Tohe16(v);
    return 0;
}
