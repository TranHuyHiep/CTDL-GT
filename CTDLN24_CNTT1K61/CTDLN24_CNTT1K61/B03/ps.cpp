//Cau tu va huy tu, ham tao va ham huy
#include<bits/stdc++.h>
using namespace std;

class ps
{
	private:
		int t,m;
		void rutgon() {int d=__gcd(t,m); t/=d;m/=d; if(m<0) {t=-t;m=-m;}}
	public:
		ps(int a=0,int b=1) {t=a;m=b;rutgon();}  //ham tao = cau tu
		friend ostream &operator<<(ostream &os, ps p)
		{
			os<<p.t<<"/"<<p.m;
			return os;
		}
};
int main()
{
	ps p(6,16);
	ps q;
	cout<<"phan so  p = "<<p;
	cout<<"\nphan so  q = "<<q;
	ps r=ps(3,6);
	cout<<"\nphan so  r = "<<r;
	ps *z=new ps(11,-5);
	cout<<"\nphan so  z = "<<*z;
	ps t=6;  //ep kieu t=ps(6)
	cout<<"\nphan so  t = "<<t;
}


