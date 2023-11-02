//Búp bê Nga
/*Đề bài:Có n con búp bê Nga có thể lồng vào nhau có thể lồng vào nhau nếu chênh lệch kích thước là k hoặc nhỏ hơn. 
Xuất ra số búp bê ngoài cùng và tổng kích thước số búp bê ngoài cùng đó.*/
/*Ý tưởng: sắp xếp các búp bê theo kích thước giảm dần
Tạo 1 queue Q để chứa những búp bê bị lồng trong cùng, 
Nếu 1 con búp bê có thể bị lồng thì sẽ pop con lồng nó nếu không bị lồng sẽ là con ngoài cùng.  */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k; cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;  //Nhập a[0]...a[n-1]
	sort(a, a + n, greater<int>()); //sắp xếp giảm dần
	queue<int> Q;
	int res = 0;  //chứa tổng kích thước của những con ngoài cùng
	for(auto x : a)
	{
		Q.push(x);
		if(Q.front() >= x + k) 
			Q.pop();
		else res += x;
	}
	cout << Q.size() << " " << res;
}