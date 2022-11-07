#include<bits/stdc++.h>
using namespace std;

class A{
	public: int a;
	A(int aa){a=aa;}
};
class B:virtual public A
{
	public: int b;
	B(int bb,int aa):A(aa){b=bb;}
};
class C:virtual public A{
	public:int c;
	C(int cc,int aa):A(aa){c=cc;}
};
class D: public B,public C{
	public: int d;
	D(int dd,int cc, int bb, int aa):A(aa):B(bb):C(cc)){d=dd;}
};
// liet cac cac thanh phan cua lop D
int main()
{
	D x;
	x.a=1;
	x.b=1;
	x.c=1;
	x.d=1;
}

