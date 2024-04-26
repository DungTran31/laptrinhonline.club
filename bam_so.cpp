#include <bits/stdc++.h>
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str; cin >> str;
    while (str.length() > 1)
    {
        int temp = 0;
        for (int i = 0; i < str.length(); i++)
        {
            temp += stoll(string(1,str[i]));
        }
        str=to_string(temp);
    }
    cout << str;

    return 0;
}

/*
#include <iostream>
#include <string>

int solve(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += c - '0';
        }
    }
    while (sum >= 10) {
        int temp = 0;
        while (sum != 0) {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
    }
    return sum;
}

int main() {
    std::string n;
    std::cin >> n;
    std::cout << solve(n);
    return 0;
}
*/