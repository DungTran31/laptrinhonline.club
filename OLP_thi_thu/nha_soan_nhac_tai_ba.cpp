#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a[7];
	for (int i=0;i<8;i++){
		cin >> a[i];
	}
	int check1 = 1, check2 = 1;
	for (int i=0;i<7;i++)
	{
		if (a[i] >= a[i+1]) check1 = 0;
		if (a[i] <= a[i+1]) check2 =0;
	}
	if (check1 == 1) {
		cout << "TANG";
	}
	else if (check2 == 1) {
		cout << "GIAM";
	}
	else {
		cout << "KHONGBIET";
	}
}