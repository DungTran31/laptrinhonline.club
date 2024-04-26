#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int nam = n/365;
    cout << nam << " nam" << endl;
    int thang = (n-365*nam)/30;
    cout << thang << " thang" << endl;
    int ngay = (n-365*nam-30*thang);
    cout << ngay << " ngay" << endl;
}