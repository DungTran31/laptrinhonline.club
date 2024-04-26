#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int k;
        string s;
        cin >> k >> s;
        
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < k; j++) {
                cout << s[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}
