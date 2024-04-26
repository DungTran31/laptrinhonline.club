#include <iostream>
#include <cmath>
using namespace std;

double calculateP(double x1, double y1, double x2, double y2) {
    double width = abs(x2 - x1);
    double height = abs(y2 - y1);
    return 2 * (width + height);
}

int main() {
    double x1a, y1a, x2a, y2a;
    double x1b, y1b, x2b, y2b;
    double x1c, y1c, x2c, y2c;

    cin >> x1a >> y1a >> x2a >> y2a;
    cin >> x1b >> y1b >> x2b >> y2b;
    cin >> x1c >> y1c >> x2c >> y2c;

    double p1 = calculateP(x1a, y1a, x2a, y2a);
    double p2 = calculateP(x1b, y1b, x2b, y2b);
    double p3 = calculateP(x1c, y1c, x2c, y2c);

    double maxp = max(p1, max(p2, p3));

    cout.precision(2);
    cout << fixed << maxp << endl;

    return 0;
}
