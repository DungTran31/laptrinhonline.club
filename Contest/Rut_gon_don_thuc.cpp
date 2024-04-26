#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    map<char, int> mp;
    stringstream ss(s);
    char word;
    while(ss >> word){
        mp[word]++;
    }
    for(auto it : mp){
        cout << "(" << it.first << "^" << it.second << ")";
    }
}