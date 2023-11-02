#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    int n,t=-1;
    cin>>n;
    for(int i=n;i!=n+1;i=i+t)
    {
        cout<<string(2*(n-i),' ')<<string(i,'*')<<"\n";
        if(i==1) t=-t;
    }
    */

    int n;
    cin >> n;

    // Vẽ mũi tên phía trên
    for (int i = n; i > 0; i--) {
        // In khoảng trắng bên trái
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }

        // In các dấu '*'
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Vẽ mũi tên phía dưới
    for (int i = 2; i <= n; i++) {
        // In khoảng trắng bên trái
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }

        // In các dấu '*'
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

}