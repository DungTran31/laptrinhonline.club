#include <iostream>
using namespace std;

int payback(int money) {
    int denominations[] = {500, 100, 50, 10, 5, 1};
    int cnt = 0;

    for (int i = 0; i < 6; i++)
    {
        while (denominations[i] <= money)
        {
            money -= denominations[i];
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;

    int count = payback(1000-n);

    cout << count << endl;

    return 0;
}
