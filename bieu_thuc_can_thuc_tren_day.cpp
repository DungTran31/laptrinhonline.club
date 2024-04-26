#include<stdio.h>
#include<math.h>
int main()
{
	int n, d1=0, d2=0;
	scanf("%d", &n);
	double a[n+5],s1=0,s2=0;
	for(int i=0;i<n;i++)
	{
		scanf("%lf", &a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(sqrt(a[i]+s1)>=0)
		{
			s1=sqrt(a[i]+s1);
		}else{
			d1++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(sqrt(a[n-1-i]+s2)>=0)
		{
			s2=sqrt(a[n-1-i]+s2);
		}else{
			d2++;
		}
	}
	if(d1>0)
	{
		printf("Khong tinh duoc S1\n");
	}else{
		printf("%.3lf\n",s1);
	}
	if(d2>0)
	{
		printf("Khong tinh duoc S2\n");
	}else{
		printf("%.3lf",s2);
	}
}