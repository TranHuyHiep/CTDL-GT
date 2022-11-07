#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;
	node *L,*R;
	node(int _x) {elem=_x; L=R=0;}
};
void add(node *&H,int x)
{
	if(!H) H=new node(x);
	else add(x<H->elem?H->L:H->R,x);
}
void draw(node *H,string p="\n"){if(H) {draw(H->L,p+"\t"); cout<<p<<H->elem; draw(H->R,p+"\t");}}
node *bs(node *H,int x)
{
	if(!H || H->elem ==x) return H;
	return bs(x<H->elem?H->L:H->R,x);
}
int main()
{
	node *H=0;
	for(int x:{45,53,53,63,47,47,34,54,81,46,52,17,91,76,29,20,87,12,89,78,40,62,59,48,73,32,26,21,34}) add(H,x);
	draw(H);
	int x=53;
	node *p=bs(H,x);
	if(!p) cout<<"\nKhong co "<<x;
	else {p->elem=-1;draw(H);}
}


