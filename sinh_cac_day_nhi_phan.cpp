/*
#include <iostream>
#include <cstring> // memset
using namespace std;

int n, x[100];

void inkq(){
    for(int i = 1; i <= n; i++){
        cout << x[i];
    }
    cout << endl;
}

void Try(int i){
    //duyệt các khả năng của x[i]
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if(i == n){
            inkq();
        }else{
            Try(i + 1);
        }
    }
}

int main(){
    cin >> n;
    Try(1);
}
*/

#include<bits/stdc++.h>
using namespace std;
void backtrack(string str,int n){
	if(str.size()==n){
		cout<<str<<endl;
		return;
	}
	backtrack(str+'0',n);
	backtrack(str+'1',n);
}
main(){
	int n;cin>>n;
	backtrack("",n);
}
