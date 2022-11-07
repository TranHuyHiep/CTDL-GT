//cay tim kiem nhi phan = binary tree search
//BTS = cay nhi phan ma (moi nut trai <= goc <= moi nut phai) va 2 cay con deu la BTS
#include<bits/stdc++.h>
using namespace std;

template <class T>
struct node
{
	T elem;
	node *left,*right;
	node(int x) {elem=x;left=right=0;}
};
template <class T,class Cmp=less<T>>
class MultiSet
{
	private:
		Cmp ss;
		list<T> L;
		node<T> *H=0;
		int n;
		void add(node<T> *&H,T x)
		{
			if(!H) H=new node<T>(x);
			else add(ss(x,H->elem)?H->left:H->right,x);
		}
		int Max(node<T> *H) {return H->right?Max(H->right):H->elem;}
		int remove(node<T> *&H,T x)
		{
			if(!H) return 0;
			if(H->elem==x) 
			{
				if(!H->left) H=H->right;
				else if(!H->right) H=H->left;
				else {H->elem=Max(H->left); remove(H->left,H->elem);}
				return 1;
			}
			return remove(ss(x,H->elem)?H->left:H->right,x);			
		}
		void inorder(node<T> *H) {if(H) {inorder(H->left); L.push_back(H->elem); inorder(H->right);}}
//		void in_order(node<T> *H,string p="\n") 
//		{
//			if(!H) return; 
//			in_order(H->left,p+"\t"); 
//			cout<<p<<H->elem; 
//			in_order(H->right,p+"\t");
//		}
		node<T> *find(node<T> *H,T x)
		{
			if(!H || H->elem==x) return H;
			return find(x<H->elem?H->left:H->right,x);
		}
	public:
		typedef list<int>::iterator iterator;
		iterator begin(){L.clear(); inorder(H);return L.begin();}
		iterator end(){return L.end();}
		MultiSet() {H=0;n=0;}
		int empty() {return n==0;}
		int size() {return n;}
		void insert(int x)
		{
			n++;
			add(H,x);
		}
		void erase(int x) {while(remove(H,x)) n--;}
		int top() {return H->elem;}
	//	void travel() {in_order(H);}
};
int main()
{
	MultiSet<int,greater<int> > T;
	for(int x:{43,2645,36,63,74,2,26,773,83,59,05,84,26,27,48,59,06,72,2738}) T.insert(x);
	//cout<<"\nCay : "; T.travel();
	cout<<"\nCac gia tri : "; 
	//for(MultiSet::iterator it=T.begin();it!=T.end();it++) cout<<*it<<" ";
	for(auto x:T) cout<<x<<" ";
	cout<<"\nCac gia tri : "; 
	T.insert(100);
	T.erase(59);
	for(MultiSet<int>::iterator it=T.begin();it!=T.end();it++) cout<<*it<<" ";
}


