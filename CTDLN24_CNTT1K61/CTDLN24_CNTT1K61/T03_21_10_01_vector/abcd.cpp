#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
	int n;
	A(){}
	A(const A &x)
	{
		n=x.n;
		cout<<"copy";
	}
	A &operator=(A &y)
	{
		n=y.n;
		return *this; 
		cout<<"assign";
	}
};
int main()
{
	A a; a.n=4;
	//A b=a;
	A c,d;
	c=a;
	cout<<c.n;

}


