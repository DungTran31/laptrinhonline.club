#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

bool comp(int a,int b){
    return a > b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	vector<int> v_mn;
	int n, t, x;
	cin >> n >> t;
	v_mn.resize(n + 1);
	v_mn[0] = INT_MAX;
	for(int i = 1; i <= n; i++){
		cin >> x;
		v_mn[i] = min(v_mn[i - 1], x);
	}
	while(t--){
		int i;
		cin >> x;
		if(x < v_mn.back()) {
		    cout << 0 << endl;
		    continue;
		}
		i = lower_bound(v_mn.begin(), v_mn.end(), x, comp) - v_mn.begin();
		cout << i << endl;
	}
	return 0;
}

/*
#include<stdio.h>
#include<math.h>


int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n+5];
	int q[n+5];
	for (int i = 0; i < n; ++i){
		scanf("%d", &a[i]);
	}
	for (int i = 1; i < n; ++i){
		a[i] = a[i] < a[i-1] ? a[i]:a[i-1]; 
	}
	for (int i = 0; i < k; ++i){
		scanf("%d", &q[i]);
	}
	for (int i = 0; i < k; ++i){
		int l = 0;
		int r = n-1;
		int res = -1;
		while(l<=r){
			int m = (l + r) / 2;
			if(q[i] >= a[m]){
				res = m;
				r = m - 1;
			}
			else{
				l = m + 1;
			}
		}
		printf("%d\n", res+1);
	}
}
*/