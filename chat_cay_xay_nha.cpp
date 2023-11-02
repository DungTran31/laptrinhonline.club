#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canCutWood(vector<int>& h, int H, int L) {
    long long totalWood = 0;
    for (int height : h) {
        if (height > H) {
            totalWood += (height - H);
            if (totalWood >= L) {
                return true;
            }
        }
    }
    return false;
}

int findMaxCutHeight(vector<int>& h, int L) {
    int l = 1;
    int r = *max_element(h.begin(), h.end());
    int maxH = 0;

    while (l <= r) {
        //  để tính giá trị trung bình của l và r mà không gây tràn số
        int mid = l + (r - l) / 2;
        if (canCutWood(h, mid, L)) {
            maxH = mid;
            l = mid + 1;
        } else {
            r = mid + 1;
        }
    }

    return maxH;
}

int main() {
    int n, L;
    cin >> n >> L;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int maxH = findMaxCutHeight(h, L);
    cout << maxH << endl;

    return 0;
}

/*
#define ll long long
ll n, l;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> n >> l;
	ll ans = 0;
	long int m = -1;
	long int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		m = max(m, a[i]);
	}
	ll low = 0;
	ll hight = m - 1;
	while(low <= hight){
		ll mid = (low + hight) / 2;
		ll sum = 0;
		for(int i = 0; i < n; i++){
			if(a[i] >= mid)
				sum += a[i] - mid;
		}
		if(sum >= l){
			ans = mid;
			low = mid + 1;
		}else{
			hight = mid - 1;
		}
	}
	cout << ans;
}
*/