#include <iostream>
#include <string>
using namespace std;

bool solve(int x)
{
    if (x < 0)
    {
        return false; // Số âm không phải là số xuôi ngược đều giống nhau.
    }

    string numStr = to_string(x); // Chuyển số thành chuỗi ký tự.
    int left = 0;
    int right = numStr.length() - 1;

    while (left < right)
    {
        if (numStr[left] != numStr[right])
        {
            return false; // Nếu có ít nhất một cặp ký tự khác nhau, trả về false.
        }
        left++;
        right--;
    }

    return true; // Nếu tất cả các cặp ký tự giống nhau, trả về true.
}

int main()
{
    int x;
    cin >> x;

    if (solve(x))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
