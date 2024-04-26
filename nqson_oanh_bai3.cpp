#include <iostream>

long long l(long long n) {
    // Trường hợp cơ bản: n = 1
    if (n == 1) {
        return 1;
    }
    
    if (n % 2 == 0) {
        return 2 * l(n / 2) - 1;
    }
    else {
        return 2 * l((n - 1) / 2) + 1;
    }
}

int main() {
    long long n;
    std::cin >> n;

    long long x = l(n);
    std::cout << x << std::endl;

    return 0;
}

/*
#include<iostream>

using namespace std;
int main(){
	long long x,temp;
	cin>>x;
	temp=x;
	long long n=1,hs=2;
	while(true){
		while(x%2==0){
			x/=2;
			hs*=2;
		}
		if(x==1)
			break;
		if(x%2!=0){
			x/=2;
			n+=hs;
			hs*=2;
		}
	}
	cout<<n;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

const int mod = 1e9+7;

main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin>>n;
    int x=(int)(log2(n));
    int y=(int)(pow(2,x));
    cout<<(n-y)*2+1;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
main(){
    int n;std::cin>>n;
    std::cout<<(n-(int)pow(2,(int)log2(n)))*2+1;
}
*/