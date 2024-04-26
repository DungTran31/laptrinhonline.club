#include <iostream>
using namespace std;

int main() {
    while (true){
        int x, y;
        cin >> x >> y;
        if(x == y) break;
        else if(x > y) cout << "Decrescente\n";
        else cout << "Crescente\n";
    }
    return 0;
}