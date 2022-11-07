#include"bits/stdc++.h"
using namespace std;
 
class dt
{
    int n;
    double a[10005]={};
    public:
	//void nhap();
	friend istream &operator>>(istream &is,dt &p);
	void xuat();
	friend dt operator+(dt p,dt q)
	{
	    dt r;
    	r.n=max(p.n,q.n);
    	for (int i=0;i<=r.n;i++)r.a[i]+=p.a[i];
    	for (int i=0;i<=r.n;i++)r.a[i]+=q.a[i];
    	while(r.n && r.a[r.n]==0) r.n--; //ha bac
    	return r;
	}
};
istream &operator>>(istream &is,dt &p)
{
    is>>p.n;
    for (int i=0;i<=p.n;i++)is>>p.a[i];
    return is;
}
void dt::xuat()
{
	for(int i=0;i<=n;i++) cout<<setprecision(2)<<fixed<<a[i]<<" ";
}
int main()
{
	dt p,q,r,z;
	//p.nhap();q.nhap();r.nhap();
	cin>>p>>q>>r;
	z=p+q+r;
	z.xuat();
}
