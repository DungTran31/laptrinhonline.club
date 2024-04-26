#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string time12;
    getline(cin, time12);

    int hh, mm, ss;
    char a[3]; // chứa AM/PM

    // Sử dụng sscanf để phân tích thời gian đầu vào
    if (sscanf(time12.c_str(), "%d:%d:%d %2s", &hh, &mm, &ss, a) != 4) {
        return 1; // Thoát khỏi chương trình với mã lỗi 1
    }

    if ((strcmp(a, "AM") != 0) && (strcmp(a, "PM") != 0)) {
        return 1; // Thoát khỏi chương trình với mã lỗi 1
    }

    // Chuyển đổi thời gian sang định dạng 24 giờ
    if (strcmp(a, "PM") == 0 && hh != 12) {
        hh += 12;
    } else if (strcmp(a, "AM") == 0 && hh == 12) {
        hh = 0;
    }

    // In thời gian ở định dạng 24 giờ
    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
