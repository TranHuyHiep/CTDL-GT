#include<bits/stdc++.h>
using namespace std;

void bp(int x,int *y)
{
	*y=x*x;
}
void sqr(int x,int &y)
{
	y=x*x;
}
int main()
{
	int a=7,b=3;
	//bp(a,&b);
	sqr(a,b);
	cout<<"a = "<<a<<"\nb= "<<b;
}


