//Cay tim kiem nhi phan
#include<bits/stdc++.h>
using namespace std;
class Tre {
public:
	int Elem,Depth;
	Tre *Left,*Right;
	Tre(int x,int D=0,Tre *L=0,Tre *R=0) {Elem=x;Depth=D;Left=L;Right=R;} //Ham tao	
};
void Insert(Tre *&T,int x,int D=0) {
	if(T==0) {T=new Tre(x,D); return;}
	if(x==T->Elem) return;
	if(x<T->Elem) {
		if(T->Left==0) T->Left=new Tre(x,D+1);
		else Insert(T->Left,x,D+1);
	} else {
		if(T->Right==0) T->Right=new Tre(x,D+1);
		else Insert(T->Right,x,D+1);
	}
}
void InOrder(Tre *T) {
	if(!T) return;
	InOrder(T->Left);
	cout<<T->Elem<<" "<<T->Depth<<"\n";
	InOrder(T->Right);
}
int main() {
	int n,x;
	Tre *T=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%d",&x); Insert(T,x);}
	InOrder(T);
}