//cay danh ba dien thoai
#include<bits/stdc++.h>
using namespace std;

struct node 
{
	node *child[10]={};
	bool leaf;
	node() {
		leaf=false;
	}
};
bool add(node *&T, char *p)	//khong co tien to tra ve true
{
	if(T->leaf) return false;
	if(*p==0)
	{
		T->leaf=1;
		return true;
	} 
	if(!*(p+1)==0 && T->child[*p-'0']!=0) return 0;
	if(T->child[*p-'0']==0)T->child[*p-'0']=new node();
	return add(T->child[*p-'0'],p+1);
	
}
int sol(){
	int n;
	char x[100];
	scanf("%d\n", &n);
	node *T=new node();
	while(n--)
	{
		scanf("%s",x);
		bool kq=add(T,x);
		if(kq==0) 
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
int main()
{
	int t;
	scanf("%d\n", &t);
	while(t--){
		sol();
	}
}
