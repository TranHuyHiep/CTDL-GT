//Danh gia do phuc tap
#include<bits/stdc++.h>
using namespace std;
//Nhap n in ra cac so nguyen to nho hon hoac bang n
int main()
{
	int n;
	cin>>n;
	bool s[n+1]={};
	for(int i=2;i<=n;i++)
	if(s[i]==0)
	{
		cout<<i<<" ";
		for(int j=i*i;j<=n;j+=i) s[j]=1;	
	}
}
//T(n) = O(n/2+n/3+n/5+n/7+n/11 +  ...)<O(n*sqrt(n))



