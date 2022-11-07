//cai dat stack bang danhsack lien ket
#ifndef __stack__cpp__
#define __stack__cpp__
template <class T>
struct Node
{
	T elem;
	Node *next;
	Node(){}	
	Node(T x,Node *N=0) {elem=x;next=N;}
};
template <class T>
class STACK
{
	int n;  				//so phan tu hien co trong stack
	Node<T> *H;				//con tro quan ly dau danh sach moc noi
	public:
		STACK() {n=0;H=0;}  //tao stack rong
		bool empty(){return n==0;}
		int  size(){return n;}
		void push(T x){H=new Node<T>(x,H); n++;}
		void pop() {H=H->next; n--;}
		T &top() {return H->elem;}
};
#endif
