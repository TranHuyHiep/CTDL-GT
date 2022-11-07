//sin va cos tuong ho
#include<bits/stdc++.h>
using namespace std;

double Sin(double);
double Cos(double);
double Sin(double x)
{
	if(abs(x)<1e-6) return x;
	return 2*Sin(x/2)*Cos(x/2);	
}
double Cos(double x)
{
	if(abs(x)<1e-6) return 1;
	double u=Cos(x/2),v=Sin(x/2);
	return u*u-v*v;
}
int main()
{
	double x=3;
	cout<<setprecision(20)<<fixed;
	cout<<Sin(x)<<"\t\t"<<Cos(x)<<"\n";
	cout<<sin(x)<<"\t\t"<<cos(x)<<"\n";
}


