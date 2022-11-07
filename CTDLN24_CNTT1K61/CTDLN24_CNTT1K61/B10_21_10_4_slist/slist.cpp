//cai dat single list
#include<bits/stdc++.h>
using namespace std;
template <class T>
class node
{
	T elem;
	node *next;
	public:
		node(T x,node<T>*N=0) {elem=x;next=N;}
		void setelem(T x) {elem=x;}
		void setnext(node<T>*N){next=N;}
		T &getelem(){return elem;}
		node<T>*getnext(){return next;}
};
template <class T>
class slist_ite
{
	node<T> *curr;
	public:
		node<T>*&getcurr() {return curr;}
		slist_ite(node<T>*c=0) {curr=c;}
		bool operator!=(slist_ite<T> it) {return curr!=it.curr;}
		T& operator*(){return curr->getelem();}
		slist_ite<T> operator++(int)  //it++
		{
			slist_ite<T> z=curr;
			curr=curr->getnext();
			return z;
		}
		slist_ite<T> &operator++()     //++it
		{
			curr=curr->getnext();
			return *this;
		}
};

template <class T>
class slist
{
	node<T> *head,*trail;
	int n;
	public:
		typedef slist_ite<T> iterator;
		iterator begin(){return head;}
		iterator end(){return 0;}
		slist(){n=0; head=trail=0;}
		slist(int k,T x)
		{
			n=0; head=trail=0;
			while(k--) push_back(x);
		}
		bool empty() {return n==0;}
		int size() {return n;}
		void push_front(T x)
		{
			head=new node<T>(x,head);
			if(n==0) trail=head;
			n++;
		}
		void push_back(T x)
		{
			if(n==0) return push_front(x);
			trail->setnext(new node<T>(x));
			trail=trail->getnext();
			n++;
		}
		T&front(){return head->getelem();}
		T&back(){return trail->getelem();}
		void pop_front() 
		{
			node<T>*p=head->getnext();
			delete head; 
			head=p;
			if(n==1) trail=0; 
			n--;
		}
		void pop_back()
		{
			if(n==1) return pop_front();
			node<T>*p=head;
			while(p->getnext()!=trail) p=p->getnext();
			p->setnext(0);
			delete trail;
			trail=p;
			n--;	
		}
		void insert(iterator it,T x)
		{
			//c1
			if(it.getcurr()==head) return push_front(x);
			node<T> *p=head;
			while(p->getnext()!=it.getcurr()) p=p->getnext();
			p->setnext(new node<T>(x,it.getcurr()));
			n++;
			//c2- bai tap
		}
		void erase(iterator it)
		{
			if(it.getcurr()==head)  pop_front();
			else if(it.getcurr()==trail) pop_back();
			else
			{
				node<T>*p=head; while(p->getnext()!=it.getcurr()) p=p->getnext();
				p->setnext(it.getcurr()->getnext());
			}
			n--;
		}
//		void travel()
//		{
//			for(node<T>*p=head;p;p=p->getnext()) cout<<p->getelem()<<" ";
//		}
};
int main()
{
	slist<int> L(7,5);
	cout<<"\nlist : "; for(auto x:L) cout<<x<<" ";
	L.pop_back(); L.push_back(8); cout<<"\nlist : "; for(auto x:L) cout<<x<<" ";
	L.back()=9; cout<<"\nlist : "; for(auto x:L) cout<<x<<" ";
	L.pop_front(); L.push_front(1); cout<<"\nlist : ";for(auto x:L) cout<<x<<" ";
	L.front()=7; 
	cout<<"\nlist : "; 
	for(slist<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" ";
	L.push_back(100);
	cout<<"\nLIST : "; for(auto x:L) cout<<x<<" ";
	auto itt=L.begin(); itt++;itt++;
	L.insert(itt,3);
	cout<<"\nLIST : "; for(auto x:L) cout<<x<<" ";
	L.insert(L.begin(),6);
	cout<<"\nLIST : "; for(auto x:L) cout<<x<<" ";
	itt=L.begin(); itt++;itt++;itt++;
	L.erase(itt);
	cout<<"\nLIST : "; for(auto x:L) cout<<x<<" ";
	L.erase(L.begin()); 
	cout<<"\nLIST : "; for(auto x:L) cout<<x<<" ";
	int k=1;
	for(itt=L.begin();k<=L.size();k++) itt++;
	L.erase(itt);
	cout<<"\nLIST : "; for(auto x:L) cout<<x<<" ";
}


