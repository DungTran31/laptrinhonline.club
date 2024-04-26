#include<bits/stdc++.h>
using namespace std;

struct Tree{
	int n;
	vector<Tree*> Chil;
	Tree(int k=0) {
		n=k;
	}
};

Tree *add(int x) {
	Tree *T=new Tree(x);
	if(x) {
		for(int a=1;a*a<=x;a++)
		if(x%a==0)
		{
			int y=(a-1)*(x/a+1);
			T->Chil.push_back(add(y));	
		}
	}
	return T;
}

void pre(Tree *T) {
	if(!T) return;
	cout<<T->n<<" ";
	for(auto tt:T->Chil) pre(tt); 
}

void in(Tree *T) {
	if(!T) return;
	if(T->Chil.size()) in(T->Chil[0]);
	cout<<T->n<<" ";
	for(int i=1;i<T->Chil.size();i++) in(T->Chil[i]);	
}
void post(Tree *T) {
	if(!T) return;
	for(auto tt:T->Chil) post(tt); 
	cout<<T->n<<" ";
}

int main() {
	int n;
	cin>>n;
	Tree *T=add(n);
	pre(T);	cout<<endl;
	in(T); 	cout<<endl;
	post(T);
}

