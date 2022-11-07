#include <bits/stdc++.h>

using namespace std;
#ifndef __STACK__CPP__
#define __STACK__CPP__
template <class T>		//stack chua cac phan tu kieu T chua xac dinh
class Stack
{
	private:
		int n,cap;	//so pt n dang dung trong thung co suc chua cap
		T *buff;
	public:
		Stack(){n=0; cap=0; buff=NULL;}
		~Stack(){if(buff) delete[]buff;}
		int size(){return n;}
		bool empty(){return n==0;}
		T &top(){return buff[n-1];}
		void pop() {n--;}
		void push(T x)
		{
			if(n==cap)
			{
				cap=cap*2+1;	//cap = cap?cap*2:1;
				T *temp = new T[cap];
				for(int i=0; i<n; i++) temp[i]=buff[i];
				if(buff) delete[]buff;
				buff=temp;
			}
			buff[n++]=x;
		}
};
#endif

