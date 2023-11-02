#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b) for(int i=a;i<b;i++)
//                       Loren_Nam
struct Matrix
{
    vector< vector<long long> > a;
    Matrix()
    {
    a.resize(2);
        for(int i=0;i<2;i++)
        a[i].resize(2);
    }
};
long long M=1e9+9;
Matrix operator* (Matrix A,Matrix B)
{
    Matrix C;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
        {
            C.a[i][j]=0;
            for(int k=0;k<2;k++)
                C.a[i][j]=(C.a[i][j]+A.a[i][k]*B.a[k][j])%M;
        }   
    return C;
}
void Fibo(Matrix &A,Matrix &B,long long n)
{
    if(n==1)
    {
        A.a[0][1]=1;
        A.a[0][0]=1;
        A.a[1][0]=1;
        A.a[1][1]=0;
        B=A;
    }
    else
    {
        if(n&1)
        {
            Fibo(A,B,(n-1)>>1);
            A=A*A*B;
        }
        else
        {
            Fibo(A,B,n>>1);
            A=A*A;
        }
    }
}
int main() {
    cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
    Matrix A,B;
    long long n;
    cin>>n;
    Fibo(A,B,n+1);
    cout<<A.a[0][0]-1;
}