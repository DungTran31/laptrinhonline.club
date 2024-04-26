#include <iostream>  // Thư viện cho việc nhập xuất
#include <vector>    // Thư viện cho việc sử dụng mảng động
using namespace std;

int main() {
    int d[5]={};  // Tạo một mảng d có 5 phần tử, ban đầu tất cả đều bằng 0
    int n;
    cin >> n;  // Nhập số lượng nhóm sinh viên

    // Nhập kích thước của từng nhóm và tăng giá trị tương ứng trong mảng d
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        d[x]++;
    }

    // Tính số lượng bánh chưng tối thiểu cần thiết
    int res = d[4] + d[3] + d[2] / 2;  // Số bánh chưng của nhóm 4 + nhóm 3 + nhóm 2 chia 2 (mỗi bánh 2 nhóm)
    d[1] -= d[3];  // Trừ số lượng bánh chưng của nhóm 1 do đã được tính cùng với nhóm 3

    if (d[2] % 2 > 0) {  // Nếu số nhóm 2 còn dư 1 nhóm (chưa thể chia chung)
        res++;  // Thêm một bánh chưng
        d[1] -= 2;  // Trừ số lượng bánh chưng của nhóm 1 thêm 2 (vì đã thêm một bánh)
    }

    if (d[1] > 0) {
        res += (d[1] + 3) / 4;  // Thêm số lượng bánh chưng của nhóm 1 còn lại
    }

    // In ra kết quả
    cout << res << endl;

    return 0;
}

/*
#include<stdio.h>
int main()
{
	int n,x,a[5],i;
	scanf("%d",&n);
	a[1]=a[2]=a[3]=a[4]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a[x]++;
		
	}
	int k= a[4]+a[3]+a[2]/2;
	a[1]= a[1]>a[3]?a[1]-a[3]:0;
	a[2]%=2;
	if(a[2]==1)
	{
		k++;
		a[1]-=2;
	}
	if(a[1]>0)
	{
		k+= a[1]/4;
		a[1]%=4;
		if(a[1]>0)k++;
	}
	printf("%d",k);
}

*/