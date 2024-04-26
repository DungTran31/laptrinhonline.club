#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string input2 = "bbbb";
    string input = "abcabccc";

    unordered_map<char, int> mp;
    unordered_map<char, int> mp2;
    for (int i = 0; i < input.size(); i++)
    {
        mp[input[i]]++;
        mp2[input2[i]]++;

    }

    // cout << mp.size() << endl;
    cout << mp2.size() << endl;

    return 0;
}
