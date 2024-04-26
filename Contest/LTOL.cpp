#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(i%2==1){
            cout << i;
        }else if(i%2==0){
            cout << "L";
            if(i%4==0){
                cout << "T";
                if (i%8==0){
                    cout << "O";
                    if (i%16==0)
                    {
                        cout << "L";
                    }
                }
            } 
        }
        cout << endl;
    }
    
    return 0;
}