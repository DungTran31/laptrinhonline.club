#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
#endif

void runtime(){
    #ifndef ONLINE_JUDGE
        cerr << "\n>> Runtime: " << (double)clock() / CLOCKS_PER_SEC << "s\n";
    #endif
}

void sol() {
    string A, B;

    while (cin >> A >> B) {
        bool isSubstring = false;

        // Check if B is a substring of A
        for (int i = 0; i <= A.length() - B.length(); i++) {
            if (A.substr(i, B.length()) == B) {
                isSubstring = true;
                break;
            }
        }

        cout << (isSubstring ? 1 : 0) << endl;
    }

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