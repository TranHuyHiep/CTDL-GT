#include<bits/stdc++.h>
using namespace std;

typedef pair<double,double> diem;

istream &operator>>(istream &is,diem &P)
{
	is>>P.first>>P.second;
	return is;
}

ostream &operator<<(ostream &os,diem P)
{
	os<<"("<<P.first<<","<<P.second<<")";
	return os;
}

int main()
{
	diem A(0,0),B,C,D;
	B=make_pair(3,4);
	C={5,6};
	cin>>D;
	cout<<A<<B<<C;
}


