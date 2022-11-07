//cay danh ba dien thoai
#include<bits/stdc++.h>
using namespace std;

struct node
{
	bool leaf;
	node *child[10]={};
	node() {leaf=0;}	
};
bool add(node *&T,char *p)  //khong co tien to tra ve true
{
	if(T->leaf) return 0;
	if(*p==0) {T->leaf=1; return 1;}
	if(*(p+1)==0 && T->child[*p-'0']!=0) return 0;
	if(T->child[*p-'0']==0)T->child[*p-'0']=new node();
	return add(T->child[*p-'0'],p+1);
}

int sol()
{
	int n;
	char x[100];
	scanf("%d\n",&n);
	node *T=new node();
	while(n--)
	{
		scanf("%s",x);
		bool kq=add(T,x);
		if(kq==0) {cout<<"No\n"; return 0;}
	}
	cout<<"Yes\n";
}
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--) sol();
}
