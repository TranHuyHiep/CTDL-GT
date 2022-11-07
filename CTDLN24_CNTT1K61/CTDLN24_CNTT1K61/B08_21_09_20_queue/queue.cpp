#ifndef __queue__cpp__
#define __queue__cpp__
template<class T>
class Queue
{
	int n,cap,F,L;
	T *buff;
	public:
		Queue() {n=cap=0;buff=0;F=L=0;}
		~Queue(){if(buff) delete[]buff;}
		int size() {return n;}
		bool empty() {return n==0;}
		void push(T x) 
		{
			if(n==cap)
			{
				cap=cap*2+1;
				T *tem=new T[cap];
				for(int i=F,j=0;i<F+n;i++,j++) tem[j]=buff[i%n];
				if(buff) delete[]buff;
				buff=tem;
				F=0;L=n;
			}
			buff[L]=x;  L=(L+1)%cap;
			n++;
		}
		void pop() {F=(F+1)%cap;n--;}
		T&front(){return buff[F];}
		T&back() {return buff[L?L-1:cap-1];}
};
#endif
