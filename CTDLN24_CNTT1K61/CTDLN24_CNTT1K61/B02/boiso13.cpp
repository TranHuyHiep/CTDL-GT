//boi so 13
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL csc(LL x,LL y,LL k=1)
{
	if(x%k) x=x-x%k+k;
	y=y-y%k;
	return (x+y)*((y-x)/k+1)/2;
}
int main()
{
	LL x,y;
	cin>>x>>y;
	if(x>y) swap(x,y);
	cout<<csc(x,y)-csc(x,y,13);
}


