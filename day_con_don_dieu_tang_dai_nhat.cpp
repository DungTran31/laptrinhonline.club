#include<bits/stdc++.h>
using namespace std;
/*  
ý tưởng: tạo một vector thêm lần lượt các phần tử vào tạo một dãy tăng dần
- nếu nó rỗng hoặc phần tử cuồi nhở hơn thì thêm x vào cuối
- ngược lại thì tìm phần tử đầu tiên >= x rồi gán nó bằng x đảm bảo cho day nhỏ nhất có thể
chú ý: dãy tìm ra có thể không phải dãy con tăng dài nhất, cách này chỉ tìm số phần tử chúng không
tim ra dãy đó
*/
int main(){
    int n, x;
    cin >> n;
    vector <int> b;//vector chưa các phần tử trong dãy , size của vector là kết quả
    while(n--)
    {
        cin >> x;
        if(b.size() == 0 || b.back() < x)
            b.push_back(x);
        //nếu b rỗng học phần tử cuối nhỏ hơn x thì thêm x vào cuối
        else
        {  
            auto p = lower_bound(b.begin(), b.end(), x);
            //tìm phần tử nhỏ hơn hoặc bằng b trong vector rồi thay thế nó bằng x;
            *p = x;
        }
    }
    cout << b.size();//kết quả
}
