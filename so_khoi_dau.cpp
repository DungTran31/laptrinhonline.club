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
        fprintf(stderr, ">> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
}

void sol(){
    int n; cin >> n;
    set<string> se;
    char ch[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 1; j <= s.size(); j++) {
            se.insert(s.substr(0, j));
        }
    }
    queue<string> q;
    q.push("");
    for (int i = 1; i < 10; i++) {
        string tmp = q.front();
        tmp.push_back(ch[i]);
        if (se.count(tmp) == 0) {
            cout << tmp;
            return;
        }
        q.push(tmp);
    }
    q.pop();
    while (!q.empty()) {
        for (int i = 0; i < 10; i++) {
            string tmp = q.front();
            tmp.push_back(ch[i]);
            if (se.count(tmp) == 0) {
                cout << tmp;
                return;
            }
            q.push(tmp);
        }
        q.pop();
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
