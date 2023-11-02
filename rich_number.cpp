#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n<1){
        cout<<"Poor Number";
    }else{
        int sum = 0;
        for(int i = 1; i < n;i++){
            if(n % i == 0){
                sum += i;
            }
        }
        if(sum>n){
            cout<<"Rich Number";
        }else cout<<"Poor Number";
    }
}