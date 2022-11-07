#include <bits/stdc++.h>

using namespace std;
struct node
{
	int element;
	node *next;
	node(int x, node *N=NULL)		//tao 1 node 
	{
		element = x;
		next = N;
	}
};

void addfirst(node *&H, int x)
{
	H=new node(x,H);
}

void addlast(node *&H,int x)
{
	if(H==nullptr) H=new node(x);
	else{
		node *p = H;
		while(p->next != nullptr) p=p->next;
		p->next = new node(x);
	}
}

void travel(node *H)
{
	for(node *p=H; p!=NULL; p=p->next) cout << p->element << " "; 
}

int main() {
//    node A(3), B(7, &A), C(4,&B);
//    node *D = new node(8, &C);
//    node *E = new node(2,D);
//    for(node *p=E; p!=NULL; p=p->next) cout << p->element << " "; 
	node *H = nullptr;
//	for(int i=1; i<8; i++)
//	{
//		addfirst(H,i);
//	}
	
	for(int i=1; i<8; i++)
	{
		addlast(H,i);
	}
	cout << "\nDanh sach: ";
	travel(H);
	return 0;
}

