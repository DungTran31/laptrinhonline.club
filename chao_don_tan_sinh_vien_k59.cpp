#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    // a[i]: chiều cao người thứ i
    // L[i]: vị trí của người gần nhất bên trái cao hơn người thứ i
    // Nếu L[i] = -1, nghĩa là ở bên trái không có ai cao hơn người i
    // R[i]: tương tự L[i], nhưng là về bên phải
    int a[n], L[n], R[n];

    for (auto &x : a) cin >> x; // Nhập dữ liệu cho dãy a

    // SL: container tạm thời dùng khi duyệt dãy a từ trái -> phải, SR: phải -> trái
    stack <pair <int, int>> SL, SR; // Mỗi phẩn tử có dạng {vị trí, chiều cao}
   
    SL.push({-1, INT_MAX});
    //Duyệt từ trái -> phải
    for(int i = 0; i < n; i++)
    {
        //Khi chiều cao của người ở đỉnh stack <= của người thứ i
        // thì bỏ người ở đỉnh stack ra
        while(SL.top().second <= a[i]) SL.pop();

        // L[i] = vị trí của người ở đỉnh stack
        L[i] = SL.top().first;

        // Đưa người thứ i vào stack
        SL.push({i, a[i]});
    }
    // -> Duyệt từ trái -> phải ta thu được mảng L[]
    // ==> Duyệt trừ phải -> trái ta sẽ thu được mảng R[]


    SR.push({-1, INT_MAX});
    //Duyệt từ phải -> trái
    for(int i = n - 1; i >= 0; i--)
    {
        while(SR.top().second <= a[i]) SR.pop();
        R[i] = SR.top().first;
        SR.push({i, a[i]});
    }


    for(int i = 0; i < n; i++)
    {
        // Nếu 1 trong 2 giá trị (L[i], R[i]) bằng -1 thì in ra giá trị còn lại
        // Cộng thêm 1 để triệt tiêu đi giá trị -1 trong tổng (L[i] + R[i])
        if(L[i] == -1 || R[i] == -1)
            cout << L[i] + R[i] + 1 << " ";
        else
            // khoảng cách từ (i -> L[i]) <= (i -> R[i]) thì in ra L[i], ngược lại in R[i]
            if((i - L[i]) <= (R[i] - i)) {
                cout << L[i] << " ";
            }else{
                cout << R[i] << " ";
            }
    }
}

