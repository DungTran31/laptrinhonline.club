#include <iostream>

int main() {
    int x, y, s;
    std::cin >> x >> y >> s;

    int k = s / (x + y);
    double m = (double)(k) + (s % (x + y)) / (double)(x + y);

    if (m > 0) {
        int result = k * x + s - k * (x + y);
        std::cout << result << std::endl;
    } else {
        int result = k * x;
        std::cout << result << std::endl;
    }

    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,s;
	cin >> x >> y >> s;
		int Skm = 0;
		int Smin = 0;
		if (s < x) cout << s;
		else {
			
			while (Skm < s){
				Skm += x + y;
				Smin += x;
				//cout << Smin << endl;
					if (s - Skm > 0 && s - Skm < x){
						Smin += s - Skm;
						//cout << Smin << endl;
						break;
					}
			}
			cout << Smin;
			//cout << endl << Smin;
		}
		
}
#include <stdio.h>
  main () {
  	int a,b,c,n,y,x; // y la so but duw can mua de dur so but can co
  	scanf("%d%d%d",&a,&b,&c);
  	n=c/(a+b); // n la so lan mua luong a but 
  	y=c-n*(a+b);
  	x=a*n+y;
  	printf("%d",x);
 }

#include <stdio.h>
int main() {
	int x, y, s, kq, kq1;
	scanf("%d %d %d", &x, &y, &s);
	if(y == 0){
		kq = s / x;
		printf("%d", kq);
	}
	else{
		kq1 = s / (x + y);
		kq = s - kq1 * y ;
		printf("%d", kq);
	}
	return 0;
} 
#include <stdio.h>
main(){ho
    int x, y, s;
    scanf("%d%d%d", &x, &y, &s);
    printf("%d", (s/(x+y))*x + s%(x+y));
}
*/