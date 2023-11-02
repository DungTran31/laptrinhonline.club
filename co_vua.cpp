#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    char a[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 't'){
            sum += 1;
        } else if(a[i] == 'M'){
            sum += 3;
        } else if(a[i] == 'T'){
            sum += 3;
        } else if(a[i] == 'X'){
            sum += 5;
        } else if(a[i] == 'H'){
            sum += 9;
        } else if(a[i] == 'V'){
            sum += 0;
        }
    }
    cout << sum;
    
}