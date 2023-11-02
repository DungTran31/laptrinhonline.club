#include<stdio.h> 
int main(){
	int c[3][3];
	int a[9],b=0,d=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&c[i][j]);
			a[d]=c[i][j];
			d++;
		}
		
		}
	for(int i=0;i<8;i++){
		for(int j=i+1;j<=8;j++){
			if(a[i]==a[j]) {
				b++;
			}
		}
		if(a[i]<1||a[i]>9) b++;
		if(b>0) break;
	}
	if(b>0) printf("INVALID");
	if(b==0) printf("VALID");
}