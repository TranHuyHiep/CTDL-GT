#include <bits/stdc++.h>
//#ifndef __stack__cpp__
//#define __stack__cpp__
using namespace std;

template <class T>

struct Node
{
	T element;
	Node *next;
	Node(T x, Node *N=0)
	{
		element = x;
		next = N;
	}
};
template <class T>
class Stack
{
	int n;		//so phan tu hien co trong danh sach
	Node<T> *H;		//con tro quan ly dau danh sach moc noi
	public:
		Stack()
		{
			n=0;
			H=NULL;	// tao danh sach rong
		}
		bool empty(){return n==0;}
		int size(){return n;}
		void push(T x)
		{
			H = new Node<T>(x,H);
			n++;
		}
		void pop()
		{
			H=H->next;
			n--;
		}
		T &top()
		{
			return H->element;
		}
};

