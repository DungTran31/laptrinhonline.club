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
    int n, g, b;
    cin >> n >> g >> b;

    // Số ngày cần để hoàn thành ít nhất một nửa con đường cao tốc
    int minDays = (n + 1) / 2;

    // Số ngày cần để hoàn thành toàn bộ đường cao tốc
    int totalDays = 0;
    int cycle = g + b;

    // Số lần lặp để hoàn thành ít nhất một nửa đường cao tốc
    int cyclesNeeded = minDays / g;
    totalDays += cyclesNeeded * cycle;

    // Ngày cần thêm để hoàn thành nửa con đường còn lại
    if (minDays % g != 0)
        totalDays += minDays % g;
    else
        totalDays -= b; // Trừ b ngày xấu cuối cùng nếu không cần thiết

    // Xuất kết quả
    cout << max(totalDays, n);
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