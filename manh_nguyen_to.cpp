#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
using namespace std;
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
#endif

void runtime(){
    #ifndef ONLINE_JUDGE
        cerr << ">> Runtime: " << (double) clock() / CLOCKS_PER_SEC * 1000 << "ms" << endl;
    #endif
}
const int MAXN = 1000005;

vector<int> sieve(int n) {
    vector<int> primeFactors(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        if (primeFactors[i] == 0) {
            for (int j = i; j <= n; j += i) {
                primeFactors[j]++;
            }
        }
    }
    return primeFactors;
}

void sol() {
    vector<int> primeFactors = sieve(MAXN);

    int n;
    cin >> n;

    int maxFactors = 0, minNumber = -1;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (primeFactors[num] > maxFactors) {
            maxFactors = primeFactors[num];
            minNumber = num;
        } 
    }

    cout << minNumber << endl;
}

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sol();

    runtime();
    return 0;
}

/*⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
			 ⠀⠀⠀⠀⠀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
		 ⠀⠀⠀⠀⠀⠀⢀⣠⡴⠖⠋⠉⠁⠀⠀⠉⠁⠀⠀⠀⠉⠉⠉⠓⠶⢤⣀⡀⢀⣞⢹⡀⠀⣠⡦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠖⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⣄⡀⠈⠙⠿⣿⣿⡇⣰⣯⡇⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠋⠀⠀⢀⣤⠞⠋⠀⢠⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣆⠀⠀⠈⠻⣿⣿⣟⣇⡴⢻⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠟⠁⠀⠀⠀⣰⠏⠀⠀⠀⢠⡟⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠈⠃⠀⠀⠀⠘⢯⣿⠟⣴⣿⠤⣤⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠿⠿⣾⠇⠀⠀⢠⡾⠁⠀⢀⡀⢀⣾⠀⠀⠀⠀⠀⠀⠀⠀⢠⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣨⢿⣰⣿⠃⠀⠈⢳⡀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠁⠀⠀⣰⠏⠀⠐⠋⠉⣩⡟⣿⢦⠀⠀⠀⠀⠀⠀⣠⣿⡶⠶⠶⠶⢤⡀⠀⠀⠀⠀⢀⢜⣽⣿⢿⣽⠀⠀⠀⠀⢳⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣼⣁⣀⣠⠞⠁⢠⣄⡤⠶⠾⠿⢤⣸⡄⠀⠀⠀⠀⠠⡾⠁⠈⣧⣀⣤⣀⣀⠹⠆⠀⠀⠐⢧⡺⣥⡽⣣⣿⠀⠀⠀⠀⠈⣧⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣷⠦⠤⣤⣤⣴⣾⠏⣰⠛⠳⡆⠀⠹⣿⡄⠀⠀⣇⡾⠁⢠⡞⠉⢀⣤⣄⠉⢳⡴⠀⡇⠀⠀⠱⣭⣾⠛⡟⠀⠀⠀⠀⠀⢹⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⢿⠀⠀⠀⠀⣿⣏⠀⠹⠷⠾⠃⠀⠀⣿⠙⢦⡀⡿⠀⠀⣿⠀⠀⢿⣄⣸⡇⠀⢷⠀⡇⠀⠀⣠⢼⣾⡄⣿⣤⣀⠀⠀⠀⢸⡆⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢠⠏⢈⣷⣠⡀⠀⢸⡼⣆⠀⠀⠀⠀⠀⣰⠏⠀⠀⠙⢷⠀⠀⢿⡀⠀⠀⠉⠁⠀⢀⡟⢻⡇⠀⠀⢻⢸⢿⣿⣿⠚⠛⠀⠀⠀⠈⡇⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⠟⢀⡞⢸⡿⢿⠶⢶⠿⠏⠛⠶⠤⠶⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠳⢦⣀⣀⣀⡴⠟⢀⡼⠁⠀⠀⠈⣿⣆⢹⣿⡆⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣾⢀⡟⠀⢸⡇⠀⢰⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⣦⣀⣀⣀⡶⠀⠀⠀⠀⠀⠉⠀⠀⣠⠞⠁⢀⣠⣀⡼⠧⣌⣙⢻⠁⠀⠀⠀⠀⢰⡇⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣇⣼⠀⠀⠘⡇⠀⠘⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⡴⢾⡷⢶⣺⡿⣿⠯⣄⣀⣀⣉⣛⣶⣦⠄⠀⠀⢸⠁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠙⢿⣦⠀⠀⢧⠀⢠⡌⠳⢦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠁⠈⠁⢠⡇⠀⠀⠈⠉⢉⡏⠀⠀⠀⠀⠀⣼⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣆⠀⢷⣄⠀⠈⢿⠓⣦⣤⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣠⡞⣁⡴⠀⢠⡞⠀⠀⠀⠀⠀⣾⠀⠀⠀⠀⠀⠀⡟⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣈⣳⣬⣿⣟⣶⢬⣷⣽⣯⣥⣭⣿⡛⣻⢟⣿⣿⡟⠉⢛⣻⣿⣿⠏⢀⣴⣯⣤⣀⠀⣀⣀⣰⠃⠀⠀⠀⠀⠀⢠⠇⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣳⣿⣿⣿⣿⡿⣫⡟⠀⣽⣿⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣿⣿⣿⡟⣁⡴⢿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⡖⠛⠛⠋⠙⣿⣿⠟⣺⣟⣁⣠⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣧⣾⣿⡟⠛⣿⣿⣿⠛⠙⢲⡄⠀⠀⠀⠀⡟⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠻⣄⣀⠀⠀⠘⣿⡾⠻⣏⣽⡟⢻⡿⠋⣴⣻⢿⣿⣾⣿⣿⣷⠉⠻⢟⣿⣿⡇⠈⢻⣿⡷⣶⣿⠟⣁⣀⣤⠞⠀⠀⠀⠀⢰⠇⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠯⠤⠖⠚⠛⢧⣀⡿⠃⠀⣼⠀⠀⢹⣿⣾⣿⣿⣿⣿⡿⠀⠀⠀⠙⠻⢧⡀⠀⢻⣽⡿⣧⣀⣸⠇⠀⠀⠀⠀⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠁⢀⡼⠃⠀⠀⣼⡟⢻⡻⢿⡿⣟⣇⠀⠀⠀⠀⠀⠀⠙⢿⡉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠏⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠁⠀⠀⣸⣿⠁⢰⣷⣯⡇⠹⡿⡄⠀⠀⠀⠀⠀⠀⠀⠹⢦⡀⣀⣠⠞⠃⠀⢀⣴⡗⠀⡾⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡞⠀⠀⠀⢰⣿⠃⠀⢨⢿⣿⡄⠀⢻⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠹⢯⣀⡤⠴⠞⠋⣸⢁⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠏⠀⠀⠀⢠⣿⡇⠀⠀⠘⢿⣿⠃⠀⠀⢿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣦⡀⠀⢰⣿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⢻⣄⠀⠀⢀⣾⣾⠀⠀⠀⣴⡋⠙⣦⠀⠀⠈⣿⣷⣄⠀⠀⠀⠀⠀⠀⣀⡴⠃⢈⣻⡦⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⢾⣷⣶⣿⣻⣿⣦⣄⣀⣠⠏⠸⣏⡀⠀⣀⣿⣏⣻⣷⡖⢒⣛⣿⣯⡵⠚⢿⡉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⣹⣆⣸⣿⣿⣿⣿⡿⠦⠬⢭⣭⣍⣩⣭⠭⠽⣿⣿⣿⣟⡯⠭⣎⠛⢿⣇⠀⣰⢿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡿⢿⣿⣍⠛⣿⠿⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⠞⠳⣶⠽⠾⠯⠹⠟⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢧⣀⣨⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
