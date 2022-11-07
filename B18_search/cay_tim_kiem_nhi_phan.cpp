#include<bits/stdc++.h>
using namespace std;

struct node 
{
	int elem;
	node *L, *R;
	node(int _x) {
		elem=_x;
		L=R=0;
	}
};

void add(node *&H, int x)
{
	if(!H) H=new node(x);
	else add(x < H->elem ? H->L : H->R, x);
}

void draw(node *H, string p="\n")
{
	if(H) {
		draw(H->L, p+"\t");
		cout<<p<<H->elem;
		draw(H->R, p+"\t");
	}
}

node *bs(node *H, int x)
{
	if(!H || H->elem == x) return H;
	return bs(x < H->elem ? H->L: H->R, x);
}


int main(){
	node *H=0;
	for(int x:{29,4,2,3,6,4,34,23,54,76,34,76,23,65,34,76,34,76,8,9,43,65,78,324,35,64}) add(H,x);
	draw(H);
}
