/*
#include <stdio.h>
#include <math.h>

int main() {
    int p, d;
    scanf("%d", &p);
    scanf("%d", &d);
    int w = (p+2*d)/2;
    int h = (p-2*d)/2;
    int S = (w*h)/2;
    printf("%d\n", S);
    return 0;
}
*/

#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
	ll a,b ; cin >> a >> b;
	cout << (a*a/4-b*b)/2;
	return 0;
}
