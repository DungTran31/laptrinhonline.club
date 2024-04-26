#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Struct để lưu trữ kích thước của HCN
struct Rectangle {
    int width;
    int height;
    int area;
};

// Hàm so sánh để sắp xếp theo diện tích
bool compareRectangles(const Rectangle& a, const Rectangle& b) {
    return a.area > b.area;
}

int main() {
    int n;
    cin >> n;

    vector<Rectangle> rectangles(n);

    for (int i = 0; i < n; i++) {
        cin >> rectangles[i].width >> rectangles[i].height;
        rectangles[i].area = rectangles[i].width * rectangles[i].height;
    }

    // Sắp xếp danh sách HCN theo diện tích giảm dần
    sort(rectangles.begin(), rectangles.end(), compareRectangles);

    // Kiểm tra xem tất cả diện tích có bằng nhau hay không
    bool allEqual = true;
    for (int i = 1; i < n; i++) {
        if (rectangles[i].area != rectangles[0].area) {
            allEqual = false;
            break;
        }
    }

    // Tìm kích thước HCN có diện tích lớn thứ hai
    if (rectangles[0].area == rectangles[1].area) {
        cout << "NO" << endl;
    } else if(n >= 2){
        cout << rectangles[1].width << " " << rectangles[1].height << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
