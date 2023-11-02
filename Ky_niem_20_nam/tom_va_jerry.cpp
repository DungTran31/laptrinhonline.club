#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Point {
    int x, y, steps;
};

bool canCatchJerry(int xTom, int yTom, int a, int xJerry, int yJerry, int b) {
    if ((abs(xTom - xJerry) % a == 0) && (abs(yTom - yJerry) % a == 0)) {
        int stepsTom = abs(xTom - xJerry) / a;
        int stepsJerry = abs(yTom - yJerry) / b;
        
        return (stepsTom % 2 == stepsJerry % 2);
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int xTom, yTom, a;
        int xJerry, yJerry, b;
        
        cin >> xTom >> yTom >> a;
        cin >> xJerry >> yJerry >> b;
        
        if (canCatchJerry(xTom, yTom, a, xJerry, yJerry, b)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    
    return 0;
}
