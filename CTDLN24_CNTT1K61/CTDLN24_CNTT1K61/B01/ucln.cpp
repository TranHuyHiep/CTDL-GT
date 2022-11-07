//Nhap xuat
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,r;
//	scanf("%d%d",&a,&b);
	cin>>a>>b;	
	while(b)
	{
		r=a%b; a=b;b=r;
	}
	//printf("ucln %d",a);
	cout<<"uoc chung lon nhat "<<a;
}


