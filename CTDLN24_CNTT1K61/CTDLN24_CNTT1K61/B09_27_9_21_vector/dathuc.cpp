#include<bits/stdc++.h>
using namespace std;
class dathuc
{
	vector<double> a;  //cac he so da thuc thong qua 1 vector
	private:
		void rg(){while(a.size()&&a.back()==0) a.pop_back();}
	public:
		friend istream&operator>>(istream &is,dathuc &P)
		{
			int n;	is>>n;
			P.a.resize(n+1);
			for(auto &x:P.a) is>>x;
			return is;
		}
		friend ostream&operator<<(ostream&os,dathuc P)
		{
			if(P.a.size()) {for(double x:P.a) os<<setprecision(2)<<fixed<<x<<" ";} else os<<"0.00";
			return os;
		}
		friend dathuc operator+(dathuc P,dathuc Q)
		{
			dathuc R;
			R.a.resize(max(P.a.size(),Q.a.size()),0);
			for(unsigned i=0;i<P.a.size();i++) R.a[i]+=P.a[i];
			for(unsigned i=0;i<Q.a.size();i++) R.a[i]+=Q.a[i];
			R.rg();
			return R;
		}
};
int main()
{
	dathuc P,Q,R;
	cin>>P>>Q>>R;
	cout<<P+Q+R;
}


