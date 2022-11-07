// cai dat queue bang danh sach lien ket don
#ifndef __queue__cpp__
#define __queue__cpp__
template<class T>
struct Node
{
	T elem;
	Node *next;
	Node(T x){
		elem=x;
		next=0;
	}
};

template<class T>
class QUEUE
{
	int n;
	Node<T> *F, *L;
	public:
		QUEUE() {n=0; F=L=0;}
		bool isempty() {return n==0;}
		int size() {return n;}
		T &front() {return F->elem;}
		T &back() {return L->elem;}
		void push(T x)
		{
			if(n) L=L->next = new Node<T>(x);				
			else F=L=new Node<T>(x);
			n++;
		}
		void pop()
		{
			n--;
			F=F->next;
		}
};
#endif
