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
    int n; 
    cin >> n;
    int a[n];
    queue<int> qu1, qu2;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        qu1.push(a[i]);
    }
    int cnt = 0;
    while(!qu1.empty()) {
        if(qu2.empty()) {
            int x = qu1.front();
            qu1.pop();
            qu2.push(x);
        } else if(qu1.front() > qu1.back() && qu2.front() > qu1.back()) {
            if(qu1.front() < qu2.front()) {
                int x = qu1.front();
                qu1.pop();
                qu1.push(x);
            } else if(qu1.front() > qu2.front()){
                int x = qu2.front();
                qu2.pop();
                qu1.push(x);
            }
        } else if(qu1.front() > qu1.back() && qu1.front() > qu2.back()) {
            int x = qu1.front(); 
            qu1.pop();
            if(qu1.back() > qu2.back()) {
                qu1.push(x);
            } else if(qu1.back() < qu2.back()){
                qu2.push(x);
            }
        } else if(qu1.front() > qu1.back() || qu2.front() > qu1.back()) {
            if(qu1.front() > qu2.front()) {
                int x = qu1.front();
                qu1.pop();
                qu1.push(x);
            } else if(qu1.front() < qu2.front()){
                int x = qu2.front();
                qu2.pop();
                qu1.push(x);
            }
        } else if(qu1.front() > qu1.back() || qu1.front() > qu2.back()) {
            int x = qu1.front();
            qu1.pop();
            if(qu1.back() < qu2.back()) {
                qu1.push(x);
            } else if(qu1.back() > qu2.back()){
                qu2.push(x);
            }
        } else {
            if(qu1.front() < qu2.front()) {
                int x = qu1.front();
                qu1.pop();
                qu1.push(x);
            } else if(qu1.front() > qu2.front()){
                int x = qu2.front();
                qu2.pop();
                qu1.push(x);
            }
        }
        cnt++;
    }
    cout << cnt;
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