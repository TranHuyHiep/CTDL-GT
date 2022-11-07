//thap hn
#include<bits/stdc++.h>
using namespace std;
int b=1;
void thn(int n,char A,char B,char C) //di chuyen n dia tu A sang B lay C lam trung gian
{
	if(n==1) cout<<"\n"<<b++<<"Chuyen dia "<<n<<" tu "<<A<<" sang "<<B;
	else
	{
		thn(n-1,A,C,B);  //chuyen ngon thap n-1 dia tu A sang C lay B trung gian
		cout<<"\n"<<b++<<"Chuyen dia "<<n<<" tu "<<A<<" sang "<<B;
		thn(n-1,C,B,A);  //chuyen ngon thap n-1 dia tu C sang B lay A trung gian	
	}
}
int main()
{
	thn(4,'A','B','C');
}


