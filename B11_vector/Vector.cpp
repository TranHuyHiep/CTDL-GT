#include <bits/stdc++.h>

using namespace std;
#ifndef __vector__cpp__
#define __vector__cpp__

template<class T>
class V_rit	//bo lap nguoc
{
	T *cur;		//con tro vao vi tri hien thoi
	public:
		V_rit(T *c=0) {cur=c;}
		T *getcur() {return cur;}
		T &operator*() {return *cur;}
		bool operator!=(V_rit<T> rit)
		{
			return cur!=rit.getcur();
		}
		V_rit *operator++(int)					//it++
		{
			V_rit p(cur);
			cur=cur-1;
			return p; 
		}
		V_rit *operator++()					//++it
		{
			cur=cur-1;;
			return *this;	
		}
};

template<class T>
class Vector
{
	private: 
		T *buf;
		int n, cap;
		void extend(int c)
		{
			if(c<=cap) return;
			cap=c;
			T *temp=new T[c]; 
			for(int i=0; i<n; i++) temp[i]=buf[i];
			if(buf) delete[]buf;
			buf=temp;
		}
	public:
		typedef T* iterator;	//bo loc xuoi
		iterator begin() {return buf;}
		iterator end() {return buf+n;}
		typedef V_rit<T> reverse_iterator;
		reverse_iterator rbegin() {return buf+n-1;}
		reverse_iterator rend() {return buf-1;}
		Vector() {buf=0;n=cap=0;}
		Vector(int m, T x) {cap=this->n=m;buf=new T[m];for(int i=0; i<n; i++) buf[i]=x;}
		Vector(int m) {cap=this->n=m;buf=new T[m];}
		~Vector() {if(buf) delete[]buf;}
		int size() {return n;}
		int capacity() {return cap;}
		int empty() {return n==0;}
		T &front() {return buf[0];}
		T &back() {return buf[n-1];}
		void pop_back() {n--;}
		void push_back(T x) {if(n==cap) extend(cap*2+1);buf[n++]=x;}
		T &at(int k) {return buf[k];}
		Vector<T> &operator=(Vector<T> &Z)		//toan tu gan =
		{
			this->n=Z.n;
			this->cap=Z.cap;
			if(this->buf) delete[]buf;
			this->buf=new T[cap];
			for(int i=0; i<n; i++) buf[i]=Z.buf[i];
			return *this;
		}
		void resize(int k)
		{
			if(cap<k) extend(k);
			n=k;
		}
		void resize(int k, T x)
		{
			if(cap<k) extend(k);
			for(int i=n; i<k; i++) buf[i]=x;
			n=k;
		}
		void insert(iterator &it, T x)	//chen gia tri x vao vi tri bo loc tro toi
		{
			if(n==cap){
				int k=it-buf;
				extend(cap*2+1);
				it=buf+k;
			}
			for(T* p=buf+n; p!=it; p--) 
				*p=*(p-1);
			*it = x;
			n++;
		}
		void erase(iterator it)			//xoa tai vi tri bo loc tro toi
		{
			while(it<buf+n-1) {
				*it=*(it+1); 
				n--;
			}
		}
		T *data() {return buf;}
};
#endif

//int main()
//{
//	int a[7]={3,4,5,6,7};
//	V_rit<int> it(a+2);
//	V_rit<int> z=it++;
//	cout << *z << "\n";
//	cout << *it;
//}
