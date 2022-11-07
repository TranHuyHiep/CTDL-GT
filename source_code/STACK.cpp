#ifndef __STACK__CPP__
#define __STACK__CPP__
template<class T>		
class STACK
{
	private:
		int n, capacity;		
		T *element;
	public:
		STACK() {
			n = 0;
			capacity = 0;
			element = 0;
		}
		~STACK() {
			if(element != 0) delete []element;
		}
		int size() {
			return n;
		}
		bool empty() {
			return n == 0;
		}
		T &top() {
			return element[n-1];
		}
		void pop(){
			n--;
		}
		void push(T x) 
		{
			if(n == capacity) 	
			{	
				capacity = capacity*2 + 1;	
				T *temporary = new T[capacity];
				for(int i=0; i<n; i++) temporary[i] = element[i];
				if(element != 0) delete []element; 
				element = temporary;
			}
			element[n] = x;
			n++;
		}
};
#endif