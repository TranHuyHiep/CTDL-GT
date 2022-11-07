#include<bits/stdc++.h>
using namespace std;

class A
{
	public: int x;
	public: void nhap();
};
class B
{
	double y;
	public: void nhap();
};
void A::nhap() {cin>>x;}
void B::nhap() {cin>>y;}
int main()
{
	A a,*p;
	B b;
	p=&a;
	p->nhap();
	cout<<a.x;
}


