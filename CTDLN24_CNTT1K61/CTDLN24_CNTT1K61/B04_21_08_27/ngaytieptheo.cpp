#include<bits/stdc++.h>
using namespace std;
int nhuan(int y) {return y%400==0 or (y%4==0 && y%100!=0);}
class day
{
	int d,m,y;
	friend istream &operator>>(istream &is,day &p)
	{
		char c;
		cin>>p.d>>c>>p.m>>c>>p.y;
	}
	friend ostream &operator<<(ostream &os,day p)
	{
		os<<p.d<<"/"<<p.m<<"/"<<p.y;
		return os;	
	}
	friend day operator++(day &D,int)  //D++
	{
		day D1=D;
		int t[]={0,31,28+nhuan(D.y),31,30,31,30,31,31,30,31,30,31};
		if(D.d==t[D.m]) {D.d=1;D.m++;} else D.d++;
		if(D.m==13) {D.m=1;D.y++;}
		return D1;
	}
	friend day operator++(day &D)  //++D
	{
		int t[]={0,31,28+nhuan(D.y),31,30,31,30,31,31,30,31,30,31};
		if(D.d==t[D.m]) {D.d=1;D.m++;} else D.d++;
		if(D.m==13) {D.m=1;D.y++;}
		return D;
	}
};
int main()
{
	day D; cin>>D; D++; cout<<D;
}


