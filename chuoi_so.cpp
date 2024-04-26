#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>

using namespace std;

int shortestSubsequence(string s) {
    unordered_map<char, int> lastIndex;
    int minLength = INT_MAX;

    for (int i = 0; i < s.length(); i++) {
        // tìm vị trí cuối cùng của 1 trong 3 phần tử đầu tiên tìm đc
        // VD: 11322 ptu đc tìm thấy đầu tiên là 1, và vị trí cuối cùng là 1
        lastIndex[s[i]] = i; 

        // tính độ dài của dãy con tạo bởi vị trí xuất hiện cuối cùng của các ký tự này 
        // cập nhật minLength nếu dãy con này ngắn hơn minLength hiện tại
        if (lastIndex.size() == 3) {
            int minIndex = INT_MAX;
            for (auto& x : lastIndex) {
                minIndex = min(minIndex, x.second);
            }
            int subLength = i - minIndex + 1;
            minLength = min(minLength, subLength);
        }
    }

    return (minLength == INT_MAX) ? 0 : minLength;
}

int main() {
    string input;
    cin >> input;

    int res = shortestSubsequence(input);
    cout << res << endl;

    return 0;
}

/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<int> D = {-1, -1, -1};
    
    if (s.find('1') == string::npos || s.find('2') == string::npos || s.find('3') == string::npos) {
        cout << 0 << endl;
    } else {
        for (int i = 0; i < s.length(); ++i) {
            if (D[0] != -1 && D[1] != -1 && D[2] != -1) {
                break;
            }
            
            if (s[i] == '1') {
                D[0] = i;
            } else if (s[i] == '2') {
                D[1] = i;
            } else if (s[i] == '3') {
                D[2] = i;
            }
        }
        
        cout << *max_element(D.begin(), D.end()) - *min_element(D.begin(), D.end()) + 1 << endl;
    }
    
    return 0;
}

*/