#include <iostream>
#include <string>
using namespace std;

int main() { 
    string str; cin>>str;
    string sub = str.substr(0,5); string sub2 = str.substr(6,7); string sub3 = str.substr(14,5);
    cout <<sub<<" "<<sub2<<" "<<sub3;

    return 0;
}