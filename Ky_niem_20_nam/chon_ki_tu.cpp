#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findLexicographicallySmallest(int n, vector<string>& strings, int k) {
    string result = "";
    
    for (int i = 0; i < k; ++i) {
        char smallest = 'z' + 1; // Khởi tạo giá trị nhỏ nhất có thể
        int index = -1;

        // Tìm ký tự nhỏ nhất ở vị trí i trong các chuỗi
        for (int j = 0; j < n; ++j) {
            if (strings[j][i] < smallest) {
                smallest = strings[j][i];
                index = j;
            }
        }

        // Cập nhật kết quả và chuỗi tiếp theo cần xét
        result += smallest;
        strings.erase(strings.begin(), strings.begin() + index);

        // Giảm n để chỉ xét các ký tự tiếp theo trong các chuỗi còn lại
        n -= index;
    }

    return result;
}

int main() {
    int n, k;
    cin >> n;
    vector<string> strings(n);
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }


    string smallestLexicographical = findLexicographicallySmallest(n, strings, strings[0].length());
    cout << smallestLexicographical << endl;

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(false) ;
	cin.tie(nullptr);
	int n;
	cin>>n;
	string a[n];
	int k;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		k=a[i].size();
	}
	int h=0;
	for(int i=0;i<k; i++) {
		for(int j=h;j<n;j++){
			if(a[j][i]<a[h][i]){
				h=j;
			}
		}
		cout<<a[h][i];
	}
}

#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
const int mod = 1e9+7;

main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    string res = "";
    int len = a[0].size();
    int flag = 0;
    for (int i = 0; i < len; i++) {
        char k = 'z';
        for (int j = flag; j < n; j++) {
            if (a[j][i] < k) {k = a[j][i]; flag = j;}
        }
        res.push_back(k);
    }
    cout << res;
}
*/