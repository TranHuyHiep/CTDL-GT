#include<bits/stdc++.h>
using namespace std;

template<class T>
class node
{
	T elem;
	node *next, *prev;
	public:
		node(T x, node<T> *N=NULL, node<T> *P=NULL)
		{
			elem=x;
			prev=P;
			next=N;
		}
		T &getlem(){
			return elem;
		}
		node<T> *getnext() {
			return next;
		}
		node<T> *getprev() {
			return prev;
		}
		void setelem(T x) {
			elem=x;
		}
		void setnext(node<T> *N=NULL) {
			next=N;
		}
		void setprev(node<T> *P=NULL) {
			prev=P;
		}
};

template<class T>
class dlist
{
	node<T>*head=0, *trail=0;
	int n;
	public:
		dlist() 
		{
			n=0;
			head=trail=0;
		}
		int size()
		{
			return n;
		}
		bool empty()
		{
			return n==0;
		}
		void push_front(T x)
		{
			if(n==0){
				head=trail=new node<T>(x);
			}
			else{
				node<T> *p=new node<T>(x,0,head);
				head->setprev(p);
				head=p;
			}
			n++;
		}
		void push_back(T x) {
			if(n==0){
				head=trail=new node<T>(x);
			}
			else{
				node<T> *p=new node<T>(x,trail,0);
				trail->setnext(p);
				trail=p;
			}
			n++;
		}
		void pop_front(T x) 
		{
			if(n==1) {
				delete head;
				trail=head=0;
			}
			else 
			{
				node<T> *p=head->getnext();
				delete head;
				p->setprev(0);
				head=p;
			}
			n--;
		}
		void pop_back(T x)
		{
			if(n==1) {
				delete head;
				trail=head=0;
			}
			else 
			{
				node<T> *p=trail->getprev();
				delete trail;
				p->setnext(0);
				trail=p;
			}
			n--;
		}
		T &front(){
			return head->getelem();
		}
		T &back(){
			return trail->getelem();
		}
		
};
