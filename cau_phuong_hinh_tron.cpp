#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int r;
    cin >> r;
    double pi = acos(-1);
    double area_circle = pi * r * r;
    double side_square = sqrt(area_circle);
    cout << round(side_square) << endl;

    return 0;
}
