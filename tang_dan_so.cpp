#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
    {
        int PA, PB; 
        double G1, G2;
        cin >> PA >> PB >> G1 >> G2;
        int dem = 0;
        while (PA<=PB)
        {
            PA = floor(PA + PA * (G1/100));
            PB = floor(PB + PB * (G2/100));                
            dem++;

            if(dem > 100){
                cout << "Mais de 1 seculo.\n";
                break;
            }

        }
        if(dem <= 100)
            cout << dem << " anos.\n";
    }
    

    return 0;
}

