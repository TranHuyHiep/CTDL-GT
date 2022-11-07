#include<bits/stdc++.h>
using namespace std;

struct node
{
	char elem;
	vector<node*> child;
	node *far;
	node(char c, node *f=0)
	{
		elem=c;
		far=f;
	}
};
node *find(node *H, char x)
{
	if(!H) return 0;
	if(H->elem==x) return H;
	for(auto c:H->child)
	{
		node *p=find(c,x);
		if(p) return p;
	}
	return 0;
}
void add(node *H, char a, char b)	//them vao cay H mot cha la a, con la b
{
	node *p=find(H, a);
	if(p) p->child.push_back(new node(b,p));
	
}
void preorder(node *H)
{
	if(!H) return;
	cout<<H->elem<<" ";
	for(int i=0; i<H->child.size(); ++i)  preorder(H->child[i]);
}
void inorder(node *H)
{
	if(!H) return;
	if(H->child.size()) inorder(H->child[0]);
	cout<<H->elem<<" ";
	for(int i=1; i<H->child.size(); ++i)  inorder(H->child[i]);
}
void postorder(node *H)
{
	if(!H) return;
	for(int i=0; i<H->child.size(); ++i)  preorder(H->child[i]);
	cout<<H->elem<<" ";
}
void path(node *H, node *p)
{
	if(p==H) cout<<H->elem;
	else 
	{
		path(H,p->far);
		cout<<"->"<<p->elem;
	}
	
}
int main(){
	node *H=new node('A');
	freopen("giapha.txt","r", stdin);
	int n;
	char a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		add(H,a,b);
	}
	cout<<"\nTien thu tu (preorder): "; preorder(H);
	cout<<"\nTrung thu tu (inorder): "; inorder(H);
	cout<<"\nHau thu tu (postorder): "; postorder(H);
	for(char c='A'; c<='K'; c++)
	{
		node *p=find(H, c);
		cout<<"\nPath: "; path(H,p);
	}
}
