//danh sach lien ket don
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;  //element
	node *next;
	node(int x,node *N=0) {elem=x;next=N;}  //tao 1 node
};
void addfirst(node *&H,int x){H=new node(x,H);}
void addlast(node *&H,int x)
{
	if(!H) {H=new node(x); return;}
	node *p=H; 
	while(p->next) p=p->next;
	p->next=new node(x);
}
void travel(node *H){for(node *p=H;p!=NULL;p=p->next) cout<<p->elem<<" ";}
int main()
{
	node *H=nullptr;
	//for(int i=1;i<8;i++) addfirst(H,i);	cout<<"\nDanh sach : "; travel(H);
	for(int i=1;i<8;i++) addlast(H,i);	cout<<"\nDanh sach : "; travel(H);
}


