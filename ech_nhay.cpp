#include <iostream>
#include <vector>

using namespace std;

bool canJumpToEnd(vector<int> nums) {
    int n = nums.size();
    int maxReach = 0;

    for (int i = 0; i < n; ++i) {
        if (i > maxReach) {
            return false;
        }
        maxReach = max(maxReach, i + nums[i]);
        if (maxReach >= n - 1) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (canJumpToEnd(a)) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
void sol(){
    int n; cin >>n;
    int a[n],buocnhay=0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        if(buocnhay>=n-1){
            cout << "True" <<endl;
            return;
        }
        if(a[i]==0 && buocnhay<=i){
            cout << "False"<<endl;
            return;
        }
        if(buocnhay < a[i]+i && buocnhay>=i) buocnhay =a[i]+i;
    }
}
int main(){
    int t; cin >> t;
    while(t--) sol();
}
*/