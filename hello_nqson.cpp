// def sol():
//     *a, b =input().lower().split()
//     p=[x[0] for x in a]
//     print("hello "+"".join(p)+b)
// if __name__ == '__main__':
//     for i in range(int(input())): sol()

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream str(s);
		string w,res="hello ";
		while(str>>w)
			res+=w[0]>96?w[0]:w[0]+32;
		cout<<res;
		for(int i=1;i<w.size();i++)
			cout<<char(w[i]>96?w[i]:w[i]+32);
		cout<<endl;
	}
	
	
}