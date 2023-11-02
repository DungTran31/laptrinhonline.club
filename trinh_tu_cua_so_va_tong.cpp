#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b;
    
    while (true) {
        cin >> a >> b;
        
        if (a <= 0 || b <= 0) {
            break; 
        }
        int sum = 0;
        if(a>b){
            swap(a,b);
        }
        for (int i = a; i <= b; i++){
            sum += i;
        }
        for (int i = a; i <= b; i++){
            cout << i << " ";
        }
        cout << "Tong=" << sum << endl;
        
    }
    
    return 0;
}
