//cai dat danh sach lien ket kep double list 
#include<bits/stdc++.h>
using namespace std;
#ifndef __dlist__cpp__
#define __dlist__cpp__
template <class T>
class node
{
	T elem;
	node *next,*prev;
	public:
		node(T x,node<T> *P=0,node<T> *N=0) {elem=x; prev=P; next=N;}
		T &getelem(){return elem;}
		node<T> *getnext() {return next;}
		node<T> *getprev() {return prev;}
		void setelem(T x) {elem=x;}
		void setnext(node<T>*N=0) {next=N;}
		void setprev(node<T>*P=0) {prev=P;}
};
template <class T>
class dlist_ite
{
	node<T> *curr;
	public:
		node<T>*&getcurr() {return curr;}
		dlist_ite(node<T>*c=0) {curr=c;}
		bool operator!=(dlist_ite<T> it) {return curr!=it.curr;}
		bool operator==(dlist_ite<T> it) {return curr==it.curr;}
		T& operator*(){return curr->getelem();}
		dlist_ite<T> operator++(int)  //it++
		{
			dlist_ite<T> z=curr;
			curr=curr->getnext();
			return z;
		}
		dlist_ite<T> &operator++()     //++it
		{
			curr=curr->getnext();
			return *this;
		}
};
template <class T>
class dlist_rite
{
	node<T> *curr;
	public:
		node<T>*&getcurr() {return curr;}
		dlist_rite(node<T>*c=0) {curr=c;}
		bool operator!=(dlist_rite<T> it) {return curr!=it.curr;}
		T& operator*(){return curr->getelem();}
		dlist_rite<T> operator++(int)  //it++
		{
			dlist_rite<T> z=curr;
			curr=curr->getprev();
			return z;
		}
		dlist_rite<T> &operator++()     //++it
		{
			curr=curr->getprev();
			return *this;
		}
};
template<class T>
class dlist
{
	node<T>*head=0,*trail=0;
	int n;
	public:
		typedef dlist_ite<T> iterator;
		iterator begin() {return head;}
		iterator end()   {return 0;}	
		typedef dlist_rite<T> reverse_iterator;
		reverse_iterator rbegin() {return trail;}
		reverse_iterator rend()   {return 0;}
		dlist() {n=0;head=trail=0;}
		dlist(int k,T x) 
		{	
			n=0;
			head=trail=0; 
			while(k--) push_back(x);
		}
		int size(){return n;}
		bool empty() {return n==0;}
		void push_front(T x)
		{
			if(n==0) head=trail=new node<T>(x);
			else
			{
				node<T> *p=new node<T>(x,0,head);
				head->setprev(p);
				head=p;
			}
			n++;
		}
		void push_back(T x)
		{
			if(n==0) head=trail=new node<T>(x);
			else
			{
				node<T> *p=new node<T>(x,trail,0);
				trail->setnext(p);
				trail=p;
			}
			n++;		
		}
		void pop_front()
		{
			if(n==1) {delete head; trail=head=0;}
			else
			{
				node<T> *p=head->getnext(); 
				delete head;
				p->setprev(0);
				head=p;	
			}
			n--;
		}
		void pop_back()
		{
			if(n==1) {delete head; trail=head=0;}
			else
			{
				node<T> *p=trail->getprev(); 
				delete trail;
				p->setnext(0);
				trail=p;	
			}
			n--;
		}	
		T&front() {return head->getelem();}
		T&back()  {return trail->getelem();}
		void insert(iterator it,T x)
		{
			if(it.getcurr()==head) return push_front(x);
			else
			{
				node<T>*p=it.getcurr()->getprev(); 
				node<T>*q= new node<T>(x,p,it.getcurr());
				p->setnext(q);
				it.getcurr()->setprev(q);
				n++;
			} 
		}
		void erase(iterator it)
		{
			if(it.getcurr()==head) return pop_front();
			if(it.getcurr()==trail) return pop_back();
			node<T>*p=it.getcurr()->getprev();
			node<T>*q=it.getcurr()->getnext();
			p->setnext(q);
			q->setprev(p);
			delete it.getcurr();
		}
		void sort(bool cmp(T,T))
		{
			for(node<T>*p=head;p;p=p->getnext())
			for(node<T>*q=p->getnext();q;q=q->getnext())
			if(cmp(q->getelem(),p->getelem())) swap(p->getelem(),q->getelem());
		}
		iterator find(T x)
		{
			node<T>*p=head; 
			while (p&& p->getelem()!=x) p=p->getnext();	
			return p;	
		}
};
#endif

