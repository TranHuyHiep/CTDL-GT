//cay tim kiem nhi phan = binary tree search
//BST = cay nhi phan ma (moi trai <= goc <= moi nut phai) va 2 cay con deu la BTS
#include<bits/stdc++.h>
using namespace std;

struct node 
{
	int elem;
	node *left, *right;
	node(int x)
	{
		elem=x;
		left=right=0;
	}
};

class tree_ite
{
	list<node *> L;
	list<node *>::iterator curr;
	void inorder(node *H) {if(H) {inorder(H->left); L.push_back(H); inorder(H->right);}}
	public:
		tree_ite(node *H)
		{
			inorder(H);
			curr=L.begin();
		}
		tree_ite &operator++(int) 
		{
			curr++;
			return *this;
		}
		int operator*() 
		{
			return (*curr)->elem;
		}
		bool operator!=(tree_ite it)
		{
			return curr!=it.curr;
		}
		tree_ite &operator=(tree_ite it) 
		{
			L=it.L; curr=L.begin();
		}
};
 

class tree
{
	private:
		typedef tree_ite iterator;
		iterator begin() 
		{
			return iterator(H);
		}
		iterator end() 
		{
			NULL;
		}
		node *H=0;
		int n;
		void add(node *&H, int x)
		{
			if(!H) H=new node(x);
			else add(H->elem > x ? H->left:H->right,x);
		}
		int Max(node *H) 
		{
			return H->right?Max(H->right):H->elem;
		}
		int remove(node *&H, int x)
		{
			if(!H) return 0;
			if(H->elem==x) 
			{
				H->elem=Max(H->left);
				remove(H->left, H->elem);
				return 1;
			}
			return remove(x<H->elem?H->left:H->right,x);
		}
		void inorder(node *H) {if(H) {inorder(H->left); cout<<H->elem<<" "; inorder(H->right);}}
		void preorder(node *H) {if(H) {cout<<H->elem<<" "; preorder(H->left);  preorder(H->right);}}
		void postorder(node *H) {if(H) {postorder(H->left); postorder(H->right);cout<<H->elem<<" ";}}
		void in_order(node *H,string p="\n") 
		{
			if(!H) return; 
			in_order(H->left,p+"\t"); 
			cout<<p<<H->elem; 
			in_order(H->right,p+"\t");
		}
		node *find(node *H,int x)
		{
			if(!H || H->elem==x) return H;
			node *p=find(H->left,x); if(p) return p;
			return find(x<H->elem?H->left:H->right,x);
		}
	public: 
		tree()
		{
			H=0;
			n=0;
		}
		int empty() { return n==0; }
		int size() { return n; }
		void push(int x)
		{
			n++;
			add(H,x);
		}
		void pop(int x) 
		{
			n-=remove(H,x);
		}
		void travel()
		{
			inorder(H);
		}
		int top()
		{
			return H->elem;
		}
};

int main(){
	tree T;
	for(int x:{41,123,3,131,543,65,20,6,3414,6435,634,234,324});
	cout<<"\nCay "; T.travel();
	return 0;
}
