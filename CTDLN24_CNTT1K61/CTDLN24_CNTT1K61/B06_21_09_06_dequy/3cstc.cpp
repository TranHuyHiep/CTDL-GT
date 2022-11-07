#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL M=1e3;
LL powmod(LL a,LL n)
{
	if(n==0) return 1;
	if(n%2==0) return powmod(a*a%M,n/2)%M;
	return 	a*powmod(a*a%M,n/2)%M;
}
int main()
{
	LL a,n;
	cin>>a>>n; a%=M;
	printf("%.3d",powmod(a,n));
}


