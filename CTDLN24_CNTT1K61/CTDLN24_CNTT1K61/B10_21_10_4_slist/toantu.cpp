#include<bits/stdc++.h>
using namespace std;

struct A
{
	int elem;
	A(int x=0) {elem=x;}
	A& operator=(A &b)  //toan tu gan
	{	
		this->elem=b.elem;	
		cout<<"gan";
		return *this;
	}
	A(A &b)  //toan tu copy
	{	
		this->elem=b.elem;	
		cout<<"copy";
	}
	
};

void xuat(A x){cout<<"\nGia tri elem cua :"<<x.elem;}

int main()
{
	A a,b(3),c(5);  //a.elem=0, b.elem=3,c.elem=5
	cout<<a.elem<<" "<<b.elem<<" "<<c.elem<<endl;
	a=b=c;
	cout<<a.elem<<" "<<b.elem<<" "<<c.elem<<endl;
	A d=a;
	//cout<<d.elem;
	xuat(d);
}


