/*Vì sau khi qua cửa sẽ gấp đôi chỉ số ta quy bài thành dãy 1234511223344551111... tìm số thứ n trong dãy.
Ý tưởng:tạo 1 cấu trúc map hoặc mảng để lưu chỉ số ứng với tên người
tạo 1 queue q chứa chỉ số và số chỉ số trong dãy.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int id = 1;
	map< int, string> mp;
	for (string i : {"dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"})
		mp[id++] = i;

	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue<pair<int, int>> q;
		for(int x : {1,2,3,4,5}) 
			q.push({x, 1});

		while(n > q.front().second)
		{
			n -= q.front().second;
			q.push(q.front());
			q.back().second*=2;
			q.pop();
		}

		cout << mp[q.front().first] << "\n";
	}
}