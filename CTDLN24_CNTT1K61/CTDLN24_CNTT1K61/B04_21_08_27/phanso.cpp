#include<bits/stdc++.h>
using namespace std;

class ps
{
	int t,m;
	public:
		ps(int a=0,int b=1){this->t=a;this->m=b;}
		ps operator+(ps q)  //t/m+q.t/q.m
		{
			return ps(this->t*q.m+this->m*q.t,q.m*m);
		}
		//friend ps operator+(ps p,ps q);
		void xuat() {cout<<t<<"/"<<m;}
};

int main()
{
	ps a(3,4),b(1,2),c=a+b;
	cout<<"Tong a+b : "; c.xuat();
}


