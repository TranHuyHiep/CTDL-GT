//uoc chung lon nhat 2 so nguyen duong
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	B1:	cout<<"Nhap a,b : "; cin>>a>>b;
	B2:	if(a<=0 or b<=0) goto B1;
	B3: if(a!=b)
		{
			a>b?a-=b:b-=a;
			goto B3;
		}
	B4: cout<<"UCLN "<<a;
}


