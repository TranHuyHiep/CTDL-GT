//cati dat single list
#include<bits/stdc++.h>
using namespace std;

template<class T>
class node{
	T elem;
	node *next;
	public:
		node(T x, node<T> *N=0){
			elem=x;
			next=N;
		}
		void setelem(T x) {elem=x;}
		void setnext(node<T> *N) {next=N;}
		T getelem()	{return elem;}
		node *getnext() {return next;}
};
template<class T>
class list_ite
{
	node<T> *curr;
	public:
		slist_ite(node<T>*c=0) {curr=0;}
		bool operator!=(slist_ite<T> it) {return curr!=it.curr;}
		T &operator*() {return curr->getelem();}
		slist_ite<T> operator++(int) 	//it++
		{
			slist_ite<T> z=curr;
			c=c->getnext();
			return z;
		}
		slist_ite<T> operator++(int) 	//++it
		{
			curr=curr->getnext();
			return *this;
		}
}

template<class T>
class slist{
	node<T> *head, *trail;
	int n;
	public:
		node<T> *&getcur(){
			return curr;
		}
		typedef slist_ite<T> iterator;
		iterator begin() {return iterator(head);}
		iterator end() {return iterator(NULL);}
		slist() {
			n=0;
			head=trail=0;
			int k=n;
			while(k--) push_back();
		}
		bool empty() {return n==0;}
		int size() {return n;}
		void push_front(T x)
		{
			head=new node<T>(x,head);
			if(!trail) trail=head;
			n++;	
		}
		void push_back(T x)
		{
			if(n==0) head=trail=new node<T> (x,head);
			else
			{
				trail->setnext(new node<T> (x));
				trail=trail->getnext();
				n++;	
			}
		}
		T &front() {return head->getelem();}
		T &back() {return trail->getelem();}
		void pop_front() {
			node<T>*p=head->getnext();
			delete head;
			head=p;
			if(n==1) trail=0;
			n--;
		}
		void pop_back(){
			if(n==1) return pop_front();
			node<T> *p=head;
			while(p->getnext() != trail)
				p=p->getnext();
			p->setnext(0);
			delete trail;
			trail=p;
			n--;
		}
		void travel()
		{
			for(node<T> *p=head;p;p=p->getnext())
				cout<<p->getelem()<<" ";
		}
		void insert(iterator it, T x)
		{
			//c1
			if(it.getcurr()==head) return push_back(x);
			node<T> *p=head;
			while(p->getnext()=it.getcurr()) p=p->getnext();
			p->setnext(new node<T>(x,it.getcurr()));
			//c2 -- bai tap ve nha
		}
		void erase(iterator it)
		{
			if(it.getcur()==head) return pop_front();
			else if(it.getcur()==trail) {
				return pop_back();
				it=trail;
			}
			else{
				node<T> *p=head;
				while(p->getnext()!=it.getcurr()) p=p->getnext();
				p->setnext(it.getcurr()->getnext());
				it=p;
			}
			n--;
		}
};

int main(){
	slist<int> L(3,5);
	cout<<"\ns.list"<<L.travel();
	L.pop_back();
	L.push_back(); 
	cout<<"\ns.list"<<L.travel();
	cout<<"\ns.list :";
	for(slist<int>>::iterator it=L.begin();it!=L.end();it++)
		cout<<*it<<" ";
	for(auto x:L) cout<<x<<" ";
	cout<<"\nList: ";
	for(it=L.begin(); k<L.size(); k++, it++)
	
}
