#include <iostream>
#include <string>

using namespace std;

string encode(int k, string ciphertext) {
    string res = "";
    for (char c : ciphertext) {
        // if (isalpha(c)) { // có phải chữ cái không
            char base = isupper(c) ? 'A' : 'a';
            char caeser = (((c - base - k) + 26) % 26) + base;
            res += caeser;
        // } else {
        //     res += c;
        // }
    }
    return res;
}

int main() {
    int k;
    string str;
    
    cin >> k;
    cin.ignore(); 
    
    getline(cin, str);
    
    string res = encode(k, str);
    
    cout << k << endl << res << endl;
    
    return 0;
}
