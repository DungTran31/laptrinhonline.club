#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n) {
    int rev = 0, tmp = n;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n/=10;
    }
    if(tmp==rev) return true;
    else return false;
    
}

int main() {
    int s;
    cin >> s;

    if(isPalindrome(s)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
