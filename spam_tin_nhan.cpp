#include <iostream>
using namespace std;
#define int long
#define ll long long

const int mod = 1000000007;
const int limit = 100000;

int k,x;


// tính cấp số cộng đến x
// số hạng đầu + số hang cuối nhân với số số hạng/2
int csc(int x){ //1+2+3+...+x
    return x*(x+1)/2; 
}

/*
csc(k): tính tổng số ký tự đặc biệt trên các dòng tăng
từ 1 đến k.
csc(k-1): tính tổng số ký tự đặc biệt trên dòng có giá 
trị k-1, bởi vì lớp dưới của phần giảm có k-1 dòng.
csc(k*2-1-line): tính tổng số ký tự đặc biệt trên các 
dòng trong phần giảm của tam giác, bắt đầu từ dòng
k*2-1-line+1 đến dòng k*2-1.
*/
int get(int line){
    if(line <= k) return csc(line);
    return csc(k)+csc(k-1)-csc(k*2-1-line);
}

int search(int l,int r){
    if(l==r) return l;
    int mid=(l+r)/2;
    int temp = get(mid);
    if(temp<x) return search(mid+1,r);
    return search(l,mid);
}
main(){ 
    int t; cin >> t;
    while(t--){//0: false, else: true
        cin>>k>>x;
        //while
        /*
        int l=1,r=k*2-1;
        while(l<r){
            int mid=(l+r)/2;
            int temp = get(mid);
            if(temp<x) l=mid+1;
            else r=mid;
        }// l==r
        */
        //search đệ quy
        cout<< search(1,k*2-1)<<endl;
    }
    return 0;
} 