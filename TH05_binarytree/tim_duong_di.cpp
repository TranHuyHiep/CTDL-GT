#include<bits/stdc++.h>
using namespace std;

struct node
{
	int elem;
	node *L,*R,*F;
	node(int n,node*_F=0)  //tao cay 
	{
		elem=n;
		L=R=0;F=_F;
	}
};
node *create(int n)
{
	node *H=new node(n);
	if(n%2==0 && n>4) {H->L=create(n/2-2); H->L->F=H;H->R=create(n/2+2); H->R->F=H;}
	return H; 
}
void inorder(node *H) {if(H) {inorder(H->L); cout<<H->elem<<" "; inorder(H->R);}}
void preorder(node *H) {if(H) {cout<<H->elem<<" "; preorder(H->L);  preorder(H->R);}}
void postorder(node *H) {if(H) {postorder(H->L); postorder(H->R);cout<<H->elem<<" ";}}
void in_order(node *H,string p="\n") 
{
	if(!H) return; 
	in_order(H->L,p+"\t"); 
	cout<<p<<H->elem; 
	in_order(H->R,p+"\t");
}
node *find(node *H,int x)
{
	if(!H || H->elem==x) return H;
	node *p=find(H->L,x); if(p) return p;
	return find(H->R,x);
}
int main()
{
	int n; cin>>n;
	node *H=create(n);
	cout<<"\nPreorder   : "; preorder(H);
	cout<<"\nInorder    : "; inorder(H);
	cout<<"\nPost0rder  : "; postorder(H);
	cout<<"\nCay nhi phan : "; in_order(H);
	node *p=find(H,5); if(!p) cout<<"\nkhong co 5 trong cay";
	else 
	{
		cout<<"\npath : ";
		stack<int> S;
		while(p!=H) {S.push(p->elem); p=p->F;}
		cout<<H->elem;
		while(S.size()) {cout<<"->"<<S.top(); S.pop();}
	}
}

