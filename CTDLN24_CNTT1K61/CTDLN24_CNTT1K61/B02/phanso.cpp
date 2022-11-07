//tong day dieu hoa
#include<bits/stdc++.h>
using namespace std;

struct ps
{
	long long t,m;
};
ps rutgon(ps p)
{
	int d=__gcd(p.t,p.m);
	p.t/=d;
	p.m/=d;
	return p;  
}
ps operator+(ps p,ps q)
{
	ps r;
	r.t=p.t*q.m+p.m*q.t;
	r.m=p.m*q.m;
	return rutgon(r);
}
ps gan(int a,int b) 
{
	ps p; p.t=a; p.m=b;
	return p;
}
int main()
{
//	ps p=gan(3,4),q=gan(-1,6),z=gan(3,-2);
//	ps r=p+q+z; //cong(p,q);
//	cout<<r.t<<"/"<<r.m;
	int n;
	cin>>n;
	ps p=gan(0,1);
	for(long long i=1;i<=n;i++)
	{
		p=p+gan(1,i);
	}
	cout<<p.t<<"/"<<p.m;
}


