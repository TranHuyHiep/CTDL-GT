#include<bits/stdc++.h>
using namespace std;

class diem
{
	public:
	int x,y;
	diem(int a=0,int b=0) {x=0,y=0;}
	diem(string t)
	{
		istringstream os(t);
		os>>x>>y;
	}
		
};
int main()
{
	diem A(3,4),B("341245 3426");
	cout<<"Toa do A "<<A.x<<" "<<A.y<<"\n";
	cout<<"Toa do B "<<B.x<<" "<<B.y<<"\n";
}


