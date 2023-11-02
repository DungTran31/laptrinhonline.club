#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n;
    cin >> n;
    double max = 0.0; 
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        double l, r;
        cin >> l >> r;

        double area = l * r; 
        sum += area; 

        if (area > max) {
            max = area; 
        }
    }
    double avr = sum / n;
    cout << fixed << setprecision(3) << avr << endl; 
    cout << fixed << setprecision(3) << max << endl; 

    return 0;
}
