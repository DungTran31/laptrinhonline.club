#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    vector<int> pos = {x, y, z};
    sort(pos.begin(), pos.end());
    
    // Tính khoảng cách tối thiểu bằng cách lấy khoảng cách giữa con bò trung tâm (pos[1]) và con bò bên trái (pos[0]),
    // cộng với khoảng cách giữa con bò trung tâm và con bò bên phải (pos[2]) và - 2 vì ko tính việc chạm đến con bò trung tâm.
    int minDistance = pos[1] - pos[0] + pos[2] - pos[1] - 2;
    
    cout << minDistance << endl;
    
    return 0;
}
