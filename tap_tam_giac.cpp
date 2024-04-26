//Tập tam giác
/*
Cho dãy số nguyên dương a1,a2,…,an từ dãy đã cho hãy chọn các phần tử 
tùy ý mỗi phần tử không quá 1 lần được 1 dãy mới nhiều phần tử nhất có thể 
sao cho lấy ra 3 giá trị bất kỳ có chỉ số khác nhau đều tạo thành 3 cạnh của tam giác.
*/

/*
Ý tưởng: tạo ra 1 queue Q lưu bộ cạnh của 1 tam giác thỏa mãn:
sắp xếp theo thứ tự giảm dần
nếu Q còn phần tử và x+Q.back<=Q.front thì xóa Q (tức là tổng 2 cạnh nhỏ hơn hoặc bằng cạnh còn lại)
so sánh res và Q.size: res=res>Q.size()?res:Q.size()
lưu ý: do ta đã sắp xếp giảm dần nên các số bằng nhau được xét hết 1 lúc
nếu res<=2 tức chỉ có 2 hoặc 1 cạnh nên không thành 1 tam giác
*/
#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> q;
	int n, res = 0;
	cin >> n;
	int a[n];
	for(int &x:a) cin>>x;   //cin a[0]...a[n-1]
	sort(a, a + n, greater<int>()); //sx giảm dần
	for(int x:a){
		while(!q.empty() && x + q.back() <= q.front()) 
			q.pop();
		q.push(x);
		if(res < q.size()) res = q.size();
	}
	if(res > 2) cout << res;
	else cout<<"Khong the tao ra day thoa man";

	return 0;
}